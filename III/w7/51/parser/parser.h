// Generated by Bisonc++ V6.02.05 on Wed, 27 Mar 2019 11:27:40 +0100

#ifndef Parser_h_included
#define Parser_h_included

// $insert baseclass
#include "parserbase.h"
// $insert scanner.h
#include "../scanner/scanner.h"

#include <vector>
#include <unordered_map>

#undef Parser
    // CAVEAT: between the baseclass-include directive and the
    // #undef directive in the previous line references to Parser
    // are read as ParserBase.
    // If you need to include additional headers in this file
    // you should do so after these comment-lines.


class Parser: public ParserBase
{
    // $insert scannerobject
    Scanner d_scanner;

    std::vector<double> d_value;
    std::unordered_map<std::string, unsigned> d_symtab;

    bool d_display;

    public:
        Parser() = default;
        Parser(bool run);
        int parse();

    private:
        void error();                   // called on (syntax) errors
        int lex();                      // returns the next token from the
                                        // lexical scanner.
        void print();                   // use, e.g., d_token, d_loc
        void exceptionHandler(std::exception const &exc);

    // support functions for parse():
        void executeAction_(int ruleNr);
        void errorRecovery_();
        void nextCycle_();
        void nextToken_();
        void print_();

        void error(char const *msg);

    // added functions for the calculator:

        void display(RuleValue &e);
        void done();
        void prompt();

        RuleValue &add(RuleValue &lvalue, RuleValue &rvalue);
        RuleValue &assign(RuleValue &lvalue, RuleValue &rvalue);
        RuleValue &divide(RuleValue &lvalue, RuleValue &rvalue);
        RuleValue &multiply(RuleValue &lvalue, RuleValue &rvalue);
        RuleValue &negate(RuleValue &e);
        RuleValue &sub(RuleValue &lvalue, RuleValue &rvalue);
        RuleValue value();
        RuleValue variable();

        double valueOf(RuleValue const &e);

};


#endif
