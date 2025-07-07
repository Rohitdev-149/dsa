#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;

for (int i = 0; i < n; i++)
{
    //space
   for (int j = 0; j < i; j++)
   {
     cout<<" ";
   }
   //star
     for (int j = 0; j < (2*n - (2*i + 1)); j++) // imp
   {
 cout<<"*";
   }
   //space
     for (int j = 0; j < i; j++)
   {
 cout<<" ";
   }
   cout<<endl;
}
    return 0;
}
/*
*********
 *******
  *****
   ***
    *  
*/