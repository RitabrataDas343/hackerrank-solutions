#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, a;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    } 
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(binary_search(v.begin(), v.end(), a)){
            cout << "Yes " << lower_bound(v.begin(),v.end(), a) - v.begin() + 1 << endl;
        } else {
            cout << "No " << lower_bound(v.begin(),v.end(), a) - v.begin() + 1 << endl;         
        }
    }
    return 0;
}
