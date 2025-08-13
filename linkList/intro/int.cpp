#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int v){
        val = v;
        next = NULL;
    }
};

int main(){
Node a(10);
Node b(20);
Node c(30);
Node d(40);
a.next = &b;
b.next = &c;
c.next = &d;
// Pointer to the next node in the list is already set above
(a.next)->val = 88; // This line sets the value of the next node to 88
//a.next->val= 88; // This line is redundant since we already set it above

cout << (a.next)->val;
cout<<(*(a.next)).val;
cout<<endl; // This line dereferences the pointer and accesses the value)
cout<<(((a.next)->next)->next)->val; // This line accesses the value of the next node using pointer arithmetic
}