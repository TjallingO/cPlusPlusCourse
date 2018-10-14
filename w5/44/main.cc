#include "main.ih"

#include <iostream>

using namespace std;

void printArray(int square[][10], size_t dimension)
{
  for (size_t column = 0; column != dimension; ++column)
  {
    for (size_t row = 0; row != dimension; ++row)
    {
      cout << square[column][row] << " ";
    }
    cout << '\n';
  }
};

void inv_identity(int* passedRow[][10])
{
  for (int *left = passedRow; column != 10; ++column)
  {
    for (size_t row = 0; row != 10; ++row)
    {
      if (row == column)
        passedRow[row][column] = 0;
      else
        passedRow[row][column] = 1;
    }
    cout << '\n';
  }
};

int main(int argc, char **argv)
{
  int square[10][10];

  int (*row)[10] = square ;

  inv_identity(row);
  printArray(square, 10);
  cout << "HELLO: " << (row[3][1]) << '\n';
}
