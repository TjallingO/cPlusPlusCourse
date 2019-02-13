#ifndef _FORWARDER
#define _FORWARDER

template <typename funT, typename ...anyT>        // Function and par package
void forwarder(funT inputFun, anyT&& ...anyVars)  // Needs forwarding
{
  inputFun(anyVars...);
};

#endif
