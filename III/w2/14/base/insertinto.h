#ifndef INCLUDED_INSERTINTOT_
#define INCLUDED_INSERTINTOT_

template <class Derived>
std::ostream &Base<Derived>::insertInto(std::ostream &out)
{
  return static_cast<Derived *>(this)->insertInto(out);
}

#endif
