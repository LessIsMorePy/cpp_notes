// pointers
#include <iostream>
using namespace std;

int a = 10;
int *ptr;

int main()
{
  cout << "a before the pointer: " << a << endl;

  ptr = &a; // get address of a
  *ptr = 100;
  cout << "pointer value: " << *ptr << endl;
  cout << "a value: " << a;
}
