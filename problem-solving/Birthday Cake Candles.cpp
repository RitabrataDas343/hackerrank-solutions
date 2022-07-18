#include <bits/stdc++.h>
using namespace std;

int main(){
    typedef long long ll;
    ll n, count = 1;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(ll i = n-1; i >= 0; i--){
        if (arr[i] == arr[i-1]){
            count++;
        } else {
            break;
        }
    }
    cout << count << endl;
}
