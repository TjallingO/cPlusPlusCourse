#include "parser.ih"

#include <cmath>

int Parser::round(RuleValue &toRound)
{
  if (valueOf(toRound) < 0)
    return static_cast<int>(valueOf(toRound) - 0.5);

  else
    return static_cast<int>(valueOf(toRound) + 0.5);
}
