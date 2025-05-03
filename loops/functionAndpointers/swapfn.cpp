#include <iostream>
using namespace std;
void swap(int& x,int& y){   // without &-> call= pass by value (new variable box banta h) ,with & -> call = pass by reference (same variable used ho jata h)
    int temp=x;
    x=y;
    y=temp;
}
int main(){
int x=12;
int y=15;
cout<<x<<" "<<y<<endl;
swap(x,y);
cout<<x<<" "<<y<<endl;
}