#include "arg.ih"

    // using exit for the time being...

void Arg::versionHelp(void (*usage)(string const &progname),
        char const *version, size_t minArgs, int helpFlag,
        int versionFlag) const
{
    if (option(versionFlag) && !option(helpFlag))       // show the version
    {                                                   // on request, unless
        cout << basename() << " V" << version << '\n';  // -h was requested
        throw char(1);
    }

    if (nArgs() < minArgs || option(helpFlag))  // provide usage on request
    {                                           // or if too few arguments
        usage(basename());
        throw char(1);
    }
}
