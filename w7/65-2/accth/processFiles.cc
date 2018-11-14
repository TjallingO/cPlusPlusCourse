#include "accth.ih"

void acctH::processFiles()
{
  size_t firstFile = ( (d_clPars.nFiles == 1) ? 0 : 1 );
  for (size_t idx = firstFile; idx != d_clPars.nFiles; ++idx)
  {
    std::ifstream accFile(d_clPars.filePaths[idx], std::ios::binary); // Open bin file
    cout << '\n' << d_clPars.filePaths[idx] << '\n';  // Display filename
    processBin(accFile);
  }
}
