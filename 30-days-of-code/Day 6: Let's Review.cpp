#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    string s, m, n;
    while(t--){
        m = "", n = "";
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            if(i % 2){
                m += s[i];
            } else {
                n += s[i];
            }
        } 
        cout << n << " " << m << endl;
    }  
    return 0;
}
