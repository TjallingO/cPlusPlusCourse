#ifndef INCLUDED_DEMO_
#define INCLUDED_DEMO_

#include <iostream>
#include <string>

class Demo
{
  std::string **d_info = 0;
  size_t d_capacity = 0;

  public:
    Demo();                                     // Constructor
    Demo(Demo const &toBeCopied);               // Copy constructor
    Demo &operator=(Demo const &toBeAssigned);  // Assigment operator
    Demo(Demo &&temporary);                     // Move constructor
    ~Demo();                                    // Destructor
    Demo factory();                             // Factory function

  private:
    void destroy();
    void enlarge(size_t newSize);
};

#endif

inline void Demo::destroy()
{
  std::cout << "Destroyer called \n";
  for (size_t idx = 0; idx != d_capacity; ++idx)
    delete d_info[idx];
}

inline Demo::Demo()
:
  d_info ( 0 )
{
  std::cout << "Constructor called \n";
}

inline Demo::Demo(Demo &&temporary)
:
  d_info( temporary.d_info ),
  d_capacity( temporary.d_capacity )
{
  std::cout << "Move constructor called \n";
  temporary.d_capacity = 0;
  temporary.d_info = 0;
}

inline Demo::Demo(Demo const &toBeCopied)
:
  d_info( new std::string *[toBeCopied.d_capacity] ),
  d_capacity( toBeCopied.d_capacity )
{
  std::cout << "Copy constructor called \n";
  for (size_t idx = 0; idx != d_capacity; ++idx)
    d_info[idx] = new std::string(*toBeCopied.d_info[idx]);
}

inline Demo &Demo::operator=(Demo const &toBeAssigned)
{
  std::cout << "Assignment operator called \n";
  destroy();
  delete[] d_info;
  d_capacity = toBeAssigned.d_capacity;
  d_info = new std::string *[d_capacity];

  for (size_t idx = 0; idx != d_capacity; ++idx)
    d_info[idx] = new std::string(*toBeAssigned.d_info[idx]);

  return *this;
}

inline Demo::~Demo()
{
  std::cout << "Destructor called \n";
  destroy();
  delete[] d_info;
}

inline void Demo::enlarge(size_t newSize)
{
  std::string **newDB = new std::string*[newSize];
  for (size_t idx = 0; idx != newSize; ++idx)
    newDB[idx] = move(d_info[idx]);
  delete[] d_info;
  d_info = newDB;
  d_capacity = newSize;
}
