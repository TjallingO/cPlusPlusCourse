#include "main.ih"

#include <iostream>
#include <chrono>

int main(int argc, char const **argv)
{
  if (argc != 3)
  {
    cout << "Please pass two arguments.";
    return 1;
  }

  chrono::hours   inputHours(stoi(argv[1]));
  chrono::seconds inputSeconds(stoi(argv[2]));

  chrono::minutes outputMinutesH = inputHours;
  chrono::minutes outputMinutesS = chrono::duration_cast<chrono::minutes>(inputSeconds);

  cout << inputHours.count()   << " hours equals "
                               << outputMinutesH.count() << " minutes \n"
       << inputSeconds.count() << " seconds roughly equals "
                               << outputMinutesS.count() << " minutes";
}
