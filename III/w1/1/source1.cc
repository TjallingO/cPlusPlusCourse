#include <iostream>
#include "add.h"
#include "pointerunion.h"

void fun2()
{
  PointerUnion pu = { add };

  std::cout << pu.vp << '\n';
}
