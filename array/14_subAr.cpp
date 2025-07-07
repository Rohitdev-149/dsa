// subarray sum qual to k
#include <iostream>
using namespace std;
// int main()
// {
//     int arr[] = {9, 4, 20, 3, 10, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 33;
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             if (sum == k)
//                 count++;
//         }
//     }
//     cout << count;
// }

//using map data structure
// class Solution
// {
//     public:
//     int subArraySum(vector<int>& arr,int k){
//         int n = arr.size();
//         int count =0;
//         vector<int>prefixSum(n,0);
//         prefixSum[0] = arr[0];
//         for (int i = 1; i < n; i++)
//         {
//             prefixSum[i] = prefixSum[i-1] + arr[i];
//         }
//         unordered_map<int,int>mp;
//         for(int j=0;j<n;j++){
//             if(prefixSum[j] == k){
//                 count++;
//             }
//             int value = prefixSum[j]-k;
//             if(mp.find(prefixSum[j]) == mp.end()){
//                  mp[prefixSum[j]]=0;
//             }
//             mp[prefixSum[j]]++;
//         }
//     }
// }


// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// class Solution {
// public:
//     int subArraySum(vector<int>& arr, int k) {
//         unordered_map<int, int> mp;
//         mp[0] = 1; // To handle subarrays that start from index 0
//         int sum = 0, count = 0;

//         for (int i = 0; i < arr.size(); i++) {
//             sum += arr[i];

//             if (mp.find(sum - k) != mp.end()) {
//                 count += mp[sum - k];
//             }

//             mp[sum]++;
//         }

//         return count;
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> nums = {9,4,0,3,20,10,3,5};
//     int k = 3;
//     cout << "Count of subarrays: " << sol.subArraySum(nums, k) << endl;
//     return 0;
// }


#include <iostream>
#include <unordered_map>
using namespace std;

int subArraySum(int arr[], int n, int k) {
    unordered_map<int, int> mp;
    mp[0] = 1; // To count subarrays starting from index 0
    int sum = 0, count = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (mp.find(sum - k) != mp.end()) {
            count += mp[sum - k];
        }

        mp[sum]++;
    }

    return count;
}

int main() {
    int arr[] = {9,4,0,3,20,10,3,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << "Count of subarrays: " << subArraySum(arr, n, k) << endl;

    return 0;
}
