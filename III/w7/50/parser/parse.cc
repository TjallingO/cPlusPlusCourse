// Generated by Bisonc++ V6.02.00 on Thu, 04 Apr 2019 03:27:10 +0200

// base/comment

// $insert class.ih
#include "parser.ih"

// The FIRST element of SR arrays shown below uses `d_type', defining the
// state's type, and `d_lastIdx' containing the last element's index. If
// d_lastIdx contains the REQ_TOKEN bitflag (see below) then the state needs
// a token: if in this state d_token is Reserved_::UNDETERMINED_, nextToken() will be
// called

// The LAST element of SR arrays uses `d_token' containing the last retrieved
// token to speed up the (linear) seach.  Except for the first element of SR
// arrays, the field `d_action' is used to determine what to do next. If
// positive, it represents the next state (used with SHIFT); if zero, it
// indicates `ACCEPT', if negative, -d_action represents the number of the
// rule to reduce to.

// `lookup()' tries to find d_token in the current SR array. If it fails, and
// there is no default reduction UNEXPECTED_TOKEN_ is thrown, which is then
// caught by the error-recovery function.

// The error-recovery function will pop elements off the stack until a state
// having bit flag ERR_ITEM is found. This state has a transition on errTok_
// which is applied. In this errTok_ state, while the current token is not a
// proper continuation, new tokens are obtained by nextToken(). If such a
// token is found, error recovery is successful and the token is
// handled according to the error state's SR table and parsing continues.
// During error recovery semantic actions are ignored.

// A state flagged with the DEF_RED flag will perform a default
// reduction if no other continuations are available for the current token.

// The ACCEPT STATE never shows a default reduction: when it is reached the
// parser returns ACCEPT(). During the grammar
// analysis phase a default reduction may have been defined, but it is
// removed during the state-definition phase.

// So:
//      s_x[] = 
//      {
//                  [_field_1_]         [_field_2_]
//
// First element:   {state-type,        idx of last element},
// Other elements:  {required token,    action to perform},
//                                      ( < 0: reduce, 
//                                          0: ACCEPT,
//                                        > 0: next state)
//      }

// base/declarations

namespace // anonymous
{
    char const author[] = "Frank B. Brokken (f.b.brokken@rug.nl)";

    enum Reserved_
    {
        UNDETERMINED_   = -2,
        EOF_            = -1,
        errTok_         = 256
    };
    enum StateType       // modify statetype/data.cc when this enum changes
    {
        NORMAL,
        ERR_ITEM,
        REQ_TOKEN,
        ERR_REQ,    // ERR_ITEM | REQ_TOKEN
        DEF_RED,    // state having default reduction
        ERR_DEF,    // ERR_ITEM | DEF_RED
        REQ_DEF,    // REQ_TOKEN | DEF_RED
        ERR_REQ_DEF // ERR_ITEM | REQ_TOKEN | DEF_RED
    };    
    enum StateTransition
    {
        ACCEPT_   = 0,     // `ACCEPT' TRANSITION
    };

    struct PI_     // Production Info
    {
        size_t d_nonTerm; // identification number of this production's
                            // non-terminal 
        size_t d_size;    // number of elements in this production 
    };

    struct SR_     // Shift Reduce info, see its description above
    {
        union
        {
            int _field_1_;      // initializer, allowing initializations 
                                // of the SR s_[] arrays
            StateType d_type;
            int       d_token;
        };
        union
        {
            int _field_2_;

            int d_lastIdx;          // if negative, the state uses SHIFT
            int d_action;           // may be negative (reduce), 
                                    // postive (shift), or 0 (accept)
        };
    };

    // $insert staticdata
    
