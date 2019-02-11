#ifndef INCLUDED_SMOOTH_
#define INCLUDED_SMOOTH_

template<typename rT>
Operator operator+(Operator const &leftSide, rT const &rightSide)
{
  Operator smoothOp(leftSide);
  smoothOp += rightSide;
  return smoothOp;
}

#endif
