// sort the array of 0's and 1's -> Two pointer method

#include <iostream>
#include <vector>
using namespace std;
void sortArr(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (v[i] == 0)
            i++;
        if (v[j] == 1)
            j--;
        if (i > j)
            break;
        if (v[i] == 1 && v[j] == 0)
        {
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}

int main()
{
    // int n;
    // cout << "NUmber of elements" << endl;
    // cin >> n;
    // vector<int> v;
    // cout << "Enter the elements:" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    cout << "the elements are :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sortArr(v);
    cout << "the sorted elements are :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}