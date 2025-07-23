// find max number from ginven string
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string arr[] = {"0123", "0231", "1230", "2301"};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxNum = stoi(arr[0]);
    string maxStr = arr[0];
    for(int i = 1; i < n; i++){
        int num = stoi(arr[i]);
        if(num > maxNum){
            maxNum = num;
            maxStr = arr[i];
        }
    }
    cout << "Max number string: " << maxStr << endl;
    }


