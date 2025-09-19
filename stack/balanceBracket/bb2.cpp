#include <iostream>
using namespace std;

class Node {
public:
  char val; // store char for bracket checking
  Node *next;
  Node(char val) {
    this->val = val;
    this->next = nullptr;
  }
};

class Stack {
public:
  Node *head;
  int size;
  Stack() {
    head = nullptr;
    size = 0;
  }
  void push(char val) {
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
    size++;
  }
  void pop() {
    if (head == nullptr) {
      cout << "stack is empty\n";
      return;
    }
    Node *temp = head;
    head = head->next;
    delete temp; // free memory
    size--;
  }
  char top() {
    if (head == nullptr) {
      return '\0'; // null char
    }
    return head->val;
  }
  bool isEmpty() { return size == 0; }
};

// Standalone function for bracket balance check
bool BBcheck2(Stack &st, string s) {
  for (int i = 0; i < s.length(); i++) {
    char curr=s[i];
    if (curr == '(') {
      st.push('(');
    } else if()
    }
  };
 


int main() {
  Stack st;
  string s = "((()))()";
  cout << (BBcheck2(st, s) ? "Balanced" : "Not Balanced") << endl;
}
