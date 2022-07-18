#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double Normal_Distribution(double mean, double sd, double x){
    return (0.5 + 0.5 * erf((x-mean)/(sd*sqrt(2))));
}

int main() {
    double mean, sd, c, d;
    cin >> mean >> sd >> c >> d;
    cout << fixed << setprecision(2) << (1 - Normal_Distribution(mean, sd, c))*100 << endl << (1 - Normal_Distribution(mean, sd, d))*100 << endl << (Normal_Distribution(mean, sd, d)) * 100<< endl;
    return 0;
}
