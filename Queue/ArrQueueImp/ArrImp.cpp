#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    int f;
    int b;
    vector<int> arr;
    Queue(int val){
        f=0;
        b=0;
        vector<int>v(val);
        arr=v;
    }
    void push(int val){
        if(b==arr.size()){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        arr[b]=val;
        b++;
    }
    void pop(){
        if(f==b){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        f++;
    }
    int front(){
        if(f==b){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(f==b){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    void display(){
        if(f==b){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};




int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.display();
    q.pop();
    q.display();
}