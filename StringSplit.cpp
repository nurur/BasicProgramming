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
  vector<string> tokens;

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
  cout << "-----------------------" << endl;



  //Using boost
  vector<string> strs;
  boost::split(strs, s, boost::is_any_of(","));

  // method 1
  for (size_t i = 0; i < strs.size(); i++)
    cout << strs[i];
  cout << endl;

  // method 2
  for (vector<string>::iterator it = strs.begin(); it != strs.end(); ++it)
    cout << *it; 
  cout << endl;


  return 0;
}
