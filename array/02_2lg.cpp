#include <iostream>
using namespace std;
int main(){
    
    int arr[5] = {5,4,7,9,3};
    int n = sizeof(arr)/sizeof(arr[0]);
     int max1, max2;
  if(arr[0]>arr[1]){
     max1 = arr[0];
     max2 = arr[1];
  }else{
     max1 = arr[1];
     max2 = arr[0];
  }
    for(int i = 2; i<n; i++)
{
        if(arr[i]>max1){
           max2 = max1;
           max1 = arr[i];
        }else if(arr[i]>max2){
            max2 = arr[i];
        }
        
    }
    cout<<max2;
    return 0;
}