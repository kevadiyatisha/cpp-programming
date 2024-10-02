#include <iostream>
using namespace std;
// Function to calculate factorial iteratively
unsigned long long factorial(int n) 
{
    if (n < 0) 
    {
        throw invalid_argument("Negative numbers are not allowed.");
    }

    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) 
    {
        result *= i;
    }
    return result;
}

int main() 
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    try 
    {
        unsigned long long result = factorial(number);
        cout << "Factorial of " << number << " is " << result << endl;
    } catch (const invalid_argument& e) 
    {
        cout << e.what() << endl;
    }

    return 0;
}
