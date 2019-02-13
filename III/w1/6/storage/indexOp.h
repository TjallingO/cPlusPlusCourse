#ifndef INCLUDED_INDEXOP_
#define INCLUDED_INDEXOP_

template <typename inputT>
size_t Storage::operator[](inputT const inputVar) const
{
  return d_data.at(static_cast<size_t>(inputVar));
}

#endif
