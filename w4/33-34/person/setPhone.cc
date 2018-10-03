#include "person.ih"

void Person::setPhone(std::string const &phone)
{
  if (phone.empty())
    d_phone = " - not available -";
  else if (phone.find_first_not_of("0123456789") == string::npos)
    d_phone = phone;
  // Switched the two options above around from the example, as an empty string
  // will also not contain any non-numerical characters.
  else
    cout << "A phone number may only contain digits\n";
}
