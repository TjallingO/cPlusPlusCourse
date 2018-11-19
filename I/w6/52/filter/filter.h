#ifndef INCLUDED_FILTER_
#define INCLUDED_FILTER_

#include <iosfwd>
#include "../strings/strings.h"

class Filter
{
    Strings d_lines;

    public:
        Filter(std::istream &in);
        ~Filter();

        void display() const;

    private:

        static bool empty(std::string const &str);

        static size_t firstNonEmpty(size_t size, std::string const *str);
        static size_t beyondLastNonEmpty(size_t size, std::string const *str);


};

#endif
