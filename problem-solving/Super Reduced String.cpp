#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {
    vector<char> v;
    v.push_back(s[0]);
    for(int i = 1; i < s.length(); i++){
        if(s[i] == v[v.size()-1]){
            v.pop_back();
        } else {
            v.push_back(s[i]);
        }
    }
    string m = "";
    for(auto i : v){
        m += i;
    }
    if(m == ""){
        return "Empty String";
    }
    return m;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
