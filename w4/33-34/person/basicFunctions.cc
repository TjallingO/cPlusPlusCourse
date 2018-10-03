#include "person.ih"

void Person::setName(std::string const &name)
{
  d_name = name;
}

std::string const &Person::name() const
{
  return d_name;
}

void Person::setAddress(std::string const &address)
{
  d_address = address;
}

std::string const &Person::address() const
{
  return d_address;
}

// Setter defined seperately

std::string const &Person::phone() const
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
