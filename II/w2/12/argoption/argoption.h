#ifndef INCLUDED_ARGOPTION_
#define INCLUDED_ARGOPTION_

#include <iosfwd>

class ArgOption
{
    struct Option
    {
        int optChar;
        size_t size;            // # times optChar was specified
        std::string **optVal;   // option values, optVal[idx] == 0: no value 
    };

    Option **d_opt      = 0;
    size_t d_size       = 0;    // size of the Option array

    size_t d_nOptions   = 0;    // # specified options 

    public:
        void add(int optChar);  // Option values (if available) are retrieved
                                // from optarg

        size_t size() const;                                    // in
        size_t size(int optChar) const;                         // 1
        size_t size(std::string *value, int optChar) const;     // 2

    private:
        void addValue(Option *ptr);
        void newOption(int optChar);

        Option *find(int optChar) const;
};
        
inline size_t ArgOption::size() const
{
    return d_nOptions;
}

#endif
