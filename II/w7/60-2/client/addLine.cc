#include "client.ih"

void Client::addLine()
{
  ofstream outputStream(d_outputFile);
  outputStream << getLine() << '\n';
  d_linenr =+ 1;
}