    enum                        // size to expand the state-stack with when
    {                           // full
        STACK_EXPANSION_ = 10
    };

// Productions Info Records:
PI_ const s_productionInfo[] = 
{
     {0, 0}, // not used: reduction values are negative
     {262, 2}, // 1: lines ->  lines line
     {262, 1}, // 2: lines ->  line
     {263, 2}, // 3: line ('\x0a') ->  expr '\x0a'
     {263, 1}, // 4: line (QUIT) ->  QUIT
     {263, 1}, // 5: line (LIST) ->  LIST
     {263, 2}, // 6: line (errTok_) ->  errTok_ '\x0a'
     {263, 1}, // 7: line ('\x0a') ->  '\x0a'
     {264, 1}, // 8: expr (NUMBER) ->  NUMBER
     {264, 1}, // 9: expr (IDENT) ->  IDENT
     {264, 4}, // 10: expr ('-') ->  expr '-' '=' expr
     {264, 4}, // 11: expr ('+') ->  expr '+' '=' expr
     {264, 4}, // 12: expr ('%') ->  expr '%' '=' expr
     {264, 4}, // 13: expr ('/') ->  expr '/' '=' expr
     {264, 4}, // 14: expr ('*') ->  expr '*' '=' expr
     {264, 3}, // 15: expr ('|') ->  expr '|' expr
     {264, 3}, // 16: expr ('^') ->  expr '^' expr
     {264, 3}, // 17: expr ('&') ->  expr '&' expr
     {264, 4}, // 18: expr ('<') ->  expr '<' '<' expr
     {264, 4}, // 19: expr ('>') ->  expr '>' '>' expr
     {264, 2}, // 20: expr ('~') ->  '~' expr
     {264, 2}, // 21: expr (uMinus) ->  '-' expr
     {264, 3}, // 22: expr ('+') ->  expr '+' expr
     {264, 3}, // 23: expr ('-') ->  expr '-' expr
     {264, 3}, // 24: expr ('%') ->  expr '%' expr
     {264, 3}, // 25: expr ('/') ->  expr '/' expr
     {264, 3}, // 26: expr ('*') ->  expr '*' expr
     {264, 3}, // 27: expr ('(') ->  '(' expr ')'
     {264, 3}, // 28: expr ('=') ->  expr '=' expr
     {265, 1}, // 29: lines_$ ->  lines
};

// State info and SR_ transitions for each state.


SR_ s_0[] =
{
    { { ERR_REQ}, { 13} },           
    { {     262}, {  1} }, // lines  
    { {     263}, {  2} }, // line   
    { {     264}, {  3} }, // expr   
    { {     259}, {  4} }, // QUIT   
    { {     260}, {  5} }, // LIST   
    { { errTok_}, {  6} }, // errTok_
    { {      10}, {  7} }, // '\x0a' 
    { {     257}, {  8} }, // NUMBER 
    { {     258}, {  9} }, // IDENT  
    { {     126}, { 10} }, // '~'    
    { {      45}, { 11} }, // '-'    
    { {      40}, { 12} }, // '('    
    { {       0}, {  0} },           
};

SR_ s_1[] =
{
    { { ERR_REQ}, {      13} },           
    { {     263}, {      13} }, // line   
    { {     264}, {       3} }, // expr   
    { {     259}, {       4} }, // QUIT   
    { {     260}, {       5} }, // LIST   
    { { errTok_}, {       6} }, // errTok_
    { {      10}, {       7} }, // '\x0a' 
    { {     257}, {       8} }, // NUMBER 
    { {     258}, {       9} }, // IDENT  
    { {     126}, {      10} }, // '~'    
    { {      45}, {      11} }, // '-'    
    { {      40}, {      12} }, // '('    
    { {    EOF_}, { ACCEPT_} },           
    { {       0}, {       0} },           
};

SR_ s_2[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -2} }, 
};

SR_ s_3[] =
{
    { { REQ_TOKEN}, { 13} },          
    { {        10}, { 14} }, // '\x0a'
    { {        45}, { 15} }, // '-'   
    { {        43}, { 16} }, // '+'   
    { {        37}, { 17} }, // '%'   
    { {        47}, { 18} }, // '/'   
    { {        42}, { 19} }, // '*'   
    { {       124}, { 20} }, // '|'   
    { {        94}, { 21} }, // '^'   
    { {        38}, { 22} }, // '&'   
    { {        60}, { 23} }, // '<'   
    { {        62}, { 24} }, // '>'   
    { {        61}, { 25} }, // '='   
    { {         0}, {  0} },          
};

SR_ s_4[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -4} }, 
};

SR_ s_5[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -5} }, 
};

SR_ s_6[] =
{
    { { REQ_TOKEN}, {  2} },          
    { {        10}, { 26} }, // '\x0a'
    { {         0}, {  0} },          
};

SR_ s_7[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -7} }, 
};

SR_ s_8[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -8} }, 
};

SR_ s_9[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -9} }, 
};

