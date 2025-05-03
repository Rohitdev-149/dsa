#include <iostream>
using namespace std;
int main(){
    int arr[5] = {5,4,7,9,3};
    int lg = arr[0];
    for(int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++)
{
        if(arr[i]>lg){
             lg=arr[i];          
        }
        
    }
    cout<<lg;
    return 0;
}