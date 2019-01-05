#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <string>
#include <vector>

class Strings
{
      std::vector<std::string> d_str;

    public:
      Strings();
      Strings(std::string);

      void add(std::string input);
      size_t size();
      size_t capacity();
      std::string at(size_t idx);
      void resize(size_t newsize);
      void reserve(size_t newsize);

      std::string &operator[](size_t idx);    //index operator
      void operator+=(std::string input);

    private:
};

#endif
