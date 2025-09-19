#include<iostream>
using namespace std;

class Minheap{
    public:
    int arr[100];
    int idx;
    Minheap(){
        idx=1;
    }
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx]=x;
        int i=idx;
        while(i!=1){
            int parent=i/2;
            if(arr[parent]>arr[i]){
                swap(arr[parent],arr[i]);
                i=parent;
            }
            else{
                break;
            }
        }
        idx++;
    }
    void pop(){
        arr[1]=arr[idx-1];
        idx--;
        int i=1;
        while(i<idx){
            int left=2*i,right=2*i+1;
            if(arr[left]<arr[right]){
                if(arr[i]<arr[left])
                break;
                swap(arr[i],arr[left]);
                i=left;
            }
            else{
                if(arr[i]<arr[right])
                break;
                swap(arr[i],arr[right]);
                i=right;
            }
            }
    }
    int size(){
        return idx-1;
    }
    void print(){
        for(int i=1;i<idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl; 
    }
};

int main(){
Minheap pq;
pq.push(6);
pq.push(5);
pq.push(3);
pq.push(2);
pq.push(8);
pq.push(10);
pq.push(9);
cout<<pq.top()<<endl;
//cout<<pq.size();
pq.pop();
cout<<pq.top()<<endl;
pq.print();
}