#include "test.ih"

test::test(int value)
:
  d_value(value)
{
  ++s_counter;
}
