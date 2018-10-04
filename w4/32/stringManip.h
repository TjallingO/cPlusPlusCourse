class StringManip
{
    std::string &d_source;

    public:
        StringManip(std::string source);

        std::string lc() const;         // return a copy of d_source in
                                        // lower-case chars
        std::string uc() const;         // return a copy in upper-case
                                        // chars

        int compare(std::string rhs);   // -1: d_source first, 0: equal
                                        // 1: rhs first, case insensitive
                                        // comparison.

        std::string copy();             // return a copy of d_source
};

// Changes
// - Safer to input string as constants, to prevent changes
