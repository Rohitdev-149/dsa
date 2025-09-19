
#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> st)
{
    stack<int> temp;
    while (st.size() > 0)
    {

        temp.push(st.top());
        st.pop();
    }
    cout << endl;
    while (temp.size() > 0)
    {
        st.push(temp.top());

        cout << temp.top() << " "; // Output: 50, 30, 20, 10
        temp.pop();
    }
}
int main()
{
    stack<int> s;
    stack<int> temp;
    stack<int> rt; // to reverse the actual stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // cout << s.size() << endl; // Output: 4
    s.pop();
    // cout << s.size() << endl; // Output: 3
    s.push(50);
    cout<<"printing function";
    print(s);
    while (s.size() > 0)
    {

        // cout << s.top() << " ";
        temp.push(s.top());
        s.pop();
    }
    cout << endl;
    while (temp.size() > 0)
    {
        rt.push(temp.top());

        cout << temp.top() << " "; // Output: 50, 30, 20, 10
        temp.pop();
    }
    // to reverse the actual stack -> one more extra stack
    cout << endl;

    while (rt.size() > 0)
    {
        s.push(rt.top());
        // cout << rt.top() << " "; // Output: 10, 20, 30, 50
        rt.pop();
    }
}