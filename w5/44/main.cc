#include "main.ih"

#include <iostream>

using namespace std;

void inv_identity(int *row){
  for (size_t rownr = 0; rownr < 10; ++rownr)
    {
      for (size_t colnr = 0; colnr < 10; ++colnr)
      {
        row[rownr][colnr] = 1;
      }
    }
}

int main(int argc, char **argv)
{
  int square[10][10];

  int *row = square[10];

  inv_identity(row);
  cout << row[5] << '\n';
}
