#ifndef __PARAMS__TraceCPU__
#define __PARAMS__TraceCPU__

class TraceCPU;

#include <cstddef>
#include <string>
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include <string>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/BaseCPU.hh"

struct TraceCPUParams
    : public BaseCPUParams
{
    TraceCPU * create();
    std::string dataTraceFile;
    bool enableEarlyExit;
    double freqMultiplier;
    std::string instTraceFile;
    unsigned sizeLoadBuffer;
    unsigned sizeROB;
    unsigned sizeStoreBuffer;
};

#endif // __PARAMS__TraceCPU__
