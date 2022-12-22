#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_MemoryMode[] = {
    120,156,181,86,221,110,27,85,16,158,179,187,118,98,199,78,
    156,166,77,210,38,180,6,84,176,16,138,249,85,47,90,85,
    180,168,72,84,106,10,107,170,182,110,197,226,238,174,227,117,
    236,93,107,247,164,173,145,115,67,42,224,5,120,4,46,120,
    27,222,8,230,155,221,181,157,31,36,46,210,200,59,57,59,
    103,118,206,252,124,51,115,92,202,254,10,252,124,85,39,74,
    30,41,34,143,127,138,6,68,67,69,109,69,202,87,228,213,
    104,191,64,241,23,228,21,232,13,81,219,32,223,160,35,94,
    152,244,204,160,176,34,223,20,105,96,10,71,209,184,76,190,
    69,237,2,61,14,87,201,242,139,180,95,166,248,39,82,74,
    133,138,158,120,11,228,45,210,27,214,206,139,146,40,92,36,
    48,203,194,44,145,183,36,204,50,121,21,89,44,209,184,70,
    126,133,218,85,136,181,151,89,237,71,172,118,69,212,254,13,
    181,30,239,172,146,183,12,113,182,235,41,36,45,72,202,121,
    43,162,133,85,152,212,95,5,61,130,91,252,114,129,218,23,
    132,187,54,207,189,72,237,139,194,189,52,207,93,167,246,186,
    112,55,230,185,155,212,222,20,238,229,121,238,21,106,95,17,
    238,22,181,183,16,153,86,227,2,135,56,248,135,255,26,28,
    98,210,21,38,47,253,56,9,162,208,9,194,110,20,24,216,
    47,130,32,33,46,200,66,150,153,175,145,153,191,72,210,226,
    25,89,102,14,137,20,222,137,6,6,29,202,226,208,160,113,
    131,38,138,250,22,121,38,77,248,152,2,76,218,83,116,100,
    208,115,19,2,135,76,45,142,223,85,178,116,154,150,190,196,
    47,213,180,64,135,5,154,20,168,245,100,98,128,177,95,162,
    248,79,250,121,91,148,46,138,82,131,38,76,45,58,178,232,
    176,72,143,89,136,89,253,18,162,174,158,76,216,83,230,180,
    26,22,91,187,59,231,46,92,241,130,56,236,12,125,93,227,
    181,227,135,7,67,231,129,63,140,226,241,131,200,243,27,229,
    92,42,74,118,70,29,221,179,229,51,19,241,24,142,180,168,
    139,66,95,47,241,162,27,132,158,51,140,188,131,129,175,23,
    161,203,233,6,3,223,113,100,243,219,225,40,138,245,189,56,
    142,98,27,33,21,230,32,234,76,191,64,64,221,65,148,248,
    13,156,38,199,216,80,175,33,221,29,137,70,24,32,166,226,
    99,207,79,220,56,24,105,206,84,170,17,210,208,214,64,142,
    132,36,119,153,52,123,209,208,111,118,59,238,193,64,143,155,
    123,254,240,203,230,139,131,96,224,53,239,216,15,154,163,177,
    238,69,97,147,121,65,168,125,142,195,160,121,34,2,59,44,
    2,140,36,175,130,61,39,16,47,156,158,63,24,249,113,21,
    220,43,56,71,213,84,69,21,149,169,26,170,202,171,2,63,
    166,218,54,150,212,110,0,63,92,248,6,8,89,243,160,65,
    38,21,237,27,20,111,3,18,125,254,41,228,144,129,209,194,
    158,33,123,223,35,0,41,183,111,34,209,41,115,34,48,98,
    60,177,228,45,100,54,36,193,66,129,250,69,74,49,194,208,
    74,65,19,143,65,89,28,106,12,86,110,81,242,7,113,64,
    25,29,19,202,144,115,100,146,10,107,164,203,168,79,230,174,
    243,129,191,8,248,90,13,152,191,43,32,208,189,32,137,94,
    133,18,106,172,165,92,90,28,153,239,198,15,95,244,125,87,
    39,215,152,241,52,58,168,187,157,48,140,116,189,227,121,245,
    142,214,113,240,226,64,251,73,93,71,245,235,73,3,217,179,
    87,115,28,77,245,141,71,57,110,144,99,198,77,250,226,5,
    174,230,151,53,121,145,44,36,190,102,12,244,34,47,97,62,
    84,236,249,218,134,145,26,65,142,196,16,129,136,3,81,28,
    207,114,203,252,126,39,183,68,112,216,40,230,168,73,252,65,
    87,151,5,128,157,36,113,196,18,240,5,107,80,252,178,51,
    56,240,69,123,194,250,216,32,44,83,27,206,31,109,155,176,
    60,119,84,172,15,163,208,27,179,49,129,251,33,206,217,20,
    204,85,4,117,151,24,113,11,76,139,252,191,168,214,13,215,
    202,112,86,204,177,182,14,47,73,50,173,178,100,51,238,142,
    184,153,52,12,233,6,226,128,212,219,123,88,225,99,123,27,
    228,29,144,171,32,215,114,31,207,213,209,234,73,71,111,64,
    185,33,222,137,31,8,189,153,251,225,29,171,153,203,179,154,
    225,14,215,2,246,13,84,200,12,251,22,186,97,124,27,148,
    69,165,170,76,74,126,64,239,69,141,136,50,148,3,3,27,
    171,25,220,37,42,54,186,97,99,49,71,170,13,248,205,99,
    112,111,14,131,54,18,34,0,180,47,231,173,205,129,68,10,
    61,123,11,170,10,103,132,181,14,242,238,91,137,237,12,68,
    123,167,64,116,19,231,212,50,16,85,5,60,101,126,106,134,
    107,102,1,159,78,183,181,19,224,1,114,172,51,144,243,1,
    86,230,105,23,223,38,104,50,199,190,153,3,13,108,49,230,
    237,223,229,197,120,3,102,207,195,101,131,231,242,227,112,131,
    71,173,33,163,246,19,25,181,50,174,229,94,146,54,87,83,
    250,107,186,40,192,255,174,73,235,217,8,77,74,76,71,113,
    244,122,92,143,186,117,45,14,162,23,222,186,158,236,92,79,
    110,114,151,171,223,150,254,146,246,185,180,147,197,254,8,157,
    8,159,222,123,237,250,50,186,228,205,113,210,198,227,72,19,
    114,178,145,200,200,185,132,232,25,121,88,165,5,39,58,70,
    231,61,255,192,150,167,129,133,157,247,161,185,44,81,53,213,
    6,163,164,172,228,120,39,109,175,114,15,146,93,126,238,34,
    210,112,209,39,92,76,237,86,106,156,216,13,15,236,143,143,
    33,225,60,173,182,155,172,230,81,142,128,226,12,1,120,204,
    28,193,191,241,13,66,1,4,191,18,114,204,169,204,16,60,
    5,60,146,186,6,241,31,73,160,126,198,100,150,30,209,194,
    52,22,9,110,29,201,13,17,77,7,245,125,250,125,174,78,
    242,113,106,102,23,190,249,113,106,77,251,139,128,227,127,141,
    76,235,120,35,66,38,122,157,4,98,105,119,153,149,222,172,
    95,79,111,106,220,93,207,21,41,139,169,78,7,199,63,159,
    225,4,3,105,75,173,25,115,217,255,20,228,179,105,226,85,
    206,59,47,75,174,209,127,143,74,39,237,207,207,112,156,37,
    6,174,44,72,156,78,92,233,83,211,182,167,193,26,39,54,
    56,246,10,136,145,87,47,215,58,95,249,244,88,238,17,233,
    145,83,22,74,120,151,175,10,233,237,22,67,212,126,159,178,
    166,104,99,98,219,59,148,205,6,193,107,90,243,161,255,74,
    170,94,18,104,127,14,254,69,216,20,242,101,35,240,228,8,
    55,10,249,190,17,106,201,119,182,33,67,168,163,35,120,120,
    76,166,56,229,139,136,14,134,65,184,119,90,36,229,235,171,
    51,45,28,50,183,227,246,78,73,175,158,37,162,97,237,238,
    177,68,28,255,106,249,212,190,92,165,220,151,157,248,237,180,
    0,73,207,173,180,101,222,94,202,245,226,110,84,90,41,169,
    162,129,187,184,201,237,171,170,44,179,82,43,89,149,165,146,
    85,90,48,101,232,85,25,174,101,171,84,169,170,146,113,242,
    249,23,132,158,77,157,
};

EmbeddedPython embedded_m5_internal_enum_MemoryMode(
    "m5/internal/enum_MemoryMode.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/enum_MemoryMode.py",
    "m5.internal.enum_MemoryMode",
    data_m5_internal_enum_MemoryMode,
    1606,
    3973);

} // anonymous namespace
