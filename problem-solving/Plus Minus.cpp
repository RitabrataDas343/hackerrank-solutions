#include <bits/stdc++.h>
using namespace std;

int main(){
    float n, arr[100], pos=0, neg=0, zero=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] < 0){
            neg++;
        } else if (arr[i] > 0){
            pos++;
        } else {
            zero++;
        }
    }
    float a = pos / n;
    float b = neg / n;
    float c = zero / n;
    cout << fixed << setprecision(6) << a << endl << b << endl << c;
}
