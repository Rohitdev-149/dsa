#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main()
{
    int arr[] = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    for( auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int count = 1;
            int num = it;
            while (st.find(num + 1) != st.end())
            {
                count++;
                num++;
            }
            cout << "Length of longest consecutive sequence starting from " << it << " is: " << count << endl;
        }
    }
}