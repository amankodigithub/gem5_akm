#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DerivedClockDomain[] = {
    120,156,189,88,253,114,219,198,17,223,3,64,74,164,40,75,
    178,44,201,178,228,136,105,199,53,227,105,165,54,141,227,204,
    88,117,147,38,233,76,147,25,37,5,147,177,195,100,138,66,
    192,145,4,5,2,28,224,36,153,25,233,159,210,211,246,5,
    250,8,253,163,111,211,55,106,119,247,0,16,250,114,61,211,
    48,50,113,62,28,238,246,246,227,183,31,119,30,100,127,21,
    124,62,108,2,164,137,0,240,241,39,32,4,24,10,232,8,
    16,82,128,127,7,142,42,144,188,7,126,5,94,1,116,12,
    144,6,76,176,99,194,183,6,68,13,94,83,133,208,228,17,
    1,227,58,72,11,58,21,120,30,173,128,37,171,112,84,135,
    228,207,32,132,136,4,188,240,231,192,159,135,87,72,29,59,
    53,38,56,15,52,88,231,193,26,248,11,60,88,7,191,193,
    157,5,24,47,131,108,64,103,145,166,117,110,33,217,71,72,
    118,137,201,254,155,200,250,248,101,13,252,91,52,29,249,250,
    134,102,90,52,147,247,91,98,42,203,57,151,43,208,185,157,
    247,87,75,253,59,165,254,26,247,113,215,219,48,88,135,193,
    6,12,238,66,23,21,177,82,236,176,9,210,132,193,61,232,
    220,3,137,191,77,152,160,174,252,219,165,21,91,188,98,181,
    88,177,205,43,238,67,231,62,72,252,109,235,21,85,104,183,
    214,81,255,193,127,240,175,133,250,7,213,192,230,68,38,105,
    16,71,78,16,117,227,192,160,239,85,106,200,90,30,53,115,
    153,217,62,38,179,253,11,216,102,190,145,153,237,28,144,176,
    32,89,66,3,206,185,115,110,192,184,5,103,2,6,22,248,
    38,156,225,54,21,98,160,39,96,98,192,119,38,77,56,199,
    214,66,229,190,5,150,210,54,27,176,114,53,165,57,56,175,
    192,89,5,218,47,206,12,26,56,170,65,242,79,248,126,155,
    137,206,51,81,3,206,176,181,96,98,193,121,21,158,227,36,
    28,26,212,72,124,241,226,12,37,197,145,118,203,66,110,15,
    74,226,146,40,126,144,68,238,80,170,77,236,59,35,55,113,
    135,206,39,50,9,78,164,255,113,24,123,71,159,196,67,55,
    136,90,245,124,122,156,238,142,92,213,183,121,189,73,138,25,
    142,20,211,141,35,169,22,176,211,13,34,223,25,198,254,113,
    40,213,60,17,117,186,65,40,29,135,63,254,97,56,138,19,
    245,105,146,196,137,77,186,229,193,48,118,139,21,164,89,47,
    140,83,217,162,221,120,27,155,200,43,154,221,29,49,69,98,
    128,121,166,197,190,76,189,36,24,41,52,153,166,72,179,137,
    90,139,140,197,77,250,57,54,123,253,120,40,247,186,174,119,
    28,170,241,94,79,14,31,239,29,30,7,161,191,247,226,131,
    247,247,70,99,213,143,163,61,28,11,34,37,81,33,225,222,
    77,170,216,197,185,183,137,232,105,208,115,2,22,199,233,203,
    112,36,147,69,26,189,71,27,138,101,209,16,85,97,138,150,
    88,196,94,5,31,83,108,27,11,226,32,32,129,60,18,146,
    64,101,149,97,68,182,21,112,100,64,178,77,32,25,224,79,
    144,85,17,42,109,250,102,240,183,63,146,38,244,232,192,36,
    211,235,193,51,6,22,34,12,103,238,147,173,35,96,116,84,
    96,80,5,141,26,4,155,134,81,50,166,22,167,19,25,3,
    137,91,144,254,3,80,179,136,151,51,200,176,52,49,65,68,
    203,160,234,228,206,56,186,142,27,254,133,225,216,110,17,251,
    7,140,6,213,15,210,248,52,98,157,83,159,29,168,141,154,
    249,114,252,197,225,64,122,42,221,193,129,111,226,227,166,231,
    70,81,172,154,174,239,55,93,165,146,224,240,88,201,180,169,
    226,230,131,180,69,102,180,87,114,64,21,244,198,163,28,64,
    100,108,4,144,126,241,3,79,225,203,42,191,176,21,82,169,
    16,12,253,216,79,113,156,72,244,164,178,137,73,69,74,142,
    153,17,198,138,67,83,105,123,156,119,11,223,63,202,57,97,
    64,182,170,57,124,82,25,118,85,157,145,232,166,169,195,156,
    208,56,131,142,8,159,184,225,177,100,234,41,210,67,134,168,
    171,121,152,33,236,238,146,8,185,196,44,70,20,71,254,24,
    185,10,188,135,180,225,93,6,95,131,225,183,134,208,155,195,
    182,138,255,87,197,186,225,89,25,224,170,57,232,40,246,41,
    96,147,139,204,234,8,192,9,198,153,150,193,129,130,37,97,
    15,252,9,245,104,177,189,77,205,125,106,222,162,102,39,23,
    118,54,18,47,94,150,248,9,237,98,176,152,44,16,25,195,
    204,5,242,47,120,209,230,212,139,48,10,182,201,27,12,242,
    153,169,55,88,20,49,147,103,212,226,84,246,51,19,210,175,
    40,62,147,215,48,49,114,16,132,58,245,166,14,192,234,177,
    151,73,236,249,28,187,54,1,178,140,202,94,9,149,54,89,
    134,33,105,111,230,81,207,161,25,26,140,246,22,145,170,92,
    163,223,38,53,111,207,86,201,83,88,245,174,192,234,41,109,
    184,156,193,106,145,225,84,199,103,217,240,204,76,243,69,42,
    92,189,4,39,194,146,117,13,150,126,70,61,243,170,172,63,
    10,140,50,9,127,95,130,17,49,101,148,5,57,192,206,120,
    131,248,47,3,104,3,179,249,243,104,3,19,180,193,9,250,
    151,156,160,57,201,115,169,163,3,176,201,49,88,119,42,164,
    136,174,9,235,89,226,77,107,216,142,146,248,229,184,25,119,
    155,138,37,165,120,185,255,32,221,125,144,62,197,72,216,124,
    198,49,72,199,66,29,237,18,57,162,104,69,75,63,125,233,
    73,206,115,252,230,56,58,56,57,28,168,156,44,127,34,150,
    214,72,141,70,174,95,14,211,169,74,40,58,207,80,195,245,
    66,195,196,240,103,180,69,157,213,107,138,13,196,77,93,48,
    31,142,142,197,92,70,241,87,124,126,71,42,39,89,37,80,
    209,107,183,53,151,44,0,137,98,255,252,2,54,102,194,190,
    189,135,244,190,206,49,81,157,98,130,30,51,7,247,223,128,
    203,74,1,127,5,178,58,26,55,3,119,225,11,100,230,85,
    154,254,39,96,47,184,38,159,115,28,105,83,14,231,25,24,
    94,210,39,60,85,167,247,207,224,239,37,23,202,147,176,153,
    21,142,229,36,108,21,49,136,225,242,70,137,214,186,24,172,
    200,36,125,55,165,105,58,2,77,189,114,26,220,139,66,15,
    35,240,108,176,51,175,137,59,196,199,119,83,228,80,26,219,
    18,171,70,9,15,191,162,230,221,2,10,34,31,251,193,89,
    218,129,155,51,173,163,163,250,183,180,175,197,156,46,205,113,
    69,120,149,84,1,244,74,14,244,119,11,160,75,78,67,175,
    248,248,64,173,65,54,158,24,2,207,113,88,113,209,177,201,
    2,89,129,78,149,92,130,171,98,145,121,140,200,3,21,133,
    181,11,57,142,53,114,160,117,85,152,89,91,144,154,151,51,
    12,0,100,196,253,208,29,30,250,238,179,35,218,128,118,241,
    114,31,50,114,150,151,203,44,19,254,197,77,92,243,235,227,
    156,245,147,25,58,255,251,72,175,96,153,161,238,199,30,123,
    252,87,125,217,28,202,225,33,158,8,251,193,168,217,13,221,
    30,91,193,204,68,250,34,23,73,177,25,47,87,8,233,35,
    106,227,166,23,71,24,129,143,61,21,39,77,95,226,249,72,
    250,205,95,52,57,124,55,131,180,233,30,226,87,215,83,26,
    207,23,29,145,203,78,55,233,165,92,97,30,157,82,119,198,
    86,116,240,228,27,96,133,61,132,34,71,234,179,88,17,141,
    185,118,214,238,129,233,12,79,62,106,172,3,17,85,11,246,
    46,53,239,192,236,131,246,123,192,64,130,148,84,83,21,91,
    70,205,224,90,230,234,236,47,137,74,122,213,27,79,223,196,
    27,245,125,74,230,147,85,154,41,231,232,216,77,109,141,2,
    120,167,158,15,46,112,219,224,193,197,252,202,230,22,15,46,
    241,53,72,149,71,86,200,165,231,254,95,151,102,231,152,177,
    91,168,31,212,147,237,39,63,34,199,246,7,144,229,237,155,
    188,88,148,197,89,212,107,7,34,63,10,148,101,225,123,133,
    157,215,64,203,241,18,233,42,169,237,178,61,83,41,57,16,
    232,237,78,167,30,122,181,138,253,168,16,104,194,229,202,248,
    14,155,75,31,129,216,92,226,121,116,15,203,89,139,203,217,
    125,42,103,207,88,122,199,208,21,237,20,125,149,66,9,36,
    91,36,79,175,97,77,43,66,151,174,196,162,59,26,201,200,
    183,31,65,185,26,229,207,51,68,192,83,13,202,105,9,97,
    138,59,88,126,94,245,51,10,171,37,1,217,110,149,194,179,
    102,107,65,198,233,36,199,105,139,74,135,105,108,181,247,169,
    225,104,90,4,82,251,183,133,254,91,175,5,97,120,228,248,
    193,73,224,203,132,14,58,111,62,25,139,28,62,146,150,198,
    212,195,255,185,152,7,120,163,55,157,75,251,212,243,125,120,
    136,45,198,174,229,203,80,42,121,35,176,20,169,36,59,89,
    251,18,19,102,60,198,163,15,31,42,240,61,116,156,89,103,
    155,223,100,6,227,192,135,217,70,84,49,223,172,137,53,163,
    86,173,9,78,216,151,46,139,53,47,84,72,235,242,121,156,
    218,28,151,150,10,99,242,93,102,158,64,201,238,124,176,59,
    112,135,250,62,138,111,93,236,159,66,118,102,182,31,22,160,
    160,59,4,62,179,232,147,32,58,36,23,19,92,59,216,191,
    166,113,58,85,15,31,239,230,146,237,106,201,74,34,241,125,
    234,240,177,218,186,118,98,59,24,234,251,59,181,114,233,187,
    159,208,226,181,75,163,41,170,204,13,131,239,245,133,93,62,
    204,139,175,238,76,72,43,189,115,30,191,33,186,178,189,19,
    217,11,82,164,200,228,174,70,28,50,140,122,240,58,4,150,
    137,204,24,38,186,14,214,103,241,103,36,104,250,33,54,116,
    31,87,91,170,33,100,40,34,153,120,28,94,20,150,217,88,
    174,89,141,133,154,85,155,51,249,90,101,17,15,59,117,171,
    182,208,16,250,223,14,2,171,110,236,172,212,196,127,1,44,
    52,208,79,
};

EmbeddedPython embedded_m5_internal_param_DerivedClockDomain(
    "m5/internal/param_DerivedClockDomain.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_DerivedClockDomain.py",
    "m5.internal.param_DerivedClockDomain",
    data_m5_internal_param_DerivedClockDomain,
    2227,
    6703);

} // anonymous namespace
