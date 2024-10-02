#include <iostream>
#include <vector>
using namespace std;
// Function to rotate the array to the right by d positions
void rotateRight(vector<int>& arr, int d) 
{
    int n = arr.size();
    d = d % n; // To handle cases where d >= n
    vector<int> temp(d);

    // Copy the last d elements to temp
    for (int i = 0; i < d; ++i) 
    {
        temp[i] = arr[n - d + i];
    }

    // Shift the rest of the array to the right
    for (int i = n - 1; i >= d; --i) 
    {
        arr[i] = arr[i - d];
    }

    // Copy the elements from temp to the start of the array
    for (int i = 0; i < d; ++i) 
    {
        arr[i] = temp[i];
    }
}

// Function to print the array
void printArray(const std::vector<int>& arr) 
{
    for (int num : arr) 
    {
        cout << num << " ";
    }
        cout << endl;
        
}

int main() 
{
    int n, d;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }

    cout << "Enter the number of positions to rotate: ";
    cin >> d;

    rotateRight(arr, d);

    cout << "Array after rotation: ";
    printArray(arr);

    return 0;
}
