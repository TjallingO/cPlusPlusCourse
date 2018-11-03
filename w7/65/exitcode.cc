#include "main.ih"

string exitcode(__u32 exitcode) // Formats the exitcode print statements
{
  switch (exitcode)
  {
    case SIGTERM:               // Since these are already defined as ints,
      return "TERM";            // they can be used in this switch as-is
      break;
    case SIGKILL:
      return "KILL";
      break;
    default:
      return to_string(exitcode);
      break;
  }
}
