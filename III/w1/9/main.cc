#include "main.ih"

#include <iostream>
#include <string>

template <typename lTypeT, typename rTypeT>
inline auto const max(lTypeT const left, rTypeT const right)
{
  cout << "Template";
  return left > right ? left : right;
}

// double max(double const &left, double const &right)
// {
//   cout << "Non-template \n";
//   return left > right ? left : right;
// }

int main()
{
  auto whatVar = 'a';
  string left = "hello";
  cout << typeid(whatVar).name();
  cout << ::max(left, 12) << endl;
}
