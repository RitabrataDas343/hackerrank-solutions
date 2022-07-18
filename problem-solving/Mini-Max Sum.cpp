#include <bits/stdc++.h>
using namespace std;

int main(){
    typedef long long ll;
    ll arr[5], maxsum= 0, minsum =0;
    for (ll i = 0; i< 5; i++){
        cin >> arr[i];
    }
    sort(arr, arr+5);
    for (ll i = 1; i< 5; i++){
        maxsum += arr[i];
    }
    for (ll i = 0; i< 4; i++){
        minsum += arr[i];
    }
    cout << minsum << " " << maxsum << endl;
}
