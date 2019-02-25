#include "main.ih"

int main(int argc, char const **argv)
{

  double lhs[4][5] = {
    {0, 1, 2, 3, 4},
    {5, 6, 7, 8, 9},
    {0, 1, 2, 3, 4},
    {5, 6, 7, 8, 9}
  };

  string test[2][2] = {
    {"hello", "bye"},
    {"nono", "yes"}
  };
  //
  // Matrix<4, 5, double> a(lhs);
  //
  // Matrix<4, 5, double> b = a;

  //Matrix<2, 2, string> b(move(test));
  Matrix<2, 2, string> b = move(test);

  //a.print();

  cout << b;

  //a.~Matrix();
}
