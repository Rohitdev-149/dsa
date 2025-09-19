#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Deque {
public:
    Node* head;
    Node* tail;
    int size;
    Deque() {
        head = tail = NULL;
        size = 0;
    }

    void pushFront(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }

    void pushBack(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void popFront() {
        if (size == 0) {
            cout << "Deque is empty\n";
            return;
        }
        if (head == tail) { // only one element
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
        }
        size--;
    }

    void popBack() {
        if (size == 0) {
            cout << "Deque is empty\n";
            return;
        }
        if (head == tail) { // only one element
            delete tail;
            head = tail = NULL;
        } else {
            Node* temp = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete temp;
        }
        size--;
    }

    int front() {
        if (size == 0) {
            cout << "Deque is empty\n";
            return -1;
        }
        return head->val;
    }

    int back() {
        if (size == 0) {
            cout << "Deque is empty\n";
            return -1;
        }
        return tail->val;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Deque dq;
    dq.pushBack(1);
    dq.pushBack(2);
    dq.pushFront(3);
    dq.pushFront(4);

    dq.display();   // 4 3 1 2

    dq.popFront();
    dq.display();   // 3 1 2

    dq.popBack();
    dq.display();   // 3 1

    cout << "Front: " << dq.front() << endl; // 3
    cout << "Back: " << dq.back() << endl;   // 1
}
