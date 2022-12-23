#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

void timeConversion(string s) {
    if (s[8] == 'P'){
        string hour = s.substr(0,2);
        stringstream converter(hour);
        int x = 0;
        converter >> x;
        if (x == 12){
          cout << "12" << s.substr(2,6) << endl;  
        } else {
          cout << x + 12 << s.substr(2,6) << endl;
        }
    }
    if (s[8] == 'A'){
        string hour = s.substr(0,2);
        stringstream converter(hour);
        int x = 0;
        converter >> x;
        if (x == 12){
          cout << "00" << s.substr(2,6) << endl;  
        } else {
          cout << s.substr(0, 8) << endl;
        }
    }
}

int main()
{
    string s;
    getline(cin, s);
    timeConversion(s);
    return 0;
}
