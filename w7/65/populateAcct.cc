#include "main.ih"

void populateAcct(acct_v3 &acct, ifstream &stream)
{
  stream.read(reinterpret_cast<char*>(&acct), sizeof(acct_v3));
}
