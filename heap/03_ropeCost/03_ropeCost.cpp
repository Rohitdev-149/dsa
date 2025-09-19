
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={6,5,3,2,8,10,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>,greater<int>>pq; //minheap
   int minCost=0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    while(pq.size()>1){
        int first=pq.top();
        pq.pop();
        int second=pq.top();
        pq.pop();
        int sum=first+second;
        minCost+=sum;
        pq.push(sum);
    }
    cout<<minCost;
    return 0;
}