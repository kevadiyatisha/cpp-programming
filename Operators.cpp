#include <iostream>
using namespace std;

int main() 
{
    int a, b,result_a,result_b;
    a = 7;
    b = 2;
    bool result;
    int A = 12, B = 25;
    int num1 = 35;
    int num2 = -150;
    unsigned char a1 = 5, b1 = 9;
    
//Arithmetic Operators
    cout << "\na + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;


//increment and decrement operators
    //increment
    result_a = ++a;
    cout << "\nresult_a = " << result_a << endl;

    // decrementing 
    result_b = --b;
    cout << "result_b = " << result_b << endl;

//Assignment Operators
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "After a += b;" << endl;
   
    a += b;  // a = a +b
    cout << "a = " << a << endl;

//Relational Operators
    result = (a == b);   // false
    cout << "\n3 == 5 is " << result << endl;

    result = (a != b);  // true
    cout << "3 != 5 is " << result << endl;

    result = a > b;   // false
    cout << "3 > 5 is " << result << endl;

    result = a < b;   // true
    cout << "3 < 5 is " << result << endl;

    result = a >= b;  // false
    cout << "3 >= 5 is " << result << endl;

    result = a <= b;  // true
    cout << "3 <= 5 is " << result << endl;

//Logical Operators
    result = (3 != 5) && (3 < 5);     // true
    cout << "\n(3 != 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 < 5);    // false
    cout << "(3 == 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 > 5);    // false
    cout << "(3 == 5) && (3 > 5) is " << result << endl;

    result = (3 != 5) || (3 < 5);    // true
    cout << "(3 != 5) || (3 < 5) is " << result << endl;

    result = (3 != 5) || (3 > 5);    // true
    cout << "(3 != 5) || (3 > 5) is " << result << endl;

    result = (3 == 5) || (3 > 5);    // false
    cout << "(3 == 5) || (3 > 5) is " << result << endl;

    result = !(5 == 2);    // true
    cout << "!(5 == 2) is " << result << endl;

    result = !(5 == 5);    // false
    cout << "!(5 == 5) is " << result << endl;

//Bitwise Operators
    //AND
    cout << "\n" << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "A & B = " << (A & B) << endl;
    //OR
    cout << "\na = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a | b = " << (a | b) << endl;
    //XOR
    cout << "\na = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    //Complement
    cout << "\n~(" << num1 << ") = " << (~num1) << endl;
    cout << "~(" << num2 << ") = " << (~num2) << endl;

}