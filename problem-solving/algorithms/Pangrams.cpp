#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    vector<char>v(26, 0);
    for(char m : s){
        if (m >= 65 && m <= 90){
            v[m - 'A']++;
        }
        if (m >= 97 && m <= 122){
            v[m - 'a']++;
        }
    }
    for (auto i : v){
        if (i == 0){
            return "not pangram";
        }
    }
    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
