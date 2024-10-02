#include <iostream>
#include <cmath> 
using namespace std;
// Function to check if a number is prime
bool isPrime(int num) 
{
    if (num <= 1) return false; 
    if (num == 2) return true;  
    if (num % 2 == 0) return false; 

    // Check for factors from 3 to sqrt(num)
    int sqrtNum = static_cast<int>(sqrt(num));
    for (int i = 3; i <= sqrtNum; i += 2) 
    {
        if (num % i == 0) return false; 
    }
    
    return true; 
}

int main() 
{
    int number;

    // Input from the user
    cout << "Enter a number to check if it is prime: ";
    cin >> number;

    
    if (isPrime(number)) 
    {
        cout << number << " is a prime number." << endl;
    } else 
    {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
