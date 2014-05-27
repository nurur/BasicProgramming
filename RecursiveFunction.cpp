// Recursive function implementation in C++
// Recursive returns a value: 
// Note:
// void exit (int status) 
// 0 = success, 1 = failure



#include <cstdlib>
#include <iostream>
using namespace std;



// Power function 
int powFunc(int base, int power)
{
  if (base < 0)
    { 
      cout << "Error! negative base for power!\n";
      exit(1); 
    }
  else
    {
      if (power == 0) return 1;
      return ( powFunc(base, power-1) * base); //if (power > 0)
    }
}


// Factorial function 
int factFunc( int n ) 
{
  if (n < 0)
    { 
      cout << "Error! negative argument for factorial!\n";
      exit(1);
    }
  
  else
    {
      if (n == 0 || n == 1) return 1; 
      return (n*factFunc( n-1 )); //if (n > 1)
    }
}



// Main function 
int main()
{
  // Power function 
  int m = 3;
  cout << "Recursive Func. with Return Value: Power Function     " << endl;
  for (int i = 0; i < 10; i++) 
    cout << m << " to the power " << i << " is " << powFunc(m,i) << endl;
  cout << endl;
  

  // Factorial function
  int n = 4;
  cout << "Recursive Func. with Return Value: Factorial Function " << endl;
  cout << "Factorial of " << n << " is: "<< factFunc(n);   
  cout << endl;

  cout << endl;
  return 0;
}
