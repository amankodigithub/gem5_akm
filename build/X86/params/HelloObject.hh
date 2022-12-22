#ifndef __PARAMS__HelloObject__
#define __PARAMS__HelloObject__

class HelloObject;


#include "params/SimObject.hh"

struct HelloObjectParams
    : public SimObjectParams
{
    HelloObject * create();
};

#endif // __PARAMS__HelloObject__
