
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={34,4,6,8,5,22,55,77,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    priority_queue<int>pq; //maxheap
    for(int i=0;i<n;i++){
       pq.push(arr[i]);
       if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
    return 0;
}