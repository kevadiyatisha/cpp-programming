#include <iostream>
using namespace std;
// Function to print Fibonacci sequence iteratively
void printFibonacci(int n) 
{
    if (n <= 0) 
    {
        cout << "Number of terms must be positive." << endl;
        return;
    }

    unsigned long long a = 0, b = 1, c;
    
    cout << "Fibonacci Sequence: " << endl;
    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";
    
    for (int i = 3; i <= n; ++i) 
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

int main() 
{
    int terms;

    cout << "Enter the number of terms: ";
    cin >> terms;

    printFibonacci(terms);

    return 0;
}
