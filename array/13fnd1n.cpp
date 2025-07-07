// //find single occurence of element in array
// #include <iostream>
// using namespace std;
// int main(){
//      int arr[] = {1,1,2,2,3,4,4,5,5};
//      int n = sizeof(arr) / sizeof(arr[0]);
//      int i=0;
//      int j=1;
//      int k=2;
// for(k=2; k<n; k++){
//     if(arr[i]==arr[j]|| arr[i]==arr[k] || arr[j]==arr[k]){
//         i++;
//         j++;
//         k++;
//     }else if(arr[i]!=arr[j] && arr[i]!=arr[k] && arr[j]!=arr[k]){
//         cout<<arr[j]<<" ";
//          i++;
//         j++;
//         k++;
//     }
// }}

// normal solution
// #include <iostream>
// using namespace std;
// int main(){
//      int arr[] = {1,1,2,2,3,4,4,5,5};
//      int n = sizeof(arr) / sizeof(arr[0]);
// for(int i =0;i<n;i++){
//     int count = 0;
//     for(int j=0;j<n;j++){
//         if(arr[i]==arr[j]){
//             count++;
//         }
//     }
//     if(count==1){
//         cout<<arr[i]<<" ";
//     }
// }
// }

// using hash
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = *std::max_element(arr, arr + n);
    //   std :: cout <<max;
    int hash[max] = {0};
    //   cout<<hash[max]<<endl;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] == 1)
        {
            cout << arr[i];
        }
    }
}

// using XOR
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 1, 2, 2, 3, 4, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//          ans = ans ^ arr[i];
//     }
//     cout << ans <<endl;
// }

// Using XOR
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int result = 0;

//     for (int i = 0; i < n; i++) {
//         result ^= arr[i];  // XOR cancels out duplicate numbers
//     }

//     cout << "Single occurring element: " << result << endl;
//     return 0;
// }
    