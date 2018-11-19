#include "strings.ih"

Strings::~Strings()
{
  destroy();  // Call original destroy(); one last time
}
