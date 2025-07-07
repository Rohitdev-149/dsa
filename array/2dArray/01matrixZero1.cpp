#include <iostream>
using namespace std;
void markRow(int i, int rows, int cols, int matrix[4][4])
{
    for (int j = 0; j <= cols; j++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1; // Mark the row with -1
        }
    }
}

void markCol(int j, int rows, int cols, int matrix[4][4])
{
    for (int i = 0; i < rows; i++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1; // Mark the column with -1
        }
    }
}

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

    // Output the matrix
    cout << "\nThe 4x4 matrix is:\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (matrix[i][j] == 0)
            {
                markRow(i, rows, cols, matrix);
                markCol(j, rows, cols, matrix);
            }
        }
    }
    // Output the modified matrix
    for(int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = 0; // Convert -1 back to 0
            }
        }
    }
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
