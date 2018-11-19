#include "demo.ih"

Demo Demo::factory()
{
  return (Demo());  // Provoking copy elision
}
