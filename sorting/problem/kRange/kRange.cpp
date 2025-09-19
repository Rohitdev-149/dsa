#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={5,4,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int kmn=(float)(INT_MIN);
    int kmx=(float)(INT_MAX);
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){ // decreasing =>min range
            int m=(arr[i]+arr[i+1])/2.0;
            kmn=max(kmn,m);
        }else{
            int m=(arr[i]+arr[i+1])/2.0; // increasing =>max range
            kmx=min(kmx,m);
        }
        if(kmn>kmx){ // no valid range
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
        cout<<kmn<<" "<<kmx<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}