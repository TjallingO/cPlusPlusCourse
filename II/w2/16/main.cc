#include "main.ih"

int main(int argc, char const **argv)
{
  bool exceptionalCondition = true;

  string *stringArray;
  stringArray = new string{ "hello" };

  if (exceptionalCondition)
    exit(1);

  delete stringArray;
}
