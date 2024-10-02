#include <iostream>
#include <vector>
using namespace std;
// Function to print a matrix
void printMatrix(const std::vector<std::vector<int>>& matrix) 
{
    for (const auto& row : matrix) 
    {
        for (int element : row) 
        {
            cout << element << " ";
        }
        cout << std::endl;
    }
}

// Function to multiply two matrices
vector<vector<int>> multiplyMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B) 
{
    int rowsA = A.size();
    int colsA = A[0].size();
    int rowsB = B.size();
    int colsB = B[0].size();

    // Initialize the result matrix with zeros
    vector<vector<int>> result(rowsA, vector<int>(colsB, 0));

    // Perform matrix multiplication
    for (int i = 0; i < rowsA; ++i) 
    {
        for (int j = 0; j < colsB; ++j) 
        {
            for (int k = 0; k < colsA; ++k) 
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return result;
}

int main() 
{
    int rowsA, colsA, rowsB, colsB;

    // Input dimensions and elements for matrix A
    cout << "Enter the number of rows and columns for matrix A: ";
    cin >> rowsA >> colsA;
    vector<vector<int>> A(rowsA, vector<int>(colsA));

    cout << "Enter the elements of matrix A:" << endl;
    for (int i = 0; i < rowsA; ++i) 
    {
        for (int j = 0; j < colsA; ++j) 
        {
            cin >> A[i][j];
        }
    }

    // Input dimensions and elements for matrix B
    cout << "Enter the number of rows and columns for matrix B: ";
    cin >> rowsB >> colsB;
    vector<vector<int>> B(rowsB, vector<int>(colsB));

    cout << "Enter the elements of matrix B:" << endl;
    for (int i = 0; i < rowsB; ++i) 
    {
        for (int j = 0; j < colsB; ++j) 
        {
            cin >> B[i][j];
        }
    }

    // Check if multiplication is possible
    if (colsA != rowsB) 
    {
        cout << "Error: Number of columns in matrix A must be equal to the number of rows in matrix B." << endl;
        return 1;
    }

    // Multiply the matrices
    vector<vector<int>> result = multiplyMatrices(A, B);

    // Print the result
    cout << "Product of matrix A and matrix B:" << endl;
    printMatrix(result);

    return 0;
}
