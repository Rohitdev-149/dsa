#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Step 1: Sort the array
    sort(arr, arr + n);

    int longest = 1;
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        // Skip duplicates
        if (arr[i] == arr[i - 1])
            continue;

        if (arr[i] == arr[i - 1] + 1)
        {
            count++;
        }
        else
        {
            count = 1;
        }

        longest = max(longest, count);
    }

    cout << "Length of longest consecutive sequence is: " << longest << endl;

    return 0;
}
