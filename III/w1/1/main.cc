#include <iostream>
#include "add.h"
#include "pointerunion.h"

void fun();

int main(int argc, char const **argv)
{
  PointerUnion pu = { add };

  fun();
  std::cout << pu.vp << '\n';
}

// use only source 1 or only source 2 when compiling. In both cases the same 
// adress is printed twice.
