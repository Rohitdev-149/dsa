#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
       }
       while(temp.size()>0){
       
           st.push(temp.top());
           cout<<temp.top()<<" ";
           temp.pop();
          }
}
void pushAtBtm(stack<int>& st,int val){
    stack<int> helper;
    while(st.size()>0){
        helper.push(st.top());
        st.pop();
       }
       st.push(val);
       while(helper.size()>0){
       
           st.push(helper.top());
        //    cout<<helper.top()<<" ";
           helper.pop();
          }

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
    print(s);
    cout<<endl;
pushAtBtm(s,60);
cout<<endl;
print(s);
    // cout<<s.size();
    
   
}