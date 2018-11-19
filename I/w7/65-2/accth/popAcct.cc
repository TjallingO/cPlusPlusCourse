#include "accth.ih"

bool AcctH::popAcct(acct_v3 &acct, ifstream &stream)
{
  if ( stream.read(reinterpret_cast<char*>(&acct), sizeof(acct_v3)) )
    return 1;                                           // Read in one struct
  else
    return 0;
  // Returns boolean according to whether a struct was read
}
