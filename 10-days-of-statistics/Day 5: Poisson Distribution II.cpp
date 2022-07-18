#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(3) << 160 + 40*(a + a*a) << endl << 128 + 40*(b+ b*b) << endl;
    return 0;
}
