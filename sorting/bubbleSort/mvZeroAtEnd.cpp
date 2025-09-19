#include<iostream>
using namespace std;
int main(){
    int arr[]={5,0,1,2,0,4,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //bubble sort -> better than two pointer approach bcoz it maintains the order of non-zero elements
        for(int i=0;i<n-1;i++){
            bool swapped=true;
            for(int j=0;j<n-1;j++){
                if(arr[j]==0){
                
                    swap(arr[j],arr[j+1]);
                    swapped=false;
                }
            }
            if(swapped){ 
                break;
            }
        }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
/*
5 0 1 2 0 4 0 
5 1 2 4 0 0 0
*/