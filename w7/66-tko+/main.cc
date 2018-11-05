#include "main.ih"




int main(int argc, char const *argv[])
{
  string inputLoc = argv[1];
  string outputLoc = argv[2];
  string optionb;
  if (argv[3])
    optionb = argv[3];

    //nog geen verkeerde teken detection


  ifstream iF( inputLoc );
  //ifstream txtF("./hChr1.txt");
  ofstream oF( outputLoc, ios::binary);
  oF.open( outputLoc, std::ofstream::out | std::ofstream::trunc);
  oF.close();

  oF.open( outputLoc, ios::binary | fstream::app);//??opencloseopen??

  //filesize( inputLoc ); gebruik ik niet

  if(true)
  {
    nucleobase oNB;
    if (iF.read(reinterpret_cast<char*>(&oNB), sizeof(nucleobase)))
      cout << "binfile\n";
    else
      cout << "charfile\n";
  }



  char ch; //extra functie aanroepen minder werk dan bestand openen en sluiten i guess?
  if (iF.get(ch))
  {
    if (ch == 'A' || ch == 'C' || ch == 'G' || ch == 'T' )
      cout << ch << '\n';
    else
      cout << "error bad input char: " << ch << '\n';
  }

  iF.seekg(0, ios::beg); //liever niet seek dus wschijnlijk meer functies

  //chartobin
  if (optionb == "-b")
  {
    char c;
    while (!iF.eof())
    {
      nucleobase nB;
      for (size_t idx = 0; idx != 4; ++idx)
      {
        iF.get(c);
        popStruct(nB, c, idx);
      }
      oF.write(reinterpret_cast<char*>(&nB), sizeof(nucleobase));
    }
    oF.close();
  }
  //bintochar
  if (!argv[3])
  {
    ifstream iF( inputLoc, ios::binary);
    nucleobase oNB;

    while(!iF.eof())
    {
      iF.read(reinterpret_cast<char*>(&oNB), sizeof(nucleobase));
      for (size_t idx = 0; idx != 4; ++idx)
        oF << printStruct(oNB, idx);
    }
  }
  return 0;
}
