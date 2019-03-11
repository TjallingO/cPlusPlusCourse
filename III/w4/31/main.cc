#include <iostream>
#include <vector>
#include <functional>

using namespace std;

enum
{
    ADD,
    SUB,
};

template<typename LHS, typename RHS, int operation>
struct BinExpr
{
    template<typename Type>
    struct BasicType;

    template<typename LH, typename RH, int oper>
    struct BasicType<BinExpr<LH, RH, oper>>;

    typedef typename BasicType<RHS>::ObjType ObjType;
    typedef typename ObjType::value_type value_type;


    LHS const &d_lhs;
    RHS const &d_rhs;

    BinExpr(LHS const &lhs, RHS const &rhs)
    :
        d_lhs(lhs),
        d_rhs(rhs)
    {}

    size_t size() const
    {
        return d_lhs.size();
    }

    template <typename LH, typename RH, int oper>
    struct Operation;

    value_type operator[](size_t ix) const
    {
        return Operation<LHS, RHS, operation>::cpt(d_lhs[ix], d_rhs[ix]);
    }

    operator ObjType() const
    {
        ObjType retVal;

        retVal.reserve(size());

        for (size_t ix = 0, end = size(); ix != end; ++ix)
            new(&retVal[ix]) value_type{ (*this)[ix] };

        return retVal;
    }
};

template<typename LHS, typename RHS, int operation>
template<typename Type>
struct BinExpr<LHS, RHS, operation>::BasicType
{
    typedef Type ObjType;
};

template<typename LHS, typename RHS, int operation>
template<typename LH, typename RH, int oper>
struct BinExpr<LHS, RHS, operation>::BasicType<BinExpr<LH, RH, oper>>
{
    typedef typename BinExpr<LH, RH, oper>::ObjType ObjType;
};

template<typename LHS, typename RHS, int operation>
template <typename LH, typename RH>
struct BinExpr<LHS, RHS, operation>::Operation<LH, RH, ADD>
{
    static  BinExpr<LHS, RHS, operation>::value_type cpt(  BinExpr<LHS, RHS, operation>::value_type const &lhs,  BinExpr<LHS, RHS, operation>::value_type const &rhs)
    {
        return lhs + rhs;
    };
};

template<typename LHS, typename RHS, int operation>
template <typename LH, typename RH>
struct BinExpr<LHS, RHS, operation>::Operation<LH, RH, SUB>
{
    static  BinExpr<LHS, RHS, operation>::value_type cpt( BinExpr<LHS, RHS, operation>::value_type const &lhs,  BinExpr<LHS, RHS, operation>::value_type const &rhs)
    {
        return lhs - rhs;
    };
};

template<typename LHS, typename RHS>
BinExpr<LHS, RHS, ADD>  operator+(LHS const &lhs, RHS const &rhs)
{
    return BinExpr<LHS, RHS, ADD>(lhs, rhs);
}


template<typename LHS, typename RHS>
BinExpr<LHS, RHS, SUB>  operator-(LHS const &lhs, RHS const &rhs)
{
    return BinExpr<LHS, RHS, SUB>(lhs, rhs);
}

struct VI: public vector<int>           // define the data structure to
{                                       // operate on
    static size_t const s_max = 10000;

    VI()
    :
        vector<int>(s_max, 1)
    {}
};

int main()
{
    VI a, b, c, d;

    d = a + b + c;

}
