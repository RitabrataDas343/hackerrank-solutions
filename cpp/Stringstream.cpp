#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> v;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ','){
            str[i] = ' ';
        } 
    }
    
    stringstream ss(str);
    string token;
    while(ss >> token){
        v.push_back(stoi(token));
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
