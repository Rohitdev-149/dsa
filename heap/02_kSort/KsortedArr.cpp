
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={6,5,3,2,8,10,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    priority_queue<int,vector<int>,greater<int>>pq; //minheap
    vector<int>ans;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            int t=pq.top();
            ans.push_back(t);
            pq.pop();
        }
    }
    // for remaining elements in the heap
    while(!pq.empty()){
        int t=pq.top();
        ans.push_back(t);
        pq.pop();
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}