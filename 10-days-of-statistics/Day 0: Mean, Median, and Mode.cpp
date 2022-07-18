#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int n;
    cin >> n;
    long long int a[n], sum = 0;
    map<long long int, long long int> mp; 
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        mp[a[i]]++;
    }
    double mean = (double)sum / n, median;
    cout << fixed << setprecision(1) << mean << endl;
    sort(a, a + n);
    if(n % 2){
        median = a[n/2];
    } else {
        median = double(a[n/2] + a[n/2 - 1]) / 2;
    }
    cout << fixed << setprecision(1) << median << endl;
    long long int freq = INT_MIN, mode;
    for(auto i : mp){
        if(i.second > freq){
            freq = i.second;
            mode = i.first;
        } else if(i.second == freq){
            mode = min(mode, i.first);
        }
    }
    cout << mode << endl;
    return 0;
}
