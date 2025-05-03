// #include <iostream>
// using namespace std;

// int main(){
//     int arr[] = {1,2,3,4,5,6,7};
//     int d=3;  // left rotate by 3
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int temp[d];
//     for(int i=0;i<d;i++){
//         temp[i]= arr[i];
//         // cout<<temp[i]<<" ";
//     }
   
//    for(int j=d;j<n;j++){
//     arr[j-d]=arr[j];
//      cout<<arr[j-d]<<" ";
//     d++;
//    }
//    for(int k=n-d;k<n;k++){
//     arr[k]=temp[k-(n-d)];
//     cout<<arr[k]<<" ";
//    }
 
//      return 0;
// }

#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateLeft(int arr[], int n, int k) {
    k = k % n;  // Handle k > n
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    rotateLeft(arr, n, k);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// | 1 2 3 |    | 4 5 6 7 |
//     ^             ^      
// reverse        reverse
// | 3 2 1 |     | 7 6 5 4 | <<== reverse all || 4 5 6 7 1 2 3 ||
//     ^ 