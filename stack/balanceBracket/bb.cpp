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
bool BBcheck(Stack &st, string s) {
  for (int i = 0; i < s.length(); i++) {

    if (s[i] == '(') {
      st.push('(');
    } else if (s[i] == ')') {
      if (st.isEmpty()) {
        cout << "Unbalanced brackets at position " << i << endl;
        return false;
      }
      if (st.top() == '(') {
        st.pop();
      } else {
        cout << "Unbalanced brackets at position " << i << endl;
        return false;
      }
    }
  }
  if (!st.isEmpty()) {
    cout << "Unbalanced: extra opening brackets" << endl;
    return false;
  }
  return true;
}

int main() {
  Stack st;
  string s = "((()))()";
  cout << (BBcheck(st, s) ? "Balanced" : "Not Balanced") << endl;
}
