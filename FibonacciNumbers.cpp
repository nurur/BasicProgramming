// Generating Fibonacci numbers in C++ 
// Algorithm : F_n = F_(n-1) + F_(n-2)


#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{
  long bound;
  cout << "Enter a positive number: ";
  cin >> bound;
  cout << "Fibonacci numbers " << bound << " :\n0, 1";

  long f0=0, f1=1;
  while(true)
    {
      long f2 = f0 + f1;
      if (f2 > bound) { cout << endl; exit(1); }
      cout << ", " << f2; 
      f0 = f1; f1 = f2;
    }

  cout << endl;
  return 0;
}
