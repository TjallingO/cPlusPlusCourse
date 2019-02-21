#include "main.ih"

int main(int argc, char const **argv)
{

  double lhs[4][5] = {
    {0, 1, 2, 3, 4},
    {5, 6, 7, 8, 9},
    {0, 1, 2, 3, 4},
    {5, 6, 7, 8, 9}
  };

  Matrix<4, 5, double> a(lhs);

  Matrix<4, 5, double> b = a;


  //a.print();

  cout << b;

  //a.~Matrix();
}
