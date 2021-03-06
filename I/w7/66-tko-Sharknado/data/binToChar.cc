#include "data.ih"

void Data::bintochar(ifstream &iF)
{
  ofstream oF( d_outputLoc, std::ofstream::out | std::ofstream::trunc);

  nucleobase oNB;
  int8_t nrinlastbase = d_firstchar;

  //reading howmany characters are in the last byte and also increasing the
  //position in the file by one.
  size_t nrbytes = filesize( d_inputLoc ) - 1; //first byte is size of last byte

  size_t charcounter = 0;

  while (iF.read(reinterpret_cast<char*>(&oNB), sizeof(nucleobase)))
  {
    for (size_t idx = 0; idx != 4; ++idx)
      if (charcounter < 4 * nrbytes - (4 - nrinlastbase))
      {
          oF << interpretStruct(oNB, idx);
          ++charcounter;
      }
  }
  //reading the structs and writing their contained information into the new
  //character file. Up until the required number of characters are printed.
  //Since every byte contains 4 characters except the last one we need to do
  //this 4 times the nr of bytes minus the number of empty missing values
  //that are contained in the last byte.
}
