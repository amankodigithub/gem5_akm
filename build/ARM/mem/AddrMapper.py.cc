#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_AddrMapper[] = {
    120,156,165,82,77,111,219,48,12,165,226,196,73,186,22,43,
    118,216,89,167,194,219,33,6,6,244,86,12,219,142,5,186,
    21,78,81,96,185,24,138,197,196,41,172,216,144,148,161,57,
    119,255,123,35,153,120,61,109,135,213,31,52,73,139,122,143,
    79,172,224,120,37,244,126,210,0,225,154,28,75,143,130,6,
    224,142,189,1,52,10,156,130,133,2,101,19,64,5,43,5,
    118,8,63,1,158,0,190,47,6,96,71,128,3,201,166,127,
    178,9,216,49,204,179,9,109,183,249,69,87,166,200,139,108,
    222,31,220,41,153,27,116,223,150,15,88,197,120,66,209,103,
    107,253,141,233,58,244,85,79,107,64,239,23,166,245,129,28,
    4,230,64,148,24,146,248,16,151,33,44,8,59,101,146,79,
    148,25,3,78,128,56,178,63,133,98,158,13,169,172,224,77,
    194,27,50,14,93,110,8,164,116,130,50,171,235,240,138,89,
    152,16,209,235,174,245,49,48,143,121,99,126,160,132,25,135,
    145,123,40,203,173,113,88,150,66,180,44,93,107,119,13,135,
    12,16,247,29,74,190,122,124,44,107,52,22,189,228,239,252,
    14,165,216,44,67,244,230,216,229,1,237,150,118,143,41,115,
    146,80,212,16,92,249,49,98,198,28,101,44,194,179,9,108,
    243,186,117,152,175,76,181,107,226,62,95,163,187,204,131,175,
    114,110,238,89,193,89,183,151,190,115,174,98,216,84,201,157,
    156,170,248,154,69,49,219,53,254,151,224,15,163,94,237,180,
    15,147,163,248,189,224,103,255,16,60,235,193,131,110,87,154,
    22,180,126,175,99,109,162,14,117,187,107,44,165,180,71,89,
    111,195,187,191,46,54,30,245,18,55,219,181,62,44,213,177,
    149,89,43,120,144,11,97,193,34,22,44,113,228,67,190,167,
    41,107,253,173,241,198,137,216,220,187,108,45,114,180,126,179,
    222,108,77,83,122,65,147,92,207,226,152,123,209,81,176,34,
    87,92,117,218,31,197,56,85,83,250,126,21,197,132,145,187,
    156,117,76,47,20,170,159,90,169,123,9,176,140,223,213,97,
    90,63,94,112,53,11,114,162,206,39,111,207,126,3,199,126,
    224,93,
};

EmbeddedPython embedded_m5_objects_AddrMapper(
    "m5/objects/AddrMapper.py",
    "/home/faculty/gem5/src/mem/AddrMapper.py",
    "m5.objects.AddrMapper",
    data_m5_objects_AddrMapper,
    482,
    1020);

} // anonymous namespace