#ifndef INCLUDED_PLUSDELUXET_
#define INCLUDED_PLUSDELUXET_

template<typename RetType>
struct plusdeluxe
{
  RetType operator()(const RetType &lhs, const RetType &rhs) const
  {
    return lhs + rhs;
  }
};

#endif