SR_ s_10[] =
{
    { { REQ_TOKEN}, {  7} },          
    { {       264}, { 27} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_11[] =
{
    { { REQ_TOKEN}, {  7} },          
    { {       264}, { 28} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_12[] =
{
    { { REQ_TOKEN}, {  7} },          
    { {       264}, { 29} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_13[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -1} }, 
};

SR_ s_14[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -3} }, 
};

SR_ s_15[] =
{
    { { REQ_TOKEN}, {  8} },          
    { {        61}, { 30} }, // '='   
    { {       264}, { 31} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_16[] =
{
    { { REQ_TOKEN}, {  8} },          
    { {        61}, { 32} }, // '='   
    { {       264}, { 33} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_17[] =
{
    { { REQ_TOKEN}, {  8} },          
    { {        61}, { 34} }, // '='   
    { {       264}, { 35} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_18[] =
{
    { { REQ_TOKEN}, {  8} },          
    { {        61}, { 36} }, // '='   
    { {       264}, { 37} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_19[] =
{
    { { REQ_TOKEN}, {  8} },          
    { {        61}, { 38} }, // '='   
    { {       264}, { 39} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_20[] =
{
    { { REQ_TOKEN}, {  7} },          
    { {       264}, { 40} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_21[] =
{
    { { REQ_TOKEN}, {  7} },          
    { {       264}, { 41} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_22[] =
{
    { { REQ_TOKEN}, {  7} },          
    { {       264}, { 42} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_23[] =
{
    { { REQ_TOKEN}, {  2} },       
    { {        60}, { 43} }, // '<'
    { {         0}, {  0} },       
};

SR_ s_24[] =
{
    { { REQ_TOKEN}, {  2} },       
    { {        62}, { 44} }, // '>'
    { {         0}, {  0} },       
};

SR_ s_25[] =
{
    { { REQ_TOKEN}, {  7} },          
    { {       264}, { 45} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_26[] =
{
    { { DEF_RED}, {  1} }, 
    { {       0}, { -6} }, 
};

SR_ s_27[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -20} }, 
};

SR_ s_28[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -21} }, 
};

SR_ s_29[] =
{
    { { REQ_TOKEN}, { 13} },       
    { {        41}, { 46} }, // ')'
    { {        45}, { 15} }, // '-'
    { {        43}, { 16} }, // '+'
    { {        37}, { 17} }, // '%'
    { {        47}, { 18} }, // '/'
    { {        42}, { 19} }, // '*'
    { {       124}, { 20} }, // '|'
    { {        94}, { 21} }, // '^'
    { {        38}, { 22} }, // '&'
    { {        60}, { 23} }, // '<'
    { {        62}, { 24} }, // '>'
    { {        61}, { 25} }, // '='
    { {         0}, {  0} },       
};

SR_ s_30[] =
{
    { { REQ_TOKEN}, {  7} },          
    { {       264}, { 47} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_31[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -23} }, 
};

SR_ s_32[] =
{
    { { REQ_TOKEN}, {  7} },          
    { {       264}, { 48} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_33[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -22} }, 
};

SR_ s_34[] =
{
    { { REQ_TOKEN}, {  7} },          
    { {       264}, { 49} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_35[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -24} }, 
};

SR_ s_36[] =
{
    { { REQ_TOKEN}, {  7} },          
    { {       264}, { 50} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_37[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -25} }, 
};

SR_ s_38[] =
{
    { { REQ_TOKEN}, {  7} },          
    { {       264}, { 51} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_39[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -26} }, 
};

SR_ s_40[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -15} }, 
};

SR_ s_41[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -16} }, 
};

SR_ s_42[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -17} }, 
};

SR_ s_43[] =
{
    { { REQ_TOKEN}, {  7} },          
    { {       264}, { 52} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_44[] =
{
    { { REQ_TOKEN}, {  7} },          
    { {       264}, { 53} }, // expr  
    { {       257}, {  8} }, // NUMBER
    { {       258}, {  9} }, // IDENT 
    { {       126}, { 10} }, // '~'   
    { {        45}, { 11} }, // '-'   
    { {        40}, { 12} }, // '('   
    { {         0}, {  0} },          
};

SR_ s_45[] =
{
    { { REQ_DEF}, {  12} },       
    { {      45}, {  15} }, // '-'
    { {      43}, {  16} }, // '+'
    { {      37}, {  17} }, // '%'
    { {      47}, {  18} }, // '/'
    { {      42}, {  19} }, // '*'
    { {     124}, {  20} }, // '|'
    { {      94}, {  21} }, // '^'
    { {      38}, {  22} }, // '&'
    { {      60}, {  23} }, // '<'
    { {      62}, {  24} }, // '>'
    { {      61}, {  25} }, // '='
    { {       0}, { -28} },       
};

SR_ s_46[] =
{
    { { DEF_RED}, {   1} }, 
    { {       0}, { -27} }, 
};

SR_ s_47[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -10} }, 
};

SR_ s_48[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -11} }, 
};

SR_ s_49[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -12} }, 
};

SR_ s_50[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -13} }, 
};

SR_ s_51[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -14} }, 
};

SR_ s_52[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -18} }, 
};

