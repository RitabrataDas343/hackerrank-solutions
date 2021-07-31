#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    char num[10][15] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
  	for (int i = a; i <= b; i++){
        if (i < 10){
            printf("%s\n", num[i]);
        } else {
            if (i % 2 == 0){
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }    
    }
    return 0;
}

