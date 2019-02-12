#ifndef _AST
#define _AST

template <typename outputT, typename inputT>
outputT as(inputT value)
{
  return static_cast<outputT>(value);
};

#endif
