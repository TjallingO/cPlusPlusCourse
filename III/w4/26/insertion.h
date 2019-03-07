#ifndef INCLUDED_INSERTIONT_
#define INCLUDED_INSERTIONT_

template <class Insertable>
std::ostream &operator<<(std::ostream &out, Insertable &ins)
{
  for (auto el: ins)
    out << el << '\n';
  return out;
};

#endif
