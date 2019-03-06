#include "plusdeluxe.h"
template <typename LHS, typename RHS, template<typename> class Operation>
auto operator+(LHS const &lhs, RHS const &rhs)
{
  return Expr<LHS, RHS, plusdeluxe> { lhs, rhs };
}
