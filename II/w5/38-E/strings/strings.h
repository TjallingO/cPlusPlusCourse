#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <string>
#include <vector>

class Strings
{
      std::vector<std::string> d_str;

    public:
      Strings() = default;
      ~Strings() = default;

      Strings(std::string const &input);
      Strings(int argc, char *argv[]);
      Strings(char **environLike);

      void add(std::string const &input);
      size_t size();
      size_t capacity();
      std::string at(size_t idx);
      void resize(size_t newsize);
      void reserve(size_t newsize);

      void print() const;      // Testing


      std::string &operator[](size_t idx);    //index operator
      void operator+=(std::string input);

    private:
};

#endif
