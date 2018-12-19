#include "multi.ih"

Multi::Multi()
:
  Basic(10)
{
  cout << static_cast<Basic *>(this) << '\n';
}
