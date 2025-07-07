// // sort the array of 0s, 1s and 2s
// #include <iostream>
// #include <vector>    
// using namespace std;
// int main(){
//     int arr[] = {0, 1, 2, 0, 1, 2, 0, 1, 2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int cnt0 = 0, cnt1 = 0, cnt2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//             cnt0++;
//         else if (arr[i] == 1)
//             cnt1++;
//         else
//             cnt2++;
//     }
//     for (int i = 0; i < cnt0; i++)
//         arr[i] = 0;
//     for (int i = cnt0; i < cnt0 + cnt1; i++)
//         arr[i] = 1;
//     for (int i = cnt0 + cnt1; i < n; i++)
//         arr[i] = 2;
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

//optimal SOLUTION
// DUTCH NATIONAL FLAG ALGORITHM
#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;
void sort012(vector<int> &arr)
{
    int low = 0, mid = 0, high = arr.size() - 1;
    while (mid <= high)
    {
       if(arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}   int main()
{
    vector<int> arr = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    sort012(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}