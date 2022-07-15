#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char s[1000];
    scanf("%s", s);
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= 48 && s[i] <= 57){
            arr[s[i] - '0']++;
        }
    }
    
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
