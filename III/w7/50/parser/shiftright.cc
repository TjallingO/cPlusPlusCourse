#include "parser.ih"

RuleValue &Parser::shiftRight(RuleValue &lvalue, RuleValue &shiftby)
{
  lvalue.d_number = round(lvalue) >> round(shiftby);
  lvalue.d_type = RuleValue::VALUE;

  return lvalue;
}
