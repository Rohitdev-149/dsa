#include<iostream>
#include<stack>
using namespace std;
void displayRec(stack<int>& st)
{
    if (st.size() == 0)
        return;
    
    int topElement = st.top();
    st.pop();
    
    displayRec(st);
    
    cout << topElement << " ";
    
    st.push(topElement); // Push the element back to maintain the original stack
}
void pushAtBtm(stack<int>& st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushAtBtm(st,val);
    st.push(x);
}
void reverseStack(stack<int>& st)  {
    if(st.size() == 1)
        return;
  int x=st.top();
    st.pop();   
    reverseStack(st);
    pushAtBtm(st,x);
} 
int main()
{
    stack<int> s;
    stack<int> a;
    stack<int> b;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
   

displayRec(s);
// cout<<endl;
//pushAtBtm(s,90);
cout<<endl;
reverseStack(s);
    
       
        cout<<endl;
displayRec(s);

    // cout<<s.size();
    
   
}