#include "accth.ih"

void AcctH::processArgv(size_t argc)
{
  for (size_t idx = 0; idx != argc; ++idx) // Iterate over arguments
  {
    if ( strcmp(d_clPars.filePaths[idx], "-a") == 0 ) // If -a is found
    {
      d_clPars.allExits = 1;  // Set bool to display all all exits
      --d_clPars.nFiles;      // Number of files are therefore one less than argc
      d_clPars.filePaths[idx] = d_clPars.filePaths[d_clPars.nFiles];
    }                                // Replace -a with last filename in list
  }
}
