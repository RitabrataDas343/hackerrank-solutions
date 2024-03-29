#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'happyLadybugs' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING b as parameter.
 */

string happyLadybugs(string b) {
    map<char, int> mp;
    for(int i = 0; i < b.length(); i++){
        mp[b[i]]++;
    }
    if(mp['_'] == 0){
        bool flag = true;
        if(b[0] != b[1] or b[b.length()-2] != b[b.length()-1]){
            return "NO";
        }
        for(int i = 1; i < b.length() - 1; i++){
            if(b[i-1] != b[i] and b[i] != b[i+1]){
                flag = false;
                break;
            }
        }
        if(flag){
            return "YES";
        }
    } else {
        for(auto i: mp){
            if(i.second == 1 and i.first != '_'){
                return "NO";
            }
        }
        return "YES";
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string g_temp;
    getline(cin, g_temp);

    int g = stoi(ltrim(rtrim(g_temp)));

    for (int g_itr = 0; g_itr < g; g_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

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
