#include "msg.ih"

size_t Msg::valueOf(message theEnum)
{
  return static_cast<size_t>(theEnum);
}
