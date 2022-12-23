#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, arr[100][100], sumd1=0, sumd2=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            if (i == j){
                sumd1 += arr[i][j];
            }
            if (i + j == n - 1){
                sumd2 += arr[i][j];
            }
        }
    }
    int diff = sumd1 >= sumd2 ? sumd1-sumd2 : sumd2-sumd1;
    cout << diff << endl;
    
}
