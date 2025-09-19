#include<iostream>
#include<stack>
using namespace std;
//TC -> O(n)
//SC -> O(n) for storing next greater elements
int main(){
    stack<int> s; // approach : pop->ans->push

    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]); // Calculate the size of the array
    int pgi[n]; // Array to store the prev greater elements index
    pgi[0] =1; // first element has no prev greater element
    s.push(0); // Push the index of the first element onto the stack
    for(int i=1;i<n;i++){ //traversing fordward
        while(s.size()>0 && arr[s.top()]<=arr[i]){
            s.pop(); // Pop elements that are less than the current element
        }
        //mark the answer
        if(s.size() == 0) {
            pgi[i] = -1; // No greater element found
        } else {
            pgi[i] = s.top(); // Top of the stack is the next greater element
        }
        pgi[i]=i-pgi[i];
        s.push(i); // Push the current element onto the stack
    }
    for(int i=0;i<n;i++){
        cout<<pgi[i]<<" ";
    }
    cout<<endl;
    return 0;
}