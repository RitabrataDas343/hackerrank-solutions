#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, g, i;
    cin >> n;
    vector<int> hi;
    for(i = 0; i < n; i++){
        cin >> g;
        hi.push_back(g);
    }
    sort(hi.begin(),hi.end());
    for(i = 0; i < n; i++){
        cout << hi[i] << " ";
    }
    return 0;
}