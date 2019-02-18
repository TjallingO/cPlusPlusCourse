#ifndef INCLUDED_INSERTERT_
#define INCLUDED_INSERTERT_

template <typename input>
Matrix<data> &&operator<<(Matrix<data> &&tmp, input anyT)
{
  std::ostringstream ss;
  ss << anyT;
  tmp.d_data += ss.str();
  return std::move(tmp);

}

#endif
