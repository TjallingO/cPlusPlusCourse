#include "data.ih"


int Data::chartobin(ifstream &iF)
{

    ofstream oF( d_outputLoc, ios::binary | std::ofstream::out |
       std::ofstream::trunc);

    char ch = d_firstchar;

    int8_t nrinlastbase = d_filesize % 4 - 1;
    //nr of chars in the last base, -1 since its starts counting at 1 instead
    // of 0

    oF.write(reinterpret_cast<char*>(&nrinlastbase), sizeof(char));

    while (!iF.eof())
    {

      nucleobase nB; //initialising nB and its values
      nB.nb1 = 0;
      nB.nb2 = 0;
      nB.nb3 = 0;
      nB.nb4 = 0;


      for (size_t idx = 0; idx != 4; ++idx)
      {
        if (ch != 'A' && ch != 'C' && ch != 'G' && ch != 'T' && ch != '\n')
          return 1;
     //not for the new line which often occurs at the end of
     //files. and must be a valid base character

         popStruct(nB, ch, idx); //putting the characters in the struct
         iF.get(ch);             //so that we only have to use 1 byte for
                                 //4 chars.
      }

      oF.write(reinterpret_cast<char*>(&nB), sizeof(nucleobase));
    }
    oF.close();
  return 0;
}
