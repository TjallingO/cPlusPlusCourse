#ifndef _FORWARDER
#define _FORWARDER

template <typename funT, typename ...anyT>
void forwarder(funT inputFun, anyT&& ...anyVars)
{
  inputFun(anyVars...);
};

#endif
