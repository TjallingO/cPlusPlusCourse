#include "main.ih"

int main(int argc, char const **argv)
{
  Matrix<3, 2> matrix(cin);



  //Matrix<3, 2> matrix2(cin);

  //cout << (matrix == matrix2) << '\n';

  Matrix<3, 2> matrixsum;

  double doub = 1;
  matrixsum = matrix + doub;

  matrixsum.print();
}
