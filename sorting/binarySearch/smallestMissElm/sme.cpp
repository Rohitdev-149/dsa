#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
 
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high){
      int m=low+(high-low)/2;
      if(arr[m]==m) low=m+1;
      else {
        ans=m;
        high=m-1;
      }
     
  

    }
    cout<<ans;
}
