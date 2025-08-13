#include <iostream>
#include <vector>
using namespace std;
void printSubset(int arr[], int n, vector<int> ans, int idx, int k)
{
    if (idx == n)
    {
        if (ans.size() == k)
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
            return;
        }
        return;
    }
    if (ans.size() + (n - idx) < k)
        return;
    printSubset(arr, n, ans, idx + 1, k);
    ans.push_back(arr[idx]);
    printSubset(arr, n, ans, idx + 1, k);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    int k = 3;
    printSubset(arr, n, v, 0, k);
}
/*
3 4 5 
2 4 5 
2 3 5 
2 3 4 
1 4 5 
1 3 5
1 3 4 
1 2 5
1 2 4
1 2 3 

*/