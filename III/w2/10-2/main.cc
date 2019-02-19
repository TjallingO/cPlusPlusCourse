#include "main.ih"

int main(int argc, char const **argv)
{
  Matrix<3, 2> matrix(cin);

  matrix.print();

  Matrix<3, 2> matrix2(cin);

  cout << (matrix == matrix2) << '\n';
}
