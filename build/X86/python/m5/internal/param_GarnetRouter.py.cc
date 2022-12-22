#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GarnetRouter[] = {
    120,156,189,88,255,111,219,198,21,127,71,82,178,37,203,177,
    29,199,118,18,187,49,147,214,171,22,108,246,214,53,77,129,
    122,217,218,46,27,86,96,174,71,117,72,170,22,227,104,242,
    100,83,166,72,129,164,236,168,147,49,96,14,182,1,251,121,
    127,194,126,232,127,51,236,31,218,222,123,71,82,180,45,163,
    1,102,205,145,46,167,227,187,199,247,229,243,190,220,185,144,
    253,85,240,251,115,19,32,249,183,0,240,240,35,32,0,232,
    9,104,11,16,82,128,119,7,142,43,16,191,15,94,5,94,
    3,180,53,144,26,156,227,68,135,175,52,8,27,188,167,10,
    129,206,43,2,134,117,144,6,180,43,240,34,92,2,67,86,
    225,184,14,241,31,64,8,17,10,120,233,205,128,55,11,175,
    145,59,78,106,204,112,22,104,177,206,139,53,240,230,120,177,
    14,94,131,39,115,48,92,4,217,128,246,60,145,181,111,33,
    219,199,200,118,129,217,254,139,216,122,248,100,5,188,91,68,
    142,114,125,73,148,6,81,242,251,22,152,203,98,46,229,18,
    180,111,231,243,229,210,252,78,105,190,82,154,175,150,230,107,
    165,249,221,210,252,94,105,126,191,52,95,47,205,55,74,243,
    183,120,142,90,221,134,238,3,232,110,66,215,132,14,26,122,
    169,208,224,33,72,29,186,143,160,253,8,36,126,30,194,57,
    250,194,187,93,218,241,54,239,88,46,118,188,195,59,182,160,
    189,5,18,63,239,168,29,85,104,53,87,209,191,254,127,240,
    175,137,254,133,180,129,195,137,140,19,63,10,109,63,236,68,
    190,70,207,171,52,16,26,92,26,102,50,88,124,74,176,248,
    22,24,19,158,150,193,226,12,144,177,32,93,2,13,206,120,
    114,166,193,176,9,35,1,93,3,60,29,70,248,154,10,9,
    112,40,224,92,131,175,117,34,56,195,209,64,231,61,0,35,
    85,152,232,178,243,20,167,25,56,171,192,168,2,173,151,35,
    141,22,142,107,16,255,19,190,217,96,166,179,204,84,131,17,
    142,6,156,27,112,86,133,23,72,132,75,221,26,169,47,94,
    142,80,83,92,105,53,13,148,118,175,164,46,169,226,249,113,
    232,244,100,186,140,115,187,239,196,78,207,254,149,19,135,50,
    181,162,65,42,227,102,61,39,140,146,237,190,147,30,89,188,
    83,39,147,244,250,41,115,140,144,122,14,39,29,63,244,236,
    94,228,13,2,153,206,18,59,187,227,7,210,182,249,225,175,
    123,253,40,78,159,199,113,20,91,100,85,94,12,34,167,216,
    65,54,117,131,40,145,77,122,27,191,198,34,246,41,81,119,
    250,204,145,4,96,105,105,179,39,19,55,246,251,41,58,75,
    113,36,106,226,214,36,55,241,144,60,199,97,231,40,234,201,
    157,142,227,14,130,116,184,115,40,123,79,118,14,6,126,224,
    237,188,252,240,131,157,254,48,61,138,194,29,92,243,67,84,
    55,116,130,157,171,70,216,70,170,219,196,238,212,63,180,125,
    86,196,62,146,65,95,198,243,180,122,159,94,37,22,69,67,
    84,133,46,154,98,30,103,21,252,234,98,67,155,19,123,62,
    169,226,146,122,4,36,163,12,29,242,167,128,99,13,226,13,
    2,70,23,63,130,60,137,240,104,209,51,141,159,253,150,108,
    160,86,187,58,185,91,45,142,24,76,136,42,164,220,37,255,
    134,192,136,168,64,183,10,10,41,8,48,5,157,120,72,35,
    146,19,27,13,153,27,144,252,3,208,166,136,145,17,100,248,
    57,215,65,132,139,144,214,41,69,224,234,42,190,240,207,12,
    193,86,147,196,223,99,28,164,71,126,18,157,134,108,109,154,
    115,208,180,208,50,251,195,207,15,186,210,77,147,77,92,248,
    50,26,152,174,19,134,81,106,58,158,103,58,105,26,251,7,
    104,203,196,76,35,115,43,105,146,3,173,165,28,74,5,191,
    97,63,135,14,185,25,161,163,126,120,190,155,226,15,198,168,
    205,94,72,100,138,48,56,138,188,4,215,137,197,33,58,139,
    132,76,201,200,17,11,194,40,177,137,148,94,143,116,183,240,
    247,199,185,36,12,197,102,53,7,78,34,131,78,90,103,12,
    58,73,98,179,36,180,206,112,35,198,39,78,48,144,204,61,
    65,126,40,16,77,149,12,83,1,220,93,18,62,215,149,21,
    8,163,208,27,162,60,190,251,46,189,234,46,195,174,193,192,
    91,65,208,205,224,88,197,255,171,98,85,115,141,12,106,213,
    28,110,148,233,82,96,103,139,204,223,8,189,115,204,42,77,
    141,211,2,235,192,81,247,136,102,180,217,218,160,225,45,26,
    30,208,176,153,171,121,211,186,206,95,214,245,41,241,215,88,
    65,86,133,28,160,231,170,120,23,34,231,222,56,114,48,219,
    181,40,2,52,138,147,113,4,24,148,25,227,103,52,34,41,
    199,150,14,201,23,148,135,41,82,152,25,5,5,194,155,102,
    99,208,179,97,172,69,82,120,54,199,171,69,32,44,35,241,
    176,132,68,139,124,194,48,180,238,229,57,206,38,10,5,64,
    107,157,88,85,38,88,214,164,225,225,180,204,59,134,210,225,
    21,40,125,68,175,90,204,160,52,207,16,170,227,119,81,115,
    245,204,230,69,177,91,190,4,33,194,143,49,1,63,223,163,
    153,126,85,203,41,67,39,211,237,151,37,232,144,56,90,89,
    133,61,156,12,215,72,242,50,104,214,176,82,191,8,215,176,
    248,106,92,124,127,196,197,151,11,56,183,73,42,209,234,156,
    107,213,164,66,38,232,232,176,154,21,213,164,134,99,63,142,
    94,13,205,168,99,166,172,35,229,197,221,173,100,123,43,249,
    8,51,158,249,140,115,141,202,121,42,171,197,178,79,89,137,
    182,62,127,229,74,174,100,252,203,182,85,18,178,57,33,217,
    89,133,68,252,172,144,1,181,220,178,156,142,147,52,166,44,
    60,21,219,214,11,219,146,168,159,17,243,58,27,86,23,107,
    136,149,186,96,9,108,149,109,185,57,226,167,248,253,132,140,
    77,90,74,160,86,217,106,41,249,88,116,82,194,250,193,5,
    60,220,176,224,214,14,114,250,93,142,131,234,24,7,244,213,
    115,40,255,21,184,77,20,240,23,32,79,163,67,51,40,23,
    200,39,215,46,19,249,239,129,49,63,161,86,115,190,104,81,
    125,102,10,76,35,201,83,38,85,165,251,51,248,91,41,96,
    242,2,171,103,141,96,185,192,26,69,174,97,136,188,81,17,
    53,46,38,37,114,198,145,147,16,153,202,52,227,24,28,167,
    239,162,125,195,76,123,211,120,153,85,108,109,146,224,235,49,
    90,168,68,173,139,101,173,132,129,31,211,240,94,225,126,145,
    175,221,160,48,155,112,125,253,180,85,198,254,138,222,104,176,
    140,11,51,92,207,213,246,2,202,149,28,202,239,21,80,150,
    92,86,94,115,219,79,163,70,190,60,215,4,158,239,176,107,
    162,227,148,1,178,2,237,42,129,158,123,90,145,197,132,200,
    147,16,165,172,11,53,139,245,223,83,150,41,220,169,60,69,
    195,171,169,4,55,57,107,55,112,122,7,158,243,44,33,214,
    196,223,205,163,68,203,133,93,44,11,75,8,23,215,201,203,
    63,159,228,66,159,76,37,176,63,200,4,101,97,25,198,94,
    228,114,52,127,113,36,205,158,236,29,224,233,237,200,239,155,
    157,192,57,100,203,235,153,50,159,231,202,164,236,186,203,85,
    62,121,76,99,100,186,81,136,25,117,224,166,81,108,122,18,
    79,52,210,51,127,104,114,58,54,253,196,116,14,240,169,227,
    166,10,177,23,131,140,219,69,39,62,76,24,73,199,167,52,
    157,154,231,108,60,159,250,216,19,15,160,168,118,234,220,84,
    100,87,238,118,85,0,96,97,194,179,74,58,84,233,133,42,
    190,181,77,195,247,97,154,73,248,125,228,20,19,75,50,71,
    85,172,107,53,141,79,81,101,186,125,218,153,92,141,183,211,
    55,137,55,117,147,146,69,93,149,40,229,12,29,136,105,172,
    81,42,110,215,243,197,57,30,27,188,56,159,95,214,220,226,
    197,5,190,0,169,242,202,18,5,237,204,255,26,180,28,4,
    83,131,255,232,70,99,213,122,250,127,145,213,250,16,178,170,
    123,93,156,138,178,34,243,42,78,187,34,111,216,203,90,240,
    89,255,222,68,32,217,110,44,157,84,42,47,108,76,73,51,
    14,111,245,162,63,141,163,239,106,175,249,113,161,196,57,55,
    24,195,59,236,28,117,56,97,231,136,23,225,125,108,58,13,
    110,58,119,169,233,28,177,198,182,166,250,206,49,202,42,133,
    226,116,142,11,229,169,125,85,121,213,90,146,112,78,191,47,
    67,207,122,12,229,110,145,31,79,197,211,148,80,94,67,169,
    220,235,226,14,182,135,87,99,136,18,100,73,41,246,82,165,
    136,154,105,249,139,145,248,247,28,137,77,74,65,227,44,105,
    237,210,192,121,177,72,137,214,207,10,107,191,61,25,102,39,
    110,98,99,70,181,79,240,1,157,59,222,136,14,219,16,117,
    193,88,90,76,205,107,54,250,113,106,227,98,194,220,191,147,
    136,88,211,193,161,88,97,159,112,144,120,50,144,169,156,0,
    151,148,148,206,206,176,158,196,178,22,13,241,192,193,13,61,
    254,14,108,123,122,149,225,167,200,233,143,144,37,44,172,12,
    162,138,181,97,69,172,104,181,106,77,112,65,189,116,241,170,
    164,160,115,165,106,93,135,137,197,89,101,161,112,20,223,14,
    230,101,142,124,202,246,216,115,122,234,158,135,239,52,44,242,
    18,159,78,173,119,11,135,147,141,248,188,160,78,94,24,90,
    92,236,185,182,91,63,161,117,58,191,246,158,108,231,58,109,
    43,157,62,113,18,223,85,42,241,13,101,239,9,119,156,87,
    9,63,13,34,247,88,122,234,110,236,26,102,76,243,139,168,
    231,224,250,250,68,138,150,223,203,56,44,93,122,238,197,180,
    107,229,210,106,34,99,223,9,252,111,36,131,160,252,68,134,
    131,158,189,127,26,183,176,41,150,233,198,196,183,237,71,167,
    50,254,77,132,48,72,31,93,34,24,63,98,6,246,137,164,
    94,41,125,248,29,124,212,219,174,209,109,112,208,26,38,169,
    236,93,99,65,44,25,113,207,9,50,251,144,167,115,2,54,
    198,85,127,208,181,75,233,55,119,34,124,101,163,126,51,230,
    99,121,232,39,68,188,116,145,56,203,165,4,81,22,103,66,
    220,149,183,79,45,72,84,127,174,78,254,207,72,161,100,31,
    7,186,235,171,45,212,48,96,40,203,234,120,4,159,23,134,
    222,88,172,25,141,185,154,81,155,209,249,250,102,30,15,91,
    117,163,54,215,16,147,255,109,98,152,213,181,205,165,154,248,
    47,190,91,247,192,
};

EmbeddedPython embedded_m5_internal_param_GarnetRouter(
    "m5/internal/param_GarnetRouter.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_GarnetRouter.py",
    "m5.internal.param_GarnetRouter",
    data_m5_internal_param_GarnetRouter,
    2341,
    6889);

} // anonymous namespace
