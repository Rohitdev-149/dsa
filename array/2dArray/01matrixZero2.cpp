#include <iostream>
using namespace std;

int main()
{
    const int rows = 4;
    const int cols = 4;
    int matrix[rows][cols];

    // Input elements of the 4x4 matrix
    cout << "Enter elements of the 4x4 matrix:\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Output the original matrix
    cout << "\nThe 4x4 matrix is:\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Use separate names for marking rows and columns
    int rowFlags[rows] = {0};
    int colFlags[cols] = {0};

    // Mark rows and columns to be zeroed
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (matrix[i][j] == 0)
            {
                rowFlags[i] = 1;
                colFlags[j] = 1;
            }
        }
    }

    // Set elements to zero based on marked rows and columns
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (rowFlags[i] == 1 || colFlags[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }

    // Output the modified matrix
    cout << "\nThe modified 4x4 matrix is:\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
