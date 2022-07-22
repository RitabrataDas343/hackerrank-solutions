#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string S, E;
    vector<string> mp;
    for (int i = 0; i < n; i++){
        cin >> S >> E;
        int pos = E.find("@");
        string sub = E.substr(pos + 1);
        if (sub == "gmail.com"){
            mp.push_back(S);
        }
    }
    sort(mp.begin(), mp.end());
    for (int i = 0; i < mp.size(); i++){
        cout << mp[i] << endl;
    }
    return 0;
} 
