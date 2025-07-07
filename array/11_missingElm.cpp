// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[4] = {1, 2, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int lst = arr[n - 1];
//     for (int i = 1; i <= lst; i++)
//     {
//         int flag = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] == i)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             cout << i << " ";
//         }
//     }
// }

//better solution

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[4] = {1, 2, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int lst = arr[n - 1];
//    int hash[n+1]={0};
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]] = 1;
//     }
//     for (int i = 1; i <= lst; i++)
//     {
//         if (hash[i] == 0)
//         {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }

// optimal solution withut using extra space
#include <iostream>  
using namespace std;
int main(){
    int arr[4] = {1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int lst = arr[n - 1];
 int sum = lst*(lst+1)/2;
//  cout<<sum<<endl;
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i];
    }
    cout<<sum-sum1<<endl;
    return 0;
}