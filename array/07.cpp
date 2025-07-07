#include <iostream>
using namespace std;
// put all zeros at the end of the array
int main()
{
    int i = 0;
    int j;
    int arr[] = {0, 1, 0, 3, 1, 0, 6, 9, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            
            break;
        }
        
    }
    for(i=j+1;i<n;i++){
if (arr[i] != 0)
        {
            int temp = arr[i];
             arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
for(int k=0;k<n;k++){
    cout<<arr[k];
}
    return 0;
}