#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

ostream &now(std::ostream &stream)
{
  time_t currentTime = time(0);                 // Get caledar time
  tm lTime = *localtime(&currentTime);          // Convert to tm
  return stream << std::put_time(&lTime, "%c"); // %c refers to std. time/date string
}

int main()
{
  cout << now << '\n';                          // Print
}
