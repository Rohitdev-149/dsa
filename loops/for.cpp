#include<iostream>
using namespace std;
int main(){
// table of n
/*
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
for (int i = 1; i <=n; i++)
{
   cout<<n<<"*"<<i<<"="<<n*i<<endl;
}
*/
// dsplay AP series upto n terms
/*
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int a=3;
for (int i = 0; i <= n; i++)
{
   cout<<a<<" ";
    a=a+4;
}
*/
// dsplay GP series upto n terms

int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int a=3;
for (int i = 0; i <= n; i++)
{
   cout<<a<<" ";
    a=a*4;
}

    return 0;
}