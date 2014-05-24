// Script to read CSV file in C++
// Useful reference: http://www.cplusplus.com/forum/general/

// Extracts characters from 'inputFile' and stores them into 'strVal' 
// Until the delimitation character delim is found
// 'fstream' stream class to both read and write from/to files



#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string.hpp>
#include <iostream>
#include <fstream>      
#include <vector>

using namespace std;
using namespace boost;




// Main function 
int main(int argc, char* argv[]) 
{
  
  fstream file ( "inputCsvFile.csv" ); 
  string strVal;
  vector<string> fields;
  
  
  while ( file.good() )
    {
      // Part 1a: Read by comma seperated fields
      //getline (file, strVal, ',');  
      //cout << string(strVal) << " " << strVal.length() << endl; 
     
      // Part 1b: Read one row (record) at a time 
      //getline (file, strVal, '\n');
      //split(fields, strVal, is_any_of( "," ));
      //for (vector<string>::iterator it=fields.begin(); it !=fields.end(); ++it)
      //{ cout << *it << endl; }
      

      // Part 2: Read one row (record) at a time 
      getline (file, strVal, '\n');  
      cout << string(strVal) << " " << strVal.length() << endl; 
    }
  

  file.close();  
  return 0;
}

