#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,5,7,6,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                swap(arr[j],arr[j+1]);//inbuilt function to swap two numbers
            }
        }
    }
    // bubble sort optimized
    
        for(int i=0;i<n-1;i++){
            bool swapped=true;
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                
                    swap(arr[j],arr[j+1]);//inbuilt function to swap two numbers
                    swapped=false;
                }
            }
            if(swapped){ // if no two elements were swapped by inner loop, then break means array is sorted
                break;
            }
        }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}