// mathematical operators
#include <iostream>
using namespace std;

int main()
{
  int a = 10, b=20, c=5;
  int r;

  r = a + 10 * b - c;
  cout << "the result is" << r << endl;

  r = (a + 10) * b - c;
  cout << "the result is" << r << endl;

  r = (a + 10) * (b - c);
  cout << "the result is" << r;

  return 0;
}
