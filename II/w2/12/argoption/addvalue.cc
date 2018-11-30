#include "argoption.ih"

void ArgOption::addValue(Option *ptr)
{
                                        // enlarge room for args
    string **tmp = new string *[ptr->size];      
    memcpy(tmp, ptr->optVal, sizeof(string *) * ptr->size);
    delete[] ptr->optVal;

    ptr->optVal = tmp;
    ptr->optVal[ptr->size++] = optarg ? new string{optarg} : 0;
}
