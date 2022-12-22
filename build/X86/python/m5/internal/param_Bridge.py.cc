#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Bridge[] = {
    120,156,181,88,109,115,219,198,17,222,3,64,74,164,36,235,
    93,178,94,108,209,118,229,176,158,68,106,211,56,206,76,84,
    167,206,219,76,51,19,197,5,211,177,195,100,138,66,192,137,
    2,69,2,44,112,146,204,140,52,211,169,60,125,249,214,47,
    253,9,253,208,223,210,47,253,5,253,43,237,238,30,0,66,
    148,148,38,83,202,34,207,199,189,189,189,221,219,103,119,239,
    206,131,244,95,9,191,191,168,1,36,255,22,0,62,126,4,
    116,0,186,2,154,2,132,20,224,47,192,97,9,226,119,192,
    47,193,107,128,166,1,210,128,115,236,152,240,181,1,225,36,
    207,41,67,199,100,138,128,126,21,164,5,205,18,188,8,103,
    193,146,101,56,172,66,252,91,16,66,132,2,94,250,99,224,
    143,195,107,148,142,157,10,11,28,7,34,86,153,88,1,127,
    130,137,85,240,39,185,51,1,253,25,144,147,208,156,34,182,
    230,45,20,251,8,197,78,179,216,127,145,88,31,71,22,193,
    191,69,236,168,215,87,196,105,17,39,175,55,205,82,102,50,
    45,103,161,57,151,245,231,11,253,133,66,127,177,208,95,42,
    244,151,11,253,219,133,254,74,161,191,90,232,175,21,250,235,
    133,254,157,66,255,46,247,209,194,57,104,111,64,187,6,237,
    123,176,143,155,62,155,91,115,31,164,9,237,7,208,124,0,
    18,63,247,225,28,253,226,207,21,102,252,136,103,204,231,51,
    54,121,198,67,104,62,4,137,159,77,61,163,12,141,250,18,
    250,58,248,15,254,171,163,175,65,77,98,115,44,227,36,136,
    66,39,8,247,163,192,160,241,50,53,132,12,143,154,177,20,
    34,31,17,68,254,1,140,15,223,72,33,114,6,40,88,144,
    45,29,3,206,184,115,102,64,191,14,167,2,218,22,248,38,
    156,226,50,37,82,160,37,224,220,128,111,76,98,56,195,214,
    66,71,222,5,75,105,124,180,217,145,90,210,24,156,149,224,
    180,4,141,151,167,6,17,14,43,16,255,29,190,93,103,161,
    227,44,212,128,83,108,45,56,183,224,172,12,47,144,9,73,
    237,10,153,47,94,158,162,165,72,105,212,45,212,118,183,96,
    46,153,226,7,113,232,118,165,154,194,190,211,115,99,183,235,
    124,24,7,126,75,214,171,25,75,148,108,245,92,117,96,243,
    28,147,54,163,219,83,44,43,10,165,154,192,206,126,16,250,
    78,55,242,143,58,82,141,147,32,103,63,232,72,199,225,193,
    95,118,123,81,172,62,137,227,40,182,105,63,153,216,137,220,
    124,6,237,166,215,137,18,89,167,213,120,25,155,196,43,226,
    222,239,177,68,82,128,245,164,201,190,76,188,56,232,41,116,
    147,150,72,220,36,173,78,14,226,38,249,0,155,237,131,168,
    43,183,247,93,239,168,163,250,219,45,217,125,188,189,119,20,
    116,252,237,151,239,189,187,221,235,171,131,40,220,70,90,16,
    42,137,155,208,217,46,154,191,133,227,115,36,232,36,104,57,
    1,155,224,28,200,78,79,198,180,83,201,42,45,34,102,196,
    164,40,11,83,212,197,20,246,74,248,53,197,186,49,33,118,
    3,50,194,35,195,8,60,86,17,46,228,67,1,135,6,196,
    235,4,134,54,126,4,121,15,33,209,160,49,131,199,126,69,
    214,107,106,219,36,23,107,226,41,3,8,145,132,156,59,228,
    211,16,24,5,37,104,151,65,163,3,65,165,225,18,247,169,
    69,118,18,99,160,112,11,146,191,1,238,38,226,226,20,82,
    204,156,155,32,194,25,80,85,74,17,72,93,194,5,255,192,
    176,107,212,73,253,93,70,128,58,8,146,232,36,228,125,166,
    62,7,74,3,119,230,121,255,139,189,182,244,84,178,129,132,
    175,162,163,154,231,134,97,164,106,174,239,215,92,165,226,96,
    239,72,201,164,166,162,218,102,82,39,215,217,179,25,136,114,
    121,253,94,6,26,114,48,130,70,255,240,3,79,225,143,121,
    254,193,94,72,164,66,0,28,68,126,130,116,18,209,146,202,
    38,37,21,109,114,196,138,48,62,28,98,165,229,145,239,22,
    254,126,150,105,194,32,172,151,51,200,36,178,179,175,170,140,
    62,55,73,28,214,132,232,12,52,18,124,236,118,142,36,75,
    79,80,30,42,68,93,173,195,136,161,118,155,212,206,172,100,
    213,195,40,244,251,168,73,224,189,65,139,220,102,192,77,50,
    228,22,17,110,99,216,150,241,255,178,88,50,60,43,5,89,
    57,3,26,229,53,5,236,102,145,122,26,65,119,142,57,164,
    110,112,18,96,237,57,210,238,83,143,38,219,235,212,220,161,
    230,46,53,27,153,129,163,179,114,106,216,202,39,36,217,96,
    211,216,8,218,116,51,51,194,191,16,45,43,131,104,193,172,
    214,32,212,27,20,27,3,212,91,148,1,227,167,212,34,43,
    199,147,9,201,151,148,111,41,58,88,24,5,2,66,154,122,
    3,160,243,150,216,51,100,234,120,134,81,155,128,87,68,95,
    171,128,62,155,188,193,208,179,87,178,140,230,16,135,6,157,
    189,70,162,74,87,236,105,141,154,123,163,223,216,1,124,90,
    151,224,243,62,45,50,147,194,103,138,97,83,197,239,140,225,
    153,233,110,231,229,108,126,8,54,132,25,235,10,204,60,164,
    158,121,217,190,27,131,75,106,213,167,5,184,144,34,70,81,
    249,93,236,244,151,73,231,34,80,150,177,10,191,8,151,177,
    176,26,92,88,127,194,133,149,139,51,31,135,116,66,53,57,
    167,234,78,137,140,223,55,97,41,45,152,73,5,219,94,28,
    189,234,215,162,253,154,98,235,40,255,237,108,38,91,155,201,
    251,152,217,106,79,57,167,232,220,166,179,87,44,123,148,125,
    104,234,39,175,60,201,181,138,127,57,142,78,54,14,39,30,
    39,173,129,136,153,69,218,58,35,219,83,78,187,137,138,41,
    219,142,120,87,171,249,174,146,146,159,145,216,42,111,169,41,
    150,17,31,85,193,107,59,58,159,242,145,135,71,241,251,33,
    109,51,217,39,129,14,195,118,67,107,198,74,147,250,246,155,
    23,48,48,50,149,237,109,148,241,235,204,247,229,129,239,233,
    107,102,192,253,19,240,177,79,192,31,129,188,139,78,76,129,
    155,227,156,220,57,79,236,191,1,70,248,21,117,152,243,66,
    131,106,47,115,96,186,72,158,48,171,46,203,159,193,159,11,
    225,145,21,79,51,61,216,21,139,167,149,231,20,134,197,247,
    42,144,214,197,228,67,110,56,112,19,98,211,25,101,16,113,
    131,4,157,31,202,48,163,142,14,35,227,90,160,67,107,127,
    51,64,8,149,159,53,49,111,20,252,254,83,106,222,206,93,
    46,50,218,72,212,216,128,235,171,162,163,179,241,215,180,150,
    197,218,77,143,113,125,214,211,115,224,150,50,224,190,157,3,
    87,114,201,120,205,71,119,106,13,242,223,185,33,240,190,134,
    167,32,186,30,89,32,75,208,44,19,196,249,116,42,210,8,
    16,89,178,161,212,116,161,30,177,229,187,122,79,114,23,106,
    239,80,243,106,196,65,76,14,218,233,184,221,61,223,125,74,
    41,41,33,201,94,22,19,70,166,230,76,81,77,194,179,184,
    78,83,254,249,56,83,247,120,196,1,252,46,112,97,209,106,
    50,92,253,200,227,168,253,242,64,214,186,178,187,135,183,174,
    131,160,87,219,239,184,45,222,109,51,53,227,139,204,12,197,
    238,26,174,218,201,35,106,163,154,23,133,152,45,143,60,21,
    197,53,95,226,125,68,250,181,183,106,156,106,107,65,82,115,
    247,112,212,245,148,198,231,197,96,226,35,159,27,183,18,70,
    207,225,9,117,111,192,91,14,222,40,3,60,209,30,67,94,
    195,244,125,39,207,156,124,86,213,112,199,114,131,55,13,213,
    215,9,132,42,184,189,69,205,143,225,102,18,236,59,169,111,
    18,218,130,178,88,51,42,6,159,241,53,199,115,226,78,46,
    71,212,63,191,79,68,233,183,143,52,174,202,196,41,199,232,
    218,74,109,133,18,108,179,154,17,39,184,157,100,226,84,70,
    188,197,237,52,19,103,50,226,44,183,115,76,156,207,136,11,
    220,46,50,113,41,35,46,115,123,155,137,43,217,147,205,42,
    19,215,160,185,78,111,14,68,185,67,161,62,246,255,134,58,
    7,208,13,132,206,217,72,35,220,126,114,195,90,218,239,65,
    90,147,175,139,110,81,52,97,74,71,119,91,100,199,246,162,
    254,124,191,159,31,130,162,227,197,210,85,82,239,249,250,200,
    173,225,68,160,151,248,253,32,90,47,159,56,159,229,138,159,
    243,145,163,191,192,174,208,215,18,118,133,120,17,174,226,209,
    211,226,163,231,14,29,61,79,217,74,199,208,167,207,1,154,
    74,185,177,228,209,80,158,56,69,131,245,209,146,212,114,123,
    61,25,250,246,35,40,158,22,121,120,196,30,165,164,243,23,
    40,148,126,83,44,224,241,240,114,124,80,250,44,24,194,62,
    41,229,17,49,122,239,48,214,254,154,97,173,206,71,161,60,
    135,218,59,212,112,214,204,19,166,253,65,190,183,75,195,64,
    242,101,199,237,211,245,226,186,33,60,120,240,83,0,255,82,
    203,195,76,177,27,182,100,194,2,174,27,35,9,228,57,253,
    83,173,92,98,147,191,115,146,224,91,201,66,174,31,37,49,
    84,71,50,130,90,189,204,154,244,6,146,190,99,152,68,85,
    88,84,74,81,111,13,51,243,123,87,215,77,208,5,14,214,
    214,16,175,2,244,40,234,69,71,161,98,241,63,108,6,173,
    72,72,248,46,38,245,230,149,34,147,142,123,44,175,214,225,
    7,77,32,21,214,50,21,174,230,97,204,115,178,65,111,75,
    37,47,132,32,199,101,250,22,224,163,31,227,168,143,151,56,
    190,42,17,84,28,231,38,234,242,207,117,118,215,207,63,88,
    151,69,25,43,243,162,200,255,140,74,185,34,248,40,51,244,
    84,173,245,160,151,35,125,57,232,39,54,103,230,233,60,20,
    248,85,53,59,102,80,212,48,36,118,221,174,126,37,227,119,
    33,251,1,164,183,125,251,141,60,164,8,162,124,35,211,247,
    89,76,85,124,204,226,83,149,253,51,162,147,167,187,143,183,
    50,171,182,158,249,126,108,19,250,157,99,73,39,52,126,216,
    237,62,102,119,20,249,180,245,159,203,174,126,84,228,227,255,
    229,241,143,58,145,119,40,253,148,231,206,245,60,31,71,93,
    23,233,87,175,210,8,178,85,102,135,198,253,152,102,45,14,
    81,19,25,7,110,135,98,101,101,104,68,134,71,93,231,249,
    73,220,192,27,138,188,100,187,94,237,121,116,34,227,207,35,
    196,137,186,63,196,48,24,98,1,217,22,221,251,31,114,244,
    106,215,216,118,180,215,232,99,140,117,175,217,65,172,202,113,
    215,237,164,251,67,64,200,24,20,225,99,216,13,228,230,252,
    23,31,21,11,5,153,3,34,150,173,128,98,154,167,231,172,
    105,233,34,12,95,206,107,197,105,55,16,57,250,130,164,31,
    87,158,210,243,28,227,159,30,79,43,211,21,140,34,42,103,
    166,168,98,65,179,204,201,153,138,53,57,81,177,42,99,38,
    191,141,77,225,13,183,106,85,38,38,197,117,127,27,24,117,
    85,99,99,177,34,254,11,7,138,74,170,
};

EmbeddedPython embedded_m5_internal_param_Bridge(
    "m5/internal/param_Bridge.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_Bridge.py",
    "m5.internal.param_Bridge",
    data_m5_internal_param_Bridge,
    2459,
    7222);

} // anonymous namespace
