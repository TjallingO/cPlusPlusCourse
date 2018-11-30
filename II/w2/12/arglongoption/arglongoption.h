#ifndef INCLUDED_ARGLONGOPTION_
#define INCLUDED_ARGLONGOPTION_

#include <string>

class ArgLongOption
{
    struct Option
    {
        std::string longOpt;
        size_t size;            // # times longOpt was specified

        std::string **optVal;   // option values, optVal[idx] == 0: no value 
    };

    Option **d_opt      = 0;
    size_t d_size       = 0;        // size of the options array

    size_t d_nOptions   = 0;        // # specified long options

    public:
        void add(std::string const &name);  // long option name. Option values
                                    // are retrieved from optarg

        size_t size(std::string *val, char const *longOpt) const;

    private:
        void addValue(Option *ptr);
        void newOption(std::string const &longOpt);

        Option *find(std::string const &longopt) const;
};
        
#endif
