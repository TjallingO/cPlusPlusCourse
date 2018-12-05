#include "main.ih"

int main(int argc, char const **argv)
{
  bool exceptionalCondition = false;

  string leakingString{ "feighsdefighsdlfghsidfgsidfgisdifgbdsfgbyusdfgh" };

  if (exceptionalCondition)
    exit(3);
}
