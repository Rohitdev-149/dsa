#include <iostream>

using namespace std;
class Stack
{ // user define data structure
    public:
    int arr[5];
    int idx = -1;
    void push(int val)
    {
        if(idx >= 4) // Check if stack is full
        {
            cout << "Stack Overflow" << endl;
            return;
        }
         // Increment index and assign value
        idx++;
        arr[idx] = val;
    }
    void pop()
    {
        if(idx < 0) // Check if stack is empty
        {
            cout << "Stack Underflow" << endl;
            return;
        }

        idx--;
    }
   int top(){
    if(idx < 0) // Check if stack is empty
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return arr[idx];
   }
   int size()
   {
       return idx + 1;
   }
};
 int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << "Top element: " << st.top() << endl;
    cout << "Stack size: " << st.size() << endl;
    st.pop();
    cout << "Top element: " << st.top() << endl;
    st.push(50);
    st.push(60);
}