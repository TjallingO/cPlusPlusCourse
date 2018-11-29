#ifndef INCLUDED_MSGH
#define INCLUDED_MSGH

enum class Msg
{
    NONE    = 0     ,
    DEBUG   = 1 << 0,
    INFO    = 1 << 1,
    NOTICE  = 1 << 2,
    WARNING = 1 << 3,
    ERR     = 1 << 4,
    CRIT    = 1 << 5,
    ALERT   = 1 << 6,
    EMERG   = 1 << 7,
    ALL     = (1 << 8) - 1
};

#endif

inline int valueOf(Msg message)           // Return int representation of enum
{
  return static_cast<int>(message);
};
inline Msg enumOf(int enumInt)            // Return enum representation of int
{
  return static_cast<Msg>(enumInt);
};

inline Msg operator&(Msg a, Msg b)        // AND
{
  return enumOf(valueOf(a) & valueOf(b));
};
inline Msg operator~(Msg a)               // NOT
{
  return enumOf(~valueOf(a));
};
inline Msg operator|(Msg a, Msg b)        // OR
{
  return enumOf(valueOf(a) | valueOf(b));
};
inline Msg operator^(Msg a, Msg b)        // XOR
{
  return enumOf(valueOf(a) ^ valueOf(b));
};

inline Msg operator==(Msg a, Msg b)        // Equal to
{
  return enumOf(valueOf(a) == valueOf(b));
};
inline Msg operator!=(Msg a, Msg b)        // Not equal to
{
  return enumOf(valueOf(a) != valueOf(b));
};
inline Msg operator<(Msg a, Msg b)        // Smaller than
{
  return enumOf(valueOf(a) < valueOf(b));
};
inline Msg operator>(Msg a, Msg b)        // Larger than
{
  return enumOf(valueOf(a) > valueOf(b));
};
inline Msg operator<=(Msg a, Msg b)        // Smaller or equal to
{
  return enumOf(valueOf(a) <= valueOf(b));
};
inline Msg operator>=(Msg a, Msg b)        // Larger or equal to
{
  return enumOf(valueOf(a) >= valueOf(b));
};
