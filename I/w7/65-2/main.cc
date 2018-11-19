#include "main.ih"

int main(int argc, char const *argv[])
{
  AcctH defaultAcct(argc, argv);  // Pass argc/argv to constructor
  defaultAcct.processFiles();     // Process the accounting files
}
