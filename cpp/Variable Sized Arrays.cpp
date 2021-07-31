#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(void) {
    int n, q, k, qi, qj;
    cin >> n >> q;
    int **array = new int*[n];
    for (int c = 0; c < n; c++) {
        cin >> k;
        array[c] = new int[k];
        for (int d = 0; d < k; d++) {
            cin >> array[c][d];
        }
    }
    for (int c = 0; c < q; c++) {
        cin >> qi >> qj;
        cout << array[qi][qj] << endl;
    }
    return 0;
}

