#ifndef __PARAMS__PowerModel__
#define __PARAMS__PowerModel__

class PowerModel;

#include <vector>
#include "params/PowerModelState.hh"
#include <cstddef>
#include "params/SubSystem.hh"

#include "params/SimObject.hh"

struct PowerModelParams
    : public SimObjectParams
{
    PowerModel * create();
    std::vector< PowerModelState * > pm;
    SubSystem * subsystem;
};

#endif // __PARAMS__PowerModel__
