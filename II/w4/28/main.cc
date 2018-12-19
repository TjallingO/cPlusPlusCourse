#include "main.ih"

int main(int argc, char const **argv)
{
  Processor newProcessor;
  cout << newProcessor.valueOf(Processor::DEBUG) << '\n';
  Handler newHandler;
  cout << newHandler.valueOf(Handler::NONE) << '\n';
  newHandler.show(Msg::NONE);
}
