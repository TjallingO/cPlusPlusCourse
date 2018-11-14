#include "main.ih"

int main(int argc, char const *argv[])
{
  acctH defaultAcct(argc, argv);
  defaultAcct.processFiles();
}
