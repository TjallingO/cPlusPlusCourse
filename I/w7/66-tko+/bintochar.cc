#include "main.ih"

void bintochar( string inputLoc, string outputLoc)
{
  ifstream iF( inputLoc );
  ofstream oF( outputLoc, std::ofstream::out | std::ofstream::trunc);

  //data::nucleobase oNB;
  class data d_data;
  int8_t nrinlastbase;

  iF.read(reinterpret_cast<char*>(&nrinlastbase), sizeof(char));
  //reading howmany characters are in the last byte and also increasing the
  //position in the file by one.
  size_t nrbytes = filesize( inputLoc ) - 1; //first byte is size of last byte

  size_t charcounter = 0;

  while (iF.read(reinterpret_cast<char*>(&d_data.d_nB), sizeof(data::nucleobase)))
  {
    for (size_t idx = 0; idx != 4; ++idx)
      if (charcounter < 4 * nrbytes - (4 - nrinlastbase))
      {
          oF << d_data.interpretStruct(idx);
          ++charcounter;
      }
  }
  //reading the structs and writing their contained information into the new
  //character file. Up until the required number of characters are printed.
  //Since every byte contains 4 characters except the last one we need to do
  //this 4 times the nr of bytes minus the number of empty missing values
  //that are contained in the last byte.
}
