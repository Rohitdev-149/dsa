#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Queue{
    public:
    Node* f;
    Node* b;
    Queue(){
        f=NULL;
        b=NULL;
    }
    void push(int val){
        Node* n=new Node(val);
        if(f==NULL){
            f=n;
            b=n;
            return;
        }
        b->next=n;
        b=n;
    }
    void pop(){
        if(f==NULL){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        Node* todelete=f;
        f=f->next;
        delete todelete;
    }
    int front(){
        if(f==NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return f->data;
    }
    int back(){
        if(b==NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return b->data;
    }
    void display(){
        if(f==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* temp=f;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }};
int main(){
    Queue q;
    q.display();
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.display();
    q.pop();
    q.pop();
    q.push(3);
    q.push(4);
    q.push(5);
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
}