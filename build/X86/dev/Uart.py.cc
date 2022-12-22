#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Uart[] = {
    120,156,149,82,77,111,212,64,12,245,36,217,143,110,11,236,
    1,184,33,5,78,17,135,13,66,90,169,7,132,80,213,51,
    170,210,112,32,151,104,72,188,36,85,102,19,205,204,86,155,
    115,249,223,96,79,146,165,112,107,62,44,251,197,177,159,159,
    167,128,241,242,233,253,18,2,152,148,156,146,30,1,13,64,
    58,122,98,240,60,104,60,80,62,100,62,136,210,7,244,97,
    39,160,12,224,23,192,3,192,247,44,128,114,6,24,56,116,
    126,66,103,80,46,224,54,90,82,225,250,55,93,145,32,207,
    178,121,63,184,207,201,92,73,83,23,55,117,123,141,247,117,
    129,54,32,232,155,212,182,120,204,239,138,249,93,147,131,0,
    153,96,150,153,199,36,184,175,0,234,131,115,184,91,0,46,
    225,238,140,201,62,120,144,173,28,120,62,129,190,3,47,32,
    185,141,184,69,226,145,49,231,60,50,222,199,7,106,184,169,
    42,67,109,224,166,145,118,215,106,21,218,170,54,97,233,88,
    133,228,117,148,19,182,187,141,185,160,164,180,194,208,162,86,
    245,94,54,209,51,30,133,135,204,243,189,84,152,231,118,229,
    2,213,150,135,134,67,110,104,251,110,24,46,213,7,116,217,
    242,135,177,90,22,214,101,23,199,99,94,161,44,81,219,25,
    147,144,90,42,151,53,209,177,243,1,198,189,181,44,137,220,
    247,238,123,55,125,231,32,29,41,185,224,196,143,85,252,107,
    204,59,50,113,213,42,140,119,178,56,52,182,143,127,162,218,
    198,70,23,49,107,193,226,111,186,222,9,244,150,243,153,222,
    92,12,247,43,225,74,115,206,229,199,237,135,211,146,196,180,
    164,151,255,45,137,215,227,179,232,92,46,89,115,189,23,143,
    68,231,34,36,252,176,18,30,43,113,30,75,144,44,255,161,
    253,36,238,235,241,7,19,140,220,191,70,44,159,61,35,163,
    182,155,142,213,53,110,18,142,116,123,236,157,188,195,17,76,
    196,116,62,78,117,158,78,193,21,255,52,156,128,207,111,248,
    63,6,86,98,37,214,222,235,197,31,151,220,177,214,
};

EmbeddedPython embedded_m5_objects_Uart(
    "m5/objects/Uart.py",
    "/home/faculty/gem5/src/dev/Uart.py",
    "m5.objects.Uart",
    data_m5_objects_Uart,
    462,
    893);

} // anonymous namespace