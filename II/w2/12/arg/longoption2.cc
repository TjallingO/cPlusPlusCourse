#include "arg.ih"

Arg::LongOption::LongOption(char const *name, int optionChar)
:
    d_name(name),
    d_type(AsCharOption),
    d_optionChar(optionChar)
{}
