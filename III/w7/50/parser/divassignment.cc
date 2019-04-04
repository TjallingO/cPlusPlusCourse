#include "parser.ih"

RuleValue &Parser::divassignment(RuleValue &lvalue, RuleValue &rvalue)
{
  if (valueOf(rvalue) == 0)
    error("Division by zero is undefined.");

  lvalue.d_number = valueOf(lvalue) / valueOf(rvalue);
  lvalue.d_type = RuleValue::VALUE;

  return lvalue;
}
