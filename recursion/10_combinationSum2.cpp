#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void combination(int ind, vector<int> &ds, vector<int> &cand, int n, int target)
{
    if (target == 0)
    {
        for (int num : ds)
            cout << num << " ";
        cout << endl;
        return;
    }

    for (int i = ind; i < n; i++)
    {
        if (i > ind && cand[i] == cand[i - 1])
            continue; // Skip duplicates

        if (cand[i] > target)
            break; // Early stopping since array is sorted

        ds.push_back(cand[i]);
        combination(i + 1, ds, cand, n, target - cand[i]); // move to next index
        ds.pop_back();
    }
}

int main()
{
    vector<int> cand = {3, 1, 2, 4, 5, 3};
    int target = 10;
    sort(cand.begin(), cand.end()); // Sort to handle duplicates
    vector<int> ds;
    combination(0, ds, cand, cand.size(), target);
    return 0;
}
