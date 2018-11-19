#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <iosfwd>
#include <string>
#include <fstream>

class Data
{
    std::string d_inputLoc;
    std::string d_outputLoc;

    struct nucleobase         // Struct that can hold four ints of 2 bits each.
    {                         // Hence, they can hold the numbers 0 through 3, or
      unsigned char nb1 : 2;  // 00, 01, 10, 11 in binary, i.e. the four nucleobase
      unsigned char nb2 : 2;  // options
      unsigned char nb3 : 2;
      unsigned char nb4 : 2;
    };

    enum nucleoInts           // enums that represent the nucleobase options.
    {                         // '= 0' is SF in this case but added for clarity.
      A = 0,
      C,
      T,
      G
    };

    public:

      Data(std::string inputLoc, std::string outputLoc);

      bool isItaBinaryFile( std::string inputLoc );

      void binTo(std::string inputLoc, std::string outputLoc, std::string optionb);

      int charTo(std::string inputLoc, std::string outputLoc, std::string optionb);

    private:

      char enumToChar(int nucEnum);

      enum nucleoInts charToEnum(char ch);

      char interpretStruct(nucleobase &nB, size_t idx);

      void popStruct(nucleobase &nB, char ch, size_t idx);

      std::ifstream::pos_type filesize(std::string filename);

      int chartobin( std::string inputlocation, std::string outputlocation);

      void bintochar( std::string inputLoc, std::string outputLoc);

      int chartochar( std::string inputLoc, std::string outputLoc);

      void bintobin( std::string inputLoc, std::string outputLoc);
};

#endif
