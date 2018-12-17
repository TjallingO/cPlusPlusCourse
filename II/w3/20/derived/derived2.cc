#include "derived.ih"

Derived::Derived(Derived &other)
:
  Base::Base(move(other))
{
  cout << "Derived copy constructor\n";
}
