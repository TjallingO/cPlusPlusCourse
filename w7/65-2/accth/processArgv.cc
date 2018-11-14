#include "accth.ih"

void acctH::processArgv()
{
  for (size_t idx = 0; idx != d_clPars.nFiles; ++idx)
  {
    if ( strcmp(d_clPars.filePaths[idx], "-a") == 0 )
    {
      d_clPars.allExits = 1;
      --d_clPars.nFiles;
      d_clPars.filePaths[idx] = d_clPars.filePaths[d_clPars.nFiles];
    }
  }
}
