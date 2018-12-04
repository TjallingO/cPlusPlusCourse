#include "derived.ih"

Derived::Derived()
{
  Base::msg();
  Base::halve();
  //Base::recompute(); private
}
