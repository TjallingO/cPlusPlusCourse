#include "parser.ih"

RuleValue &Parser::divide(RuleValue &lvalue, RuleValue &rvalue)
{
    lvalue.d_number = valueOf(lvalue) / valueOf(rvalue);
    lvalue.d_type = RuleValue::VALUE;

    return lvalue;
}
