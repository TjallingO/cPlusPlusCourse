#ifndef INCLUDED_MESSAGE_
#define INCLUDED_MESSAGE_

#include "../base/base.h"

class Message
{
        Base d_base;
    public:
        Message(Base &input);
        void show();

    private:
};

#endif
