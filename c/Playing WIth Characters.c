#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c;
    char string[100];
    char str[100];
    scanf("%c", &c);
    scanf("%s", string);
    scanf(" %[^\n]%*c", str);
    printf("%c\n", c);
    printf("%s\n", string);
    printf("%s", str);
    return 0;
}
