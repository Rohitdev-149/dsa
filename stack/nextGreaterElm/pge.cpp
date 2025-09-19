#include<iostream>
#include<stack>
using namespace std;
//TC -> O(n)
//SC -> O(n) for storing next greater elements
int main(){
    stack<int> s; // approach : pop->ans->push

    int arr[] = {4, 5, 2, 10, 8};
    int n = 5;
    int pge[n]; // Array to store the prev greater elements
    pge[0] = arr[0]; // first element has no prev greater element
    for(int i=1;i<n;i++){ //traversing fordward
        while(s.size()>0 && s.top()<=arr[i]){
            s.pop(); // Pop elements that are less than the current element
        }
        //mark the answer
        if(s.size() == 0) {
            pge[i] = -1; // No greater element found
        } else {
            pge[i] = s.top(); // Top of the stack is the next greater element
        }
        s.push(arr[i]); // Push the current element onto the stack
    }
    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
    cout<<endl;
    return 0;
}