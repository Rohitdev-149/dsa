#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
for (int i = 1; i <=n; i++)
{
   if( i%2==0){
    for (int j = 1; j <= i; j++)
   {
   cout<<(char)(j+64)<<" ";      
   }}
   else
   {
    for (int j = 1; j <= i; j++)
   {
   cout<<j<<" ";      
   } 
   }
   cout<<endl;
   
}
/*
1 
A B
1 2 3
A B C D
1 2 3 4 5
*/

    return 0;
}