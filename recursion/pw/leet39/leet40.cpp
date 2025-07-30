#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int combSum(int arr[], int n, int target, vector<int> &v, int index) {
if(target==0) {
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 1; 
}
if(target < 0 ) {
    return 0; // Base case: if target is negative or no more elements to consider
}
for(int i=index;i<n; i++) {
    if(i > index && arr[i] == arr[i-1]) continue; // Skip duplicates to avoid repeated combinations
    if(arr[i] > target) break;; // Skip if the current element is greater than the target
    v.push_back(arr[i]); // Include the current element
    combSum(arr, n, target - arr[i], v, i+1); // Recur with reduced target
    v.pop_back(); // Backtrack: remove the last element added
 
}
 }
int main(){
    int arr[]={10,1,2,7,6,1,5};
    sort(arr, arr + sizeof(arr)/sizeof(arr[0])); // Sort the array to handle duplicates
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    vector<int> result;
    combSum(arr,n,target, result, 0);
    return 0;
}
/*
1 1 6
1 2 5
1 7
2 6
*/