#include "client.ih"

Client::Client(Semaphore &filled, Semaphore &available, bool &finished)
:
d_filled(filled),
d_available(available),
d_finished(finished)
{
  
}