SR_ s_53[] =
{
    { { REQ_DEF}, {   1} }, 
    { {       0}, { -19} }, 
};


// State array:
SR_ *s_state[] =
{
  s_0,  s_1,  s_2,  s_3,  s_4,  s_5,  s_6,  s_7,  s_8,  s_9,
  s_10,  s_11,  s_12,  s_13,  s_14,  s_15,  s_16,  s_17,  s_18,  s_19,
  s_20,  s_21,  s_22,  s_23,  s_24,  s_25,  s_26,  s_27,  s_28,  s_29,
  s_30,  s_31,  s_32,  s_33,  s_34,  s_35,  s_36,  s_37,  s_38,  s_39,
  s_40,  s_41,  s_42,  s_43,  s_44,  s_45,  s_46,  s_47,  s_48,  s_49,
  s_50,  s_51,  s_52,  s_53,
};

} // anonymous namespace ends




// If the parsing function call (i.e., parse()' needs arguments, then provide
// an overloaded function.  The code below doesn't rely on parameters, so no
// arguments are required.  Furthermore, parse uses a function try block to
// allow us to do ACCEPT and ABORT from anywhere, even from within members
// called by actions, simply throwing the appropriate exceptions.


// base/base1
ParserBase::ParserBase()
:
    d_token(Reserved_::UNDETERMINED_),
    // $insert baseclasscode
    d_requiredTokens_(0)
{
}

// base/clearin
void ParserBase::clearin_()
{
    d_nErrors_ = 0;
    d_stackIdx = -1;
    d_stateStack.clear();
    d_token = Reserved_::UNDETERMINED_;
    d_next = TokenPair{ Reserved_::UNDETERMINED_, STYPE_{} };
    d_recovery = false;
    d_acceptedTokens_ = d_requiredTokens_;
    d_val_ = STYPE_{};

    push_(0);
}

// base/debugfunctions

void ParserBase::setDebug(bool mode)
{
    d_actionCases_ = false;
    d_debug_ = mode;
}

void ParserBase::setDebug(DebugMode_ mode)
{
    d_actionCases_ = mode & ACTIONCASES;
    d_debug_ =       mode & ON;
}

// base/lex
void ParserBase::lex_(int token)
{
    d_token = token;

    if (d_token <= 0)
        d_token = Reserved_::EOF_;

    d_terminalToken = true;
}

// base/lookup
int ParserBase::lookup_() const
{
    // if the final transition is negative, then we should reduce by the rule
    // given by its positive value.

    SR_ const *sr = s_state[d_state];
    SR_ const *last = sr + sr->d_lastIdx;

    for ( ; ++sr != last; )           // visit all but the last SR entries
    {
        if (sr->d_token == d_token)
            return sr->d_action;
    }

    if (sr == last)   // reached the last element
    {
        if (sr->d_action < 0)   // default reduction
        {
            return sr->d_action;                
        }

        // No default reduction, so token not found, so error.
        throw UNEXPECTED_TOKEN_;
    }

    // not at the last element: inspect the nature of the action
    // (< 0: reduce, 0: ACCEPT, > 0: shift)

    int action = sr->d_action;


    return action;
}

// base/pop
void ParserBase::pop_(size_t count)
{
    if (d_stackIdx < static_cast<int>(count))
    {
        ABORT();
    }

    d_stackIdx -= count;
    d_state = d_stateStack[d_stackIdx].first;
    d_vsp = &d_stateStack[d_stackIdx];

}

// base/poptoken
void ParserBase::popToken_()
{
    d_token = d_next.first;
    d_val_ = std::move(d_next.second);

    d_next.first = Reserved_::UNDETERMINED_;
}

