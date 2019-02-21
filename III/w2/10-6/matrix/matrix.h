#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <algorithm>
#include <iostream>


template<size_t Rows, size_t Columns, typename DataType>
class Matrix
{
      typedef Matrix<1, Columns, DataType>    MatrixRow;
      MatrixRow d_matrix[Rows];

  public:
    Matrix();
    Matrix(DataType matrix[Rows][Columns]);

    MatrixRow &operator[](size_t idx);
    MatrixRow const &operator[](size_t idx) const;

    void print();

  private:

    template<size_t Rows2, size_t Columns2, typename LhsType, typename RhsType>
    friend bool operator==(Matrix<Rows2, Columns2,  LhsType> const &lhs,
                           Matrix<Rows2, Columns2,  RhsType> const &rhs);

    template<size_t Rows2, size_t Columns2, typename LhsType, typename RhsType>
    friend bool operator!=(Matrix<Rows2, Columns2,  LhsType> const &lhs,
                           Matrix<Rows2, Columns2,  RhsType> const &rhs);

    template<size_t Rows2, size_t Columns2, typename LhsType, typename RhsType>
    friend Matrix<Rows2, Columns2,  LhsType> operator+(
                          Matrix<Rows2, Columns2,  LhsType> const &lhs,
                          Matrix<Rows2, Columns2,  RhsType> const &rhs);

    template<size_t Rows2, size_t Columns2, typename LhsType, typename RhsType>
    friend Matrix<Rows2, Columns2,  LhsType> operator+=(
                          Matrix<Rows2, Columns2,  LhsType>  &lhs,
                          Matrix<Rows2, Columns2,  RhsType>  &rhs);

    template<size_t Rows2, size_t Columns2, typename LhsType, typename RhsType>
    friend Matrix<Rows2, Columns2, LhsType> operator+(
                          Matrix<Rows2, Columns2, LhsType> const &lhs,
                          RhsType const &rhs);

    template<size_t Rows2, size_t Columns2, typename LhsType, typename RhsType>
    friend Matrix<Rows2, Columns2, LhsType> operator+(
                          LhsType const &lhs,
                          Matrix<Rows2, Columns2,  RhsType> const &rhs);

    template<size_t Rows2, size_t Columns2, typename RhsType>
    friend std::ostream &operator<<(
                          std::ostream &out,
                          Matrix<Rows2, Columns2,  RhsType> const &rhs);

    template<size_t Rows2, size_t Columns2, typename RhsType>
    friend std::istream &operator>>(
                          std::istream &in,
                          Matrix<Rows2, Columns2, RhsType> &rhs);

};

//MATRIXROW
template <size_t Columns, typename DataType>  // no default allowed
class Matrix<1, Columns, DataType>
//=
{
//ROWDATA
    DataType d_column[Columns];
//=
    public:
        Matrix();

        template <size_t Rows>
        Matrix(Matrix<Rows, Columns, DataType> const &matrix);

        DataType &operator[](size_t idx);
        DataType const &operator[](size_t idx) const;
};

//OPERATORS
template<size_t Rows, size_t Columns, typename LhsType, typename RhsType>
bool operator==(Matrix<Rows, Columns,  LhsType> const &lhs,
                Matrix<Rows, Columns,  RhsType> const &rhs)
{
  for (size_t row = 0; row < Rows; ++row)
    for (size_t col = 0; col < Columns; ++col)
      if(lhs.d_matrix[row][col] != rhs.d_matrix[row][col])
        return false;
  return true;
}

template<size_t Rows, size_t Columns, typename LhsType, typename RhsType>
bool operator!=(Matrix<Rows, Columns,  LhsType> const &lhs,
                Matrix<Rows, Columns,  RhsType> const &rhs)
{
  for (size_t row = 0; row < Rows; ++row)
    for (size_t col = 0; col < Columns; ++col)
      if(lhs.d_matrix[row][col] != rhs.d_matrix[row][col])
        return true;
  return false;
}

template<size_t Rows, size_t Columns, typename LhsType, typename RhsType>
Matrix<Rows, Columns,  LhsType> operator+(
  Matrix<Rows, Columns,  LhsType> const &lhs,
  Matrix<Rows, Columns,  RhsType> const &rhs)
{
  Matrix<Rows, Columns, LhsType> tmp;
  for (size_t row = 0; row < Rows; ++row)
    for (size_t col = 0; col < Columns; ++col)
      tmp.d_matrix[row][col] = lhs.d_matrix[row][col] + rhs.d_matrix[row][col];
  return tmp;
}

