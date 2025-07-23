// Print all subsequences of an array whose sum is equal to k
#include <iostream>
#include <vector>
using namespace std;

void sub(int ind, vector<int> &res, int arr[], int n, int sum)
{
  if (ind == n)
  {
    int k = 5;
    if (sum == k)
    {
      for (auto it : res)
      {
        cout << it << " ";
      }
      cout << endl;
    }
    return;
  }
  // Include current element
  res.push_back(arr[ind]);
   sum += arr[ind];
  sub(ind + 1, res, arr, n,sum);\
  res.pop_back();
   sum -= arr[ind];
  // Exclude current element
  sub(ind + 1, res, arr, n, sum);
}

int main()
{
  int arr[] = {3, 1, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  vector<int> res;
  int sum = 0;    
  sub(0, res, arr, n, sum);
  return 0;
}
// output=>3 2



/*
//print only one answer
#include <iostream>
#include <vector>
using namespace std;

bool sub(int ind, vector<int> &res, int arr[], int n, int sum)
{
  if (ind == n)
  {
    int k = 2;
    if (sum == k)
    {
      for (auto it : res)
      {
        cout << it << " ";
      }
      cout << endl;
      return true;
    }
   else return false;
  }
  // Include current element
  res.push_back(arr[ind]);
   sum += arr[ind];
  if(sub(ind + 1, res, arr, n,sum)==true) return true;
  res.pop_back();
   sum -= arr[ind];
  // Exclude current element
   if(sub(ind + 1, res, arr, n,sum)==true) return true;
}
int main()
{
  int arr[] = { 1, 2,1};
  int n = sizeof(arr) / sizeof(arr[0]);
  vector<int> res;
  int sum = 0;
  sub(0, res, arr, n, sum);
  return 0;
}
//output=> 1 1
*/

/*
// only count the number of subsequences
#include <iostream>
#include <vector>
using namespace std;

int sub(int ind,int arr[], int n, int sum)
{
  if (ind == n)
  {
    int k = 2;
    if (sum == k) return true;
    else return false;  
    
    
  }
 
  // res.push_back(arr[ind]);
   sum += arr[ind];
  int l=sub(ind + 1, arr, n,sum);
  // res.pop_back();
   sum -= arr[ind];

  int r=sub(ind + 1, arr, n, sum);
  return l + r;
}

int main()
{
  int arr[] = {1, 2,1};
  int n = sizeof(arr) / sizeof(arr[0]);
  vector<int> res;
  int sum = 0;
  cout<<sub(0, arr, n, sum);
  return 0;
}
// output=> 2
*/