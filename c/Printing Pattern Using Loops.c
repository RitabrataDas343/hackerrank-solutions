#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <limits.h>

int main(){
    int n, i, j, counter = 0, nums;
    scanf("%d", &n);
    nums = n;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n; j++){
            printf("%d ", nums);
            if(j < counter){
                nums--;
            }
        }
        for(j = 0; j < n-1; j++){
            printf("%d ", nums);
            if(j >= n - 2 - counter){
                nums++;
            }
        }
        printf("\n");
        counter++;
        nums = n;
    }
    for(j = n; j >= 1; j--){
        printf("%d ", j);
    }
    for(j = 2; j <= n; j++){
        printf("%d ", j);
    }
    printf("\n");
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n; j++){
            printf("%d ", nums);
            if(j + 1 < counter){
                nums--;
            }
        }
        for(j = 0; j < n-1; j++){
            printf("%d ", nums);
            if(j >= n - 1 - counter){
                nums++;
            }
        }
        printf("\n");
        counter--;
        nums = n;
    }
}

