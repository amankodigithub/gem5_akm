#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_IGbE[] = {
    120,156,229,90,205,115,219,198,21,127,0,63,100,82,146,37,
    89,150,100,203,178,69,59,113,76,59,137,148,56,113,156,52,
    174,19,55,118,221,100,18,197,133,210,113,194,100,130,66,192,
    82,132,68,18,44,176,178,204,140,60,147,169,220,54,135,206,
    244,208,118,122,235,173,135,254,11,237,244,212,206,244,218,91,
    111,253,87,218,247,222,98,65,240,203,118,51,212,88,158,88,
    228,122,249,246,237,195,251,252,237,46,0,23,226,127,57,252,
    190,91,2,136,242,25,0,15,63,6,212,1,26,6,84,12,
    48,132,1,222,18,108,231,32,124,29,188,28,60,4,168,152,
    32,76,216,199,78,6,62,55,161,57,193,115,242,80,207,48,
    197,128,118,17,68,22,42,57,184,219,156,129,172,200,195,118,
    17,194,159,130,97,24,77,3,62,245,198,192,59,2,15,81,
    58,118,10,44,240,8,16,177,200,196,2,120,227,76,44,130,
    55,193,157,113,104,79,131,152,128,202,36,177,85,142,162,216,
    75,40,118,138,197,254,139,196,122,56,114,26,188,163,196,142,
    122,125,70,156,89,226,228,235,77,177,148,105,240,88,74,21,
    237,153,73,24,103,64,100,96,235,24,84,142,129,192,207,12,
    236,163,201,222,49,205,56,155,48,206,50,227,113,168,28,7,
    129,159,89,197,200,61,98,156,75,24,231,152,113,30,42,243,
    32,240,51,167,24,231,53,227,66,194,184,192,140,39,160,114,
    2,4,126,22,20,163,242,228,73,168,44,106,175,158,74,245,
    151,82,253,211,169,254,153,84,127,57,213,47,165,250,103,83,
    253,115,169,254,115,169,254,243,169,254,249,84,255,133,84,255,
    66,170,95,78,245,47,166,250,151,82,253,23,83,253,151,82,
    253,151,83,253,149,84,127,53,213,127,37,213,127,149,251,232,
    169,69,216,186,12,91,175,193,214,235,236,209,147,137,71,175,
    176,71,223,128,202,27,32,240,115,69,121,116,49,53,227,42,
    207,56,149,204,120,147,103,188,5,149,183,64,224,231,77,53,
    35,15,235,229,51,88,19,254,127,241,95,217,192,158,156,192,
    230,158,8,35,63,104,218,126,179,26,248,38,141,231,169,161,
    10,114,169,25,139,75,233,61,42,165,63,3,215,145,103,198,
    165,244,0,80,176,65,182,212,77,120,192,157,7,38,180,203,
    176,103,192,86,22,188,12,236,225,101,114,164,192,166,1,251,
    38,124,145,33,134,7,216,102,49,225,207,64,86,170,58,218,
    226,132,87,146,198,224,65,14,246,114,176,254,233,158,73,132,
    237,2,132,127,130,175,150,88,232,17,22,106,194,30,182,89,
    216,207,194,131,60,220,69,38,36,109,21,200,124,227,211,61,
    180,20,41,235,229,44,106,187,150,50,151,76,241,252,176,233,
    52,132,28,199,190,221,114,66,167,97,191,127,123,227,86,185,
    168,25,130,104,165,229,200,154,197,51,50,228,138,70,75,178,
    164,160,169,166,85,253,166,103,55,2,111,167,46,228,17,18,
    99,87,253,186,176,109,30,124,191,209,10,66,121,43,12,131,
    208,34,111,50,177,30,56,201,12,242,165,91,15,34,81,166,
    171,241,101,44,18,47,137,187,218,98,137,164,64,162,165,39,
    34,55,244,91,18,131,164,36,18,55,73,43,83,120,184,137,
    190,143,205,106,45,104,136,213,170,227,238,212,101,123,117,83,
    52,174,172,110,236,248,117,111,245,134,245,209,106,171,45,107,
    65,115,21,105,126,83,10,116,65,125,181,99,252,10,142,30,
    35,49,187,254,166,237,179,1,118,77,212,91,34,156,36,234,
    34,93,194,152,54,38,140,188,145,49,202,198,36,246,114,248,
    205,24,75,230,184,177,230,147,9,46,153,69,137,147,77,167,
    10,197,207,128,109,19,194,37,74,132,45,252,24,20,57,76,
    135,117,26,51,121,236,199,100,187,162,110,101,40,188,138,184,
    199,201,131,89,132,156,215,40,158,77,224,12,200,193,86,30,
    84,102,96,66,169,84,9,219,212,34,59,137,49,81,120,22,
    162,223,3,250,18,115,98,15,226,124,217,207,128,209,156,6,
    89,36,24,69,234,60,94,240,231,156,114,235,101,82,127,141,
    227,47,107,126,20,236,54,217,203,212,231,34,89,71,207,220,
    105,127,188,177,37,92,25,45,35,225,179,96,167,228,58,205,
    102,32,75,142,231,149,28,41,67,127,99,71,138,168,36,131,
    210,249,168,76,129,179,102,116,10,37,242,218,45,157,50,20,
    94,76,25,245,195,243,93,137,63,102,249,7,71,33,18,18,
    195,95,11,188,8,233,36,98,83,72,139,148,148,228,228,128,
    21,81,57,76,172,116,121,228,59,138,191,111,104,77,56,5,
    203,121,157,48,145,168,87,101,145,115,207,137,34,155,53,33,
    58,167,25,9,190,231,212,119,4,75,143,80,30,42,68,93,
    165,195,72,19,237,4,41,173,109,100,197,155,65,211,107,163,
    30,190,123,129,46,113,130,211,109,130,19,110,14,147,109,12,
    219,60,254,159,55,230,77,55,27,167,88,94,167,217,60,25,
    8,28,100,35,142,51,166,220,62,162,71,217,228,242,103,221,
    185,202,206,81,143,38,91,75,212,156,166,134,0,209,90,214,
    230,141,202,198,201,94,27,175,146,92,147,13,99,19,200,225,
    25,109,130,215,85,41,39,59,149,130,104,182,78,25,111,82,
    93,116,50,62,75,200,23,94,167,22,89,185,150,50,16,125,
    66,56,75,149,193,194,168,8,48,157,169,215,73,114,118,136,
    53,77,134,30,209,249,105,81,210,165,51,111,51,149,121,22,
    197,130,211,206,58,169,177,204,38,14,149,112,214,41,18,149,
    27,224,209,18,53,103,71,237,214,78,234,108,246,165,206,219,
    116,137,233,56,117,38,57,101,138,248,157,54,221,76,236,235,
    100,17,155,237,73,25,202,151,236,128,124,121,129,122,153,126,
    235,14,40,85,98,155,126,152,74,21,82,195,76,171,190,134,
    157,246,2,105,156,78,146,5,92,121,239,54,23,112,49,53,
    121,49,125,133,23,83,94,144,121,171,168,128,52,195,88,170,
    58,57,50,189,154,129,249,120,145,140,10,216,182,194,224,126,
    187,20,84,75,146,109,35,220,187,118,62,90,57,31,189,141,
    136,86,186,206,88,162,48,77,161,86,40,90,132,58,52,245,
    214,125,87,240,10,197,191,108,91,129,140,205,128,99,199,43,
    31,230,203,28,57,206,212,30,101,184,141,100,72,40,59,82,
    159,22,19,159,146,138,31,144,208,34,59,52,99,44,96,110,
    20,13,190,178,173,80,148,55,57,60,138,223,31,144,147,201,
    58,1,116,76,176,214,149,94,172,50,41,111,189,212,21,255,
    17,41,108,173,162,132,159,232,184,231,59,113,167,111,70,167,
    236,175,128,183,121,6,252,18,40,178,24,192,56,101,147,12,
    167,80,206,18,251,151,192,185,61,96,237,101,60,88,167,245,
    150,57,16,38,162,171,204,170,150,226,15,224,155,84,97,232,
    5,51,19,111,228,210,11,102,54,193,18,78,137,39,90,20,
    179,221,160,67,65,168,57,17,177,41,36,233,212,90,7,150,
    147,109,24,34,233,168,242,227,136,18,103,211,149,191,232,100,
    7,45,57,167,140,89,51,21,243,87,169,185,156,132,219,208,
    180,17,40,177,12,195,215,65,91,33,240,231,116,165,44,235,
    54,53,198,238,186,37,107,55,60,47,76,114,54,167,115,246,
    102,146,179,130,215,137,135,188,79,167,214,164,224,237,155,6,
    30,98,213,241,21,55,63,116,114,204,131,24,163,237,52,29,
    77,115,241,209,20,243,157,138,156,243,79,127,25,119,8,165,
    186,150,37,118,197,154,114,82,18,81,21,44,106,238,143,180,
    158,41,94,215,234,78,99,195,115,174,111,146,72,146,235,234,
    2,49,181,146,211,105,37,41,185,141,97,122,242,207,43,90,
    217,123,35,173,229,55,80,66,162,36,103,174,23,184,92,192,
    159,212,68,169,33,26,27,120,224,170,249,173,82,181,238,108,
    178,167,245,226,116,91,7,82,106,11,126,173,142,83,199,217,
    44,189,11,160,195,220,221,230,34,162,125,150,209,254,29,66,
    251,61,174,104,219,84,128,223,9,16,47,206,201,57,164,41,
    118,237,56,133,20,144,83,180,157,86,75,52,61,235,82,87,
    5,242,222,208,9,55,35,230,27,121,52,109,60,110,250,184,
    229,221,234,84,223,20,162,243,113,68,231,254,228,35,85,82,
    38,113,17,230,146,114,92,26,177,126,28,192,159,233,0,170,
    141,124,2,253,188,197,86,85,139,171,37,30,144,100,91,97,
    224,10,53,23,169,185,150,120,156,120,61,129,71,62,161,157,
    46,167,33,217,103,225,177,78,134,65,27,23,73,94,140,240,
    119,221,182,71,191,180,188,142,18,170,218,203,121,196,183,188,
    89,200,23,12,94,167,223,111,145,82,34,138,14,51,158,112,
    157,142,60,192,247,70,10,35,214,213,3,213,209,122,19,226,
    61,192,211,133,144,201,24,66,146,188,81,190,248,30,53,221,
    240,97,189,173,61,53,82,175,80,109,181,15,41,100,124,61,
    4,50,44,18,63,28,36,166,59,32,209,113,235,59,52,252,
    110,151,150,163,82,245,6,74,216,25,138,7,107,120,248,115,
    162,237,239,30,30,252,226,25,192,131,68,199,195,135,7,113,
    222,60,13,60,248,230,144,226,193,111,70,128,7,218,173,7,
    136,7,148,28,15,7,224,65,145,241,224,174,47,107,119,130,
    80,126,247,0,225,119,207,0,32,36,58,30,22,64,56,154,
    0,130,78,156,167,129,8,127,56,164,136,240,199,111,135,8,
    51,105,68,72,252,122,128,144,112,27,37,252,118,0,36,144,
    203,136,167,31,12,46,63,9,24,196,48,144,5,145,35,48,
    176,212,67,151,67,88,250,127,125,6,74,63,209,241,201,74,
    159,180,249,88,27,32,57,58,189,207,5,34,170,207,181,160,
    228,6,77,60,152,238,184,50,8,75,158,168,250,77,225,149,
    94,46,241,13,221,146,31,149,156,13,28,117,92,169,252,223,
    115,219,142,106,154,239,41,108,239,210,189,131,145,87,246,223,
    32,185,55,174,158,158,14,170,161,107,93,133,52,250,242,160,
    251,201,127,33,81,121,85,30,102,193,84,171,37,142,223,33,
    206,1,199,233,47,141,111,177,90,154,241,130,73,109,129,110,
    213,226,130,25,19,199,185,157,96,226,164,38,30,229,118,138,
    137,211,154,56,195,237,49,38,206,106,226,113,110,231,152,56,
    175,137,11,220,158,96,226,73,77,92,228,246,20,19,151,52,
    241,52,183,103,152,184,172,137,37,110,207,50,241,156,38,62,
    199,237,243,76,60,175,137,47,112,123,129,137,101,77,188,200,
    237,37,38,190,168,137,47,113,251,50,19,87,244,174,97,149,
    137,175,64,229,85,122,129,130,40,151,9,76,198,14,39,152,
    252,227,25,0,147,68,199,199,131,137,145,54,96,18,146,125,
    4,244,105,159,172,93,157,186,176,221,80,56,82,28,204,18,
    203,184,163,46,240,207,14,76,244,63,66,187,145,40,189,207,
    207,81,186,118,62,70,223,206,231,26,239,124,140,39,222,249,
    36,198,246,238,124,146,199,94,7,179,233,249,55,164,158,99,
    28,162,77,207,127,116,110,149,95,131,199,110,122,214,18,127,
    46,119,39,78,85,72,183,102,187,65,163,69,247,73,157,54,
    61,44,125,44,79,132,60,116,129,222,1,185,56,104,98,71,
    238,35,134,73,228,120,34,82,73,235,81,163,230,132,30,174,
    126,194,118,212,205,156,65,170,246,241,104,85,123,7,228,66,
    247,196,86,173,109,139,150,239,177,208,97,99,36,140,223,34,
    138,9,114,190,159,81,203,24,50,68,34,198,98,17,36,225,
    108,55,91,120,159,110,95,187,182,235,184,53,97,71,254,87,
    130,133,61,158,139,228,210,155,70,253,67,242,84,223,228,170,
    95,13,58,194,31,53,78,98,39,148,216,132,40,79,247,77,
    216,13,125,220,68,119,2,253,104,14,18,122,84,9,77,145,
    123,141,148,79,228,138,1,92,218,21,253,67,189,166,202,199,
    184,66,14,114,69,154,40,151,250,38,32,78,122,41,79,60,
    146,129,68,78,42,145,29,106,239,148,221,141,222,242,124,36,
    131,150,217,69,237,205,104,28,236,136,27,54,166,179,93,19,
    24,13,187,14,77,29,72,62,192,67,211,135,40,225,239,36,
    138,222,26,137,15,77,230,156,49,228,143,15,84,188,113,238,
    121,229,82,233,68,171,134,122,232,221,142,44,162,88,83,9,
    50,114,101,235,103,79,164,55,223,186,93,115,26,234,141,47,
    126,203,201,122,142,26,210,196,186,144,32,44,189,193,195,111,
    26,168,119,52,112,181,226,77,61,239,225,45,6,103,122,86,
    36,143,67,242,152,153,31,84,133,98,211,143,208,100,190,115,
    172,240,66,223,167,238,30,191,217,25,143,239,91,117,143,211,
    177,82,69,49,57,197,118,49,112,57,54,174,172,104,7,175,
    40,7,163,46,34,188,41,238,249,174,224,87,36,27,87,56,
    255,251,25,239,184,126,204,118,114,216,248,143,130,72,14,155,
    237,7,241,236,19,3,199,215,219,168,99,163,111,178,104,238,
    52,236,143,68,35,8,219,31,5,158,170,180,244,56,63,106,
    117,154,155,194,190,39,232,72,197,192,208,197,16,159,167,148,
    12,205,85,26,168,67,55,239,16,67,112,80,189,167,200,139,
    78,255,248,123,245,192,221,22,94,204,51,216,231,204,115,51,
    104,56,72,31,124,149,117,95,95,101,166,103,220,11,105,214,
    92,15,53,18,161,239,212,9,139,122,131,195,30,188,179,27,
    174,75,220,185,245,249,47,14,78,176,43,66,242,111,93,158,
    235,97,232,12,177,128,97,110,238,149,163,174,54,196,182,157,
    141,56,218,131,61,136,123,227,176,225,212,99,255,244,106,156,
    120,70,171,114,230,81,66,148,81,131,245,184,217,112,226,148,
    164,154,215,131,236,240,254,210,24,87,101,171,127,243,41,53,
    217,126,119,215,217,76,55,107,140,141,31,38,229,217,1,217,
    244,180,145,67,166,122,173,67,189,27,118,157,212,143,190,198,
    134,222,250,44,76,21,16,62,105,27,155,49,138,184,145,205,
    102,38,166,11,217,137,241,66,182,48,150,225,23,251,38,141,
    89,179,152,45,140,207,79,20,140,162,217,223,78,24,255,223,
    223,114,158,102,45,47,21,140,255,1,205,24,228,51,
};

EmbeddedPython embedded_m5_internal_param_IGbE(
    "m5/internal/param_IGbE.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_IGbE.py",
    "m5.internal.param_IGbE",
    data_m5_internal_param_IGbE,
    3150,
    12863);

} // anonymous namespace
