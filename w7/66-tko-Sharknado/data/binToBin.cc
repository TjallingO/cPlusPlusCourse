#include "data.ih"

void Data::bintobin(ifstream &iF)
{
  ofstream oF( d_outputLoc, std::ofstream::out | std::ofstream::trunc);

  nucleobase oNB;
  int8_t nrinlastbyte = d_firstchar;

  oF.write(reinterpret_cast<char*>(&nrinlastbyte), sizeof(char));
  //reading the first byte which is an idicator of howmany characters are
  //stored in the last byte. And then writing this file to the new bin file.

  while(!iF.eof())
  {
    iF.read(reinterpret_cast<char*>(&oNB), sizeof(nucleobase));
    oF.write(reinterpret_cast<char*>(&oNB), sizeof(nucleobase));
  }
  //reading the other bytes and writing them to the new binary file.

}
