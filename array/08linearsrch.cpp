#include <iostream>
using namespace std;
// linear search
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
int arr[]={4,5,8,9,2,3};
int n= sizeof(arr)/sizeof(arr[0]);
int key=9;
int result = linearsearch(arr,n,key);
if(result==-1){
    cout<<"Element not found";
}
else{
    cout<<"Element found at index "<<result;
}

}
