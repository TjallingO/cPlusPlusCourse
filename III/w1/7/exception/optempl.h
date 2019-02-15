#ifndef OPERT_
#define OPERT_

template <class Exception>
Exception &&operator<<(Exception &&in, int input)
{
  std::string tmp = std::to_string(input);
  in.d_what += tmp;
  return std::move(in);
}

template <class Exception, typename inputT>
Exception &&operator<<(Exception &&in, inputT input)
{
  in.d_what += input;
  return std::move(in);
}


#endif
