#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class Calculator{
    int n, p;
    
    public:
    int power(int m, int a){
            int ans;
            if (m < 0 || a < 0){
                throw runtime_error ("n and p should be non-negative");
            }
            ans = pow(m,a);
            return ans; 
    }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}