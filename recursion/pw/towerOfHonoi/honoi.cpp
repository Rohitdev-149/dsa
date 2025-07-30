#include<iostream>
using namespace std;
 void honoi(int n,char a,char b,char c){
    if(n==0) return;
    honoi(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    honoi(n-1,b,a,c);
 }
int main(){
    int n=3;
    honoi(n, 'A', 'B', 'C');
}
/*
A->C
A->B
C->B
A->C
B->A
B->C
A->C
*/