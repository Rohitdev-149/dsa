#include <iostream>
#include <climits>
using namespace std;

int main()
{
    cout << "matrix 1" << endl;
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    cout << "matrix 2" << endl;
    int arr2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j];
        }
        cout << endl;
    }
    cout << "After Addition" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = arr[i][j] + arr2[i][j];
        }
    }
}