#include<iostream>
#include<string>
#include<vector>
using namespace std;
void permutation(string s, string ans) {
    if (s == "") {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1); // abd
       // s[i]=s[2] =>c
        // s.substr(0, i)=> ab
        // s.substr(i + 1)=>d

        permutation(ros, ans + ch);
    }
}
int main(){
    string s="1234";
    string ans="";
    permutation(s,ans);
}
/*
abc
acb
bac
bca
cab
cba
*/

//leet code=>60