// base/push
void ParserBase::push_(size_t state)
{
    size_t currentSize = d_stateStack.size();
    if (stackSize_() == currentSize)
    {
        size_t newSize = currentSize + STACK_EXPANSION_;
        d_stateStack.resize(newSize);
    }

    ++d_stackIdx;
    d_stateStack[d_stackIdx] = 
                    StatePair{ d_state = state, std::move(d_val_) };

    d_vsp = &d_stateStack[d_stackIdx];

    if (d_stackIdx == 0)
    {
    }
    else
    {
    }
}

// base/pushtoken
void ParserBase::pushToken_(int token)
{
    d_next = TokenPair{ d_token, std::move(d_val_) };
    d_token = token;
}

// base/redotoken
void ParserBase::redoToken_()
{
    if (d_token != Reserved_::UNDETERMINED_)
        pushToken_(d_token);
}

// base/reduce
void ParserBase::reduce_(int rule)
{
    PI_ const &pi = s_productionInfo[rule];

    d_token = pi.d_nonTerm;
    pop_(pi.d_size);

    d_terminalToken = false;
}

// base/shift
void ParserBase::shift_(int action)
{
    push_(action);
    popToken_();               // token processed

    if (d_recovery and d_terminalToken)
    {
        d_recovery = false;
        d_acceptedTokens_ = 0;
    }
}

// base/startrecovery
void ParserBase::startRecovery_()
{
    int lastToken = d_token;                // give the unexpected token a
                                            // chance to be processed
                                            // again.

    pushToken_(Reserved_::errTok_);      // specify errTok_ as next token
    push_(lookup_());                     // push the error state

    d_token = lastToken;                    // reactivate the unexpected
                                            // token (we're now in an
                                            // ERROR state).

    d_recovery = true;
}

// base/top
inline size_t ParserBase::top_() const
{
    return d_stateStack[d_stackIdx].first;
}

// derived/errorrecovery
void Parser::errorRecovery_()
{
    // When an error has occurred, pop elements off the stack until the top
    // state has an error-item. If none is found, the default recovery
    // mode (which is to abort) is activated. 
    //
    // If EOF is encountered without being appropriate for the current state,
    // then the error recovery will fall back to the default recovery mode.
    // (i.e., parsing terminates)



    if (d_acceptedTokens_ >= d_requiredTokens_)// only generate an error-
    {                                           // message if enough tokens 
        ++d_nErrors_;                          // were accepted. Otherwise
        error();                                // simply skip input
    }

    // get the error state
    while (not (s_state[top_()][0].d_type & ERR_ITEM))
    {
        pop_();
    }

    // In the error state, looking up a token allows us to proceed.
    // Continuation may be require multiple reductions, but eventually a
    // terminal-token shift is used. See nextCycle_ for details.

    startRecovery_();
}

// derived/executeaction
void Parser::executeAction_(int production)
try
{
    if (token_() != Reserved_::UNDETERMINED_)
        pushToken_(token_());     // save an already available token
    switch (production)
    {
        // $insert actioncases
        
        case 1:
#line 26 "grammar"
        {
            d_val_ = vs_(-1);
        }
        break;

        case 2:
#line 28 "grammar"
        {
            d_val_ = vs_(0);
        }
        break;

        case 3:
#line 33 "grammar"
        {
         display(vs_(-1));
         }
        break;

        case 4:
#line 38 "grammar"
        {
         done();
         }
        break;

        case 5:
#line 43 "grammar"
        {
         list();
         }
        break;

        case 6:
#line 48 "grammar"
        {
         prompt();
         }
        break;

        case 7:
#line 53 "grammar"
        {
         prompt();
         }
        break;

        case 8:
#line 61 "grammar"
        {
         d_val_ = value();
         }
        break;

        case 9:
#line 66 "grammar"
        {
         d_val_ = variable();
         }
        break;

        case 10:
#line 71 "grammar"
        {
         d_val_ = subassignment(vs_(-3), vs_(0));
         }
        break;

        case 11:
#line 76 "grammar"
        {
         d_val_ = addassignment(vs_(-3), vs_(0));
         }
        break;

        case 12:
#line 81 "grammar"
        {
         d_val_ = modassignment(vs_(-3), vs_(0));
         }
        break;

        case 13:
#line 86 "grammar"
        {
         d_val_ = divassignment(vs_(-3), vs_(0));
         }
        break;

        case 14:
#line 91 "grammar"
        {
         d_val_ = mulassignment(vs_(-3), vs_(0));
         }
        break;

        case 15:
#line 96 "grammar"
        {
         d_val_ = Bor(vs_(-2), vs_(0));
         }
        break;

        case 16:
#line 101 "grammar"
        {
         d_val_ = Bxor(vs_(-2), vs_(0));
         }
        break;

        case 17:
#line 106 "grammar"
        {
         d_val_ = Band(vs_(-2), vs_(0));
         }
        break;

        case 18:
#line 111 "grammar"
        {
         d_val_ = shiftLeft(vs_(-3), vs_(0));
         }
        break;

        case 19:
#line 116 "grammar"
        {
         d_val_ = shiftRight(vs_(-3), vs_(0));
         }
        break;

        case 20:
#line 121 "grammar"
        {
         d_val_ = complement(vs_(-1));
         }
        break;

        case 21:
#line 126 "grammar"
        {
         d_val_ = negate(vs_(0));
         }
        break;

        case 22:
#line 131 "grammar"
        {
         d_val_ = add(vs_(-2), vs_(0));
         }
        break;

        case 23:
#line 136 "grammar"
        {
         d_val_ = sub(vs_(-2), vs_(0));
         }
        break;

        case 24:
#line 141 "grammar"
        {
         d_val_ = mod(vs_(-2), vs_(0));
         }
        break;

        case 25:
#line 146 "grammar"
        {
         d_val_ = divide(vs_(-2), vs_(0));
         }
        break;

        case 26:
#line 151 "grammar"
        {
         d_val_ = multiply(vs_(-2), vs_(0));
         }
        break;

        case 27:
#line 156 "grammar"
        {
         d_val_ = vs_(-1);
         }
        break;

        case 28:
#line 161 "grammar"
        {
         d_val_ = assign(vs_(-2), vs_(0));
         }
        break;

    }
}
catch (std::exception const &exc)
{
    exceptionHandler(exc);
}

