#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_MemoryMode[] = {
    120,156,181,86,109,111,219,84,20,62,215,118,210,38,77,214,
    116,221,218,110,45,91,0,13,34,132,26,222,135,180,105,130,
    161,33,49,105,5,28,166,117,217,132,201,108,167,113,154,216,
    145,125,187,45,40,253,66,39,224,15,240,19,248,192,191,225,
    31,193,121,142,237,36,125,65,226,67,87,197,167,215,231,30,
    159,123,94,158,115,206,117,41,251,43,240,243,69,157,40,121,
    168,136,60,254,41,26,16,13,21,181,21,41,95,145,87,163,
    253,2,197,159,144,87,160,87,68,109,131,124,131,142,120,97,
    210,19,131,194,138,124,83,164,129,41,28,69,227,50,249,22,
    181,11,244,40,92,33,203,47,210,126,153,226,159,72,41,21,
    42,218,245,22,200,91,164,87,172,157,23,37,81,184,72,96,
    150,133,89,34,111,73,152,101,242,42,178,88,162,113,141,252,
    10,181,171,16,107,95,96,181,239,177,218,101,81,251,55,212,
    122,188,179,66,222,5,136,179,93,143,33,105,65,82,206,91,
    22,45,172,194,164,254,10,232,17,220,226,151,139,212,190,40,
    220,213,121,238,37,106,95,18,238,229,121,238,26,181,215,132,
    187,62,207,221,160,246,134,112,175,204,115,175,82,251,170,112,
    55,169,189,137,200,180,26,23,57,196,193,63,252,215,224,16,
    147,174,48,121,238,199,73,16,133,78,16,118,163,192,192,126,
    17,4,9,113,65,22,178,204,124,133,204,252,69,146,22,207,
    200,50,115,72,164,240,78,52,48,232,80,22,135,6,141,27,
    52,81,212,183,200,51,105,194,199,20,96,210,158,162,35,131,
    158,154,16,56,100,106,113,252,174,145,165,211,180,244,37,126,
    169,166,5,58,44,208,164,64,173,221,137,1,198,126,137,226,
    63,233,231,45,81,186,40,74,13,154,48,181,232,200,162,195,
    34,61,98,33,102,245,75,136,186,218,157,176,167,204,105,53,
    44,182,118,103,206,93,184,226,5,113,216,25,250,186,198,107,
    199,15,15,134,206,3,127,24,197,227,7,145,231,55,202,185,
    84,148,108,143,58,186,103,203,103,38,226,49,28,105,81,23,
    133,190,94,226,69,55,8,61,103,24,121,7,3,95,47,66,
    151,211,13,6,190,227,200,230,55,195,81,20,235,123,113,28,
    197,54,66,42,204,65,212,153,126,129,128,186,131,40,241,27,
    56,77,142,177,161,94,67,186,59,18,141,48,64,76,197,199,
    158,159,184,113,48,210,156,169,84,35,164,161,173,129,28,9,
    73,238,50,105,246,162,161,223,236,118,220,131,129,30,55,247,
    252,225,167,205,103,7,193,192,107,238,126,254,89,115,52,214,
    189,40,108,50,47,8,181,207,113,24,52,79,68,96,155,69,
    128,145,228,69,176,231,4,226,133,211,243,7,35,63,174,130,
    123,21,231,168,154,170,168,162,50,85,67,85,121,85,224,199,
    84,91,198,146,218,9,224,135,11,223,0,33,107,30,52,200,
    164,162,125,131,226,45,64,162,207,63,133,28,50,48,90,216,
    51,100,239,123,4,32,229,246,77,36,58,101,78,4,70,140,
    39,150,188,141,204,134,36,88,40,80,191,72,41,70,24,90,
    41,104,226,49,40,139,67,141,193,202,45,74,254,32,14,40,
    163,99,66,25,114,142,76,82,97,141,116,25,245,201,220,53,
    62,240,23,1,95,171,1,243,119,4,4,186,23,36,209,139,
    80,66,141,181,148,75,139,35,243,221,248,219,103,125,223,213,
    201,117,102,60,142,14,234,110,39,12,35,93,239,120,94,189,
    163,117,28,60,59,208,126,82,215,81,253,70,210,64,246,236,
    149,28,71,83,125,227,81,142,27,228,152,113,147,190,120,129,
    171,249,101,85,94,36,11,137,175,25,3,189,200,75,152,15,
    21,123,190,182,97,164,70,144,35,49,68,32,226,64,20,199,
    179,220,5,126,255,50,183,68,112,216,40,230,168,73,252,65,
    87,151,5,128,157,36,113,196,18,240,5,107,80,252,188,51,
    56,240,69,123,194,250,216,32,44,83,27,206,31,109,27,176,
    60,119,84,172,15,163,208,27,179,49,129,251,46,206,217,16,
    204,85,4,117,151,25,113,11,76,139,252,191,168,214,12,215,
    202,112,86,204,177,182,6,47,73,50,173,178,100,51,238,142,
    184,153,52,12,233,6,226,128,212,219,91,88,225,99,123,11,
    228,13,144,107,32,215,115,31,207,213,209,234,73,71,111,66,
    185,33,222,137,31,8,189,153,251,225,29,171,153,43,179,154,
    225,14,215,2,246,13,84,200,12,251,22,186,97,124,7,148,
    69,165,170,76,74,126,64,239,69,141,136,50,148,3,3,27,
    171,25,220,37,42,54,186,97,99,49,71,170,13,248,205,99,
    112,111,14,131,54,18,34,0,180,175,228,173,205,129,68,10,
    61,123,19,170,10,103,132,181,14,242,230,107,137,237,12,68,
    123,167,64,116,11,231,212,50,16,85,5,60,101,126,106,134,
    107,102,1,159,78,183,213,19,224,1,114,172,51,144,243,14,
    86,230,105,23,95,39,104,50,199,190,158,3,13,108,49,230,
    237,223,225,197,120,29,102,207,195,101,157,231,242,163,112,157,
    71,173,33,163,246,3,25,181,50,174,229,94,146,54,87,83,
    250,107,186,40,192,255,174,73,107,217,8,77,74,76,71,113,
    244,114,92,143,186,117,45,14,162,23,222,190,145,108,223,72,
    110,113,151,171,223,145,254,146,246,185,180,147,197,254,8,157,
    8,159,222,123,233,250,50,186,228,205,113,210,198,227,72,19,
    114,178,145,200,200,185,140,232,25,121,88,165,5,39,58,70,
    231,61,255,192,150,167,129,133,157,247,161,185,44,81,53,213,
    58,163,164,172,228,120,39,109,175,114,15,146,93,126,238,34,
    210,112,209,39,92,76,237,86,106,156,216,13,15,236,247,143,
    33,225,60,173,182,155,172,230,97,142,128,226,12,1,120,204,
    28,193,191,241,13,66,1,4,191,18,114,204,169,204,16,60,
    5,60,146,186,10,241,31,73,160,126,198,100,150,30,209,194,
    52,22,9,110,29,201,77,17,77,7,245,125,250,125,174,78,
    242,113,106,102,23,190,249,113,106,77,251,139,128,227,127,141,
    76,235,120,35,66,38,122,157,4,98,105,119,153,149,222,172,
    95,79,111,106,220,93,207,21,41,139,169,78,7,199,63,157,
    225,4,3,105,83,173,26,115,217,255,16,228,163,105,226,85,
    206,59,47,75,174,211,127,143,74,39,237,207,79,112,156,37,
    6,46,47,72,156,78,92,233,83,211,182,166,193,26,39,54,
    56,246,50,136,145,87,47,215,58,95,249,244,88,238,17,233,
    145,83,22,74,120,135,175,10,233,237,22,67,212,126,155,178,
    166,104,99,98,219,219,148,205,6,193,107,90,243,161,255,66,
    170,94,18,104,127,12,254,37,216,20,242,101,35,240,228,8,
    55,10,249,190,17,106,201,119,182,33,67,168,163,35,120,120,
    76,166,56,229,139,136,14,134,65,184,119,90,36,229,235,107,
    51,45,28,50,183,227,246,78,73,175,156,37,162,97,237,206,
    177,68,28,255,234,194,169,125,185,74,185,207,59,241,235,105,
    1,146,158,219,105,203,188,179,148,235,197,221,168,180,92,82,
    69,3,119,113,147,219,87,85,89,102,165,86,178,42,75,37,
    171,180,96,202,208,171,50,92,203,86,169,82,85,37,227,228,
    243,47,100,28,76,153,
};

EmbeddedPython embedded_m5_internal_enum_MemoryMode(
    "m5/internal/enum_MemoryMode.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/enum_MemoryMode.py",
    "m5.internal.enum_MemoryMode",
    data_m5_internal_enum_MemoryMode,
    1606,
    3973);

} // anonymous namespace