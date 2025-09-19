#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseKelm(queue<int> &q,int k){
    stack<int> s;
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    int t=q.size()-k;
    for(int i=0;i<t;i++){
        q.push(q.front());
        q.pop();
    }
}
void display(queue<int> q){
   int n=q.size();
   for(int i=0;i<n;i++){
    int x=q.front();
    cout<<x<<" ";
    q.pop();
   q.push(x);
     
      
    }
    cout<<endl;
}
int main(){
queue<int> q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.push(60);
display(q);
reverseKelm(q,3);
display(q);
return 0;

}