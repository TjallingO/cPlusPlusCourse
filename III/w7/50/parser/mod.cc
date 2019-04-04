#include "parser.ih"

RuleValue &Parser::mod(RuleValue &lvalue, RuleValue &rvalue)
{
  lvalue.d_number = round(lvalue) % round(rvalue);
  lvalue.d_type = RuleValue::VALUE;

  return lvalue;
}
