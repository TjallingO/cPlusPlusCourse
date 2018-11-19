#include "accth.ih"

void AcctH::processBin(ifstream &stream)
{
  struct acct_v3 acct;  // Define new struct
  while( popAcct(acct, stream) )  // While structs can still be populated
    printAcct(acct);  // Print populated acct struct
}
