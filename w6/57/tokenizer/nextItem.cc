#include "tokenizer.ih"

 bool Tokenizer::nextItem()
 {
     while (not read())          // no more info on this line?
     {
         if (cin.eof())
         {
             cout << "Unexpected EOF at line " << d_line << '\n';
             return false;
         }
         reset();                // then try the next line
     }

     return true;                // next item is available
 }
