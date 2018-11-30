#include "arg.ih"

    // for the time being: exit is called on errors.

Arg::Arg(char const *optstring, int argc, char **argv)
{
    string opts{ prepareArg(optstring, argv[0]) };

    while (true)                    // process all options
    {
                                    // get the next option
        switch (int opt = getopt(argc, argv, opts.c_str()))
        {
            case -1:        // all options processed: get the arguments
                copyArgs(argv + optind, argv + argc);
            return;

            case ':':
                cerr << "Option value missing for `-" << optopt << "'\n";
            throw char(1);

            case '?':
                cerr << "Unknown option `-" << optopt << "'\n";
            throw char(1);

            default:
                d_option.add(opt);
            break;
        }
    }
}
