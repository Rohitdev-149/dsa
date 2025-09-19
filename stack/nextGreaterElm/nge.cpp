#include<iostream>
#include<stack>
using namespace std;
//TC -> O(n)
//SC -> O(n) for storing next greater elements
int main(){
    stack<int> s; // approach : pop->ans->push

    int arr[] = {4, 5, 2, 10, 8};
    int n = 5;
    int nge[n]; // Array to store the next greater elements
    nge[n - 1] = -1; // Last element has no next greater element
    for(int i=n-2;i>=0;i--){ // traversing backward
        while(s.size()>0 && s.top()<=arr[i]){
            s.pop(); // Pop elements that are less than the current element
        }
        //mark the answer
        if(s.size() == 0) {
            nge[i] = -1; // No greater element found
        } else {
            nge[i] = s.top(); // Top of the stack is the next greater element
        }
        s.push(arr[i]); // Push the current element onto the stack
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;
    return 0;
}