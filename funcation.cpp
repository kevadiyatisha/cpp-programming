#include <iostream>
using namespace std;

void myFunction() {
  cout << "I just got executed!\n";
}

void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int myFunction(int x, int y) {
  return x + y;
}

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() 
{
  myFunction();
  myFunction();
  myFunction();

//Parameters and Arguments
  myFunction("\nLiam");
  myFunction("Jenny");
  myFunction("Anja");

//Return Values
int z = myFunction(5, 3);
  cout <<"\n" << z <<"\n";

//Function Overloading
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "\nInt: " << myNum1 << "\n";
  cout << "Double: " << myNum2;

//Polymorphism
  
  return 0;
}