#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, con1, con2;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n >= 38 && n <= 100){
            con1 = n / 5;
            con2 = (con1+1) * 5;
            if (con2 - n < 3){
                n = con2;
                cout << n << endl;
            } else {
                cout << n << endl;
            }
        } else {
            cout << n << endl;
        }
    }
}
