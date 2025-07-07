

#include <iostream>
#include <vector>
using namespace std;
void merge2sortArr(vector<int> &v1, vector<int> &v2, vector<int> &v3, int n, int m)
{
    int i = n-1, j = m-1, k = m+n-1;
    while (i >=0 && j >=0)
    {
        if (v1[i] < v2[j])
        {
            v3[k--] = v2[j--];
        }
        else
        {
            v3[k--] = v1[i--];
        }
    }
    while (i >=0)
    {
        v3[k--] = v1[i--];
    }
    while (j >=0)
    {
        v3[k--] = v2[j--];
    }
}
main()
{
    vector<int> v1;

    vector<int> v2;

    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(10);
    int n = v1.size();
    int m = v2.size();
    vector<int> v3(m + n);
    cout << "the elements are :" << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    merge2sortArr(v1, v2, v3, n, m);
    cout << "the sorted elements are :" << endl;
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
}
// leetcode -> 88