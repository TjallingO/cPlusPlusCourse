#include "main.ih"

void destroyDerived(Base *obj)
{
  /*
  Derived *tmp =  dynamic_cast<Derived *>(obj);
  tmp -> ~Derived();*/
  obj -> ~Base();
}
