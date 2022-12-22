#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_I8042[] = {
    120,156,165,146,221,111,211,64,12,192,125,73,147,174,165,176,
    34,241,134,144,34,120,32,226,161,65,136,77,213,132,16,27,
    123,217,203,84,181,60,64,94,162,35,185,45,129,92,47,202,
    93,166,246,185,252,223,96,59,45,48,137,55,242,97,217,190,
    243,249,103,251,114,216,63,62,254,31,34,0,123,141,74,129,
    159,128,26,224,211,94,19,189,230,65,237,129,246,33,245,65,
    144,237,67,61,0,29,64,26,160,61,0,229,195,141,128,34,
    128,31,0,59,128,47,105,8,69,8,171,120,136,71,86,63,
    241,137,5,106,142,196,171,94,125,132,226,66,218,42,95,84,
    230,82,221,85,185,234,253,199,40,62,207,79,175,214,110,101,
    186,54,87,139,106,237,2,244,93,205,95,191,125,147,255,205,
    124,65,204,37,42,10,32,21,68,158,122,132,140,136,136,155,
    14,8,18,241,84,8,223,134,128,140,59,92,58,58,152,1,
    155,35,54,199,160,198,68,141,196,59,12,124,112,223,57,100,
    231,4,150,171,248,8,147,45,41,181,125,184,167,92,157,159,
    157,49,153,157,82,243,212,93,178,153,159,38,21,121,102,101,
    89,17,170,125,140,226,82,58,25,53,166,117,145,44,138,86,
    89,107,159,162,247,163,209,90,174,139,196,58,233,58,123,127,
    29,139,3,172,61,114,38,178,213,237,90,214,145,43,85,164,
    77,103,85,84,74,27,21,120,162,125,241,207,77,223,213,246,
    171,145,109,241,123,95,76,184,142,232,179,108,45,181,202,50,
    55,102,67,155,162,171,201,28,208,134,109,163,220,8,149,124,
    179,201,242,90,90,203,187,200,42,149,44,84,203,39,52,149,
    201,136,145,135,178,144,173,212,28,124,78,46,10,166,124,25,
    85,226,38,20,220,87,200,142,165,71,73,8,133,171,200,112,
    176,89,131,130,58,119,64,62,56,99,234,220,31,97,95,162,
    72,74,163,85,114,35,243,174,118,219,228,86,233,147,196,182,
    121,114,104,58,143,97,214,108,121,64,207,41,232,9,138,80,
    240,235,133,226,24,223,137,24,225,127,205,215,146,105,245,201,
    172,161,26,44,215,70,86,107,54,91,23,210,200,248,82,46,
    197,97,107,127,41,177,219,92,7,103,249,15,74,206,247,174,
    239,255,251,103,20,76,142,177,24,139,169,152,122,191,0,242,
    94,201,121,
};

EmbeddedPython embedded_m5_objects_I8042(
    "m5/objects/I8042.py",
    "/home/faculty/gem5/src/dev/x86/I8042.py",
    "m5.objects.I8042",
    data_m5_objects_I8042,
    515,
    924);

} // anonymous namespace
