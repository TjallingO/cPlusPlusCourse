#ifndef INCLUDED_INSERTIONT_
#define INCLUDED_INSERTIONT_

template <class D>
std::ostream &Insertable::operator<<(std::ostream &out);
{
  for (auto el: this)
    out << el << '\n';
}

#endif
