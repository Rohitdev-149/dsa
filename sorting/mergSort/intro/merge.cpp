#include<iostream>
#include<vector>
using namespace std;

    void merge(vector<int>&a,vector<int>&b,vector<int>&res){
        int i=0,j=0,k=0;
        while(i!=a.size() && j!=b.size()){
            if(a[i]>b[j]) res[k++]=b[j++];
            else res[k++]=a[i++];
        }
        if(i==a.size()){
            while(j!=b.size()) res[k++]=b[j++];
        }
        else{
            while(i!=a.size()) res[k++]=a[i++];
        }
    }
    // magic happens here
    void mergeSort(vector<int> &v){
       int n=v.size();
       if(n==1) return;

       int n1=n/2,n2=n-n/2;
       vector<int> a(n1),b(n2);

       for(int i=0;i<n1;i++) a[i]=v[i];
       for(int i=0;i<n2;i++) b[i]=v[n1+i];
      //recursion
       mergeSort(a);
       mergeSort(b);
       merge(a,b,v); // merge a and b into v
       // clear a and b space (reducing xlogx space complexity to x)
       a.clear();
         b.clear();

    }

int main(){
    int arr1[]={5,2,8,0,4,1,3,7,6,9,66,21,33};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    vector<int> v(arr1,arr1+n1);
    mergeSort(v);
    
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
}