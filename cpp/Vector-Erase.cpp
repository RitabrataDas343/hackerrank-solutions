#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<int> v;
    int n, a, b; 
    cin >> n;
    while(n--){
        cin >> a;
        v.push_back(a);
    }
    cin >> n >> a >> b;
    v.erase(v.begin()+n-1);
    v.erase(v.begin()+a-1, v.begin()+b-1);
    cout << v.size() << endl;
    for(int i : v){
        cout << i << " ";
    }
    return 0;
}
