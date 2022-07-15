#include<bits/stdc++.h>

using namespace std;
class Box{
  public:
  int l, b, h;
  
  Box(){
      l = 0;
      b = 0;
      h = 0;
  }  
  
  Box(int a, int w, int c){
      l = a;
      b = w;
      h = c;
  };
  
  Box(Box &A){
      l = A.l;
      b = A.b;
      h = A.h;
  }
  
  int getLength(){
      return l;
  }
  
  int getBreadth(){
      return b;
  }
  
  int getHeight(){
      return h;
  }
  
  long long int CalculateVolume(){
      return (long long)l*b*h;
  }
  
  bool operator < (Box &B){
    if(l < B.l){
        return true;
    } else if(l == B.l){
        if(b < B.b){
            return true;
        } else if(b == B.b){
            if (h < B.h){
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    } else {
        return false;
    }
  }
  
};

ostream& operator<<(ostream &out, Box &B){
    out << B.l << " " << B.b << " " << B.h;
    return out;
}
