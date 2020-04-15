// references
#include <iostream>
using namespace std;

int main()
{
   int a =10;
   int &ptr = a;

   ptr = 100;
   cout << "a: " << a << endl;
   cout << "ptr: " << ptr;
  return 0;
}
