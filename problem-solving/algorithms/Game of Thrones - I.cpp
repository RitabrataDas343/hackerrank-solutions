#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameOfThrones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string gameOfThrones(string s) {
    map<char, int> mp;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    int counter = 0, flag = 1;
    for(auto i : mp){
        if(i.second % 2){
            counter++;
        }
        if(counter > 2){
            flag = 0;
            break;
        }
    }
    if(flag){
        return "YES";
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
