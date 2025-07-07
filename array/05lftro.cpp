#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int t = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
        cout<<arr[i]<<" ";
    }
    arr[n-1] = t;
    cout<<arr[n-1];
    // cout<<"After rotation: "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;
}