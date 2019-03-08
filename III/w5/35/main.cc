#include "main.ih"

int main(int argc, char const **argv)
{
  multiset<string> words;  // Multiset to order input

  if (argc != 1)  // If there are command line arguments
  {
    for (int idx = 1; idx != argc; ++idx) // Loop through files
    {
      if (!file_exists(argv[idx]))        // Check if input file(s) exist
      {
        cout << argv[idx] <<" is not an existing file.";
        return 0;
      }

      Scanner flatbed(argv[idx], "/dev/null");  // Scanner from filename
      while (flatbed.lex())                     // While input
      {
        words.insert(flatbed.matched());  // Insert next match into multiset
      }
    }
  }

  else  // Else, do the same but using cin as input
  {
    Scanner flatbed;  // Default constructor (cin, cout)
    while (flatbed.lex())
    {
      words.insert(flatbed.matched());
    }
  }

  for (auto el: words)    // Print output
    cout << el << '\n';
}
