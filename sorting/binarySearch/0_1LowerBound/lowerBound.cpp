#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=20;
    int low=0,high=n-1;
   bool flag=false;
    while(low<=high){
      int m=low+(high-low)/2;
      if(arr[m]==x){
        flag=true;
        cout<<arr[m-1];//lowerBound
       // cout<<arr[m+1]; //upperBound
        break;
      }
      else if(arr[m]<x)  low=m+1;
      else  high=m-1;       
    }
    if(!flag) cout<<arr[high];//lowerBound
   // if(!flag) cout<<arr[low];//upperBound
    

}