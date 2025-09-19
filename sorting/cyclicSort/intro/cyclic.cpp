#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,4,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=1;
    while(i<n){
        int correctIndex=arr[i]-1;
        if(i==correctIndex){
            i++;
        }
        else{
            swap(arr[i],arr[correctIndex]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}