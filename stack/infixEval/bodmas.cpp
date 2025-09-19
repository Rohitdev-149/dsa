
#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch == '+' || ch == '-') return 1;
    else if(ch == '*' || ch == '/') return 2;
    return 0;
}

 int solve(int val1,int val2,char ch)    {
 if(ch=='+') return val1+val2;
 else if(ch=='-') return val1-val2;
 else if(ch=='*') return val1*val2;
 else return val1/val2;
 }                                                                    
int main(){
    string s="7+9*4/8-3";
    stack <int> val;
    stack <char> op;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57){ //chech the s[i] is digit(0-9)
            val.push(s[i]-48);
        }
        else{ // operator -> +,-,*,/
           if(op.size()==0 || prio(s[i])>prio(op.top())){
            op.push(s[i]);
           }
           else{//priority(s[i])<=priority(op.top())
            while(op.size()>0 && prio(s[i])<=prio(op.top())){
                //kam krna h
                int v2=val.top();
                val.pop();
                int v1=val.top();
                val.pop();
                char ch=op.top();
                op.pop();
                int sol=solve(v1,v2,ch);
                val.push(sol);
               
            }
            op.push(s[i]);
           }
        }
    }
    while(op.size()>0){
        int v2=val.top();
        val.pop();
        int v1=val.top();
        val.pop();
        char ch=op.top();
        op.pop();
        int sol=solve(v1,v2,ch);
        val.push(sol);

    }
    cout<<val.top();
}