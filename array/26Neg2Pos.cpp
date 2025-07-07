//move all negative no. to beginning and positive to end with constant space.

#include <iostream>
#include <vector>
using namespace std;
void sortArrFromN2P(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (v[i] < 0)
            i++;
        if (v[j] > 0)
            j--;
        if (i > j)
            break;
        if (v[i]>0 && v[j]< 0)
        {
            swap(v[i],v[j]);
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
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(-7);
    v.push_back(8);
    cout << "the elements are :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sortArrFromN2P(v);
    cout << "the sorted elements are :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}