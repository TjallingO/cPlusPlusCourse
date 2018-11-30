#include "arg.ih"

int Arg::longOptionChar(Arg::LongOption const &longOption)
{
    d_longOption.add(longOption.name());    // this adds adds the value (if
                                            // any) associated with the long
                                            // option to the ArgLongOption
                                            // object. It's also added to the
                                            // single char option (ArgOption)
                                            // object if the long option also
                                            // supports the single character
                                            // form. 

    return longOption.optionChar();         // this returnvalue is the single
                                            // character equivalent if
                                            // available, otherwise it's 0.
}
