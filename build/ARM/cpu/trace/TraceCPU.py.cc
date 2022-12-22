#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_TraceCPU[] = {
    120,156,165,84,219,110,27,55,16,157,93,201,82,44,95,100,
    59,109,90,20,125,224,67,11,8,189,88,104,211,244,161,232,
    13,202,5,8,144,40,134,20,63,196,47,2,189,28,105,217,
    238,173,36,55,182,250,154,252,66,63,172,127,210,63,104,103,
    70,218,74,69,47,40,156,93,45,69,30,114,56,135,103,102,
    152,192,250,105,209,247,189,2,240,95,80,199,208,47,130,12,
    224,57,247,98,200,34,200,35,184,136,32,50,45,192,8,230,
    17,152,54,188,6,120,5,240,226,34,6,179,3,211,65,135,
    12,237,239,244,12,34,234,5,110,62,90,117,187,212,140,180,
    199,251,103,231,225,22,245,159,59,157,240,32,217,118,62,98,
    231,191,82,7,129,61,145,99,222,152,188,182,152,193,69,27,
    112,7,200,59,59,37,176,35,195,118,51,236,130,57,97,22,
    175,169,191,43,83,157,102,170,7,184,7,63,236,131,161,53,
    183,224,21,109,117,176,133,236,10,114,40,72,31,76,15,204,
    158,32,71,91,200,190,32,199,13,114,0,230,80,144,19,65,
    110,131,33,240,72,144,183,4,121,27,240,14,152,99,65,222,
    129,201,116,112,155,78,229,127,105,14,174,232,228,42,47,13,
    102,234,42,181,73,170,28,86,153,94,122,21,120,214,171,5,
    22,232,116,64,163,108,161,180,170,156,45,157,242,54,175,51,
    29,108,89,244,20,63,181,183,197,66,61,64,103,95,62,187,
    203,27,210,26,27,188,50,140,144,105,146,105,239,209,159,170,
    199,129,182,9,232,230,178,247,149,13,169,122,242,153,74,116,
    146,210,172,236,53,137,153,222,29,106,146,170,30,10,137,85,
    59,163,241,105,154,38,28,195,230,187,207,81,106,131,228,199,
    116,192,150,227,192,129,15,54,39,66,3,14,230,42,230,28,
    210,36,243,43,132,27,255,9,53,195,180,204,113,72,92,234,
    44,44,135,11,204,239,13,189,75,134,27,199,77,106,156,86,
    203,176,71,6,57,230,165,91,206,88,174,207,121,19,246,8,
    241,63,83,10,64,148,24,25,175,40,180,69,241,26,101,52,
    105,55,68,110,200,230,144,12,28,254,84,91,71,194,136,124,
    95,110,17,226,191,248,111,26,109,8,137,227,184,97,229,49,
    155,139,66,85,94,191,9,39,86,94,27,115,246,244,252,171,
    63,185,68,255,75,156,73,167,137,212,27,11,115,204,86,117,
    85,149,46,204,130,254,17,103,229,75,116,223,108,180,9,208,
    228,215,227,194,7,87,39,156,197,171,100,87,115,155,161,127,
    143,166,30,232,160,41,121,43,44,12,22,201,114,107,218,30,
    177,249,135,204,188,206,47,209,169,114,174,176,8,206,82,58,
    83,129,132,20,149,15,165,67,117,89,207,231,232,252,7,255,
    181,50,43,181,89,47,180,124,92,201,207,127,93,237,240,211,
    210,81,69,173,45,22,171,203,234,183,239,252,93,250,123,74,
    218,216,42,179,52,237,19,157,161,88,108,10,124,206,185,34,
    71,169,43,46,78,83,94,21,126,72,118,15,175,109,160,194,
    71,170,237,98,169,202,98,219,40,41,243,42,195,64,12,240,
    26,147,154,133,26,15,222,229,232,241,181,57,155,21,58,199,
    217,44,244,100,64,53,81,103,60,236,202,208,148,9,245,37,
    212,203,10,101,77,114,125,61,75,81,211,9,164,150,228,78,
    200,49,164,165,153,236,112,228,187,77,62,142,137,198,132,45,
    38,188,46,240,228,153,118,58,151,4,155,146,38,197,34,28,
    240,245,78,1,20,182,143,40,48,130,24,138,219,6,97,150,
    231,133,183,139,2,77,232,179,190,246,103,156,114,116,70,162,
    160,20,17,99,79,40,14,107,168,187,134,38,207,70,226,248,
    17,197,40,200,66,150,112,163,178,16,29,149,101,182,90,165,
    51,143,226,2,11,125,153,225,67,237,178,37,75,187,201,228,
    155,165,179,220,134,31,179,229,251,212,116,90,157,136,222,184,
    223,238,183,247,91,253,246,73,68,111,76,95,231,100,103,60,
    224,10,14,187,124,75,221,59,173,88,47,63,145,138,138,255,
    66,225,134,101,197,90,126,189,138,241,183,146,170,124,254,94,
    116,20,255,1,128,174,205,16,
};

EmbeddedPython embedded_m5_objects_TraceCPU(
    "m5/objects/TraceCPU.py",
    "/home/faculty/gem5/src/cpu/trace/TraceCPU.py",
    "m5.objects.TraceCPU",
    data_m5_objects_TraceCPU,
    920,
    1971);

} // anonymous namespace