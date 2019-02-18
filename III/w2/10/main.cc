#include "main.ih"

int main(int argc, char const **argv)
{
  /*
  double lhs[4][5] = {
    {0, 1, 2, 3, 4},
    {5, 6, 7, 8, 9},
    {0, 1, 2, 3, 4},
    {5, 6, 7, 8, 9}
  };

  double rhsT[6][5] = {
    {0, 1, 2, 3, 4},
    {5, 6, 7, 8, 9},
    {0, 1, 2, 3, 4},
    {5, 6, 7, 8, 9},
    {5, 6, 7, 8, 9},
    {0, 1, 2, 3, 4}
  };
*/

  int input[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

  Matrix<int> test ( 3, 4, input );
  //Matrix<int> test(3,4);
  //test << 3;

  cout << test;
/*
  for (size_t idx = 0; idx < 3; ++idx)
  {
    for (size_t i = 0; i < 4; ++i) {
      cerr << test.front() << '\t';
      test.pop_front();
    }

    cout << '\n';
  }
*/


}
