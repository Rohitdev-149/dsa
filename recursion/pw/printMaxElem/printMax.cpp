#include<iostream>
#include<limits.h>
using namespace std;
void printMax(int arr[], int n, int i, int maxVal) {
    if (i == n) {
        cout << "Maximum value: " << maxVal << endl;
        return;
    }
    if (arr[i] > maxVal) {
        maxVal = arr[i];
    }
    printMax(arr, n, i + 1, maxVal);
}
int main(){
    int arr[]={2,5,7,9,65,3,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    printMax(arr, n,0,INT_MIN);
    return 0;
}
// Maximum value: 65