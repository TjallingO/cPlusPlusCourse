#include "main.ih"

int chartobin( string inputLoc, string outputLoc)
{
    ifstream iF( inputLoc );
    ofstream oF( outputLoc, ios::binary | std::ofstream::out | std::ofstream::trunc);

    char c;
    size_t nrtotalchars = filesize ( inputLoc );

    int8_t nrinlastbase = nrtotalchars % 4 - 1;
    //nr of chars in the last base, -1 since its starts counting at 1 instead
    // of 0

    oF.write(reinterpret_cast<char*>(&nrinlastbase), sizeof(char));

    while (!iF.eof())
    {
      class data d_data; //initialising nB and its values
      /*
      nB.nb1 = 0;
      nB.nb2 = 0;
      nB.nb3 = 0;
      nB.nb4 = 0;
      */

      for (size_t idx = 0; idx != 4; ++idx)
      {
        iF.get(c);
        if (c != 'A' && c != 'C' && c != 'G' && c != 'T' && c != '\n')
          return 1;
     //not for the new line which often occurs at the end of
     //files. and must be a valid base character

          d_data.popStruct(c, idx); //putting the characters in the struct
      }                          //so that we only have to use 1 byte for
                                 // 4 chars.

      oF.write(reinterpret_cast<char*>(&d_data.getNucleoBase()), sizeof(data::nucleobase));
    }
    oF.close();
  return 0;
}
