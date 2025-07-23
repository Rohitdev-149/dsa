// // reverse array
// #include <iostream>
// #include <string>
// using namespace std;

// int reverse(int a[], int l, int r)
// {
//   if(l >= r)  return 0; // Base case: if left index is greater than or equal to right index, return
   
//     swap(a[l], a[r]); // Swap the elements at left and right indices
//     return reverse(a, l + 1, r - 1); // Recursive call with updated indices
// }

// int main()
// {
//    int a[] = {1, 2, 3, 4, 5};
//    int n = sizeof(a)/sizeof(a[0]); // Size of the array
//   int l=0;int r=n-1;
// reverse(a, l, r);
//    cout << "Reversed array is: ";
//    for (int i = 0; i < n; i++)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    return 0;
// }
// using one variable
// reverse array
#include <iostream>
#include <string>
using namespace std;

int reverse(int a[], int l, int n)
{
  if(l >=n/2)  return 0; // Base case: if left index is greater than or equal to right index, return
   
    swap(a[l], a[n-l-1]); // Swap the elements at left and right indices
    return reverse(a, l + 1,n); // Recursive call with updated indices
}

int main()
{
   int a[] = {1, 2, 3, 4, 5};
   int n = sizeof(a)/sizeof(a[0]); // Size of the array
  int l=0;
reverse(a, l, n); // Call reverse with left index 0 and right index n-1
   cout << "Reversed array is: ";
   for (int i = 0; i < n; i++)
   {
       cout << a[i] << " ";
   }
   cout << endl;
   return 0;
}