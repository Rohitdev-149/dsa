// Print all combination of an array whose sum is equal to k number can be reated
#include <iostream>
#include <vector>
using namespace std;

int combination(int ind,vector<int>& ds, vector<int> & cand,int n,int target,vector<int>& ans){
 if(ind==n){
  if(target==0){
   
   for(int num : ds) {
     ans.push_back(num);
     cout << num << " ";
   }
   cout << endl;
  }
  return 0;
 }
  if(cand[ind]<=target){
    ds.push_back(cand[ind]);
    combination(ind, ds, cand, n, target-cand[ind], ans);
    ds.pop_back();
  }
  combination(ind+1, ds, cand, n, target, ans);
  return 0;
}
int main()
{
  vector<int> cand = {3, 1, 2, 4, 5, 3};
  int n = cand.size();
  int target = 10;
  vector<int> ds;
  vector<int> ans;
  combination(0, ds, cand, n,target,ans);
  return 0;
}
