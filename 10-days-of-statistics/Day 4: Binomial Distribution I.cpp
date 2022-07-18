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
    double a, b;
    cin >> a >> b;
    double p = a / (a + b);
    double q = b / (a + b);
    cout << fixed << setprecision(3) << binomial_distributio(6, 3, p, q) + binomial_distributio(6, 4, p, q) + binomial_distributio(6, 5, p, q) + binomial_distributio(6, 6, p, q) << endl;
    return 0;
}
