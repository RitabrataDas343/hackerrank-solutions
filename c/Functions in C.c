#include <stdio.h>

int max_of_four (int a, int b, int c, int d){
    int m1 = a > b ? a : b;
    int m2 = c > m1 ? c : m1;
    int m3 = d > m2 ? d : m2;
    return m3;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
