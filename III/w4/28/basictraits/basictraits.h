#ifndef INCLUDED_BASIC_
#define INCLUDED_BASIC_

template<typename T>
class BasicTraits
{
  template<typename T2>
  struct Basic
  {
    typedef T2 Type;
    enum
    {
      isPlain = 1,
      isPointer = 0,
      isRef = 0,
      isRRef = 0
    };
  };

  template<typename T2>
  struct Basic<T2 *> //pointer to a type
  {
    typedef T2 Type;
    enum
    {
      isPlain = 0,
      isPointer = 2,
      isRef = 0,
      isRRef = 0
    };
  };

  template<typename T2>
  struct Basic<T2 &> //reference to a type
  {
    typedef T2 Type;
    enum
    {
      isPlain = 0,
      isPointer = 0,
      isRef = 3,
      isRRef = 0
    };
  };

  template<typename T2>
  struct Basic<T2 &&> //rvalue ref to a type
  {
    typedef T2 Type;
    enum
    {
      isPlain = 0,
      isPointer = 0,
      isRef = 0,
      isRRef = 4
    };
   };

 public:

   BasicTraits(BasicTraits const &other) = delete;

   typedef typename Basic<T>::Type ValueType;
   typedef ValueType *PtrType;
   typedef ValueType &RefType;
   typedef ValueType &&RvalueRefType;

   //template<typename T2>
   BasicTraits(ValueType input);
   BasicTraits(ValueType *input);



   ValueType value()
   {
     return d_value;
   }

   enum
   {
     isPlainType = Basic<T>::isPlain,
     isPointerType = Basic<T>::isPointer,
     isRefType = Basic<T>::isRef,
     isRRefType = Basic<T>::isRRef 
   };

  private:

    ValueType d_value;
};

template<typename T>
BasicTraits<T>::BasicTraits(ValueType input)
{
    d_value = input;
}
template<typename T>
BasicTraits<T>::BasicTraits(ValueType *input)
{
    d_value = *input;
}





#endif
