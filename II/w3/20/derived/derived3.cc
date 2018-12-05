#include "derived.ih"

Derived::Derived(Derived &&tmp)
{
  cout << "Derived move constructor\n";
}
