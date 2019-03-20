#include "main.ih"

multiset<string> processfiles(int argc, char **argv)
{
  multiset<string> words;

  for (int idx = 1; idx != argc; ++idx) // Loop through files
  {
    if (!file_exists(argv[idx]))        // Check if input file(s) exist
    {
      string message = argv[idx];
      message += " is not a valid file.";
      throw message;
    }

    Scanner flatbed(argv[idx], "/dev/null");  // Scanner from filename
    // While not elegant, writing the output to /dev/null is the simplest
    // method I could think of, considering the fact that it should,
    // indeed, not be stored. Another option is to create a custom constructor,
    // or associating a filebuf with an istream and passing that to a Scanner
    // constructor (using cout as the other argument, since it will not output
    // anything). However, this seemed both the cleanest and clearest option.

    while (flatbed.lex())                     // While input
    {
      words.insert(flatbed.matched());  // Insert next match into multiset
    }
  }
  return words;
}
