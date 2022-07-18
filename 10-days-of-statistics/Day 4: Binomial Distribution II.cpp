#include <bits/stdc++.h>
using namespace std;

int factorial (int n){
    if(n <= 1) return 1;
    return n * factorial(n-1);
}

double combinatorics(int n, int x){
    double exp = double(factorial(n)) / (factorial(n-x) * factorial(x));
    return exp;
}

double binomial_distributio(int n, int x, double p, double q){
    return combinatorics(n, x) * pow(p, x) * pow(q, n - x);
}


int main() {
    int a, n;
    cin >> a >> n;
    double p = double(a) / 100;
    double q = 1 - p;
    double ans = binomial_distributio(n, 0, p, q) + binomial_distributio(n, 1, p, q) + binomial_distributio(n, 2, p, q);
    cout << fixed << setprecision(3) << ans << endl;
    cout << fixed << setprecision(3) << 1 - ans + + binomial_distributio(n, 2, p, q)<< endl;
    return 0;
}
