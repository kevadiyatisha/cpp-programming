#include <iostream>
#include <string>
#include <cctype> 
using namespace std;
bool isPalindrome(const string& str) 
{
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) 
    {
        // Ignore non-alphanumeric characters
        while (left < right && !isalnum(str[left])) 
        {
            ++left;
        }
        while (left < right && !isalnum(str[right])) 
        {
            --right;
        }
        
        // Compare characters in a case-insensitive manner
        if (tolower(str[left]) != tolower(str[right])) 
        {
            return false;
        }
        
        ++left;
        --right;
    }
    
    return true;
}

int main()
{
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    if (isPalindrome(input))
    {
        cout << "\"" << input << "\" is a palindrome.\n";
    } 
    else 
    {
        cout << "\"" << input << "\" is not a palindrome.\n";
    }
    
    return 0;
}
