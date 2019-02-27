#ifndef INCLUDED_INSERTIONT_
#define INCLUDED_INSERTIONT_

template <class Derived>
std::ostream &operator<<(std::ostream &out, Base<Derived> &base)
{
  return base.insertInto(out);
}

#endif
