#include "main.ih"

#include <cmath>

int main(int argc, char const **argv)
{
  if (argc != 3)                          // Conditional exit
  {
    cout << "Please pass two arguments.";
    return 1;
  }

  chrono::hours   inputHours(stoi(argv[1]));    // Arg 1, input hours
  chrono::seconds inputSeconds(stoi(argv[2]));  // Arg 2, input seconds

  chrono::minutes outputMinutesH = inputHours;
  // Conversion from hours to minutes: more granular, no cast
  chrono::minutes outputMinutesS =
    chrono::duration_cast<chrono::minutes>(inputSeconds);
  // Conversion from seconds to minutes: less granular, loses precision, needs
  // cast

  cout << inputHours.count()   << " hours equals "
                               << outputMinutesH.count() << " minutes \n"
       << inputSeconds.count() << " seconds roughly equals "
                               << outputMinutesS.count() << " minutes";
  // Output
}
