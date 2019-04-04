#include "parser.ih"

RuleValue &Parser::complement(RuleValue &e)
{
  e.d_number = ~round(e);
  e.d_type = RuleValue::VALUE;

  return e;
}
