// Print all combination of an array whose sum is equal to k and number can be repeated once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int combination(int ind,vector<int>& ds, vector<int> & cand,int n,int target,vector<int>& ans){
if()
  return 0;
}
int main()
{
  vector<int> cand = {3, 1, 2, 4, 5, 3};
  int n = cand.size();
  sort(cand.begin(), cand.end()); // Sort to handle duplicates
  int target = 10;
  vector<int> ds;
  vector<int> ans;
  combination(0, ds, cand, n,target,ans);
  return 0;
}
