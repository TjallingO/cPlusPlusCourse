#include "main.ih"

string exitcode(__u32 exitcode)
{
  switch (exitcode)
  {
    case SIGTERM:
      return "TERM";
      break;
    case SIGKILL:
      return "KILL";
      break;
    default:
      return to_string(exitcode);
      break;
  }
}
