#include "derived.ih"

Derived::Derived(Derived &&tmp)
:
  Base::Base(tmp)
{
  cout << "Derived move constructor\n";
}
