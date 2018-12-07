#include "main.ih"

int main(int argc, char const **argv)
{
  Base myBase;
  myBase.hello();
  Derived myDerived;
  myDerived.hello();
}
