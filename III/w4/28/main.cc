#include "main.ih"

int main(int argc, char const **argv)
{
  cout << "plain :" << Basic<int>::value << '\n'
       << "pointer :" << Basic<int*>::value << '\n'
       << "reference :" << Basic<int&>::value << '\n'
       << "rvalue reference :" << Basic<int&&>::value << '\n';
}
