#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int arr[] = {2, -1, 3, 4, -5, 6, -7};
    int n=sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    queue<int> q;
    vector<int> result;
    for (int i = 0; i < n; i++) {
      if(arr[i]<0) q.push(i);
}
int i=0;
while(i+k<=n){
    while(q.size()>0 && q.front()<i ) q.pop();
    if(q.size()==0 || q.front()>=i+k) result.push_back(0);
    else result.push_back(arr[q.front()]);
    i++;
}
for(auto x:result) cout<<x<<" ";
    return 0;
}