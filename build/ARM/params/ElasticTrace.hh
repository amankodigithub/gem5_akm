#ifndef __PARAMS__ElasticTrace__
#define __PARAMS__ElasticTrace__

class ElasticTrace;

#include <cstddef>
#include <string>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <string>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>

#include "params/ProbeListenerObject.hh"

struct ElasticTraceParams
    : public ProbeListenerObjectParams
{
    ElasticTrace * create();
    std::string dataDepTraceFile;
    unsigned depWindowSize;
    std::string instFetchTraceFile;
    uint64_t startTraceInst;
    bool traceVirtAddr;
};

#endif // __PARAMS__ElasticTrace__
