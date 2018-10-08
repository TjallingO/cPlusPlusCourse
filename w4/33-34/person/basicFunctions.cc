// Person member functions: basic setters and getters

#include "person.ih"

void Person::setName(string const &name)
{
  d_name = name;
}

string const &Person::name() const
{
  return d_name;
}

void Person::setAddress(string const &address)
{
  d_address = address;
}

string const &Person::address() const
{
  return d_address;
}

// Phone number setter defined seperately

string const &Person::phone() const
{
  return d_phone;
}

void Person::setMass(size_t mass)
{
  d_mass = mass;
}

size_t Person::mass() const
{
  return d_mass;
}
