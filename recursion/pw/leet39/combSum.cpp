// #include<iostream>
// #include<vector>
// using namespace std;
//  int combSum(int arr[], int n, int target, vector<int> &v, int index) {
// if(target==0) {
//     for(int i=0; i<v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     return 1; 
// }
// if(target < 0 ) {
//     return 0; // Base case: if target is negative or no more elements to consider
// }
// for(int i=index;i<n; i++) {
//     v.push_back(arr[i]); // Include the current element
//     combSum(arr, n, target - arr[i], v, i); // Recur with reduced target
//     v.pop_back(); // Backtrack: remove the last element added
 
// }
//  }
// int main(){
//     int arr[]={2,3,6,7};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target = 7;
//     vector<int> result;
//     combSum(arr,n,target, result, 0);
//     return 0;
// }
// /*
// 2 2 3 
// 7 
// */

