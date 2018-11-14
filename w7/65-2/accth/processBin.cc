#include "accth.ih"

void acctH::processBin(ifstream &stream)
{
  struct acct_v3 acct;  // Define new struct
  while( popAcct(acct, stream) )  // Populate that struct from the ifstream file
    printAcct(acct);
}
