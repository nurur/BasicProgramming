// Ternary Operator in C++
// Rule: testCondition ? a : b 


#include <iostream>
using namespace std;



// Main function 
int main(int argc, char* argv[])
{

  int x,y,z;
  int m,n;

  x=1, y=2, z=4;


  m = x < y ? x : y;
  n = z < m ? z : m;
  cout << "x, y, z values are     : " << x << " " << y << " " << z << endl;
  cout << "Ternary operator result: " << n << endl;


  cout << endl;


  m = x > y ? x : y;
  n = z > m ? z : m;
  cout << "x, y, z values are     : " << x << " " << y << " "<< z << endl;
  cout << "Ternary operator result: " << n << endl;


  return 0;
}

