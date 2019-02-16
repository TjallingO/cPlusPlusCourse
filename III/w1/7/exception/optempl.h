#ifndef OPERT_
#define OPERT_

template <typename inputT>
Exception &&operator<<(Exception &&in, inputT input)
{
  std::ostringstream ss;
  ss << input;
  in.d_what += ss.str();
  return std::move(in);
}

#endif
