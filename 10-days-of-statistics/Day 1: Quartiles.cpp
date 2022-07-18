#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int findOddMedian(vector<int> arr, int l, int r){
    return (arr[(l+r) / 2]);
}

int findEvenMedian(vector<int> arr, int l, int r){
    return ((arr[(l+r) / 2] + arr[((l+r) / 2) + 1]) / 2);
}

vector<int> quartiles(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    vector<int> v;
    if(n % 2){
        v.push_back(findEvenMedian(arr, 0, n/2-1));
        v.push_back(findOddMedian(arr, 0, n-1));
        v.push_back(findEvenMedian(arr, n/2+1, n-1));
    } else if (n/2 % 2){
        v.push_back(findOddMedian(arr, 0, n/2-1));
        v.push_back(findEvenMedian(arr, 0, n-1));
        v.push_back(findOddMedian(arr, n/2, n-1));
    } else {
        v.push_back(findEvenMedian(arr, 0, n/2-1));
        v.push_back(findEvenMedian(arr, 0, n-1));
        v.push_back(findEvenMedian(arr, n/2, n-1));
    }
    return v;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string data_temp_temp;
    getline(cin, data_temp_temp);

    vector<string> data_temp = split(rtrim(data_temp_temp));

    vector<int> data(n);

    for (int i = 0; i < n; i++) {
        int data_item = stoi(data_temp[i]);

        data[i] = data_item;
    }

    vector<int> res = quartiles(data);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
