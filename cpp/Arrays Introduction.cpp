#include <bits/stdc++.h>
using namespace std;


int main() {
    int a, array[1000];
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> array[i];
    } 
    for (int j = a-1; j >=0 ; j--){
        cout << array[j] << " "; 
    }  
    return 0;
}
