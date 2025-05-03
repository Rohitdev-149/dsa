#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
for (int i = 1; i <=n; i++)
{
   for (int j = 1; j <= i; j++)
   {
   cout<<(char)(j+64)<<" ";      
   }
   cout<<endl;
}
    return 0;
}
/**
A 
A B
A B C
A B C D
A B C D E
 */