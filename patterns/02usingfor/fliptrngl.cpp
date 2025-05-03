#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int mid=n/2 +1;
for (int i = 1; i <=n; i++)
{
    for (int j = 1; j <= n-i; j++) //space
   {
    cout<<"_";
   }
   for (int j = 1; j <= i; j++) //star
   {
    cout<<"*";
   }
   cout<<endl;
}
    return 0;
}
/*
____*
___**
__***
_****
*****
*/