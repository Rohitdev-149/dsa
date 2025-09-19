#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> sp;
    stack<int> sn;
    int arr[] = {4, 5, 2, 10, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pge[n];
    int nge[n];
    
    pge[0] = -1; // First element has no previous greater element
    sp.push(arr[0]); // Push the first element onto the stack])
    nge[n-1] = -1; // Last element has no next greater element
    sn.push(arr[n-1]); // Push the last element onto the stack
    for (int i = 1, j = n - 2; i < n && j >= 0; i++, j--) {
        while(sp.size() > 0 && sn.size() > 0 && sp.top() <= arr[i] && sn.top() <= arr[j]) {
            sp.pop(); // Pop elements that are less than or equal to the current element
            sn.pop(); // Pop elements that are less than or equal to the current element
        }
        if(sp.size() == 0 && sn.size() == 0){
            pge[i] = -1; // No greater element found
            nge[j] = -1; // No greater element found
        }else{
            pge[i] = sp.top(); // Top of the stack is the next greater element
            nge[j] = sn.top(); // Top of the stack is the next greater element
        }
        sp.push(arr[i]); // Push the current element onto the stack
        sn.push(arr[j]); // Push the current element onto the stack
    }
    for(int i = 0; i < n; i++) {
        cout << pge[i] << " "; // Print previous greater elements
    }
    cout << endl;
    for(int i = 0; i < n; i++) {
        cout << nge[i] << " "; // Print next greater elements
    }
    cout << endl;
    return 0;

}