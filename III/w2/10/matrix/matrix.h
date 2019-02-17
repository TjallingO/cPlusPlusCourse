#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

template <typename Type>
class Matrix
{
    Type d_data[];//[];

  public:
    Matrix(Type input);


    void swap(Matrix &other);

  private:
};

#endif
