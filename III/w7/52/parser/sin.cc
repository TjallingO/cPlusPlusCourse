#include "parser.ih"

RuleValue &Parser::sinfun(RuleValue &input)
{
    input.d_number = sin(valueOf(input));
    input.d_type = RuleValue::VALUE;

    return input;
}
