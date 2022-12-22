#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_CheckerCPU[] = {
    120,156,165,82,81,107,219,48,16,62,197,73,218,164,27,148,
    238,121,160,183,153,49,226,151,21,246,48,198,72,232,160,48,
    150,144,182,15,243,139,209,164,75,237,205,150,141,36,211,228,
    185,251,223,235,157,210,208,188,207,178,63,62,125,220,233,78,
    223,89,195,243,147,208,247,85,2,248,143,68,12,189,2,106,
    128,91,102,3,168,5,52,2,114,1,194,36,128,2,54,2,
    204,16,254,2,60,2,252,204,7,96,70,112,147,142,41,177,
    250,71,79,42,136,5,134,247,123,122,66,48,87,30,23,171,
    187,48,37,190,40,81,255,65,71,91,125,92,126,206,229,87,
    68,16,184,22,149,166,163,49,129,124,200,221,228,35,192,49,
    252,62,1,60,229,150,30,7,144,79,142,148,36,42,211,131,
    146,112,131,172,156,193,250,38,29,209,161,235,1,129,191,32,
    208,93,159,233,125,11,25,241,89,89,250,115,146,175,182,85,
    144,173,149,202,74,116,174,117,254,19,137,119,157,81,1,101,
    40,81,62,167,200,135,42,148,81,104,84,101,37,93,226,157,
    151,62,112,212,113,242,130,146,175,55,82,201,186,85,70,58,
    244,125,29,100,229,101,101,117,235,28,234,240,129,194,235,157,
    236,92,101,3,133,61,40,103,43,123,79,7,24,105,90,105,
    219,32,145,26,74,95,177,129,167,4,69,97,85,131,69,17,
    29,44,138,166,53,125,205,219,33,7,236,58,140,228,214,245,
    24,163,213,47,31,156,210,33,70,235,237,182,40,81,25,116,
    129,157,88,41,167,154,24,62,111,219,58,74,223,84,237,49,
    156,177,247,84,116,105,175,248,14,225,53,237,251,104,192,65,
    121,67,10,119,186,164,214,151,246,59,93,45,234,41,143,240,
    5,60,99,86,182,13,102,27,165,233,226,187,236,30,155,203,
    204,59,205,134,103,47,243,159,117,187,56,23,201,89,60,132,
    177,216,175,11,49,137,235,71,202,127,70,152,16,52,151,179,
    142,59,247,107,113,24,231,255,212,141,54,125,222,219,248,229,
    45,103,179,35,83,113,62,120,2,203,16,182,30,
};

EmbeddedPython embedded_m5_objects_CheckerCPU(
    "m5/objects/CheckerCPU.py",
    "/home/faculty/gem5/src/cpu/CheckerCPU.py",
    "m5.objects.CheckerCPU",
    data_m5_objects_CheckerCPU,
    461,
    788);

} // anonymous namespace