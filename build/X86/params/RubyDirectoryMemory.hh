#ifndef __PARAMS__RubyDirectoryMemory__
#define __PARAMS__RubyDirectoryMemory__

class DirectoryMemory;

#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/System.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/SimObject.hh"

struct RubyDirectoryMemoryParams
    : public SimObjectParams
{
    DirectoryMemory * create();
    int numa_high_bit;
    uint64_t size;
    System * system;
    int version;
};

#endif // __PARAMS__RubyDirectoryMemory__
