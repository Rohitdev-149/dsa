#include<bits/stdc++.h>
#include<vector>
using namespace std;
int longestSubarr(vector<int> a,int k){
    int left=0,right=0;
    long long sum =a[0];
    int maxLen = 0;
    int n = a.size();
    while(right<n){
        while(left<=right && sum>k){
            sum-=a[left];
            left++;
        }
        if(sum==k){
            maxLen = max(maxLen,right-left+1);
        }
        right++;
        if(right<n){
            sum+=a[right];
        }
    }

return maxLen;
}
int main(){
    vector<int> a = {1,2,3,4,5};
    int k = 6;
    cout<<longestSubarr(a,k);
    return 0;
}