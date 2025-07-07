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

 

    // Mark rows and columns to be zeroed
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (matrix[i][j] == 0)
            {
               matrix[i][0] = 0; // Mark the first column of the row
               if(j != 0) // Avoid marking the first element if it's already zero
               {
                   matrix[0][j] = 0; // Mark the first row of the column
               }
            }
        }
    }
    for(int i = 1; i < rows; ++i)
    {
        for (int j = 1; j < cols; ++j)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0; // Set the element to zero if its row or column is marked
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
