
#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head->prev=temp; //extra
            head = temp;
        }
        size++;
    }
    void insertTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            temp->prev=tail; //extra
            tail = temp;
        }
        size++;
    }
    void insertIndex(int index, int val)
    {
        if (size == 0)
            insertHead(val);
        else if (size < index || size < 0)
            cout << "error";
        else if (size == index)
            insertTail(val);
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 0; i < index - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            //extra
            t->prev=temp;
            t->next->prev=t;
            //................
            size++;
        }
    }
    // deleting the head node
    void deleteAtHead()
    {
        if (size == 0)
        {
            cout << "size is empty";
            return;
        }
        head = head->next;
        head->prev=NULL;
        size--;
    }
    // deleting the tail node
    void deleteAtTail()
    {
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        temp->next = NULL;
        temp->prev=temp->prev->next;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx)
    {
        if (size == 0)
        {
            cout << "Empty List";
            return;
        }
        else if (idx < 0 || idx >= size)
        {
            cout << "invalid idx";
            return;
        }
        else if (idx == size - 1)
            return deleteAtTail();
        else if (idx == 0)
            return deleteAtHead();

        else
        {
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }

            temp->next = temp->next->next;
            temp->next->prev=temp;//extra
            // tail = temp;
            size--;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    LinkedList ll;
    ll.insertHead(10);
    ll.insertHead(14);
     ll.insertHead(17);
     ll.insertHead(16);
     ll.insertHead(19);
      ll.insertHead(37);
     ll.insertTail(55);
    // ll.insertTail(65);
    // ll.insertTail(95);
     ll.insertIndex(3, 99);
    // ll.insertIndex(4, 999);
     ll.deleteAtHead();
     ll.deleteAtTail();
    // ll.deleteAtTail();
     ll.deleteAtIdx(2);
    ll.display();
}