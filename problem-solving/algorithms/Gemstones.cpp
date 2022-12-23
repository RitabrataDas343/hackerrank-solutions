#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gemstones' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING_ARRAY arr as parameter.
 */
 
string compare(string s1, string s2){
    map<char, int> mp;
    string m = "";
    for(char i : s1){
        if(mp[i] == 0){
            mp[i] = 1;
        }
    }
    for(char i : s2){
        if(mp[i] == 1){
            mp[i] = 2;
        }
    }
    for(auto i : mp){
        if(i.second == 2){
           m += i.first; 
        }
    }
    return m;
}

int gemstones(vector<string> arr) {
    string m = arr[0];
    for(int i = 1; i < arr.size(); i++){
        m = compare(m, arr[i]);
    }
    return m.length();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

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
