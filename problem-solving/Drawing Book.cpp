#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p) {
    int diffx = p, diffy = n - p;
    if (n%2==0){
        if (diffx <= diffy){
            return diffx / 2;
        }else{
            if (diffy % 2 == 0){
                return diffy / 2;
            } else {
                return (diffy+1)/2;
            }
        }
    }else{
        if(diffx < diffy){
            if (p % 2 == 0){
                return p / 2; 
            } else{
                return (p-1)/2;
            }
        } else {
            if (p % 2 == 0){
                return (diffy-1) / 2; 
            } else{
                return diffy/2;
            }
        }
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    int result = pageCount(n, p);

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
