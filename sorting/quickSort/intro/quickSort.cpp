#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
// int pivotElm=arr[si];   choosing 1st element as a pivote (not good for TC)
int pivotElm=arr[(si+ei)/2];  //choosing middle element as a pivote
    int count=0;
    for(int i=si;i<=ei;i++){
    if(i==(si+ei)/2) continue;
     if(arr[i]<=pivotElm) count++;
    }
    int pivotIndex=si+count;
    swap(arr[pivotIndex],arr[(si+ei)/2]);
    int i=si,j=ei;
    while(i<pivotIndex && j>pivotIndex){
       if(arr[i]<=pivotElm) i++;
         else if(arr[j]>pivotElm) j--;
         else if(arr[i]>pivotElm && arr[j]<=pivotElm){
          swap(arr[i],arr[j]);
          i++;
          j--;
         }
    }
    return pivotIndex;
}
void quickSort(int arr[],int si,int ei){
    if(si>=ei) return;//base case
    
    //partition -> pivot element ko correct position pe leke jayega or
    //  uske left side smaller elements or right side larger elements honge
    int pi=partition(arr,si,ei);
    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);
}


int main(){
    int arr[]={5,1,8,2,7,6,3,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}