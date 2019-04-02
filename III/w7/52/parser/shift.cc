#include "parser.ih"

#include <cmath>

// RuleValue &Parser::shift(RuleValue &lvalue, size_t shiftBy, enum direction)
// {
//   if (direction == left)
//     lvalue.d_number = static_cast<size_t>(valueOf(lvalue) >= 0 ? valueOf(lvalue) + 0.5 : valueOf(lvalue) - 0.5) << shiftBy;
//   else if (direction == right)
//     lvalue.d_number = static_cast<size_t>(valueOf(lvalue) >= 0 ? valueOf(lvalue) + 0.5 : valueOf(lvalue) - 0.5) >> shiftBy;
//
//   lvalue.d_type = RuleValue::VALUE;
//
//   return lvalue;
// }
