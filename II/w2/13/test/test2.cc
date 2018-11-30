#include "test.ih"

test::test(test &copy)
:
  d_value(copy.d_value)
{
  ++s_counter;
}
