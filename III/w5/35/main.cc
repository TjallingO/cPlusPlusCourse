#include "main.ih"

int main(int argc, char **argv)
try
{
  multiset<string> words = (argc != 1) ? processfiles(argc, argv) : processcin();
  // Multiset to order input

  for (auto el: words)    // Print output
    cout << el << '\n';
}
catch (string &message)
{
  cout << message;
}
