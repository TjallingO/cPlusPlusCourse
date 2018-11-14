#include "accth.ih"

AcctH::AcctH(int argc, char const **argv)
:
  d_clPars( clPars{0, static_cast<size_t>(argc), argv} )  // Initialise struct
{
  processArgv( static_cast<size_t>(argc) );  // Process argc/argv
  // Note that argc is passed again instead of nFiles, because the latter is
  // altered, and would therefore interfere with the loop in processArgv

  d_clPars.filePaths[0] = defaultPath;       // Re-use program name element for
}                                            // default file
