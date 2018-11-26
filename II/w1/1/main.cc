#include "main.ih"

void fun(First::Enum symbol)
{
  std::cout << "Main fun called \n";
}

int main(int argc, char const **argv)
{
  fun(First::FIRST);
}
