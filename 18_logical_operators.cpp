#include <iostream>
using namespace std;

int main()
{
  int a, b, c;

  a = 10;
  b = 15;
  c = a==b && a>5;

  cout << "expression a==b && a>5 is " << c << endl;

  return 0;
}