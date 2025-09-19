#include <iostream>
#include<vector>
using namespace std;
class Stack
{ // user define data structure
    public:
   vector<int> v;
    
    void push(int val)
    {
     v.push_back(val);
    }
    void pop()
    {
        if(v.size() == 0) // Check if stack is empty
        {
            cout << "Stack Underflow" << endl;
            return;
        }

        v.pop_back();
    }
   int top(){
    if(v.size() == 0) // Check if stack is empty
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return v[v.size() - 1];
   }
   int size()
   {
       return v.size();
   }
};
 int main()
{
    Stack st;
   // st.pop(); // Test underflow condition
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