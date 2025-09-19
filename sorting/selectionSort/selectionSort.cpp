#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,8,1,2,3,4,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //selection sort
    for(int i=0;i<n-1;i++){
        int mn=INT_MAX;
        int minIndex=-1;
        for(int j=i;j<n;j++){
          if(arr[j]<mn){
            mn=arr[j];
            minIndex=j;
          }
        }
        swap(arr[i],arr[minIndex]);
    }



    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }
