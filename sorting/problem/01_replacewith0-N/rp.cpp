#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[]={19,12,23,8,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // vector<int> v(n,0);
    int x=0;
    // for(int i=0;i<n;i++){
    //     int mn=INT_MAX;
    //     int minIndex=-1;
    //   for(int j=0;j<n;j++){
    //     if(v[j]==1) continue; // already visited
    //     if(arr[j]<mn){
    //         mn=arr[j];
    //         minIndex=j;
    //     }
    //   }
    //     v[minIndex]=1; // mark visited
    //     arr[minIndex]=x;
    //     x++;
    // }

    // if number are positive we use negative marking to reduce space complexity sc->O(1)
    for(int i=0;i<n;i++){
        int mn=INT_MAX;
        int minIndex=-1;
      for(int j=0;j<n;j++){
        if(arr[j]<=0) continue; // already visited
        if(arr[j]<mn){
            mn=arr[j];
            minIndex=j;
        }
      }
        

         arr[minIndex]=-x;
         x++;
    }
    cout<<endl;
 

    for(int i=0;i<n;i++){
        arr[i]= -1*arr[i]; // revert back to positive
        cout<<arr[i]<<" ";
    }
 }
/*
tc-> O(n^2) sc->O(n)
Output:
[19 12 23 8 16]  
[3  1  4  0  2] ->index of sorted array
*/