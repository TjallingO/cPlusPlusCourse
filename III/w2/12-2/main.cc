#include "main.ih"

#include <memory>


int main(int argc, char const **argv)
{
  Data test;
  string *lineone = new string("hello");
  shared_ptr<string> shline1 (lineone);

  test.add(shline1);
  test.add(shline1);

  Data test2(test);
}
