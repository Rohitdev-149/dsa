#include<iostream>
#include<string>
using namespace std;
string cAs(string s,int n){
    if(n==1){
        string st="1";
       
        return st;
    } 
    string str=cAs(s,n-1);
    string ztr="";
    int count=1;
    char ch=s[0];
    for(int i=1;i<s.length();i++){
        char dh=s[i];
        if(ch==dh){
            count++;
        }
        else{
            ztr+=to_string(count)+ch;
            ch=dh;
            count=1;
        }
    }
    ztr+=to_string(count)+ch;
    cout<<ztr<<endl;
    return 0;

}
int main(){
    string str="3322251";
    int n=4;
    cAs(str,n);
    return 0;
}