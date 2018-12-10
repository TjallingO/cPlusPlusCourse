#include "main.ih"

void caller(Base &obj)
{
  Derived &tmp = static_cast < Derived &> (obj);
  tmp.hello();
}

//Bad practise since now we have a tmp derived class which has no members
//other than the base members so when it needs to use members which a derived
//object should have it gives an error. Which is unexpected behaviour.

int main(int argc, char const **argv)
{
  Base myBase;
  myBase.hello();
  Derived myDerived;
  myDerived.hello();
  myDerived.Base::hello();
  caller(myBase);
}
