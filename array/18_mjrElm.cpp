// find the major element in an array which is greater than n/2 times
#include <iostream>
#include <map>
#include <vector>    
using namespace std;


// int majorElement(vector<int> a){
// map<int , int>mp;
// int n = a.size();
// for(int i = 0; i < n; i++){
//     mp[a[i]]++;  // count the frequency of each element
// }
// for(auto it : mp){
//     if(it.second > n/2){
//         return it.first;
//     }
// }
//  return -1;
// } 


// optimal solution
int majorElement(vector<int> a){
    int n = a.size();
    int cnt=0;
    int elm;
for(int i=0; i < n; i++){
    if(cnt == 0){
        elm = a[i];
        cnt = 1;
    }
    else if(a[i] == elm){
        cnt++;
    }
    else{
        cnt--;
    }
}
    cnt = 0;
    for(int i=0; i < n; i++){
        if(a[i] == elm){
            cnt++;
        }
    }
    if(cnt > n/2){
        return elm;
    }
    return -1;
}
int main(){
    vector<int> a = {1, 2, 3, 1, 1, 1, 2};
    cout << majorElement(a) << endl;
    return 0;
}