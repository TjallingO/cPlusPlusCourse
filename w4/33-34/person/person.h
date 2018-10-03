// Programming in C/C++
// Week 4: Assignment 33
// Tjalling Otter & Emiel Krol
// Person class: interface header

#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_

#include <string>
#include <iostream>
#include <sstream>

class Person
{
  std::string d_name;     // name of person
  std::string d_address;  // address field
  std::string d_phone;    // telephone number
  size_t      d_mass;     // the mass in kg.

  public:
    void setName(std::string const &name);
    void setAddress(std::string const &address);
    void setPhone(std::string const &phone);
    void setMass(size_t mass);
    // Setters

    std::string const &name()     const;
    std::string const &address()  const;
    std::string const &phone()    const;
    size_t mass()                 const;
    // Getters

    void insert (std::ostream &outputStream); // Storing data
    void extract(std::istream &inputStream);  // Extracting data
};

#endif
