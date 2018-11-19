#ifndef INCLUDED_STRINGMANIP_
#define INCLUDED_STRINGMANIP_

class StringManip
{
  std::string d_source;

  public:
    StringManip(std::string const &source);

  private:


    std::string lc() const;               // return a copy of d_source in
                                          // lower-case chars
    std::string uc() const;               // return a copy in upper-case
                                          // chars

    int compare(std::string &rhs) const;  // -1: d_source first, 0: equal
                                          // 1: rhs first, case insensitive
                                          // comparison.

    std::string copy() const;       // return a copy of d_source
};

// Changes
// - Safer make member functions constant, to prevent changes to member data
// -- No const return types, as all return types are copies or new variables
// - Include guards
// - Safer to keep those functions private, except for constructor,
//   which needs to be publicly accessible.

#endif
