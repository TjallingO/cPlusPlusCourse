#include "main.ih"

Base *newDerived(Base obj)
{
  obj.~Base();
  //delete obj;
  return new Derived;
}
