// implementing the Next Permutation
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {2, 1, 5, 4, 3, 0, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ind = -1;

    // Step 1: Find the pivot (first element from the right which is smaller than next)
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            ind = i;
            break;
        }
    }

    // Step 2: If no pivot, reverse the whole array (last permutation case)
    if (ind == -1)
    {
        reverse(arr, arr + n);
    }
    else
    {
        // Step 3: Find the next greater element from the right
        for (int i = n - 1; i > ind; i--)
        {
            if (arr[i] > arr[ind])
            {
                swap(arr[i], arr[ind]);
                break;
            }
        }
        // Step 4: Reverse the part after the pivot
        reverse(arr + ind + 1, arr + n);
    }

    // Print the resulting next permutation
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
