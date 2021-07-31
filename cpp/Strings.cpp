#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int alen = a.size();
    int blen = b.size();
    cout << alen << " " << blen << endl;;
    string c = a + b;
    cout << c << endl;
    char aa = a[0];
    char bb = b[0];
    a[0] = bb;
    b[0] = aa;
    cout << a << " " << b << endl;
    return 0;
}