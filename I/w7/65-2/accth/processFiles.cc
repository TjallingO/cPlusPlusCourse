#include "accth.ih"

void AcctH::processFiles()
{
  size_t defaultFile = ( (d_clPars.nFiles == 1) ? 0 : 1 );
  // If no file specified, use default at position 0

  for (size_t idx = defaultFile; idx != d_clPars.nFiles; ++idx) // Iterate over files
  {
    std::ifstream accFile(d_clPars.filePaths[idx], std::ios::binary); // Open bin
    cout << '\n' << d_clPars.filePaths[idx] << '\n';  // Display filename
    processBin(accFile);  // Process binary file
  }
}
