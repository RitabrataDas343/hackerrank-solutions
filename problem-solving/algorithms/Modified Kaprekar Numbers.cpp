#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

bool recCall(int x){
    if(x == 1) return true;
    if(x == 2 or x == 3) return false;
    string ans = to_string(long(pow(x, 2))), l, r;
    r = ans.substr(ans.length()/2);
    l = ans.substr(0, ans.length()/2);
    if(stol(l) + stol(r) == (long)x){
        return true;
    }
    return false;
}


void kaprekarNumbers(int p, int q) {
    bool flag = true;
    for(int i = p; i <= q; i++){
        if(recCall(i)){
            cout << i << " ";
            flag = false;
        }
    }
    if(flag){
        cout << "INVALID RANGE" << endl;
    }
}

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

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
