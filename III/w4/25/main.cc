#include "main.ih"

#include <vector>
#include <iostream>

int main(int argc, char const **argv)
{
  typedef Insertable<int, std::allocator, std::vector> InsertableVector;
  vector<int> vi {1, 2, 3, 4, 5};

  InsertableVector iv2;
  iv2[1] = 1;
  cout << iv2;
}
