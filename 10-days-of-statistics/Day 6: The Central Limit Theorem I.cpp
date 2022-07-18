#include <bits/stdc++.h>
using namespace std;

double Normal_Distribution(double mean, double sd, double x){
    return (0.5 + 0.5 * erf((x-mean)/(sd*sqrt(2))));
}

int main() {
    double mean, limit, n, sd;
    cin >> limit >> n >> mean >> sd;
    mean = n * mean;
    sd = sqrt(n) * sd;
    double ans = Normal_Distribution(mean, sd, limit);
    cout << fixed << setprecision(4) << ans <<endl;  
    return 0;
}
