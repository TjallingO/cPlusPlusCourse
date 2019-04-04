#include "parser.ih"

RuleValue &Parser::modassignment(RuleValue &lvalue, RuleValue &rvalue)
{
  lvalue.d_number = (round(lvalue) % round(rvalue));
  lvalue.d_type = RuleValue::VALUE;

  return lvalue;
}
