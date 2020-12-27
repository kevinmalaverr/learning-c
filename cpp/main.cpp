#include <iostream>

using namespace std;

int main()
{

  // pointers

  int address = 3154;
  int *pointerToAddress;

  pointerToAddress = &address;
  *pointerToAddress = 5;

  cout << address << endl;

  return 0;
}