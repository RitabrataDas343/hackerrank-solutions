#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    cin >> S;
    try{
        int m = stoi(S);
        cout << m;
    }
    catch(exception a){
        cout << "Bad String" << endl;
    }
    return 0;
}
