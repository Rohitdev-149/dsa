#include <iostream>
using namespace std;
int main(){
int x;
cout<<" Enter 1st number "<<endl;
cin>>x;
int y;
cout<<" Enter 2nd number "<<endl;
cin>>y;
cout<<"After swap"<<endl;
// imp expression to swap |>
x=x+y;
y=x-y;
x=x-y;
cout<< "x is :"<<x<<endl;
cout<< "y is :"<<y<<endl;
}