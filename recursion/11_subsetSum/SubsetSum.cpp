#include <iostream>
#include <vector>
using namespace std;

void subSetSum(int ind, int arr[], int n, int sum, vector<int> &ds)
{
    if (ind == n)
    {
        cout << "Subset: ";
        for (int num : ds)
            cout << num << " ";
        cout << "| Sum = " << sum << endl;
        return;
    }

    // Include the current element
    ds.push_back(arr[ind]);
    subSetSum(ind + 1, arr, n, sum + arr[ind], ds);

    // Exclude the current element
    ds.pop_back();
    subSetSum(ind + 1, arr, n, sum, ds);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ds;
    subSetSum(0, arr, n, 0, ds);
    return 0;
}
