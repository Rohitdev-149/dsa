#include<iostream>
using namespace std;

void subStr(string str,string ans,int idx){
    if(idx==str.length()){
        cout << ans << endl;
        return;
    }
   
    subStr(str, ans, idx + 1); // exclude the current character
    subStr(str, ans + str[idx], idx + 1); // include the current character
}
int main(){
    string str = "abc";
    string ans = "";
   
    subStr(str,ans, 0);
    return 0;
}
/*
{}
c  
b  
bc 
a  
ac 
ab 
abc
*/