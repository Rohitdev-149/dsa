
// count the number of subarrays with sum equal to k
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int cntSubArOfK(vector<int> &v1, int k)
{
    unordered_map<int, int> m;
    m[0] = 1; // Initialize with sum 0 to handle cases where the subarray starts from index 0
    int cnt = 0, preSum = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        preSum += v1[i];
       int remove= preSum -k;
       cnt+=m[remove];
       m[preSum]+=1;
    }
    return cnt;
   }
main()
{
    vector<int> v1;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(-3);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(-3);
    int n = v1.size();
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    int k = 3;
    int result = cntSubArOfK(v1, k);
    cout << "The count of subarrays with sum " << k << " is: " << result << endl;
}