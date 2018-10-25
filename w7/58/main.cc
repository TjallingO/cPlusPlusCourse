#include "main.ih"

int main(int argc, char **argv)
{
  ostream out(cout.rdbuf()); // Initialise ostream out using buffer cout

  out.setstate(ios::failbit);     // Set the failbit of out

  size_t its = atoi(argv[1]);  // Convert command line argument to its

  for (size_t index = 0; index != its; ++index) // Loop through its
    if (out.good()) // If failbit is not set, comment out for other version
      out << "Nr. of command line arguments " << argc << '\n';  // Output
}
