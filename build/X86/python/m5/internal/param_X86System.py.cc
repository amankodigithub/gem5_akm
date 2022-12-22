#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86System[] = {
    120,156,181,89,235,111,27,199,17,159,61,62,36,82,146,37,
    89,47,63,20,139,118,98,155,113,28,41,113,252,74,226,186,
    245,43,128,3,88,81,143,46,236,40,65,175,39,222,138,58,
    137,188,35,238,86,150,105,72,95,170,160,13,250,169,5,210,
    79,253,212,2,253,208,127,166,232,127,212,206,204,222,29,87,
    36,101,25,141,36,137,235,225,222,236,236,204,206,111,30,123,
    174,67,242,83,192,207,175,42,0,241,191,45,0,15,255,4,
    52,1,90,2,86,5,8,41,192,155,134,173,2,68,55,193,
    43,192,15,0,171,22,72,11,246,145,200,193,119,22,4,163,
    188,166,8,205,28,207,8,232,148,65,230,97,181,0,47,130,
    73,200,203,34,108,149,33,250,29,8,33,2,1,47,189,33,
    240,134,225,7,148,142,68,137,5,14,3,77,150,121,178,4,
    222,8,79,150,193,27,101,98,4,58,19,32,71,97,117,140,
    216,86,79,161,216,107,40,118,156,197,254,135,196,122,248,100,
    6,188,83,196,142,122,125,75,156,121,226,228,253,198,89,202,
    68,170,229,36,172,158,78,233,41,131,158,54,232,25,131,158,
    53,232,57,131,62,99,208,103,13,250,156,65,159,55,232,121,
    131,126,207,160,47,24,244,130,65,87,12,250,162,65,95,50,
    232,247,13,250,3,131,190,108,208,87,12,250,170,65,87,13,
    250,67,131,190,102,208,31,25,244,117,131,254,216,160,23,13,
    122,201,160,63,49,232,79,13,250,6,211,232,209,211,176,249,
    25,108,222,132,205,91,176,142,32,155,204,188,119,27,100,14,
    54,239,192,234,29,144,248,119,27,246,17,135,222,105,99,197,
    93,94,49,149,173,248,156,87,124,1,171,95,128,196,191,207,
    245,138,34,212,170,179,136,109,255,191,248,83,21,72,169,81,
    28,94,201,40,246,195,192,241,131,245,208,183,232,121,145,6,
    138,132,58,13,67,73,72,60,162,144,248,23,112,60,120,86,
    18,18,123,128,130,5,217,210,180,96,143,137,61,11,58,85,
    216,21,176,153,7,47,7,187,184,77,129,20,104,8,216,183,
    224,251,28,49,236,225,152,71,224,94,128,188,210,241,176,201,
    192,213,146,134,96,175,0,187,5,168,189,220,181,104,98,171,
    4,209,63,225,205,60,11,29,102,161,22,236,226,152,135,253,
    60,236,21,225,5,50,225,212,102,137,204,23,47,119,209,82,
    156,169,85,243,168,237,178,97,46,153,226,249,81,224,182,164,
    154,64,218,105,187,145,219,114,94,222,189,93,235,196,74,182,
    170,229,148,43,140,23,219,174,218,176,121,89,142,206,163,213,
    86,44,46,12,164,26,65,98,221,15,60,167,21,122,219,77,
    169,134,73,150,179,238,55,165,227,240,195,167,173,118,24,169,
    39,81,20,70,54,29,41,79,54,67,55,91,65,7,90,111,
    134,177,172,210,110,188,141,77,226,21,113,175,183,89,34,41,
    192,170,210,98,79,198,245,200,111,43,244,148,150,72,220,36,
    173,74,62,226,33,126,136,195,210,70,216,146,75,235,110,125,
    187,169,58,75,13,217,186,181,180,182,237,55,189,37,52,114,
    169,221,81,27,97,176,132,115,126,160,36,158,67,115,169,231,
    4,22,145,229,52,201,218,241,27,142,207,86,56,27,178,217,
    150,209,24,205,158,163,125,196,132,24,21,69,145,19,85,49,
    134,84,1,63,57,49,111,141,136,101,159,236,168,147,109,4,
    161,188,9,26,242,164,128,45,11,162,121,130,196,38,254,9,
    242,33,2,163,70,207,44,126,246,107,58,0,61,187,153,35,
    71,235,201,93,134,17,226,9,57,239,145,103,3,96,44,20,
    96,179,8,26,35,8,45,13,154,168,67,35,178,147,24,11,
    133,231,33,254,43,224,129,34,58,118,33,65,206,126,14,68,
    48,1,170,76,137,17,103,103,113,195,223,51,248,106,85,82,
    127,153,65,160,54,252,56,220,9,248,168,137,230,112,169,225,
    201,172,116,190,89,219,148,117,21,47,224,196,183,225,118,165,
    238,6,65,168,42,174,231,85,92,165,34,127,109,91,201,184,
    162,194,202,229,184,74,222,179,39,83,28,101,242,58,237,20,
    55,228,99,196,141,254,226,249,117,133,95,166,248,11,123,33,
    150,10,49,176,17,122,49,206,147,136,134,84,54,41,169,232,
    144,67,86,132,33,226,16,43,109,143,124,167,240,251,131,84,
    19,198,97,181,152,162,38,150,205,117,85,102,0,186,113,236,
    176,38,52,207,88,35,193,175,220,230,182,100,233,49,202,67,
    133,136,212,58,28,63,218,206,144,230,169,161,172,125,16,6,
    94,7,149,241,235,87,105,159,51,140,185,81,70,221,12,34,
    110,8,199,34,254,91,20,179,86,61,159,224,172,152,98,141,
    18,156,2,246,180,72,156,141,184,219,199,100,82,181,56,27,
    176,1,28,111,151,136,162,197,246,60,13,239,209,112,129,134,
    133,212,198,99,53,116,172,215,208,59,36,220,98,235,216,14,
    58,250,92,106,135,119,32,102,206,118,99,6,51,92,141,176,
    111,81,132,116,177,159,167,108,24,221,167,17,89,57,170,114,
    16,63,167,220,75,49,194,194,40,28,16,216,68,117,225,206,
    167,98,83,54,172,14,167,72,181,9,126,38,6,27,6,6,
    109,114,8,3,208,62,155,166,54,135,56,52,244,236,243,36,
    170,48,224,88,43,52,92,60,145,179,237,130,168,209,7,162,
    47,105,159,137,4,68,99,12,158,50,126,38,172,122,46,57,
    240,172,186,77,245,128,135,144,147,31,128,156,43,68,229,250,
    77,60,73,208,36,134,125,101,128,134,116,177,76,253,151,145,
    232,204,145,218,38,92,230,176,46,191,8,230,176,212,90,92,
    106,63,225,82,203,229,154,27,66,157,92,115,156,95,53,81,
    32,251,215,115,48,155,148,208,184,132,99,59,10,95,119,42,
    225,122,69,177,129,148,11,239,93,142,23,47,199,95,98,150,
    171,220,231,252,162,243,156,206,100,145,108,83,38,162,165,79,
    94,215,37,151,46,254,230,56,58,241,56,156,132,156,164,36,
    34,114,102,232,244,172,244,88,57,5,199,42,162,204,123,252,
    7,91,206,14,150,244,252,154,36,151,249,84,115,98,14,81,
    82,22,188,189,163,211,43,247,65,252,20,63,15,233,164,201,
    68,9,116,35,176,107,90,57,214,155,44,176,175,31,64,194,
    113,106,109,47,161,152,223,164,8,40,118,17,64,159,92,138,
    224,63,2,183,131,2,254,0,228,99,116,101,130,224,12,240,
    228,212,41,98,255,45,48,212,7,84,102,206,17,53,170,198,
    204,129,169,35,190,195,172,186,80,127,13,63,26,113,146,150,
    211,92,210,240,153,229,52,159,229,23,6,199,59,149,204,252,
    193,68,68,158,216,112,99,98,211,217,165,27,122,221,124,157,
    117,106,152,93,143,21,41,195,90,166,67,219,127,223,197,9,
    21,164,243,98,202,50,188,255,41,13,55,50,199,139,116,238,
    184,52,89,128,195,75,165,163,243,243,119,180,93,158,21,28,
    31,226,104,203,36,100,32,46,164,32,190,145,129,88,114,29,
    249,129,123,123,26,45,114,228,190,37,240,2,139,13,18,221,
    23,243,32,11,176,90,36,184,115,239,42,146,104,16,105,238,
    161,76,117,160,72,177,253,203,250,100,50,95,106,55,209,240,
    250,248,99,154,60,117,175,233,182,214,60,247,254,143,36,151,
    132,215,211,248,176,82,77,39,76,77,9,219,226,48,101,249,
    235,173,84,227,87,199,31,207,183,81,76,166,41,163,215,11,
    235,28,196,207,55,100,165,37,91,107,120,57,219,240,219,149,
    245,166,219,224,51,207,37,150,124,147,90,162,216,105,189,5,
    61,190,70,99,88,169,135,1,166,208,237,186,10,163,138,39,
    241,206,34,189,202,199,21,206,191,21,63,174,184,107,248,212,
    173,43,141,213,131,177,197,61,161,27,53,98,110,255,182,118,
    136,60,25,159,57,120,247,244,177,235,253,19,100,181,77,95,
    139,178,116,202,253,172,134,62,150,33,188,141,168,142,78,41,
    84,220,237,69,26,62,132,19,203,186,55,129,147,42,196,116,
    16,69,113,222,42,89,106,220,12,173,21,90,19,247,7,216,
    223,223,37,192,244,187,161,36,204,138,196,41,135,232,154,75,
    99,137,18,239,106,57,157,28,225,113,148,39,199,210,201,83,
    60,142,243,228,68,58,57,201,227,105,158,156,74,95,84,77,
    243,228,12,172,206,210,155,7,154,153,163,120,30,250,185,241,
    204,33,114,50,193,241,151,99,13,99,251,206,201,43,106,223,
    133,164,14,31,22,194,194,180,98,76,135,240,166,72,219,118,
    211,4,190,232,207,246,35,205,169,71,210,85,82,31,254,252,
    73,216,196,49,175,119,249,169,27,149,253,29,231,131,76,253,
    125,110,54,58,211,236,19,125,57,97,159,136,23,193,57,108,
    61,243,220,122,222,163,214,115,151,109,117,44,221,125,118,145,
    85,200,76,166,211,11,228,142,211,99,182,238,46,73,51,183,
    221,150,129,103,95,3,179,97,228,199,199,239,93,74,49,127,
    3,163,238,231,196,52,118,136,253,17,67,249,210,48,135,157,
    83,200,98,228,68,220,196,208,251,71,10,189,42,223,204,178,
    164,105,223,163,129,211,100,150,33,237,95,102,135,124,99,0,
    174,220,122,219,119,140,87,77,142,114,215,176,53,111,135,172,
    3,221,65,254,159,101,216,173,40,106,212,222,206,166,62,24,
    32,153,158,52,157,86,251,128,10,239,196,72,155,146,237,189,
    15,212,165,183,173,214,26,209,38,239,192,70,91,156,50,183,
    224,105,85,25,176,50,110,173,249,97,108,136,63,146,137,132,
    211,29,203,156,100,44,114,66,240,36,110,36,123,3,68,191,
    212,212,117,18,207,89,69,97,7,111,89,124,145,193,239,77,
    199,57,161,2,249,11,20,243,103,146,55,13,92,32,69,17,
    75,228,140,224,95,171,84,44,9,238,42,122,94,46,107,53,
    216,34,110,219,59,177,205,249,115,60,67,40,191,4,77,203,
    61,129,153,27,218,101,183,165,223,104,241,11,28,251,125,72,
    46,228,246,213,12,233,244,94,130,239,74,250,190,137,169,132,
    59,30,110,112,236,207,104,158,174,236,173,91,139,169,81,139,
    153,81,15,30,173,60,181,107,143,87,248,69,108,235,214,145,
    140,207,213,149,30,142,228,25,158,206,99,132,250,115,118,230,
    43,73,29,152,186,252,54,97,230,2,117,126,32,103,205,111,
    233,23,143,106,178,231,185,23,185,72,207,244,204,198,50,242,
    221,166,255,70,190,221,140,151,100,198,71,135,113,60,37,116,
    63,91,249,170,25,186,202,15,26,43,73,24,93,61,130,255,
    81,24,172,251,13,109,205,245,254,35,74,184,30,186,177,212,
    156,79,2,21,117,210,131,58,74,153,158,101,125,252,93,206,
    39,175,213,0,249,215,142,144,127,112,85,159,139,187,33,240,
    236,33,6,167,30,181,169,3,52,49,153,106,220,140,111,71,
    242,72,77,6,174,226,23,93,3,112,193,145,216,7,26,25,
    108,183,156,103,178,21,70,157,103,161,39,213,124,207,243,7,
    158,23,217,110,208,200,148,185,216,203,144,92,15,180,140,148,
    171,50,80,135,131,188,135,0,24,31,38,0,94,24,248,252,
    81,51,172,111,73,47,225,25,12,90,230,121,28,182,8,240,
    103,7,89,188,178,19,213,240,122,220,111,175,94,191,18,238,
    200,136,206,163,201,57,222,100,232,62,98,1,135,29,75,175,
    28,189,219,33,33,187,189,150,120,103,176,197,216,36,70,45,
    183,153,216,211,171,113,22,240,169,42,23,222,38,68,27,53,
    156,84,36,122,206,21,228,0,70,40,253,106,146,175,53,7,
    187,75,174,28,145,108,248,49,69,248,104,198,154,180,95,148,
    230,89,197,190,194,101,44,59,153,18,163,239,246,250,77,225,
    125,122,227,28,191,193,129,254,75,160,52,94,194,114,67,93,
    89,78,148,177,47,203,231,70,39,74,249,209,145,82,190,52,
    148,227,119,189,99,98,202,42,231,75,35,163,226,231,254,46,
    96,41,43,91,11,83,37,241,63,158,64,116,181,
};

EmbeddedPython embedded_m5_internal_param_X86System(
    "m5/internal/param_X86System.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_X86System.py",
    "m5.internal.param_X86System",
    data_m5_internal_param_X86System,
    2653,
    8237);

} // anonymous namespace
