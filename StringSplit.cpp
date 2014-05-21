// Split a String in C++

// Reference:
// http://www.cplusplus.com/faq/sequences/strings/split/#boost-split


#include <boost/algorithm/string.hpp>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using namespace boost;


void print( vector<string> & v )
{
  for (int n = 0; n < v.size(); n++)
    cout << v[ n ] << " ";
  cout << endl;
}


// Main function 
int main(int argc, char* argv[])
{
  string s = "a,b,,, c ,,d,f,";
  vector <string> tokens;

  cout << "Original String = \"" << s << "\"\n\n";

  cout << "Split on \',\' only" << endl;
  split( tokens, s, is_any_of( "," ) );
  print( tokens );


  cout << "Split on \" ,\"" << endl;
  split( tokens, s, is_any_of( " ," ) );
  print( tokens );


  cout << "Split on \" ,\" and delimiters" << endl; 
  split( tokens, s, is_any_of( " ," ), token_compress_on );
  print( tokens );

  return 0;
}
