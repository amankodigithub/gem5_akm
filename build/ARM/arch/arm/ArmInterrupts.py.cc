#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_ArmInterrupts[] = {
    120,156,173,80,177,78,195,48,16,61,39,161,2,4,18,98,
    96,64,66,48,70,12,49,75,151,10,33,202,214,5,164,100,
    34,75,100,108,151,4,197,109,100,59,82,51,195,127,195,157,
    105,83,177,99,199,79,119,214,243,189,247,34,97,187,98,60,
    143,55,0,238,22,11,133,31,131,22,192,48,40,25,48,21,
    129,102,176,100,160,98,248,2,248,4,120,45,35,80,9,20,
    233,1,210,155,111,92,41,195,202,31,33,20,141,121,121,251,
    208,210,251,83,236,230,214,44,86,94,91,219,119,222,201,157,
    28,145,159,72,238,18,11,13,164,130,162,52,20,21,99,64,
    193,50,129,188,72,201,86,78,100,119,190,157,85,204,103,179,
    253,64,119,129,215,194,202,154,11,107,120,51,222,103,117,29,
    172,249,67,132,170,90,9,163,171,202,31,135,198,172,85,223,
    82,155,16,97,232,116,112,45,55,155,74,182,194,185,192,162,
    174,214,66,105,155,146,221,61,184,59,4,94,175,141,230,75,
    33,251,214,15,252,93,155,41,119,86,242,209,199,159,204,89,
    55,132,4,215,244,122,130,48,97,180,159,67,54,127,130,96,
    166,217,248,207,114,216,37,254,15,225,16,255,254,55,240,195,
    21,77,137,16,206,162,31,217,235,112,110,
};

EmbeddedPython embedded_m5_objects_ArmInterrupts(
    "m5/objects/ArmInterrupts.py",
    "/home/faculty/gem5/src/arch/arm/ArmInterrupts.py",
    "m5.objects.ArmInterrupts",
    data_m5_objects_ArmInterrupts,
    283,
    503);

} // anonymous namespace