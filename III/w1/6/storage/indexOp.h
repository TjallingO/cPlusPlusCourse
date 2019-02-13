#ifndef INCLUDED_INDEXOPT_
#define INCLUDED_INDEXOPT_

template <typename inputT>
size_t Storage::operator[](inputT const inputVar) const
{
  return d_data.at(static_cast<size_t>(inputVar));
}

#endif
// This is only a 'safe' index operator. Does a non-safe one (i.e. one that
// allows for insertion) also have to be created?
