// C++ script to print Fizz or Buzz or FizzBuzz
// Fizz if an integer is divided by 3
// Buzz if an integer is divided by 5
// FizBuzzz if an integer is divided by 3 or 5


#include <iostream>
#include <string>
using namespace std;



// Main function 
int main(int argc, char* argv[])
{

  int n = 101;

  for (int i=1; i < n; i++)
    {
      if (i % 3 == 0 and i % 5 == 0)
	cout << i << "  FizzBuzz" << endl;
      else if (i % 3 == 0)     
	cout << i << "      Fizz" << endl;
      else if (i % 5 == 0) 
	cout << i << "      Buzz" << endl;
      else    
	cout << i << "  --------" << endl;
    }


  return 0;
}
