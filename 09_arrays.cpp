// arrays
#include <iostream>
using namespace std;

int main()
{
  int age[10];
  int points[3][2] = {{10, 20},
                      {30, 40},
                      {50, 60}};

  age[0] = 99;
  age[9] = age[0] - 9;

  cout << "The first array element is: " << age[0] << endl;
  cout << "And the last one is: " << age[9] << endl;
  cout << "First point of poinst is: " << points[0][0] << ", " << points[0][1];
  return 0;
}
