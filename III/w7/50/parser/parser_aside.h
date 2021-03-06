// Generated by Bisonc++ V4.09.02 on Thu, 19 Mar 2015 19:21:46 +0100

#ifndef Parser_h_included
#define Parser_h_included

// $insert baseclass
#include "parserbase.h"
// $insert scanner.h
#include "../scanner/scanner.h"

#include <vector>
#include <unordered_map>
#include <string>

#undef Parser
class Parser: public ParserBase
{
    // $insert scannerobject
    Scanner d_scanner;

    std::vector<double> d_value;
    std::unordered_map<std::string, unsigned> d_symtab;

    bool d_display;

    public:
        Parser(bool run);
        int parse();

    private:
        void error(char const *msg);    // called on (syntax) errors
        int lex();                      // returns the next token from the
                                        // lexical scanner.
        void print();                   // use, e.g., d_token, d_loc

    // support functions for parse():
        void executeAction(int ruleNr);
        void errorRecovery();
        int lookup(bool recovery);
        void nextToken();
        void print_();
        void exceptionHandler_(std::exception const &exc);

    // added functions for the calculator:

        void display(RuleValue &e);
        void done();
        void prompt();

        RuleValue &add(RuleValue &lvalue, RuleValue &rvalue);
        RuleValue &assign(RuleValue &lvalue, RuleValue &rvalue);
        RuleValue &negate(RuleValue &e);
        RuleValue &sub(RuleValue &lvalue, RuleValue &rvalue);
        RuleValue &multiply(RuleValue &lvalue, RuleValue &rvalue);
        RuleValue value();
        RuleValue variable();

        double valueOf(RuleValue const &e);
};


#endif
