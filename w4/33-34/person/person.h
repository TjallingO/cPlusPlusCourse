// Person class: interface header

#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_

#include <string>
#include <iostream>

class Person
{
  std::string d_name;     // name of person
  std::string d_address;  // address field
  std::string d_phone;    // telephone number
  size_t      d_mass;     // the mass in kg.

  public:
    std::string const &name()     const;
    std::string const &address()  const;
    std::string const &phone()    const;
    size_t mass()                 const;
    // Getters

    void insert(std::ostream &outputStream);  // Storing data
    void extract(std::istream &inputStream);  // Extracting data

  private:
    void setName(std::string const &name);
    void setAddress(std::string const &address);
    void setPhone(std::string const &phone);
    void setMass(size_t mass);
    // Setters
};

// Basic inline functions

inline void Person::setName(std::string const &name)
{
  d_name = name;
}

inline std::string const &Person::name() const
{
  return d_name;
}

inline void Person::setAddress(std::string const &address)
{
  d_address = address;
}

inline std::string const &Person::address() const
{
  return d_address;
}

// Phone number setter defined seperately

inline std::string const &Person::phone() const
{
  return d_phone;
}

inline void Person::setMass(size_t mass)
{
  d_mass = mass;
}

inline size_t Person::mass() const
{
  return d_mass;
}

#endif
