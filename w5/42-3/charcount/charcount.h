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
    CharCount(std::istream &stream);

    Char *enlarge(Char *old, size_t oldsize, size_t newsize);
    //increasing the size of the array of Chars
    char const getChar(size_t index) const; //getChar since just Char as a
    //function name confused the compiler 
    //returns the character stored in Char[index]
    size_t const nChar() const;
    //returns the total number of different characters stored
    size_t const Count(size_t index) const;
    //returns the number of times the character stored in Char[index] occured
    CharInfo const *info() const;
    //returns a reference to the charInfo object
    void add(char character, size_t index);
    //increases the number of occurences of the character stored at Char[index]
    //by 1
    void append(char character, size_t index);
    //Calls enlarge and then adds the character at the highest index of
    //Char[index]
    void insert(char character, size_t index);
    //Calls enlarge, moves all characters at index and higher one to the right
    //then places the new character at the current index
    size_t locate(char character);
    //Finds where to insert the current character

};

inline char const CharCount::getChar(size_t index) const
{
  return d_charObject.ptr[index].ch;
}
//returns the character stored at Char[index]

inline size_t const CharCount::Count(size_t index) const
{
  return d_charObject.ptr[index].count;
}
//returns the number of times the character stored at Char[index] occured

inline size_t const CharCount::nChar() const
{
  return d_charObject.nChar;
}
//returns the total number of different characters stored

inline CharCount::CharInfo const *CharCount::info() const
{
  return &d_charObject;
}
//returns a reference to the charInfo object
#endif
