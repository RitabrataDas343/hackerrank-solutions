#include <bits/stdc++.h>
using namespace std;

int main() { 
    int n, a, b;
    cin >> n;
    set<int> s;
    while(n--){
        cin >> a >> b;
        switch(a){
            case 1:
                s.insert(b);
                break;
            case 2:
                s.erase(b);
                break;
            case 3:
                if(s.find(b) != s.end()){
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
                break;
        }
    }
    return 0;
}
