// #include <iostream>
// using namespace std;
// int main(){
//  int arr[] = {1,1,2,2,3,3,4,4,5,6};
//  int n = sizeof(arr)/sizeof(arr[0]);
//  int i=0;
//  for(int j=1;j<n;j++){
//     if(arr[i]!=arr[j]){
//         arr[i+1]=arr[j];
//         i++;
        
//     }
//  }
//     return i+1;
// }
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;

    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }

    // Output the result
    cout << "Unique elements: ";
    for (int k = 0; k <= i; k++) {
        cout << arr[k] << " ";
    }
    cout << "\nNew length: " << i + 1 << endl;

    return 0;
}
