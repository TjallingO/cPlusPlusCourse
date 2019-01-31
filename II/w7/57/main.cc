#include "main.ih"

int main(int argc, char const **argv)
{
  if (argc != 2)                        // Conditional exit
  {
    cerr << "Please pass an argument";
    return 1;
  }

  string argvString = argv[1];  // Offset string (for s, m, h)
  int offset = stoi(argv[1]);   // Offset integer, int for possible negatives

  auto adjClock = chrono::system_clock::now();                  // Curr. time
  time_t adjClockT = chrono::system_clock::to_time_t(adjClock); // Same, time_t

  cout << "Current time      : " << put_time(localtime(&adjClockT), "%c") << '\n'
       << "Current time (GMT): " << put_time(gmtime(&adjClockT), "%c") << "\n"
       << "Adjusted time     : ";
  // Basic output of current time in local timezone and GMT

  switch (argvString.back())
  {
    case 's':
      adjClockT =
        chrono::system_clock::to_time_t(adjClock + chrono::seconds{offset});
      break;
    case 'm':
      adjClockT =
        chrono::system_clock::to_time_t(adjClock + chrono::minutes{offset});
      break;
    case 'h':
      adjClockT =
        chrono::system_clock::to_time_t(adjClock + chrono::hours{offset});
      break;
    default:
      cout << "Invalid time offset."; // Invalid input
      return 1;
  }
  // Switch based on last letter of input string (s, m, h): determines offset
  // for adjusted time
  cout << put_time(localtime(&adjClockT), "%c");
}
