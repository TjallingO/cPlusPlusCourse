#include "storage.ih"

void Storage::addClient(std::string outputFile)
{
  Storage::d_clients.push_back(Storage::Client::Client(outputFile));
}
