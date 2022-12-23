#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3], brr[3], alice=0, bob=0;
    cin >> arr[0] >> arr[1] >> arr[2];
    cin >> brr[0] >> brr[1] >> brr[2];
    for (int i = 0; i <= 2; i++){
        if (arr[i] > brr[i]){
            alice++;
        } else if (brr[i] > arr[i]){
            bob++;
        } 
    }
    cout << alice << " " << bob << endl;
}
