#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <cstddef>

enum nucleoInts           // enums that represent the nucleobase options.
{                         // '= 0' is SF in this case but added for clarity.
  A = 0,
  C,
  T,
  G
};

class data
{
  public:
    struct nucleobase         // Struct that can hold four ints of 2 bits each.
    {                         // Hence, they can hold the numbers 0 through 3, or
      unsigned char nb1 : 2;  // 00, 01, 10, 11 in binary, i.e. the four nucleobase
      unsigned char nb2 : 2;  // options
      unsigned char nb3 : 2;
      unsigned char nb4 : 2;
    };

  private:
    nucleobase d_nB;

  public:
    enum nucleoInts charToEnum(char c);

    char interpretStruct(nucleobase &nB, size_t n);

    void popStruct(char c, size_t n);

    char enumToChar(int nucEnum);

    nucleobase getNucleoBase();

};

#endif
