#include "main.ih"


double inner(double left[], double right[])
{
  array<double, sizeof(left)/sizeof(*left)> a = left;
  array<double, sizeof(right)/sizeof(*right)> b = right;
  return inner_product(a.begin(), a.end(), b.begin(), 0);
}

//typedef packaged_task<double (auto left, auto right)> Task;


int main(int argc, char const **argv)
{
  array<array<double, 5>, 4> lhs{
    0, 1, 2, 3, 4,
    5, 6, 7, 8, 9,
    0, 1, 2, 3, 4,
    5, 6, 7, 8, 9
  };

  array<array<double, 5>, 6> rhsT{
    0, 1, 2, 3, 4,
    5, 6, 7, 8, 9,
    0, 1, 2, 3, 4,
    5, 6, 7, 8, 9,
    5, 6, 7, 8, 9,
    0, 1, 2, 3, 4
  };


  double result[6][4];

  for (size_t col = 0; col < 4; ++col) {
    for (size_t row = 0; row < 6; ++row) {
      result[row][col] = inner(lhs[row], rhsT[col]);
    }
  }

  for (auto &row: result)
  {
    for (auto &val: row)
      cout << val << ' ';
    cout << '\n';
  }


}

//inner_product(lhs[row].begin(), lhs[row].end(), rhsT[col].begin(), 0);
