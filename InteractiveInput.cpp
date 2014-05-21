// Interactive Command Line Input in C++

// Part 1: Read String input and Print as String 
// Part 2: Convert String Input and Print as Integer
// Part 3: Convert String Input and Print as Float


#include <iostream>   /* cout, cin  */
#include <cstdlib>    /* atoi, atof */
#include <string>
using namespace std;


int main(int argc, char* argv[]) 
{
  //Input String Variables 
  string inputString, inputInt, inputReal;


  //Read String input and Print as String 
  cout << "Enter a String            : ";
  cin  >> inputString; 
  cout << "You Entered a String      : " << inputString << endl;

  cout << endl;

  //Read String Input, Convert, and Print as Integer
  cout << "Enter an Integer Number   : ";
  cin  >> inputInt;
  int numInt = atoi(inputInt.c_str());
  cout << "You Entered an Integer    : " << numInt << endl;

  cout << endl;

  //Read String Input, Convert, and Print as Float
  cout << "Enter a Real Number       : ";
  cin  >> inputReal;
  float numReal = atof(inputReal.c_str());
  cout << "Your Entered a Real Number: " << numReal << endl;

  return 0;
} 
