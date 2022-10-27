#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
    if(strcmp(a, b) > 0){
        return 1;
    }
    return 0;
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    if(strcmp(a, b) < 0){
        return 1;
    }
    return 0;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int arr_a[26] = {0}, arr_b[26] = {0}, count_a = 0, count_b = 0;
    for(int i = 0; i < strlen(a); i++){
        arr_a[a[i] - 'a'] = 1;
    }
    for(int i = 0; i < strlen(b); i++){
        arr_b[b[i] - 'a'] = 1;
    }
    for(int i = 0; i < 26; i++){
        if(arr_a[i]) count_a++;
        if(arr_b[i]) count_b++;
    }
    if (count_a > count_b){
        return 1;
    } else if (count_a < count_b){
        return 0;
    } else {
        return lexicographic_sort(a, b);
    }
}

int sort_by_length(const char* a, const char* b) {
    if (strlen(a) > strlen(b)){
        return 1;
    } else if (strlen(a) < strlen(b)){
        return 0;
    } else {
        return lexicographic_sort(a, b);
    }
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int i, j;
    char* temp;
    for (i = 0; i < len - 1; i++){
        for (j = 0; j < len - i - 1; j++){
            if(cmp_func(arr[j], arr[j+1])){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}