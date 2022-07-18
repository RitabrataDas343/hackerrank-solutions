#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

string dayOfProgrammer(int year) {
    int flag = 0;
    if(year >= 1700 && year <= 1917){
        if (year % 4 == 0){
            flag = 1;
        }
    } else{
        if (year % 100 == 0){
           if(year % 400 == 0){
               flag = 1;
           }
        } else{
            if(year % 4 == 0){
                flag =1;
            }
        }
    }
    string ju = to_string(year);
    if (flag == 1){    
        return "12.09." + ju;
    } else if (flag ==0 && year != 1918) {
        return "13.09." + ju;
    }else{
        return "26.09." + ju;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

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
