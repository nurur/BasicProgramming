// Pascal's Triangle in C++



#include <iomanip>
#include <iostream>
using namespace std;


long combFunc1(int n, int k)
// Using for loop
{
  if (n < 0 || k < 0 || k > n) return 0;
  
  int f = 1;
  if (k == 0) return f;

  for (int i=1; i<=k; i++)
    { 
      f *= n--;
      f /= i;
    }
  return f;
}


long combFunc2(int n, int k)
// Using while loop
{
  if (n < 0 || k < 0 || k > n) return 0;
  
  int f = 1;
  int i = 1;
  while (k >= 1) 
    { 
      f *= n--;
      f /= i++;
      k--;
    }
  return f;
}



int main()
{
  const int a = 10;

  for (int n=0; n<a; n++)
    {
      for (int b=1; b<a-n; b++)
	cout << setw(2) << "";
      for (int k=0; k<=n; k++)
	cout << setw(4) << combFunc1(n,k);
      cout << endl;
    }

  return 0;
}
