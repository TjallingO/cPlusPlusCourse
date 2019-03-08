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
  size_t size() const;

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
size_t Expr<LHS, RHS, Operation>::size() const
{
  return d_lhs.size();
};

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

template<typename LHS, typename RHS>
Expr<LHS, RHS, std::multiplies> operator*(LHS const &lhs, RHS const &rhs)
{
  return Expr<LHS, RHS, std::multiplies>(lhs, rhs);
}

template<typename LHS, typename RHS>
Expr<LHS, RHS, std::plus> operator+(LHS const &lhs, RHS const &rhs)
{
  return Expr<LHS, RHS, std::plus>(lhs, rhs);
}

template<typename LHS, typename RHS>
Expr<LHS, RHS, std::divides> operator/(LHS const &lhs, RHS const &rhs)
{
  return Expr<LHS, RHS, std::divides>(lhs, rhs);
}
// As in 29, these work in this situation, but must be wary of scope issues
// as these depend on references

#undef EXPR_
#endif
