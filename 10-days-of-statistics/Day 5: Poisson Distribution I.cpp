#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n <= 1) return 1;
    return n * factorial(n-1);
}

double poisson_dis(double l, int n){
    double expression = (exp(-l) * pow(l, n)) / factorial(n);
    return expression;
}

int main() {
    double lambda;
    int var;
    cin >> lambda >> var;
    cout << fixed << setprecision(3) << poisson_dis(lambda, var) << endl;
    return 0;
}
