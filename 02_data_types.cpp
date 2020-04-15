// data types
/*
 data types can change according to each compiler, depending on your
 computer or operating system
*/
#include <iostream>
using namespace std;

int main()
{
  int integer;
  double doubl;
  float flt;
  long double ldbl;
  char letter;

  cout << "Bytes of a data type integer: " << sizeof(integer) << endl;
  cout << "Bytes of a data type double: " << sizeof(doubl) << endl;
  cout << "Bytes of a data type float: " << sizeof(flt) << endl;
  cout << "Bytes of a data type long double: " << sizeof(ldbl) << endl;
  cout << "Bytes of a data type char: " << sizeof(letter);

  return 0;
}
