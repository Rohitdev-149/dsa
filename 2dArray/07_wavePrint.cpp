#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    int arr[m][n];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    cout << "\nZigzag Row-wise Traversal:\n";
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            // left to right
            for (int j = 0; j < n; j++)
                cout << arr[i][j] << " ";
        } else {
            // right to left
            for (int j = n - 1; j >= 0; j--)
                cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
