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
    double mean, sd, c, d, e;
    cin >> mean >> sd >> c >> d >> e;
    cout << fixed << setprecision(3) << Normal_Distribution(mean, sd, c) << endl << Normal_Distribution(mean, sd, e) - Normal_Distribution(mean, sd, d)<< endl;
    return 0;
}
