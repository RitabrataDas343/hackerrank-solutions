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
    cout << fixed << setprecision(3) << geo_dis(q, p, c) << endl;  
    return 0;
}
