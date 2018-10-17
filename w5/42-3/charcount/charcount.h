#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iosfwd>


class CharCount
{
  public:
    struct Char
    {
      char ch;      //the character
      size_t count = 0; //number of occurences
    };

    struct CharInfo
    {
      Char *ptr = new Char[1]; //field ptr pointing to struct char objects
      size_t nChar = 0; //nr char objects stored
    };

  private:
    CharInfo d_charObject;

  public:
    CharCount(std::istream& stream);

    Char *enlarge(Char *old, size_t oldsize, size_t newsize);
    char const getChar(size_t index) const;
    size_t const getnChar() const;
    size_t const getCount(size_t index) const;
    CharInfo const *info() const;
    void add(char character, size_t index);
    void append(char character, size_t index);
    void insert(char character, size_t index);
    size_t locate(char character);

};

inline char const CharCount::getChar(size_t index) const
{
  return d_charObject.ptr[index].ch;
}

inline size_t const CharCount::getCount(size_t index) const
{
  return d_charObject.ptr[index].count;
}

inline size_t const CharCount::getnChar() const
{
  return d_charObject.nChar;
}
inline CharCount::CharInfo const *CharCount::info() const
{
  return &d_charObject;
}

#endif
