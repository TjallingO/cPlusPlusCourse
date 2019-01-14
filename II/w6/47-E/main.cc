#include "main.ih"
#include "algorithm"

bool myfunction (int i, int j)
{
  return (i<j);
}

int main(int argc, char **argv)
{
  int ints[] = {0, 0, 0};
  copy(argv[1], argv[3], ints);
  //sort(*ints, ints[2], myfunction);


  for (size_t idx = 0; idx < 3; ++idx)
    cout << ints[idx];
  cout << '\n';

}
