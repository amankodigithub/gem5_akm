#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DistEtherLink[] = {
    120,156,189,89,235,115,219,198,17,223,3,64,74,164,36,75,
    178,94,182,30,22,237,212,49,227,38,146,227,216,117,103,226,
    186,117,26,103,38,153,84,73,161,116,236,48,153,162,16,112,
    146,64,145,0,7,56,218,102,70,234,135,202,211,199,183,126,
    233,159,208,15,253,111,250,31,181,187,123,60,16,122,80,118,
    91,179,22,185,62,44,246,246,246,241,187,189,7,3,232,255,
    43,225,247,23,53,128,236,247,2,32,196,143,128,22,64,91,
    64,67,128,144,2,194,121,56,40,65,122,15,194,18,188,2,
    104,88,32,45,56,198,134,13,223,89,16,79,114,159,50,180,
    108,230,8,232,85,65,58,208,40,193,211,120,22,28,89,134,
    131,42,164,191,3,33,68,44,224,89,56,6,225,56,188,66,
    237,216,168,176,194,113,32,102,149,153,21,8,39,152,89,133,
    112,146,27,19,208,155,1,57,9,141,41,18,107,92,66,181,
    183,81,237,52,171,253,39,169,13,241,205,2,132,151,72,28,
    237,250,150,36,29,146,228,241,166,89,203,140,177,114,22,26,
    151,77,123,174,208,158,47,180,23,10,237,69,110,163,5,151,
    161,185,4,205,43,208,188,10,187,24,148,217,124,180,101,144,
    54,52,87,160,177,2,18,63,203,112,140,113,11,47,23,122,
    172,114,143,185,188,199,26,247,184,6,141,107,32,241,179,166,
    123,148,97,187,190,136,185,136,254,133,255,234,152,11,80,147,
    72,158,203,52,139,146,216,139,226,221,36,178,232,125,153,8,
    101,46,32,50,214,79,225,47,41,133,255,0,206,95,104,245,
    83,120,4,168,88,144,47,45,11,142,184,113,100,65,175,14,
    135,2,154,14,132,54,28,226,48,37,50,96,79,192,177,5,
    223,219,36,112,132,212,193,64,95,3,71,233,252,53,57,208,
    90,211,24,28,149,224,176,4,219,207,14,45,98,28,84,32,
    253,59,252,176,202,74,199,89,169,5,135,72,29,56,118,224,
    168,12,79,81,8,89,205,10,185,47,158,29,162,167,200,217,
    174,59,104,237,86,193,93,114,37,140,210,216,111,75,53,143,
    109,175,227,167,126,219,251,52,202,212,19,181,47,211,47,163,
    248,160,94,53,146,73,182,209,241,213,190,203,93,109,138,73,
    187,163,88,101,18,75,53,129,141,221,40,14,189,118,18,118,
    91,82,141,147,62,111,55,106,73,207,227,151,159,183,59,73,
    170,158,164,105,146,186,20,86,102,182,18,63,239,65,65,13,
    90,73,38,235,52,26,15,227,146,122,69,210,187,29,214,72,
    6,176,185,212,57,148,89,144,70,29,133,217,210,26,73,154,
    180,213,41,79,76,178,207,144,108,238,39,109,185,185,235,7,
    221,150,234,109,238,201,246,253,205,157,110,212,10,55,31,187,
    191,218,236,244,212,126,18,111,34,47,138,149,196,88,180,54,
    207,137,194,6,138,93,38,125,47,162,61,47,98,79,188,125,
    217,234,200,116,138,184,203,52,150,152,17,147,162,44,108,81,
    23,83,216,42,225,215,22,171,214,132,216,138,200,151,128,252,
    35,40,57,69,240,80,70,5,28,88,144,174,18,52,154,248,
    17,148,75,4,200,54,189,179,248,221,175,41,8,154,219,180,
    41,225,154,121,200,112,66,92,161,228,67,202,112,12,140,137,
    18,52,203,160,177,130,16,211,224,73,123,68,81,156,212,88,
    168,220,129,236,111,128,65,69,148,28,66,31,65,199,54,136,
    120,6,84,149,38,52,114,23,113,192,63,48,8,183,235,100,
    254,22,3,65,237,71,89,242,34,230,112,83,155,167,205,54,
    70,230,235,222,87,59,77,25,168,108,29,25,223,38,221,90,
    224,199,113,162,106,126,24,214,124,165,210,104,167,171,100,86,
    83,73,237,102,86,167,12,186,179,6,75,185,190,94,199,96,
    135,242,140,216,209,15,97,20,40,124,152,227,7,206,66,38,
    21,226,96,63,9,51,228,147,138,61,169,92,50,82,81,144,
    19,54,132,97,226,145,40,13,143,114,151,240,249,177,177,132,
    177,88,47,27,228,100,178,181,171,170,12,66,63,203,60,182,
    132,248,140,55,82,252,220,111,117,37,107,207,80,31,26,68,
    77,109,195,104,16,119,133,172,55,206,178,7,113,18,135,61,
    52,40,10,110,209,88,87,24,119,147,140,188,5,68,221,24,
    210,50,254,95,22,139,86,224,244,177,86,54,120,163,98,167,
    128,179,45,250,9,71,236,29,99,97,169,91,92,25,216,9,
    158,119,55,168,69,157,221,85,34,107,68,174,17,89,55,126,
    190,117,103,167,78,59,251,128,6,176,216,67,246,133,82,96,
    27,95,194,19,115,231,234,96,238,96,197,219,166,57,96,209,
    76,25,204,1,135,170,99,250,136,40,138,242,236,178,33,251,
    134,106,49,205,21,86,70,211,2,1,78,173,1,236,57,50,
    238,12,121,60,110,16,235,18,12,139,88,220,43,96,209,165,
    164,48,16,221,171,166,204,121,36,161,33,232,174,144,170,210,
    57,161,173,17,185,62,178,248,14,192,180,119,6,76,31,211,
    88,51,125,48,77,49,136,170,248,157,177,2,187,31,244,124,
    197,155,59,5,34,66,144,115,14,130,222,165,150,125,214,205,
    81,131,167,239,220,103,5,240,144,61,86,209,135,45,108,244,
    150,200,244,34,108,150,112,189,126,26,47,225,18,108,241,18,
    124,135,151,96,94,198,121,99,163,139,173,205,245,86,55,74,
    20,131,93,27,22,251,75,107,86,65,218,73,147,151,189,90,
    178,91,83,236,36,213,198,135,55,179,141,155,217,199,88,245,
    106,143,184,222,232,186,167,43,91,42,59,84,153,168,235,147,
    151,129,228,229,140,159,60,79,23,34,143,139,146,215,95,38,
    17,65,11,20,65,203,132,150,75,114,166,82,170,196,163,9,
    110,53,15,46,217,250,5,105,175,114,100,109,177,132,104,169,
    10,54,193,211,37,151,247,72,252,22,191,159,80,180,201,77,
    9,180,187,117,183,181,129,108,59,121,225,190,127,2,17,111,
    219,114,119,19,85,253,198,32,161,60,64,2,125,109,131,230,
    63,1,111,23,5,252,17,40,215,152,210,62,154,115,240,83,
    114,231,72,252,183,192,176,63,103,197,230,154,177,77,171,52,
    75,96,41,201,30,176,168,94,192,191,128,63,23,230,140,89,
    102,237,254,134,176,184,204,58,121,189,97,144,188,209,82,234,
    156,44,76,148,141,125,63,35,49,93,109,6,211,112,80,195,
    243,93,28,86,219,183,142,152,113,173,215,35,19,190,31,224,
    133,22,170,21,49,103,21,80,240,33,145,187,57,0,132,225,
    189,77,107,214,97,248,50,234,233,186,253,29,13,233,176,145,
    211,99,92,77,78,104,201,65,93,50,160,190,155,131,90,242,
    26,243,138,207,1,68,45,74,234,177,37,240,112,134,155,40,
    58,11,57,32,75,208,40,19,252,121,143,43,250,179,67,152,
    122,68,227,157,88,192,56,14,91,58,66,121,94,117,202,136,
    188,28,205,60,167,172,61,108,249,237,157,208,127,212,34,221,
    52,64,96,230,139,101,172,157,41,90,75,88,23,195,12,230,
    199,251,198,234,231,163,153,227,63,65,85,185,181,140,232,48,
    9,120,98,127,179,47,107,109,217,222,193,3,221,126,212,169,
    237,182,252,61,142,189,221,247,230,43,227,141,226,228,157,94,
    244,179,219,68,147,90,144,196,88,94,187,129,74,210,90,40,
    241,140,35,195,218,7,53,174,205,181,40,171,249,59,248,214,
    15,148,198,238,201,249,198,251,71,63,221,203,120,171,120,240,
    130,154,163,203,157,135,103,214,8,119,201,49,228,107,159,62,
    74,229,165,150,247,191,122,42,224,50,133,167,23,213,211,165,
    134,54,0,238,6,145,247,96,164,21,249,30,197,129,116,82,
    64,202,98,197,170,88,188,145,58,33,248,53,245,205,206,78,
    186,76,188,193,164,211,119,33,253,169,87,38,73,57,70,199,
    100,162,21,42,204,141,170,97,78,48,157,100,230,148,97,94,
    98,58,205,204,25,195,156,101,122,153,153,115,134,57,207,116,
    129,153,139,134,185,196,244,10,51,175,26,230,50,211,21,102,
    174,26,230,26,211,107,204,92,55,204,26,211,235,204,188,97,
    152,239,48,253,17,51,111,26,230,187,76,111,49,179,110,152,
    239,49,189,205,204,31,27,230,251,76,63,96,230,134,97,110,
    50,189,195,204,15,205,85,211,93,102,126,4,141,123,116,23,
    67,156,251,84,181,198,254,215,170,197,69,96,116,211,191,251,
    86,139,149,251,224,255,99,172,251,83,232,239,64,134,21,42,
    81,244,100,74,23,170,166,48,7,152,162,27,124,253,177,124,
    254,60,242,130,84,250,74,234,68,172,142,202,55,174,112,122,
    164,151,131,250,115,118,239,253,56,119,227,152,183,91,189,121,
    206,143,62,174,113,126,196,211,120,25,55,225,14,111,194,31,
    210,38,252,144,125,246,44,189,15,31,32,173,148,187,190,132,
    36,150,47,188,115,220,215,123,109,178,206,239,116,100,28,186,
    183,161,184,125,230,215,163,201,54,21,213,191,64,97,247,99,
    139,121,220,47,159,157,73,180,74,20,220,226,68,149,242,185,
    51,178,148,49,28,255,106,224,88,167,167,193,82,225,62,36,
    194,139,67,190,46,184,63,207,3,190,54,4,107,161,108,249,
    61,58,132,189,70,2,119,98,124,167,194,79,234,250,133,178,
    207,253,148,53,190,94,138,180,86,140,86,226,12,239,131,60,
    47,245,227,131,139,53,231,82,185,102,195,185,184,79,22,253,
    32,95,175,153,165,78,104,38,142,218,184,176,79,47,14,188,
    36,246,58,153,236,134,137,151,116,120,152,255,176,11,141,185,
    152,143,121,250,181,90,29,166,173,219,214,195,93,40,64,202,
    25,209,248,48,212,255,40,163,109,136,10,246,47,140,210,64,
    202,68,41,231,12,237,19,119,219,184,191,15,101,118,161,230,
    129,148,209,156,115,212,59,67,250,100,50,125,46,83,125,47,
    73,186,223,68,142,180,211,13,80,129,247,186,126,124,185,252,
    6,250,89,238,148,126,226,13,157,121,89,71,202,240,194,185,
    169,37,204,220,228,167,225,86,16,108,82,217,193,138,127,177,
    181,5,185,220,218,1,79,221,184,168,95,166,252,126,48,222,
    64,140,180,87,141,118,102,169,187,67,122,113,236,176,60,222,
    241,112,119,31,203,128,46,93,176,217,141,245,96,255,69,55,
    26,156,22,224,225,34,188,30,176,12,150,39,169,228,121,139,
    149,162,130,219,191,84,36,40,166,73,207,243,244,245,10,149,
    57,207,27,225,214,252,103,122,101,6,62,161,224,214,92,148,
    113,115,190,32,134,254,89,149,114,69,240,89,231,212,207,100,
    218,60,58,117,235,11,134,94,230,18,199,157,206,87,15,254,
    41,199,28,64,104,161,225,25,184,133,147,67,255,62,68,201,
    118,9,80,124,141,232,222,202,87,33,186,81,229,91,29,125,
    67,134,75,62,159,195,248,216,229,126,68,124,106,181,239,111,
    24,103,55,180,179,236,232,167,84,144,44,126,63,68,108,59,
    106,235,95,48,212,236,169,247,97,234,99,123,225,20,23,103,
    93,228,183,168,102,175,13,31,182,175,145,124,54,175,89,253,
    89,17,154,26,133,103,62,44,157,221,213,49,58,82,185,135,
    60,140,223,236,201,62,253,61,15,231,178,54,108,202,20,250,
    143,14,79,250,58,65,95,90,62,226,73,255,9,18,250,165,
    162,50,93,65,108,209,118,200,22,85,220,16,57,246,228,76,
    197,153,156,168,56,149,49,155,175,158,167,196,156,85,117,42,
    19,147,194,252,173,35,214,170,214,250,90,69,252,27,228,75,
    102,11,
};

EmbeddedPython embedded_m5_internal_param_DistEtherLink(
    "m5/internal/param_DistEtherLink.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_DistEtherLink.py",
    "m5.internal.param_DistEtherLink",
    data_m5_internal_param_DistEtherLink,
    2546,
    8008);

} // anonymous namespace
