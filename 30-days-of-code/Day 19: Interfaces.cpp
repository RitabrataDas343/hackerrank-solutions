#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        if(n==1){
            return 1;
        }
        int sum = 1 + n;
        for(int i = 2; i <= n/2; i++){
            if(!(n % i)){
                sum += i;
            }
        }
        return sum;
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}