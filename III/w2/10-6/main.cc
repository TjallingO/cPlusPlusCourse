#include "main.ih"

int main(int argc, char const **argv)
{
  string test[2][2] = {
    {"hello", "bye"},
    {"nono", "yes"}
  };

  Matrix<2, 2, string> b = move(test);

  cout << b;

}
