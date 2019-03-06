#ifndef INCLUDED_PRINTVECTORT_
#define INCLUDED_PRINTVECTORT_

#include <iostream>

template <typename T>
void print(T inputVector)
{
  for (auto &el: inputVector)
    std::cout << el << ' ';
  std::cout << '\n';
}

#endif
