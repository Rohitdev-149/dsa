#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter number of row/col :" << endl;
    cin >> m;
    int arr[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\n";
    cout<<"printing"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    cout << "\n";
    //cout<<"swaping"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
       
    }
    cout<<"printing after swaping"<<endl;
     for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j]<<" ";
            }
            cout << endl;
        }
}