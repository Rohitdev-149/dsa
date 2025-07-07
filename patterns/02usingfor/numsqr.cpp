#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
for (int i = 1; i <=n; i++)
{
   for (int j = 1; j <= n; j++)
   {
   cout<<j<<" ";    // try-> cout<<i<<" ";
   }
   cout<<endl;
}
    return 0;
}
/*
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/