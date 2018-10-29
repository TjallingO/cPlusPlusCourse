#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

size_t find_nth(const string& haystack, size_t pos, const char needle, size_t nth)
{
    size_t found_pos = haystack.find(needle, pos);
    if(0 == nth || string::npos == found_pos)  return found_pos;
    return find_nth(haystack, found_pos+1, needle, nth-1);
}

size_t min(size_t a, size_t b)
{
    return a > b ? b : a;
};

int main (int argc, char **argv)
{
  char part = '1';
  string email = "tjalling@taikie.com";
  string curlCommand  = string("curl --fail -s -S -m 2 -u ")
                      + string(email.substr(0, email.find('@')))
                      + string(" https://www.icce.rug.nl/edu/")
                      + part
                      + string("/results/")
                      + email
                      + string("/ > ./NNKscz9GvF.txt");

  system(curlCommand.c_str());

  ifstream dFile ("./NNKscz9GvF.txt");

  if (dFile.peek() == ifstream::traits_type::eof())
  {
    cerr << "Something went wrong downloading the file.\n";
    system("rm ./NNKscz9GvF.txt");
    return 0;
  }

  cout << "====== Part " << part << " ====== \n";

  string results;
  string difficulties;
  string setPerc;
  string lastElSetString;
  size_t exs = 0;
  //size_t variant = 0;
  size_t avg = 0;

  if (dFile.is_open())
  {
    size_t lineNr = 0;
    while (! dFile.eof() )
    {
      ++lineNr;
      string line;
      getline (dFile,line);
      switch (lineNr)
      {
        case 21:
          exs = stoi(line.substr(line.find_first_of("0123456789", 0), line.length()));
          break;
        case 40:
          lastElSetString = line;
          break;
        case 46:
          setPerc = line;
          break;
        case 53:
          results = line;
          results.resize(70);
          break;
        case 54:
          difficulties = line;
          difficulties.resize(70);
          break;
        case 57:
          results += line;
          break;
        case 58:
          difficulties += line;
          break;
      }
    }
    dFile.close();
  }
  else
  {
    cerr << "Unable to open file \n";
    return 0;
  }

  size_t numSets = std::count(setPerc.begin(), setPerc.end(), '%') - 2;
  size_t exerciseEl = 0;
  //size_t avgOfSets = 0;
  size_t setCounter = 0;
  if (argc > 1)
    setCounter = stoi(argv[1]);

  for (size_t set = 1; set != numSets + 1; ++set, setCounter--)
  {
    size_t percPlace = find_nth(setPerc, 0, '%', set - 1);
    size_t score = stoi(setPerc.substr(percPlace - 3, 3));
    size_t lastElSet = min(stoi(lastElSetString.substr(3 * (set - 1), 2)), exs);

    cout << "Set " << set << "\t\t" << score << '%' << '\n';

    for ( ; exerciseEl != lastElSet && exerciseEl != exs; ++exerciseEl)
      cout << exerciseEl + 1            << '\t'
           << results[exerciseEl]       << '\t'
           << difficulties[exerciseEl]  << '\n';

    cout << '\n';

    if (setCounter != 0)
      avg += score;
  }
  if (argc > 1)
    cout  << "Overall average of the first "
          << argv[1]
          << " sets: "
          << avg / stoi(argv[1])
          << "% \n";

  cout << "==================== \n";

  system("rm ./NNKscz9GvF.txt");
}
