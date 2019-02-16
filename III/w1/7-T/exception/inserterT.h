#ifndef INCLUDED_INSERTERT_
#define INCLUDED_INSERTERT_

template <typename inputT>
Exception &&operator<<(Exception &&in, inputT anyT)
{
  std::ostringstream ss;
  ss << anyT;
  in.str() += ss.str();
  return std::move(in);
}

#endif
