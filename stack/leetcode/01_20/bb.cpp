/*
#include <iostream>
using namespace std;

class Solution {
public:
    bool ismatching(char open, char close) {
        return (open == '(' && close == ')') ||
               (open == '[' && close == ']') ||
               (open == '{' && close == '}');
    }

    class Node {
    public:
        char val;
        Node* next;
        Node(char val) {
            this->val = val;
            this->next = nullptr;
        }
    };

    class Stack {
    public:
        Node* head;
        int size;
        Stack() {
            head = NULL;
            size = 0;
        }
        void push(char val) {
            Node* temp = new Node(val);
            temp->next = head;
            head = temp;
            size++;
        }
        void pop() {
            if (head == NULL) return;
            Node* temp = head;
            head = head->next;
            delete temp; // free memory
            size--;
        }
        char top() {
            if (head == NULL) return '\0';
            return head->val;
        }
        bool isEmpty() {
            return size == 0;
        }
    };

    bool isValid(string s) {
        Stack st; // custom stack
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } else if (ch == ')' || ch == ']' || ch == '}') {
                if (st.isEmpty()) {
                    cout << "Unbalanced brackets at position " << i << endl;
                    return false;
                }
                if (ismatching(st.top(), ch)) {
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
};



*/