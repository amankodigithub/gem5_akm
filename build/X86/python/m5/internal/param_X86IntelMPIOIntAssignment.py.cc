#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86IntelMPIOIntAssignment[] = {
    120,156,189,89,239,114,19,201,17,239,217,93,201,150,108,227,
    255,54,96,131,149,75,193,41,36,177,115,228,128,75,29,33,
    225,40,82,197,213,157,77,86,164,224,116,87,217,172,181,35,
    121,101,105,87,217,29,97,68,217,95,98,42,73,85,62,39,
    111,144,15,247,54,121,132,188,73,210,221,179,187,90,203,24,
    27,18,27,75,195,108,239,76,79,255,249,117,79,207,168,1,
    201,191,2,126,127,93,1,136,255,33,0,60,252,8,232,0,
    116,5,212,5,8,41,192,91,128,221,2,68,159,130,87,128,
    55,0,117,3,164,1,135,216,49,225,91,3,130,73,158,83,
    132,142,201,20,1,131,50,72,11,234,5,120,30,204,130,37,
    139,176,91,134,232,15,32,132,8,4,188,240,198,192,27,135,
    55,200,29,59,37,102,56,14,68,44,51,177,4,222,4,19,
    203,224,77,114,103,2,6,51,32,39,161,62,69,195,234,151,
    144,237,45,100,59,205,108,255,69,108,61,124,179,8,222,37,
    26,142,114,125,67,35,45,26,201,235,77,51,151,153,84,202,
    89,168,207,165,253,249,92,127,33,215,95,204,245,151,114,253,
    229,92,255,50,247,81,178,57,104,95,129,246,85,104,175,64,
    19,141,53,155,73,177,10,210,132,246,53,168,95,3,137,159,
    85,56,68,123,122,115,185,25,215,121,198,124,54,99,141,103,
    84,160,94,1,137,159,53,61,163,8,181,234,18,250,200,255,
    15,254,171,162,143,64,77,98,243,82,70,177,31,6,142,31,
    52,67,223,160,247,69,106,200,163,13,106,198,18,215,62,34,
    215,126,15,236,87,207,72,92,123,0,200,88,144,46,29,3,
    14,184,115,96,192,160,10,251,2,218,22,120,38,236,227,50,
    5,18,160,37,224,208,128,239,76,26,112,128,173,133,14,184,
    14,150,210,126,109,179,3,52,167,49,56,40,192,126,1,106,
    47,246,13,34,236,150,32,250,39,188,94,101,166,227,204,212,
    128,125,108,45,56,180,224,160,8,207,113,16,146,218,37,82,
    95,188,216,71,77,145,82,171,90,40,237,102,78,93,82,197,
    243,163,192,237,74,133,218,128,211,115,35,183,235,188,248,236,
    238,147,64,201,206,215,79,159,108,97,231,97,28,251,173,160,
    43,3,85,45,167,179,194,120,189,231,170,29,155,217,152,100,
    159,110,79,49,251,48,144,106,2,59,77,63,240,156,110,232,
    245,59,82,141,19,111,167,233,119,164,227,240,203,39,221,94,
    24,169,199,81,20,70,54,153,152,137,157,208,205,102,144,129,
    27,157,48,150,85,90,141,151,177,137,189,162,209,205,30,115,
    36,1,88,116,154,236,201,184,17,249,61,133,158,211,28,105,
    52,113,171,146,207,184,137,109,108,54,118,194,174,220,104,186,
    141,126,71,13,54,90,178,123,103,99,187,239,119,188,13,84,
    122,163,55,80,59,97,176,129,52,31,245,71,187,116,54,78,
    177,200,58,78,153,35,222,123,126,203,241,89,43,103,71,118,
    122,50,154,34,234,85,90,87,204,136,73,81,20,166,168,138,
    41,236,21,240,107,138,85,99,66,108,250,164,87,131,116,37,
    136,89,121,80,145,167,5,236,26,16,173,18,100,218,248,17,
    228,99,4,78,141,222,25,252,238,183,100,16,77,109,155,4,
    4,77,220,103,152,33,222,112,228,125,242,124,0,140,149,2,
    180,139,160,49,132,208,211,160,138,6,212,226,112,98,99,32,
    115,11,226,191,3,26,24,209,179,15,9,178,14,77,16,193,
    12,168,50,37,0,164,46,225,130,127,98,112,214,170,36,254,
    38,131,66,237,248,113,184,23,176,233,169,207,225,84,67,203,
    60,29,108,109,183,101,67,197,107,72,248,38,236,87,26,110,
    16,132,170,226,122,94,197,85,42,242,183,251,74,198,21,21,
    86,110,196,85,242,166,61,155,226,42,227,55,232,165,56,34,
    159,35,142,244,131,231,55,20,62,204,243,3,123,33,150,10,
    49,177,19,122,49,210,137,69,75,42,155,132,84,100,228,144,
    5,97,200,56,52,148,150,199,113,151,240,249,97,42,9,227,
    178,90,76,81,20,203,78,83,149,25,144,110,28,59,44,9,
    209,25,123,196,248,165,219,233,75,230,30,35,63,20,136,186,
    90,134,243,71,223,101,210,36,85,156,181,9,194,192,27,160,
    112,126,227,99,90,247,50,99,112,146,81,184,136,8,28,195,
    182,136,255,23,197,146,209,176,18,220,21,83,236,81,66,84,
    192,158,23,137,243,17,135,135,152,124,170,6,103,15,86,136,
    227,241,35,234,209,100,123,149,154,107,212,92,167,102,45,213,
    249,92,21,159,26,85,252,30,45,102,176,182,172,23,185,198,
    76,245,242,142,196,212,149,97,76,97,134,172,81,108,24,20,
    65,195,216,176,40,155,70,15,168,197,161,28,117,38,196,207,
    40,119,83,12,49,51,10,23,4,62,245,134,225,192,86,178,
    103,72,251,241,20,201,54,193,51,143,209,86,14,163,54,57,
    136,1,106,95,73,83,161,67,35,52,52,237,21,98,85,120,
    139,153,41,99,219,63,184,16,91,15,65,214,58,6,178,207,
    105,221,153,4,100,83,12,174,50,126,103,140,134,153,56,32,
    219,45,231,71,192,69,200,178,222,130,172,155,212,51,143,171,
    124,145,160,74,20,253,77,14,84,36,155,145,215,103,19,59,
    131,101,82,35,15,167,101,220,247,159,7,203,184,149,27,188,
    149,255,140,183,114,46,7,184,112,210,201,217,228,252,172,59,
    5,178,71,211,132,165,100,139,142,75,216,246,162,240,213,160,
    18,54,43,138,21,166,92,122,255,70,188,126,35,254,28,179,
    100,229,1,231,39,157,39,117,38,140,100,143,50,25,77,125,
    252,170,33,121,43,228,39,199,209,137,203,225,36,230,36,91,
    44,34,107,145,172,105,164,102,230,20,30,171,136,50,247,249,
    27,186,156,25,154,228,254,146,86,42,179,149,77,177,140,40,
    42,11,22,199,209,233,154,235,46,126,139,223,47,200,242,164,
    178,4,170,164,237,154,22,150,245,32,141,236,159,28,65,202,
    121,106,97,111,32,219,223,165,8,41,14,17,66,95,51,69,
    252,95,128,203,81,1,127,6,194,0,186,58,65,124,22,32,
    228,244,121,26,254,123,224,208,120,203,206,207,57,166,70,187,
    61,143,192,212,19,223,227,161,186,16,248,18,254,154,139,171,
    116,187,54,147,130,51,191,93,91,89,126,98,240,156,105,75,
    182,142,38,50,242,204,142,27,211,48,157,157,134,161,58,204,
    255,89,101,136,217,249,92,145,52,174,215,112,72,156,239,134,
    56,162,13,111,69,204,27,57,116,124,66,205,237,12,24,34,
    165,157,151,100,107,112,242,214,236,232,252,255,45,45,111,177,
    192,211,99,138,144,75,28,107,15,157,71,91,95,109,109,214,
    156,132,121,246,120,116,145,44,46,10,105,92,220,206,226,66,
    242,86,246,134,143,39,212,26,132,133,67,67,224,89,18,107,
    56,58,186,89,32,11,80,47,82,4,113,185,45,146,0,19,
    105,122,163,100,120,100,159,100,147,109,106,99,102,112,208,158,
    166,230,213,249,167,13,114,246,253,142,219,221,246,220,7,1,
    173,67,139,53,210,144,51,82,201,103,242,146,83,184,136,147,
    132,231,199,59,169,6,47,207,63,101,220,69,182,153,228,28,
    32,94,216,224,60,241,108,71,86,186,178,187,141,231,207,29,
    191,87,105,118,220,22,251,196,76,52,219,74,53,83,236,212,
    209,154,35,190,69,109,88,105,132,1,102,241,126,67,133,81,
    197,147,120,12,147,94,229,167,21,222,2,42,126,92,113,183,
    241,173,219,80,26,254,71,195,151,203,90,55,106,197,92,193,
    238,238,81,247,98,124,234,224,113,219,199,66,190,7,217,118,
    171,79,126,89,70,231,18,93,71,19,238,140,120,192,82,3,
    157,197,168,254,176,215,169,249,17,92,88,226,255,20,217,118,
    137,63,25,170,40,86,140,146,193,225,126,226,164,167,196,51,
    62,30,176,255,62,75,192,234,107,159,36,108,139,52,82,142,
    209,201,159,218,18,237,5,245,114,74,156,224,118,146,137,83,
    41,241,18,183,211,76,156,73,137,179,220,206,49,113,62,37,
    46,112,187,200,196,165,148,184,204,237,101,38,94,73,137,87,
    185,93,97,226,106,122,133,117,141,137,215,161,190,70,119,57,
    68,169,80,122,25,251,95,211,11,71,232,197,196,230,222,255,
    53,171,216,247,46,94,112,251,51,72,42,143,147,50,138,200,
    107,53,165,51,74,91,164,7,157,188,74,124,149,114,243,116,
    96,59,141,72,186,74,106,103,173,94,132,206,156,162,244,170,
    175,135,73,227,120,141,254,48,83,239,144,203,175,193,2,251,
    80,31,247,216,135,226,121,112,21,139,117,139,139,245,251,84,
    172,239,179,45,28,67,215,235,67,100,22,50,147,252,16,155,
    64,238,157,44,161,54,139,174,207,73,82,183,215,147,129,103,
    223,130,124,201,205,175,207,31,29,148,33,223,64,174,50,50,
    197,2,214,216,199,35,146,210,127,78,93,118,102,33,139,193,
    11,113,43,67,249,111,41,148,171,116,188,29,238,1,246,125,
    106,56,235,103,9,223,254,85,230,148,159,159,1,167,158,140,
    149,227,135,142,219,195,26,204,247,232,152,247,65,243,176,162,
    83,211,192,247,142,121,186,186,251,222,188,2,229,7,44,198,
    7,78,37,73,230,142,73,66,175,212,237,51,112,100,223,68,
    253,158,226,139,45,22,228,3,166,145,16,180,65,31,37,103,
    5,237,187,56,245,194,142,27,249,106,192,75,191,215,4,90,
    148,47,130,19,130,250,228,12,179,227,176,31,53,164,179,221,
    143,83,247,191,255,44,90,152,239,119,243,212,51,153,45,63,
    35,250,227,153,173,61,50,45,181,246,81,178,250,241,25,56,
    225,201,174,213,146,17,175,252,62,227,105,73,190,227,213,207,
    156,83,120,99,240,100,71,42,121,90,34,84,20,180,201,229,
    23,1,53,10,7,142,163,143,248,248,220,113,156,11,170,219,
    126,137,108,95,66,114,51,143,117,155,40,98,229,182,40,114,
    127,70,169,88,18,92,18,143,252,248,83,205,18,146,62,214,
    14,88,70,176,167,179,252,195,88,76,107,83,74,85,124,253,
    178,233,118,245,141,50,95,152,218,180,115,240,5,151,253,113,
    150,199,232,222,143,239,18,244,125,13,110,44,92,174,115,117,
    110,83,118,226,19,116,247,206,122,170,234,186,12,250,71,52,
    77,195,238,25,69,157,193,131,121,143,122,199,156,167,105,212,
    220,124,247,184,103,218,227,95,135,158,100,196,228,135,142,90,
    252,11,55,150,143,194,160,233,183,30,7,42,26,168,149,183,
    142,175,249,93,253,123,128,154,29,121,239,69,46,246,23,71,
    168,177,140,124,183,227,191,214,63,0,164,100,174,183,79,19,
    224,212,19,245,200,4,46,236,213,47,78,155,53,130,44,198,
    117,36,91,126,140,162,141,156,3,70,22,72,234,2,194,225,
    153,146,93,158,243,197,196,136,62,99,235,75,194,7,116,25,
    29,211,29,40,253,122,80,154,46,97,188,80,249,96,138,50,
    22,16,150,57,57,83,178,38,39,74,86,105,204,228,107,223,
    41,49,111,148,173,210,196,164,200,255,173,97,68,149,141,181,
    165,146,248,47,74,170,104,184,
};

EmbeddedPython embedded_m5_internal_param_X86IntelMPIOIntAssignment(
    "m5/internal/param_X86IntelMPIOIntAssignment.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_X86IntelMPIOIntAssignment.py",
    "m5.internal.param_X86IntelMPIOIntAssignment",
    data_m5_internal_param_X86IntelMPIOIntAssignment,
    2472,
    7964);

} // anonymous namespace
