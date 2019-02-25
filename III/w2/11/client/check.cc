#include "client.h"

bool Client::check()
{
  if (s_continue == false)
    return false; // throw?
  else
    return true;
}
