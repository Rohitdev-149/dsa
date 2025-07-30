#include<iostream>
#include<limits.h>
#include<string>
using namespace std;
/*

void removeChar(string ans, string str) {
   if(str.length()==0){
         cout << ans << endl;
         return;
   }
   char ch = str[0];
   if(ch != 'o') { 
       removeChar(ans + ch, str.substr(1));
   }
    else {
         removeChar(ans, str.substr(1));
}
}
int main(){
  string str="Rohitdev";
  string ans="";
  removeChar("",str);
    return 0;
}
    */
// due to substr() and concatination, this code has O(n^2) time complexity
// we can use a better approach using index pointers

void removeChar(string ans, string str,int idx) {
    if(idx==str.length()){
          cout << ans << endl;
          return;
    }
    char ch = str[idx];
    if(ch == 'o') { 
        removeChar(ans,str,idx+1);
    }
     else {
        removeChar(ans+ch,str,idx+1);
 }
 }
 int main(){
   string str="Rohitdev";
   string ans="";
   removeChar("",str,0);
     return 0;
 }
 //Rhitdev