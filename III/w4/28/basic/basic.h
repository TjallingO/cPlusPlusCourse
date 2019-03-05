#ifndef INCLUDED_BASIC_
#define INCLUDED_BASIC_

template <typename T>
struct Basic
{
  typedef T Type;
  enum
  {
    value = 1
  };
};

// template <typename T> //Plain type
// struct Basic<T>
// {
//   typedef T Type;
//   enum
//   {
//     value = 1
//   };
// };

template <typename T> //pointer to a type
struct Basic<T *>
{
  typedef T Type;
  enum
  {
    value = 2
  };
};

template <typename T> //reference to a type
struct Basic<T &>
{
  typedef T Type;
  enum
  {
    value = 3
  };
};

template <typename T> //rvalue reference to a type
struct Basic<T &&>
{
  typedef T Type;
  enum
  {
    value = 4
  };
};

#endif
