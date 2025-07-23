// find the longest common subsequence (LCS) of two strings
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string arr[]={"flower", "flow", "flight"};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    if(n==1) cout<<arr[0];
    sort(arr, arr + n); // Sort the array to find common prefix
    string lcs = ""; // Initialize longest common subsequence as an empty string
    string f=arr[0];
    string l=arr[n-1];
    for(int i = 0; i < min(f.size(),l.size()); i++){
        if(f[i] == l[i]){
            lcs += f[i];
        } else {
            break;
        }
       
    }
     return lcs;
}