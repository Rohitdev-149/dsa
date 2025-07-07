#include <iostream>
using namespace std;
int main(){
 int x=3;
 int* p=&x;    //pointing to x variable
 cout<<&x<<endl;   // address of x var
 cout<<p<<endl;    // address of x var
 cout<<x<<endl;    //print contain val
 cout<<*p<<endl;         //print contain val
 cout<<&p;          // address of p var



}