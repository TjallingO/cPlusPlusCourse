#ifndef INCLUDED_EXPRT_
#define INCLUDED_EXPRT_

#define EXPR_ template<typename LHS, \
                       typename RHS, \
                       template<typename> class Operation>

#include <cstddef>
#include <functional>

EXPR_
struct Expr;

// Trait class
template<typename RHS>
struct BasicType
{
  typedef RHS ObjType;
};

EXPR_
struct BasicType<Expr<LHS, RHS, Operation>>
{
  typedef typename Expr<LHS, RHS, Operation>::ObjType ObjType;
};

EXPR_
struct Expr
{
  typedef typename BasicType<RHS>::ObjType ObjType;
  typedef typename ObjType::value_type value_type;

  LHS const &d_lhs;
  RHS const &d_rhs;

  Expr(LHS const &lhs, RHS const &rhs);

  value_type operator[](size_t ix) const;
  operator ObjType() const;
};

EXPR_
Expr<LHS, RHS, Operation>::Expr(LHS const &lhs, RHS const &rhs)
:
  d_lhs(lhs),
  d_rhs(rhs)
{};

EXPR_
typename Expr<LHS, RHS, Operation>::value_type Expr<LHS, RHS, Operation>::operator[](size_t ix) const
{
  static Operation<value_type> operation;
  return operation(d_lhs[ix], d_rhs[ix]);
}

EXPR_
Expr<LHS, RHS, Operation>::operator Expr<LHS, RHS, Operation>::ObjType() const
{
  ObjType retVal;
  for (size_t ix = 0; ix != d_lhs.size(); ++ix)
    retVal.push_back((*this)[ix]);
  return retVal;
}

#include "plusdeluxe.h"
template<typename LHS, typename RHS>
Expr<LHS, RHS, plusdeluxe> operator+(LHS const &lhs, RHS const &rhs)
{
  return Expr<LHS, RHS, plusdeluxe>(lhs, rhs);
}
// Works in this case, but depends on the continued existence of
// its constituents. In other cases, RBV may be better.

#undef EXPR_
#endif