// derived/nextcycle
void Parser::nextCycle_()
try
{
    if (s_state[state_()]->d_type & REQ_TOKEN)
        nextToken_();              // obtain next token


    int action = lookup_();        // lookup d_token in d_state

    if (action > 0)                 // SHIFT: push a new state
    {
        shift_(action);
        return;
    }

    if (action < 0)            // REDUCE: execute and pop.
    {

        if (recovery_())
            redoToken_();
        else
            executeAction_(-action);
                                            // next token is the rule's LHS
        reduce_(-action); 
        return;
    }

    if (recovery_())
        ABORT();
    else 
        ACCEPT();
}
catch (ErrorRecovery_)
{
    if (not recovery_())
        errorRecovery_();
    else
    {
        if (token_() == Reserved_::EOF_)
            ABORT();
        popToken_();               // skip the failing token
    }
}


// derived/nexttoken
void Parser::nextToken_()
{ 
    // If d_token is Reserved_::UNDETERMINED_ then if savedToken_() is
    // Reserved_::UNDETERMINED_ another token is obtained from lex(). Then
    // savedToken_() is assigned to d_token.

                                    // no need for a token: got one already
    if (token_() != Reserved_::UNDETERMINED_) 
    {
        return;                             
    }

    if (savedToken_() != Reserved_::UNDETERMINED_)
    {
        popToken_();               // consume pending token
    }
    else
    {
        ++d_acceptedTokens_;       // accept another token (see
                                    // errorRecover())
        lex_(lex());
        print_();
    }
    print();
}

// derived/print
void Parser::print_()
{
// $insert print
}

// derived/parse
int Parser::parse()
try 
{
    // The parsing algorithm:
    // Initially, state 0 is pushed on the stack, and all relevant variables
    // are initialized by Base::clearin_.
    //
    // Then, in an eternal loop:
    //
    //  1. If a state is a REQ_TOKEN type, then the next token is obtained
    //     from nextToken().  This may very well be the currently available
    //     token. When retrieving a terminal token d_terminal is set to true.
    //
    //  2. lookup() is called, d_token is looked up in the current state's
    //     SR_ array.
    //
    //  4. Depending on the result of the lookup() function the next state is
    //     shifted on the parser's stack, a reduction by some rule is applied,
    //     or the parsing function returns ACCEPT(). When a reduction is
    //     called for, any action that may have been defined for that
    //     reduction is executed.
    //
    //  5. An error occurs if d_token is not found, and the state has no
    //     default reduction.

    clearin_();                            // initialize, push(0)

    while (true)
    {
// $insert prompt
        nextCycle_();
    }
}
catch (Return_ retValue)
{
    return retValue or d_nErrors_;
}


// derived/tail


