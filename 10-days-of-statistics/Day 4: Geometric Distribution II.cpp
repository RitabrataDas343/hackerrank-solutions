#include <bits/stdc++.h>
using namespace std;

double geo_dis(double q, double p, int c){
    double exp = pow(q, c-1) * p;
    return exp;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    double p = double(a) / b;
    double q = 1 - p;
    double ans = 0;
    for(int i = 1; i <= c; i++){
        ans += geo_dis(q, p, i);
    }
    cout << fixed << setprecision(3) << ans << endl;  
    return 0;
}
