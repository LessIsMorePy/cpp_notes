// characters
#include <iostream>
using namespace std;

int main()
{
  char a = 'a';
  char b = 'B';

  // example 1
  cout << "If you subtract to the letter '";
  cout << a << "' the amount of 32 the result is: " << a-32 << endl;

  // example 2: cast
  cout << "If you subtract to the letter '";
  cout << a << "' the amount of 32 the result is: " << (char)(a-32) << endl;

  // example 2: cast
  cout << "If you add to the letter '";
  cout << b << "' the amount of 32 the result is: " << (char)(b+32) << endl;

  return 0;
}
