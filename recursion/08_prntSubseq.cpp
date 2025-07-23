#include <iostream>
#include <vector>
using namespace std;

void sub(int ind, vector<int> &res, int arr[], int n)
{
  if (ind == n)
  {
    for (auto it :res)
    {
      cout << it << " ";
    }
    if(res.empty())
    {
      cout << "{}";
    }
   
    cout << endl;
    return;
  }
  res.push_back(arr[ind]);
  sub(ind + 1, res, arr, n);
  res.pop_back();
  sub(ind + 1, res, arr, n);
}

int main()
{
  int arr[] = {3, 1, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  vector<int> res;
  sub(0, res, arr, n);
  return 0;
}
// output=>
/*
3 1 2 
3 1
3 2
3
1 2 
1
2
{}
*/