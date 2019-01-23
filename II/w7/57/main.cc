#include "main.ih"

int main(int argc, char const **argv)
{
  if (argc != 2)
  {
    cerr << "Please pass an argument";
    return 1;
  }

  string argvString = argv[1];
  int offset = stoi(argv[1]);

  auto adjClock = chrono::system_clock::now();
  time_t adjClockT = chrono::system_clock::to_time_t(adjClock);

  cout << "Current time      : " << put_time(localtime(&adjClockT), "%c") << '\n'
       << "Current time (GMT): " << put_time(gmtime(&adjClockT), "%c") << "\n"
       << "Adjusted time     : ";

  switch (argvString.back())
  {
    case 's':
      adjClockT = chrono::system_clock::to_time_t(adjClock + chrono::seconds{offset});
      cout << put_time(localtime(&adjClockT), "%c");
      break;
    case 'm':
      adjClockT = chrono::system_clock::to_time_t(adjClock + chrono::minutes{offset});
      cout << put_time(localtime(&adjClockT), "%c");
      break;
    case 'h':
      adjClockT = chrono::system_clock::to_time_t(adjClock + chrono::hours{offset});
      cout << put_time(localtime(&adjClockT), "%c");
      break;
    default:
      cout << "Invalid time offset.";
      return 1;
  }
}
