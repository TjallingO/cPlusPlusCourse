#include "accth.ih"

bool acctH::popAcct(acct_v3 &acct, ifstream &stream)
{
  if ( stream.read(reinterpret_cast<char*>(&acct), sizeof(acct_v3)) ) // Read in one struct
    return 1;
  else
    return 0;
}
