#include "main.ih"

namespace
{
    char version[] = "1.00.00";

    Arg::LongOption longOptions[] =
    {
        Arg::LongOption{"required", Arg::Required},
        Arg::LongOption{"debug"},
        Arg::LongOption{"filenames", 'f'},
        Arg::LongOption{"help", 'h'},
        Arg::LongOption{"version", 'v'},
    };
    auto longEnd = longOptions + size(longOptions);
}

int main(int argc, char **argv)
try
{
    Arg &arg = Arg::initialize("vha:bf:", longOptions, longEnd, argc, argv);

    cout << arg.basename() << '\n';

    arg.versionHelp(usage, version, 1);

    for (size_t idx = 0; idx != arg.nArgs(); ++ idx)
        cout << "arg " << idx << ": " << arg.arg(idx) << '\n';

    cout << "n options: " << arg.nOptions() << "\n"
            "n Args: " << arg.nArgs() <<
            '\n';

    string value;
    size_t count = arg.option(&value, 'a');

    cout <<
        "option a count: " << count << ", value: " << value << "\n"
        "option b count: " << arg.option('b') <<
        '\n';

    count = arg.option(&value, 'f');

    cout <<
        "option f count: " << count << ", value: " << value <<
        '\n';

    count = arg.option(&value, "required");

    cout <<
        "option debug count: " << arg.option(0, "debug") << "\n"
        "option required count: " << count << ", value: " << value <<
        '\n';
}

catch (char ch)
{
  if (ch == 1)
    return 1;
  throw; //not the error we intended to catch so handle somewhere else
}

catch (...)
{
    cout << "done\n";
}
