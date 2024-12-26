#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

// Declaring global arrays 
int matrixA[99][99], matrixB[99][99];

// Function to multiply two matrices 
void multiply_matrix(int matrixA[99][99], int matrixB[99][99], int row1, int col1, int col2)
{
    // Initialize matrix with zeros
    int ResultMatrix[99][99] = {0};
    cout << "Multiplication of both matrices:\n\n";

    // matrix multiplication
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            // using k so we can get element of first matrix row and elements of second matrix col
              for (int k = 0; k < col1; k++)
            {
                ResultMatrix[i][j] = ResultMatrix[i][j] + (matrixA[i][k] * matrixB[k][j]);
            }
        }
    }

    // Displaying the result
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << ResultMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row, col, value, row2, col2, value2;

    // Geting data first matrix
    cout << "Enter the number of rows for Matrix A: ";
    cin >> row;
    cout << "Enter the number of columns for Matrix A: ";
    cin >> col;

    // Input values for Matrix A
    cout << "\nEnter values for Matrix A:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter value for row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> value;
            matrixA[i][j] = value;
        }
    }

    // Display Matrix A
    cout << "\nMatrix A:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }

    // Geting data Second matrix
    // verifying if first matrix row and second matrix col are equal
    do
    {
        cout << "\nEnter the number of rows for Matrix B: ";
        cin >> row2;
        cout << "Enter the number of columns for Matrix B: ";
        cin >> col2;
        if (col != row2)
        {
            cout << "Number of columns in Matrix A must equal number of rows in Matrix B!\n";
        }
    } while (col != row2);

    // Input values for Matrix B
    cout << "\nEnter values for Matrix B:\n";
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << "Enter value for row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> value2;
            matrixB[i][j] = value2;
        }
    }

    // Display Matrix B
    cout << "\nMatrix B:\n";
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

    // Perform matrix multiplication and display result
    multiply_matrix(matrixA, matrixB, row, col, col2);
    return 0;
}
