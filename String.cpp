#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName;

    // String Length
    string alphabet = "\nABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "\nThe length of the alphabet string is: " << alphabet.size();

    // Access Strings
    string myString = "\nHello";
    cout << myString[myString.length() - 1];

    // Change String Characters
    myString[0] = 'J';
    cout << myString;
   
    // The at() function
    cout << "\nOriginal string: " << myString << "\n";
    cout << "First character: " << myString.at(0) << "\n";
    cout << "Second character: " << myString.at(1) << "\n";
    cout << "Last character: " << myString.at(myString.length() - 1) << "\n";
  
    myString.at(0) = 'J';
    cout << "Changed string: " << myString;

    // Special Characters
    string specialText = "The character \\ is called backslash.";
    cout << specialText;   

    return 0;
}
