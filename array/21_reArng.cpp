// rearrange the elements by sign [+-+-+-....]
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int arr[] = {1, 2, -3, -4, 5, -6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    int pos = 0;
    int neg = 1;
    for(int i = 0; i < n; i++){
       if(arr[i] > 0){
            ans[pos] = arr[i];
            pos += 2;
        }
        else{
            ans[neg] = arr[i];
            neg += 2;
        }
        
    }    
     for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;  
}