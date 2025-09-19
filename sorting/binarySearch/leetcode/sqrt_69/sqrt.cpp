#include<iostream>
using namespace std;
int main(){
     int x=22;
  
 
    int low=0,high=36;
  
    while(low<=high){
      int m=low+(high-low)/2;
      if(m*m == x){
        cout<<m;
        return 0;
      }
      else if(m*m < x) low=m+1;
      else {
        high=m-1;
      }
    }
    cout<<high;
}
