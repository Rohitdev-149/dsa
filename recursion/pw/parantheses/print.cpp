#include<iostream>
#include<string>
using namespace std;
 void print(string s,int o,int c,int n){
    if(o==n && c==n){
        cout<<s<<endl;
        return;
    }
    if(o<n){
        print(s+'(',o+1,c,n);
    }
    if(c<o && c<=n){
        print(s+')',o,c+1,n);
    }

 }

int main(){
int n=3; // Number of pairs of parentheses
print("",0,0,n);

}
/*
output;
((()))
(()())
(())()
()(())
()()()
*/


/*
//leet code 22
class Solution {
public:
void print(int n,string s,int o,int c, vector<string>& ans){
 if(o==n && c==n){
       ans.push_back(s);
        return;
    }
    if(o<n){
        print(n,s+'(',o+1,c,ans);
    }
    if(c<o && c<=n){
        print(n,s+')',o,c+1,ans);
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        print(n,"",0,0,ans);
        return ans;
    }
};
*/