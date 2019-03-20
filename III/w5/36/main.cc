#include "main.ih"

int main(int argc, char const **argv)
{
  if (!file_exists(argv[1]))
  {
    cout << "Invalid file.";
    return 1;
  }

  return processfile(argv[1]);
}
