#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swap the numbers
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
