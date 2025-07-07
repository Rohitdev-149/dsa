// maximum consecutive numbers "1"
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 1};
     int n = sizeof(arr) / sizeof(arr[0]);
    int max1 = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            if (count > max1)
            {
                max1 = count;
            }
            count = 0;
        }
    }
    cout << max1 << endl;
}