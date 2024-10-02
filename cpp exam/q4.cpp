#include <iostream>
#include <algorithm> 
#include <string>    
using namespace std;
int main() 
{
    // Input string
    string str;
    cout << "Enter a string: ";
    cin >> str;

    // Reverse 
    reverse(str.begin(), str.end());

    // Output 
    cout << "Reversed string: " << str << endl;

    return 0;
}
