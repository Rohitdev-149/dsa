#include <iostream>
#include <vector>
using namespace std;
void subArray(vector<int> v, int arr[], int n, int idx)
{
    if (idx == n)
    {
        if (!v.empty())
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    // Exclude current element
    subArray(v, arr, n, idx + 1);
    // Include current element
    if(v.size()==0){
        v.push_back(arr[idx]);
        subArray(v, arr, n, idx + 1);
    }
    else if(arr[idx-1]==v[v.size()-1]){
        v.push_back(arr[idx]);
        subArray(v, arr, n, idx + 1);
    }
   
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    subArray(v, arr, n, 0);
    return 0;
}
/*
4 
3
3 4
2
2 3 
2 3 4
1 
1 2
1 2 3
1 2 3 4
*/