#include "arg.ih"

//    called by fillLongOption() to fill the array of `struct option'
//    (OptStruct) elements to be interpreted by getopt_long(3)

void Arg::addLongOption(OptStruct *optStruct,
                        string const &optString,
                        LongOption const &longOption)
{
    optStruct->name = longOption.name().c_str();

    if (longOption.optionChar())       // existing single char. option
    {
        optStruct->has_arg = setOptionType(optString, longOption);
        optStruct->flag    = 0;
        optStruct->val     = longOption.optionChar();
    }
    else
    {
        optStruct->has_arg = longOption.type();

        static int notUsed;
        optStruct->flag    = &notUsed;
    }
}
