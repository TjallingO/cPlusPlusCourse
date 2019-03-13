#ifndef INCLUDED_INSERTIONT_
#define INCLUDED_INSERTIONT_

template <typename Out, class Insertable>
Out &operator<<(Out &out, const Insertable &ins)
{
  for (auto el: ins)
    out << el << '\n';
  return out;
};

#endif
// Note: ostream as template parameter instead; otherwise it interferes with
// the one in the std. library that already has a insertion operator with
// one template parameter (ambiguous)
