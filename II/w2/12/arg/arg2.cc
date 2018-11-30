#include "arg.ih"

    // for the time being: exit is called on errors.

Arg::Arg(char const *optstring, 
         LongOption const *const begin, LongOption const *const end,
         int argc, char **argv)
{
    string opts{ prepareArg(optstring, argv[0]) };

                                   // create array of n structs for long option
                                   // specifications (the final one must be 0,
                                   //  getoptlong requirement)
    OptStructArray optStructs{ static_cast<size_t>(end - begin + 1) }; 
    fillLongOptions(optStructs.get(), optstring, begin, end);

    int longOptionIndex;       // receives the index of the long options
    while (true)
    {                           // get the next option
        switch (int opt = getopt_long(argc, argv, opts.c_str(), 
                                      optStructs.get(), &longOptionIndex))
        {
            case -1:        // all options processed: get the arguments
                copyArgs(argv + optind, argv + argc);
            return;

           case ':':
                cerr << "Option value missing for `--" << optopt << "'\n";
            exit(1);

            case '?':
                cerr << "Unknown option `--" << optopt << "'\n";
            exit(1);

            case 0:
                opt = longOptionChar(begin[longOptionIndex]);
                if (opt == 0)
                    break;
            [[fallthrough]];

            default:
                d_option.add(opt);
            break;    
        }
    }
}

