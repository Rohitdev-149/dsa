#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,2,3,3,3,3,4,5,9,15,18,21,24};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=15;
    int low=0,high=n-1;
   bool flag=false;
    while(low<=high){
      int m=low+(high-low)/2;
      if(arr[m]==x){
       if(arr[m-1]!=x){
        flag=true;
        cout<<m;//firstOccurnc
        break;
       }
       else high=m-1;
      }
      else if(arr[m]<x)  low=m+1;
      else  high=m-1;       
    }
    if(!flag) cout<<-1;


    

}