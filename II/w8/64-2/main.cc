#include "main.ih"

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

void innerProduct(promise<double> &ref, int row, int col)
{
  int sum = 0;
  for (int idx = 0; idx != 5; ++idx)
    sum += lhs[row][idx] * rhsT[col][idx];
  cout << row << ' ' << col << '\n';
  ref.set_value(sum);
}

int main(int argc, char const **argv)
{

  promise<double> result[4][6];

  for (int row = 0; row != 4; ++row)
  {
    for (int col = 0; col != 6; ++col)
      thread(innerProduct, ref(result[row][col]), row, col).detach();
  }

  for (int row = 0; row != 4; ++row)
  {
    for (int col = 0; col != 6; ++col)
      cout << setw(3) << result[row][col].get_future().get();
    cout << '\n';
  }


}

//inner_product(lhs[row].begin(), lhs[row].end(), rhsT[col].begin(), 0);
