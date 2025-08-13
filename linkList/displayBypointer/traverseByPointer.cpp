#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int v)
    {
        val = v;
        next = NULL;
    }
};
void insert(Node *head,int val){
    while (head->next != NULL) // Traverse to the end of the list
    {
        head = head->next;
    }
    Node* newNode = new Node(val); // Create a new node with the given value
    head->next = newNode; // Link the new node at the end of the list
    
}

int main()
{
    Node* a= new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
   
   a->next = b;
   b->next = c;
   c->next = d;
   d->next = NULL;


//    cout<<a->next->next->next->val;
    // traverse
    insert(a, 50); // Example of inserting a new node at the end
    Node* temp = a;
    int count = 0; // to count the number of nodes

 while(temp!= NULL)
    {
        cout << temp->val << " ";

        temp = temp->next; // move to the next node
        count++; // increment the count
    }
   
    cout << endl; 
    cout << "Number of nodes: " << count << endl;

  
}