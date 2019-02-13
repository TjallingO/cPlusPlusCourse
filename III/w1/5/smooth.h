#ifndef INCLUDED_SMOOTHT_
#define INCLUDED_SMOOTHT_

template<typename rT>
Operator operator+(Operator const &leftSide, rT const &rightSide)
{
  Operator smoothOp(leftSide);  // Returns a new variable
  smoothOp += rightSide;        // constructed from left and right
  return smoothOp;              // Left has to be Operator, right any
}

#endif
