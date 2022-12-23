#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
    int count = 0, diff = 0;
    if(n < 6){
        diff = 6 - n;
    }
    bool l = false, u = false, spec = false, num = false;
    for(char m : password){
        if (m >= 65 && m <= 90){
            u = true;
        }
        if (m >= 97 && m <= 122){
            l = true;
        }
        if (m >= 48 && m <= 57){
            num = true;
        }
        if (m >= 33 && m <= 45){
            spec = true;
        }
        if (m == 64){
            spec = true;
        }
    }
    if(!l){
        count++;
    }
    if(!num){
        count++;
    }
    if(!spec){
        count++;
    }
    if(!u){
        count++;
    }
    return (count > diff) ? count : diff;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
