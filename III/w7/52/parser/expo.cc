#include "parser.ih"

RuleValue &Parser::expo(RuleValue &input)
{
  input.d_number = exp(valueOf(input));
  input.d_type = RuleValue::VALUE;

  return input;
}
