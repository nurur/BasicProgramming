// Command Line Input in C++


#include <iostream>
#include <cstdlib> 
#include <string>
using namespace std;


int main(int argc, char* argv[]) 
{
  cout << "Number of argument, argc = " << argc << endl;
  cout << "  " << endl; 

  for(int i = 0; i < argc; i++)
    cout << "argv[" << i << "] = " << argv[i] << endl;
  
  
  cout << "  " << endl; 
  for(int i = 1; i < argc; i++)
    cout << atoi(argv[i]) << endl; 
  
  return 0;
} 
