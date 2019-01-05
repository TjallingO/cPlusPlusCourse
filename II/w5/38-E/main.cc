#include "main.ih"

int main(int argc, char **argv)
{
  Strings one("hello");
  one.add("bye");
  one += "ok";
  cout << one.size() << '\n'
  << one.at(0) << '\n'
  << one[1] << '\n'
  << one[2] << '\n'
  << one.capacity() << '\n';

  Strings two(one);
  cout << two[2] << '\n';
  two.resize(1);
  cout << two[2] << '\n'
  << two.capacity() << '\n';
  two.reserve(1);
  cout << two.capacity() << '\n';
}
