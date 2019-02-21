#include "main.ih"

#include <iostream>

int main(int argc, char const **argv)
{
  Storage myStorage("hello");
  cout << myStorage.begin();
}
