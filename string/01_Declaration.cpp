#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string s = "Rohit Das";
    // cout << s;

    // string st;
    // cin>>st;     //Rohit Das
    // cout<<st;    // Rohit -> bcoz cin space ko consider nhi krta, space aate hi break ho jata h
    // to solve this issue we use getline();
    string st1;
   getline(cin,st1);     //Rohit Das
    cout<<st1;            //Rohit Das
    cout<<st1[0];         //R
}