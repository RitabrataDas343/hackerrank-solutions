#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int arr[n], i, j, maxand = 0, maxxor = 0, maxor = 0;
    int x , a , r;
    for (i = 0; i < n; i++){
        arr[i] = i + 1;
    }
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            x = arr[i]^arr[j];
            a = arr[i]&arr[j];
            r = arr[i]|arr[j];
            if (x > maxxor && x < k){
                maxxor = x;
            }
            if (a > maxand && a < k){
                maxand = a;
            }
            if (r > maxor && r < k){
                maxor = r;
            }
        }
    }
    printf("%d\n%d\n%d", maxand, maxor, maxxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}