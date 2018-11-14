#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <iosfwd>
#include <string>
#include <fstream>
#include <istream>


class Data
{
    std::string d_inputLoc;
    std::string d_outputLoc;
    int d_filesize;
    char d_firstchar;

    struct nucleobase        // Struct that can hold four ints of 2 bits each.
    {                        // Hence, they can hold the numbers 0 through 3,
      unsigned char nb1 : 2; // or 00, 01, 10, 11 in binary, i.e.
      unsigned char nb2 : 2; // the four nucleobase options
      unsigned char nb3 : 2;
      unsigned char nb4 : 2;
    };

    enum nucleoInts          // enums that represent the nucleobase options.
    {                        // '= 0' is SF in this case but added for clarity.
      A = 0,
      C,
      T,
      G
    };

    public:

      Data(std::string inputLoc, std::string outputLoc);

      int writeFile(std::string optionb);

    private:

      char enumToChar(int nucEnum);

      enum nucleoInts charToEnum(char ch);

      char interpretStruct(nucleobase &nB, size_t idx);

      void popStruct(nucleobase &nB, char ch, size_t idx);

      std::ifstream::pos_type filesize(std::string filename);

      int chartobin(std::ifstream &iF);

      void bintochar(std::ifstream &iF);

      int chartochar(std::ifstream &iF);

      void bintobin(std::ifstream &iF);

      bool isItaBinaryFile(std::ifstream &iF);

      void binTo(std::ifstream &iF, std::string optionb);

      int charTo(std::ifstream &iF, std::string optionb);
};

#endif
