#include "data.ih"

Data::Data(string inputLoc, string outputLoc)
{
  d_inputLoc = inputLoc;
  d_outputLoc = outputLoc;

  d_filesize = filesize ( d_inputLoc );

}
