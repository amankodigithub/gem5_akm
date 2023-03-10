#ifndef __PARAMS__TrafficGen__
#define __PARAMS__TrafficGen__

class TrafficGen;

#include <cstddef>
#include <string>
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/System.hh"

#include "params/MemObject.hh"

struct TrafficGenParams
    : public MemObjectParams
{
    TrafficGen * create();
    std::string config_file;
    bool elastic_req;
    Tick progress_check;
    System * system;
    unsigned int port_port_connection_count;
};

#endif // __PARAMS__TrafficGen__
