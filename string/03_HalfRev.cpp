#include <iostream>
#include <string>
#include <algorithm> // for reverse function
using namespace std;
int main()
{
   string s;
   cin>>s;
   cout<<s<<endl;
   int n = s.length();
  reverse(s.begin(), s.begin()+n/2);
   cout<<s<<endl;
}