template<size_t Rows, size_t Columns, typename LhsType, typename RhsType>
Matrix<Rows, Columns,  LhsType> operator+=(
  Matrix<Rows, Columns,  LhsType> &lhs,
  Matrix<Rows, Columns,  RhsType> &rhs)
{
  for (size_t row = 0; row < Rows; ++row)
    for (size_t col = 0; col < Columns; ++col)
      lhs.d_matrix[row][col] += rhs.d_matrix[row][col];
  return lhs;
}

template<size_t Rows, size_t Columns, typename LhsType, typename RhsType>
Matrix<Rows, Columns, LhsType> operator+(
                Matrix<Rows, Columns,  LhsType> const &lhs,
                RhsType const &rhs)
{
  Matrix<Rows, Columns, LhsType> tmp;
  for (size_t row = 0; row < Rows; ++row)
    for (size_t col = 0; col < Columns; ++col)
      tmp.d_matrix[row][col] = lhs.d_matrix[row][col] + rhs;
  return tmp;
}

template<size_t Rows, size_t Columns, typename LhsType, typename RhsType>
Matrix<Rows, Columns, LhsType> operator+(
                LhsType const &lhs,
                Matrix<Rows, Columns,  RhsType> const &rhs)
{
  Matrix<Rows, Columns, LhsType> tmp;
  for (size_t row = 0; row < Rows; ++row)
    for (size_t col = 0; col < Columns; ++col)
      tmp.d_matrix[row][col] = lhs + rhs.d_matrix[row][col];
  return tmp;
}

template<size_t Rows, size_t Columns, typename RhsType>
std::ostream &operator<<(
                std::ostream &out,
                Matrix<Rows, Columns,  RhsType> const &rhs)
{
  for (size_t row = 0; row < Rows; ++row)
  {
    for (size_t col = 0; col < Columns; ++col)
      out << rhs.d_matrix[row][col] << '\t';
    out << '\n';
  }
  return out;
}

template<size_t Rows, size_t Columns, typename RhsType>
std::istream &operator>>(
                std::istream &in,
                Matrix<Rows, Columns, RhsType> &rhs)
{
  for (size_t row = 0; row < Rows; ++row)
  {
    for (size_t col = 0; col < Columns; ++col)
      in >> rhs.d_matrix[row][col];
  }
  return in;
}

//CONSTRUCTORS
template <size_t Rows, size_t Columns, typename DataType>
Matrix<Rows, Columns, DataType>::Matrix()
{
    std::fill(d_matrix, d_matrix + Rows, MatrixRow());
}

template <size_t Rows, size_t Columns, typename DataType>
Matrix<Rows, Columns, DataType>::Matrix(DataType matrix[Rows][Columns])
{
  for (size_t row = 0; row < Rows; ++row)
    for (size_t col = 0; col < Columns; ++col)
      d_matrix[row][col] = matrix[row][col];
}


//ROWCONS1
template <size_t Columns, typename DataType>
Matrix<1, Columns, DataType>::Matrix()
{
    std::fill(d_column, d_column + Columns, DataType());
}
//=
//ROWCONS2
template <size_t Columns, typename DataType>
template <size_t Rows>
Matrix<1, Columns, DataType>::Matrix(
                        Matrix<Rows, Columns, DataType> const &matrix)
{
    std::fill(d_column, d_column + Columns, DataType());

    for (size_t col = 0; col < Columns; col++)
        for (size_t row = 0; row < Rows; row++)
            d_column[col] += matrix[row][col];
}

//ROWOPERATORINDEX
template <size_t Columns, typename DataType>
DataType &Matrix<1, Columns, DataType>::operator[](size_t idx)
{
    return d_column[idx];
}

template <size_t Columns, typename DataType>
DataType const &Matrix<1, Columns, DataType>::operator[](size_t idx) const
{
    return d_column[idx];
}

//OPERATORINDEX
template <size_t Rows, size_t Columns, typename DataType>
Matrix<1, Columns, DataType>
&Matrix<Rows, Columns, DataType>::operator[](size_t idx)
{
    return d_matrix[idx];
}


template <size_t Rows, size_t Columns, typename DataType>
Matrix<1, Columns, DataType>
const &Matrix<Rows, Columns, DataType>::operator[](size_t idx) const
{
    return d_matrix[idx];
}

//printing
template <size_t Rows, size_t Columns, typename DataType>
void Matrix<Rows, Columns, DataType>::print()
{
  for (size_t row = 0; row < Rows; ++row)
  {
    for (size_t col = 0; col < Columns; ++col)
      std::cout << d_matrix[row][col] << '\t';
    std::cout << '\n';
  }
}

#endif
