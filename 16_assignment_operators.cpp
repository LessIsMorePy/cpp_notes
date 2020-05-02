#include <iostream>
using namespace std;

int main()
{
  // variables
  int a = 5;
  float b = 2.5;
  float c;

  // assignment
  a *= b; // a = a*b
  cout << "operation *=: " << a << endl;

  a = 5;
  a /= b; // a = a/b
  cout << "operation /=: " << a << endl;

  a = 5;
  a += b; // a = a + b
  cout << "operation +=: " << a << endl;

  a = 5;
  c = a;
  c += b;
  cout << "operation +=: " << c;

  return 0;
}
