#ifndef INCLUDED_ARG_
#define INCLUDED_ARG_

/*
        Singleton Class built around getopt() and getopt_long() (3)
*/


#include <string>
#include <getopt.h>

// Formally, this class leaks memory, but only when the program ends.
// There are cures against that, but we're not yet ready for that.
// Since the leakage has no negative consequences (i.e., the leak isn't 
// growing over time, we accept it for now.

#include "../argoption/argoption.h"
#include "../arglongoption/arglongoption.h"

class Arg
{
    typedef struct option  OptStruct;       // = getopt's struct opstruct

    std::string d_base;                     // argv[0]'s base name

    std::string *d_arg  = 0;                // the arguments
    size_t d_nArgs      = 0;

    ArgOption   d_option;                   // the options
    ArgLongOption d_longOption;

    static Arg *s_arg;                      // points to the Singleton Arg

    public:
        enum Type
        {
            None        = 0,
            Required    = 1,
            Optional    = 2,
            AsCharOption,           // see longoption2.cc
        };

        class LongOption
        {
            std::string d_name;
            Type        d_type;
            int         d_optionChar;
            
            public:        
                LongOption(char const *name, Type type = Arg::None);
                LongOption(char const *name, int optionChar);

                std::string const &name() const;            // in
                int optionChar() const;                     // in
                Type type() const;                          // in
        };

        static Arg &initialize(char const *optstring, int argc, char **argv);

        static Arg &initialize(char const *optstring,
                                LongOption const *const begin,
                                LongOption const *const end,
                                int argc, char **argv);

        static Arg &instance();        

        Arg(Arg const &other) = delete;             // no copy operations
        Arg &operator=(Arg const &other) = delete;

            // in: inline implementation

        std::string const &basename() const;        // in
        size_t nArgs() const;                       // in
        char const *arg(size_t idx) const;          // in (idx NOT checked)
        size_t nOptions() const;        // in. Total number of specified short 
                                        // (and combined long) options 
        size_t option(int option) const;                                // in
        size_t option(std::string const &optchars) const;               // 1
        size_t option(std::string *value, int optChar) const;           // in
        size_t option(std::string *value, char const *longOpt) const;   // in
                                  
        void versionHelp(void (*usage)(std::string const &progname), 
            char const *version, size_t minArgs, int helpFlag = 'h', 
            int versionFlag = 'v') const;

    private:
        Arg(char const *optstring, int argc, char **argv);      // 1

        Arg(char const *optstring,                              // 2
            LongOption const *const begin,
            LongOption const *const end,
            int argc, char **argv);

        std::string prepareArg(char const *argv0, char const *optstring);

        void setBasename(std::string const &argv0);
        void copyArgs(char const *const*from, char const *const *to);
        int longOptionChar(LongOption const &longOption);

        void fillLongOptions(OptStruct *optStruct,
                          std::string const &optString,
                          LongOption const *const begin,
                          LongOption const *const end);
        void addLongOption(OptStruct *optStruct,
                           std::string const &optString,
                           LongOption const &longOption);
        int setOptionType(std::string const &optString,
                          LongOption const &longOption);
};

inline std::string const &Arg::basename() const
{
    return d_base;
}

inline size_t Arg::nArgs() const
{
    return d_nArgs;
}

inline char const *Arg::arg(size_t idx) const
{
    return d_arg[idx].c_str();
}

inline size_t Arg::nOptions() const
{
    return d_option.size();
}

inline size_t Arg::option(int optChar) const
{
    return d_option.size(optChar);
}

inline size_t Arg::option(std::string *value, int optChar) const
{
    return d_option.size(value, optChar);
}

inline size_t Arg::option(std::string *value, char const *longOpt) const
{
    return d_longOption.size(value, longOpt);
}

inline std::string const &Arg::LongOption::name() const
{
    return d_name;
}

inline Arg::Type Arg::LongOption::type() const
{
    return d_type;
}

inline int Arg::LongOption::optionChar() const
{
    return d_optionChar;
}

#endif
