#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int divisor = 0;
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                divisor = 1;
                break;    
            }
        }
        if (divisor == 0 && n!=1){
            cout << "Prime" << endl;
        } else {
            cout << "Not prime" << endl;
        }
    }   
    return 0;
}
