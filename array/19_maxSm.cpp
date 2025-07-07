// maximun of subarray sum
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_sum = arr[0];
    int curr_sum = arr[0];
    for(int i = 1; i < n; i++){
        curr_sum = max(arr[i], curr_sum + arr[i]);
        max_sum = max(max_sum, curr_sum);

    }
   
    cout << "Maximum subarray sum is: " << max_sum << endl;
    return 0;
}