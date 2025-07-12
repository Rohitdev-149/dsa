#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter row number of 1st matrix" << endl;
    cin >> m;
    int n;
    cout << "enter column number of 1st matrix" << endl;
    cin >> n;
    int arr1[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
          cout<< arr1[i][j]<<" ";
        }
         cout<<endl;
    }
    cout<<"\n";
    int p;
    cout << "enter row number of 2st matrix" << endl;
    cin >> p;
    int q;
    cout << "enter column number of 2st matrix" << endl;
    cin >> q;
    int arr2[p][q];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> arr2[i][j];
        }
    }
     for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
          cout<< arr2[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"\n";
    int arr3[m][q];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
      for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
          cout<< arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}