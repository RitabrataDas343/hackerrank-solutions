#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'appendAndDelete' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 *  3. INTEGER k
 */

string appendAndDelete(string s, string t, int k) {
    if(s.length() + t.length() <= k){
        return "Yes";
    }
    int minlength, diff;
    if (s.length() < t.length()){
        minlength = s.length();
        diff = t.length() - s.length();
    } else {
        minlength = t.length();
        diff = s.length() - t.length();
    }
    int rems = 0, remt = 0;
    for(int i = 0; i < minlength; i++){
        if(s[i] != t[i]){
            rems = s.length() - i;
            remt = t.length() - i;
            break;
        }
    }
    cout << rems << remt << endl;
    if(rems == 0 || remt == 0){
       if(diff == k){
           return "Yes";
       } else if(diff < k){
           diff = k - diff;
           if(diff % 2 == 0){
                return "Yes";
            }
       }
    } else {
        if (rems + remt == k){
            return "Yes";
        } else if (rems + remt < k){
            diff = k - (rems + remt);
            if(diff % 2 == 0){
                return "Yes";
            }
        } 
    }
    return "No";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

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
