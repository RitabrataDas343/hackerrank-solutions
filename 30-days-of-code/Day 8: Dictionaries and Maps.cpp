#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<string, long long int> mp;
    string s;
    int n;
    long long int m;  
    cin >> n;
    while(n--){
        cin >> s;
        cin >> m;
        mp[s] = m;
    }
    while(cin >> s){
        if(mp[s]){
            cout << s << "=" << mp[s] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}