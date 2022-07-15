#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n, a, b;
    string s;
    cin >> n;
    map<string, int> mp;
    while(n--){
        cin >> a;
        switch(a){
            case 1:
                cin >> s;
                cin.ignore(1, '\n');
                cin >> b;
                mp[s] += b;
                break;
            case 2:
                cin >> s;
                mp.erase(s);
                break;
            case 3:
                cin >> s;
                cout << mp[s] << endl;
                break;
        }
    }
    return 0;
}