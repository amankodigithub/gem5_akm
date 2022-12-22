#ifndef __PARAMS__InstPBTrace__
#define __PARAMS__InstPBTrace__

namespace Trace {
class InstPBTrace;
} // namespace Trace

#include <cstddef>
#include <string>

#include "params/InstTracer.hh"

struct InstPBTraceParams
    : public InstTracerParams
{
    Trace::InstPBTrace * create();
    std::string file_name;
};

#endif // __PARAMS__InstPBTrace__
