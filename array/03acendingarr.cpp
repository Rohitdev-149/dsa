#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool isSorted = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            isSorted = false;
            break; // no need to check further
        }
    }

    if (isSorted)
        cout << "sorted";
    else
        cout << "not sorted";

    return 0;
}
