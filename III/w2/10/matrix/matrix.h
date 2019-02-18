#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <cstddef>
#include <algorithm>
#include <iterator>

template <typename data>
class Matrix
{
    size_t d_rows = 0;
    size_t d_columns = 0;
    size_t d_size = 0;
    size_t d_maxSize = 0;
    data *d_data = 0;
    data *d_front = 0;
    data *d_back = 0;


  public:
    typedef data value_type;
    typedef value_type const &const_reference;

    explicit Matrix(size_t maxSize = 0);
    Matrix(Matrix<data> const &other); //copy
    Matrix(Matrix<data> &&tmp); //swap

    template <size_t Size>
    explicit Matrix(size_t rows, size_t columns, data const (&input)[Size]);

    ~Matrix();

    Matrix &operator=(Matrix<data> const &other);
    Matrix &operator=(Matrix<data> &&tmp);

    void pop_front();
    void push_back(data const &object);

    void swap(Matrix<data> &other);

    data &back();
    data &front();
    bool empty() const;
    bool full() const;
    size_t size() const;
    size_t maxSize() const;

  private:
    data *inc(data *ptr);
};

template<typename data>
Matrix<data>::Matrix(size_t maxSize) //geen rows en cols moeten erbij
:
  d_size(0),
  d_maxSize(maxSize),
  d_data(
    maxSize == 0 ?
        0
    :
           static_cast<data *> (operator new(maxSize * sizeof(data)))),
  d_front(d_data),
  d_back(d_data)
{
}

template<typename data>
Matrix<data>::Matrix(Matrix<data> const &other)//geen rows en cols moeten erbij
:
  d_size(other.d_size),
  d_maxSize(other.d_maxSize),
  d_data(
    d_maxSize == 0 ?
        0
    :
           static_cast<data *> (operator new(maxSize * sizeof(data)))
         ),
  d_front(d_data + (other.d_front - other.d_data))
{
  data const *src = other.d_front;
  d_back = d_front;
  for (size_t count = 0; count != d_size; ++count)
  {
    new(d_back) data(*src);
    d_back = inc(d_back);
    if (++src == other.d_data + d_maxSize)
      src = other.d_data;
  }
}

template<typename data>
Matrix<data>::Matrix(Matrix<data> &&tmp)
:
  d_data(0)
{
  swap(tmp);
}

template <typename data>
template <size_t Size>
Matrix<data>::Matrix(size_t rows, size_t columns, data const (&input)[Size])
:
  d_rows(rows),
  d_columns(columns),
  d_size(0),
  d_maxSize(rows * columns),
  d_data(static_cast<data *> (operator new(sizeof(input)))),
  d_front(d_data),
  d_back(d_data)
{
  std::copy(input, input + Size, std::back_inserter(*this));
}

template<typename data>
Matrix<data>::~Matrix()
{
  if (d_data == 0)
    return;
  for (; d_size--; )
  {
    d_front->~data();
    d_front = inc(d_front);
  }
  operator delete(d_data);
}


template<typename data>
Matrix<data> &Matrix<data>::operator=(Matrix<data> const &rhs)
{
  Matrix<data> tmp(rhs);
  swap(tmp);
  return *this;
}

template<typename data>
inline Matrix<data> &Matrix<data>::operator=(Matrix<data> &&tmp)
{
  swap(tmp);
  return *this;
}

enum Exception
{
  EMPTY,
  FULL
};

template<typename data>
void Matrix<data>::pop_front()
{
  if (d_size == 0)
    throw EMPTY;

  d_front->~data();
  d_front = inc(d_front);
  --d_size;
}

template<typename data>
void Matrix<data>::push_back(data const &object)
{
  if (d_size == d_maxSize)
    throw FULL;

  new (d_back) data(object);
  d_back = inc(d_back);
  ++d_size;
}

template<typename data>
void Matrix<data>::swap(Matrix<data> &other)
{
  char tmp[sizeof(Matrix<data>)];
  memcpy(tmp, &other, sizeof(Matrix<data>));
  memcpy(&other, this, sizeof(Matrix<data>));
  memcpy(this, tmp, sizeof(Matrix<data>));
}

template<typename data>
inline data &Matrix<data>::back()
{
  return d_back == d_data ? d_data[d_maxSize - 1] : d_back[-1];
}

template<typename data>
inline data &Matrix<data>::front()
{
  return *d_front;
}

template<typename data>
inline bool Matrix<data>::empty() const
{
  return d_size == 0;
}

template<typename data>
inline bool Matrix<data>::full() const
{
  return d_size == d_maxSize;
}

template<typename data>
inline size_t Matrix<data>::size() const
{
  return d_size;
}

template<typename data>
inline size_t Matrix<data>::maxSize() const
{
  return d_maxSize;
}

template<typename data>
data *Matrix<data>::inc(data *ptr)
{
  ++ptr;
  return ptr == d_data + d_maxSize ? d_data : ptr;
}

#endif
