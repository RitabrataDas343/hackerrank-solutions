#include <stdio.h>
#include <stdlib.h>

int main (){
    int t;
    char num[10][15] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d", &t);
    if (t>=1 && t<=9){
        printf("%s", num[t]);
    } else {
        printf("%s", num[0]);
    }
}
