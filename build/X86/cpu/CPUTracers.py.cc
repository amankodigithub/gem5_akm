#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_CPUTracers[] = {
    120,156,173,147,65,111,211,64,16,133,103,237,216,73,3,18,
    129,67,15,72,72,229,130,44,144,226,83,47,21,66,136,138,
    3,151,130,156,112,32,23,107,187,222,146,32,111,106,121,55,
    40,57,211,255,13,243,38,137,67,144,184,20,28,103,52,251,
    50,59,126,223,100,109,104,119,197,252,125,123,70,228,27,78,
    42,190,21,213,68,78,209,76,145,194,58,162,58,162,41,178,
    152,234,152,92,76,179,152,127,233,145,141,233,70,81,149,208,
    29,209,15,162,47,179,30,85,233,94,237,119,106,66,213,128,
    108,79,212,147,78,77,169,26,210,36,123,192,15,93,252,228,
    43,83,156,133,19,14,147,133,251,120,253,205,154,176,149,16,
    94,110,211,33,135,15,75,31,166,173,54,182,149,226,247,107,
    187,93,153,61,15,42,223,129,231,41,39,150,128,193,222,103,
    17,192,216,56,227,176,207,98,146,129,187,64,240,35,14,210,
    228,226,162,107,231,31,177,104,154,85,110,215,54,64,25,207,
    231,89,2,19,3,14,101,185,212,206,150,165,56,42,75,119,
    91,173,106,44,123,40,216,52,86,172,153,245,186,52,181,246,
    94,170,176,154,91,93,217,54,131,203,67,240,136,249,252,214,
    217,252,70,155,85,29,54,249,87,235,206,115,223,154,28,6,
    46,63,125,222,89,26,55,27,49,252,28,187,82,14,169,194,
    103,55,150,96,107,169,187,223,32,96,216,63,62,12,226,208,
    79,84,24,89,64,58,154,69,1,222,66,50,216,41,250,8,
    131,35,186,123,32,194,202,139,63,16,113,76,174,116,88,124,
    183,127,97,60,235,24,109,36,116,4,58,144,38,66,154,118,
    164,152,150,127,114,32,253,173,173,200,48,180,20,173,99,237,
    31,177,202,191,60,109,87,86,142,130,190,246,168,11,255,115,
    2,176,248,10,187,6,221,4,82,117,37,54,194,67,14,238,
    124,220,189,36,5,237,223,27,86,27,221,106,231,139,104,127,
    180,101,150,210,238,95,252,8,231,235,237,33,127,243,12,187,
    209,113,164,134,106,20,157,38,167,201,47,230,237,214,103,
};

EmbeddedPython embedded_m5_objects_CPUTracers(
    "m5/objects/CPUTracers.py",
    "/home/faculty/gem5/src/cpu/CPUTracers.py",
    "m5.objects.CPUTracers",
    data_m5_objects_CPUTracers,
    463,
    1099);

} // anonymous namespace
