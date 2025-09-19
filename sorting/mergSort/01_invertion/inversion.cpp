#include<iostream>
#include<vector>
using namespace std;
int count=0;
    int inversion(vector<int>&a,vector<int>&b){
        int i=0,j=0,inv=0;
        while(i!=a.size() && j!=b.size()){
            if(a[i]>b[j]) {
                inv+=a.size()-i; // count inversions here
                j++;
            }
            else i++;
        }
        return inv;
    }
    void merge(vector<int>&a,vector<int>&b,vector<int>&res){
        int i=0,j=0,k=0;
        while(i!=a.size() && j!=b.size()){
            if(a[i]>b[j]) res[k++]=b[j++];
            else res[k++]=a[i++];
        }
        if(i==a.size()) while(j!=b.size()) res[k++]=b[j++];
        else  while(i!=a.size()) res[k++]=a[i++];
    }
    void mergeSort(vector<int> &v){
       int n=v.size();
       if(n==1) return;
       int n1=n/2,n2=n-n/2;
       vector<int> a(n1),b(n2);
       for(int i=0;i<n1;i++) a[i]=v[i];
       for(int i=0;i<n2;i++) b[i]=v[n1+i];
       mergeSort(a);
       mergeSort(b);
       // before merging count inversions method use kro
       count+=inversion(a,b);
       merge(a,b,v); 
       a.clear();
       b.clear();

    }

int main(){
    int arr1[]={5,1,3,0,4,9,6};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    vector<int> v(arr1,arr1+n1);
    mergeSort(v);
    cout<<count<<endl;
}