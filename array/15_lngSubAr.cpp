#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int longestSubarrayWithSumK(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        int sum = 0, maxLen = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            // Case 1: sum from index 0 to i
            if (sum == k) {
                maxLen = i + 1;
            }

            // Case 2: sum - k seen before -> calculating len
            if (mp.find(sum - k) != mp.end()) {
                int len = i - mp[sum - k];
                maxLen = max(maxLen, len); 
            }

            // Only store the earliest occurrence of a prefix sum   -> storing sum at index i
            if (mp.find(sum) == mp.end()) {
                mp[sum] = i;
            }
        }

        return maxLen;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {9, 4, 0, 3, 20, 10,0, 3, 5};
    int k = 33;
    cout << "Longest subarray length with sum = " << k << " is " << sol.longestSubarrayWithSumK(nums, k) << endl;
    return 0;
}


// | i | arr[i] | sum | sum == k? | sum - k | found in mp?             | length    | maxLen | mp updated? (sum\:index) |
// | - | ------- | --- | --------- | ------- | ------------------------ | --------- | ------ | ------------------------ |
// | 0 | 9       | 9   | ❌         | -24     | ❌                        | -         | 0      | ✅ (9:0)                  |
// | 2 | 0       | 13  | ❌         | -20     | ❌                        | -         | 0      | ❌ (13 exists)            |
// | 3 | 3       | 16  | ❌         | -17     | ❌                        | -         | 0      | ✅ (16:3)                 |
// | 1 | 4       | 13  | ❌         | -20     | ❌                        | -         | 0      | ✅ (13:1)                 |
// | 4 | 20      | 36  | ❌         | 3       | ✅ (sum-k=3 in mp at i=3) | 4 - 3 = 1 | 1      | ✅ (36:4)                 |
// | 5 | 10      | 46  | ❌         | 13      | ✅ (13 in mp at i=1)      | 5 - 1 = 4 | 4      | ✅ (46:5)                 |
// | 6 | 0       | 46  | ❌         | 13      | ✅ (same 13)              | 6 - 1 = 5 | 5      | ❌ (46 exists)            |
// | 7 | 3       | 49  | ❌         | 16      | ✅ (16 in mp at i=3)      | 7 - 3 = 4 | 5      | ✅ (49:7)                 |
// | 8 | 5       | 54  | ❌         | 21      | ❌                        | -         | 5      | ✅ (54:8)                 |
