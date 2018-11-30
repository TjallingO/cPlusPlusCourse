#include "arglongoption.ih"

void ArgLongOption::newOption(string const &longOpt)
{
                                    // create room for a new option
    Option **tmp = new Option *[d_size + 1];       
    memcpy(tmp, d_opt, sizeof(Option *) * d_size);
    delete[] d_opt;
    d_opt = tmp;

    d_opt[d_size] = new Option{longOpt, 0, 0};  // initialize it
    addValue(d_opt[d_size++]);                  // add its value

    
}
