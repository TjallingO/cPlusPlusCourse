#include "main.ih"

int main(int argc, char **argv)
{
  Strings zero(environ);
  cout << zero.capacity() << '\n';


  Strings one("hello");
  one.add("bye");
  one += "ok";
  cout << one.size() << '\n'
  << one.at(0) << '\n'
  << one[1] << '\n'
  << one[2] << '\n'
  << one.capacity() << '\n';

  Strings two(one);
  two.print();
  two.resize(1);
  two.print();
  two.reserve(1);
  two.print();
  cout << two[2] << '\n';
}
