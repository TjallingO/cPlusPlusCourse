// Testing. Do not print.

#include <iostream>

int main()
{
  int *pointer[20];
  int a[2] = {10,15};
  pointer[3] = a;
  std::cout << *(pointer[3] + 1);
}
