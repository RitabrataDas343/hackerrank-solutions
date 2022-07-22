#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int getBit(int pos, int n){
    if ((n & (1 << pos)) != 0){
        return 1;
    }
    return 0;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    int bit, pos = 0, count = 0, maxcount = INT_MIN;
    int count_one = __builtin_popcount(n);
    while(count_one){
        bit = getBit(pos, n);
        if(bit){
            count++;
            count_one--;
        } else {
            maxcount = max(count, maxcount);
            count = 0;
        }
        pos++;
    }
    maxcount = max(count, maxcount);
    cout << maxcount << endl;
    
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
