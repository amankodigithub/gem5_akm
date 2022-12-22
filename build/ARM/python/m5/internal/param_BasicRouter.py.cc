#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BasicRouter[] = {
    120,156,189,88,109,115,219,198,17,222,3,64,74,164,36,75,
    178,44,201,182,100,11,182,227,134,245,180,82,155,198,117,103,
    162,186,117,94,58,211,204,68,113,192,116,236,48,153,162,16,
    112,148,64,129,0,11,156,44,211,149,250,161,242,180,157,126,
    239,79,232,135,252,145,126,238,63,106,119,247,0,16,146,168,
    113,102,98,214,17,47,135,195,222,98,95,158,125,185,243,33,
    255,87,195,223,175,109,128,236,223,2,32,192,63,1,17,64,
    95,64,71,128,144,2,130,107,112,80,131,244,125,8,106,240,
    26,160,99,128,52,224,20,39,38,124,109,64,60,203,123,234,
    16,153,188,34,96,216,4,105,65,167,6,207,226,69,176,100,
    29,14,154,144,254,1,132,16,177,128,231,193,20,4,211,240,
    26,185,227,164,193,12,167,129,22,155,188,216,128,96,134,23,
    155,16,204,242,100,6,134,11,32,103,161,51,71,100,157,43,
    200,246,1,178,157,103,182,255,33,182,1,190,89,134,224,10,
    145,163,92,95,17,165,69,148,252,189,121,230,178,80,72,185,
    8,157,171,197,124,169,50,191,86,153,47,87,230,43,149,249,
    106,101,126,189,50,191,81,153,223,172,204,215,42,243,117,158,
    163,38,87,161,119,11,122,183,161,183,1,93,52,238,98,41,
    181,13,210,132,222,29,232,220,1,137,127,54,156,162,253,131,
    171,149,29,119,121,199,82,185,227,30,239,120,7,58,239,128,
    196,191,123,122,71,29,218,173,21,244,105,248,95,252,215,66,
    159,130,154,197,225,133,76,179,48,137,221,48,238,38,161,65,
    239,235,52,16,2,124,26,166,114,40,124,68,80,248,22,24,
    7,129,145,67,225,4,144,177,32,93,34,3,78,120,114,98,
    192,176,5,199,2,122,22,4,38,28,227,103,106,36,192,158,
    128,83,3,190,49,137,224,4,71,11,29,118,27,44,165,113,
    208,99,135,105,78,83,112,82,131,227,26,180,159,31,27,180,
    112,208,128,244,95,240,106,157,153,78,51,83,3,142,113,180,
    224,212,130,147,58,60,67,34,92,234,53,72,125,241,252,24,
    53,197,149,118,203,66,105,119,42,234,146,42,65,152,198,94,
    95,170,171,56,119,7,94,234,245,221,15,189,44,244,157,228,
    80,201,180,213,44,232,146,108,115,224,169,125,135,55,154,100,
    145,254,64,49,195,36,150,106,6,39,221,48,14,220,126,18,
    28,70,82,77,19,55,183,27,70,210,117,249,229,111,251,131,
    36,85,159,164,105,146,58,100,84,94,140,18,175,220,65,38,
    245,163,36,147,45,250,26,127,198,33,246,138,168,187,3,230,
    72,2,176,176,180,57,144,153,159,134,3,133,190,210,28,137,
    154,184,181,200,75,60,100,31,227,176,181,159,244,229,86,215,
    243,15,35,53,220,218,147,253,135,91,187,135,97,20,108,61,
    113,62,219,26,12,213,126,18,111,225,90,24,163,186,177,23,
    109,93,176,193,38,18,145,117,178,163,112,207,13,89,15,119,
    95,70,3,153,206,209,234,77,250,146,88,16,179,162,46,76,
    209,18,115,56,171,225,207,20,235,198,140,216,9,73,19,159,
    180,35,24,89,85,224,144,55,5,28,24,144,174,19,44,122,
    248,39,200,143,8,142,54,189,51,248,221,23,100,2,189,218,
    51,201,217,122,241,152,161,132,152,66,202,109,242,110,12,140,
    135,26,244,234,160,113,130,240,210,192,73,135,52,34,57,177,
    49,144,185,5,217,63,1,77,138,8,57,134,28,61,167,38,
    136,120,1,84,147,146,2,174,174,224,7,255,194,0,108,183,
    72,252,29,134,129,218,15,179,228,40,102,99,211,156,67,166,
    141,150,121,58,252,124,183,39,125,149,109,224,194,87,201,161,
    237,123,113,156,40,219,11,2,219,83,42,13,119,209,150,153,
    173,18,251,126,214,34,255,57,139,5,146,74,126,195,65,129,
    28,242,50,34,71,63,4,161,175,240,97,137,31,216,11,153,
    84,136,130,253,36,200,112,157,88,236,73,229,144,144,138,140,
    156,176,32,12,18,151,72,233,243,72,119,5,159,159,20,146,
    48,18,91,245,2,55,153,140,186,170,201,16,244,178,204,101,
    73,104,157,209,70,140,95,120,209,161,100,238,25,242,67,129,
    104,170,101,152,4,222,174,147,236,133,170,44,127,156,196,193,
    16,197,9,253,119,233,75,215,25,117,179,140,187,101,196,220,
    20,142,117,252,127,93,172,24,190,149,35,173,94,160,141,210,
    156,2,246,181,200,221,141,200,59,197,148,210,50,56,39,176,
    10,28,115,119,105,70,155,157,117,26,110,209,112,155,134,141,
    66,203,183,172,234,220,121,85,31,17,123,131,245,99,77,200,
    252,102,161,73,112,38,110,110,140,226,6,51,93,155,240,111,
    80,148,140,240,111,81,86,76,31,211,136,164,28,89,38,100,
    95,82,14,166,56,97,102,20,18,8,110,154,141,32,207,118,
    113,22,72,223,233,2,173,14,65,176,138,195,189,10,14,29,
    114,9,131,208,185,81,36,56,151,40,52,252,156,53,98,85,
    27,99,88,155,134,59,19,178,238,8,72,123,23,128,244,1,
    125,105,33,7,210,28,3,168,137,191,5,195,55,115,147,151,
    117,110,233,28,128,8,61,214,24,244,252,128,102,230,69,37,
    39,11,156,92,181,223,84,128,67,210,24,85,13,118,112,50,
    92,37,193,171,144,89,197,26,253,44,94,197,178,107,112,217,
    253,9,151,93,46,221,220,20,233,36,107,114,158,213,147,26,
    89,160,107,194,74,94,78,179,6,142,131,52,121,57,180,147,
    174,173,88,69,202,137,219,247,179,205,251,217,7,152,237,236,
    199,156,103,116,190,211,25,45,149,3,202,72,180,245,147,151,
    190,228,34,198,79,174,171,19,144,203,201,200,205,139,35,162,
    103,153,236,103,20,134,229,84,156,169,148,50,240,36,76,219,
    44,77,75,146,126,74,188,155,108,87,83,172,34,82,154,130,
    5,112,117,162,229,174,136,223,226,239,67,178,53,41,41,129,
    250,98,167,173,197,99,201,73,7,231,71,103,208,240,118,229,
    118,182,144,209,239,10,20,212,71,40,160,159,89,224,248,111,
    192,237,161,128,191,2,249,25,221,153,227,184,132,61,57,118,
    137,200,127,15,12,248,49,85,154,115,69,155,42,51,83,96,
    10,201,30,49,169,46,218,159,194,223,43,209,82,148,86,51,
    111,0,171,165,213,42,243,12,3,228,59,149,79,235,108,66,
    34,95,236,123,25,145,233,44,51,10,192,81,230,46,251,54,
    204,178,111,25,45,211,154,171,75,2,124,51,194,10,21,167,
    53,177,100,84,16,240,83,26,222,43,157,47,138,181,183,39,
    203,6,92,94,56,93,157,171,191,166,15,90,44,226,252,20,
    167,233,10,143,18,204,181,2,204,239,149,96,150,92,85,94,
    115,199,79,163,65,238,60,53,4,30,231,176,101,162,211,147,
    5,178,6,157,58,193,158,251,89,145,71,133,40,178,16,229,
    172,51,37,139,109,176,163,173,83,122,84,59,139,134,151,147,
    136,110,242,215,118,228,245,119,3,239,113,74,156,137,189,95,
    196,137,81,200,186,80,149,149,48,46,46,19,151,31,31,22,
    50,191,152,68,100,255,28,25,149,178,50,142,131,196,231,112,
    254,114,95,218,125,217,223,197,99,219,126,56,176,187,145,183,
    199,118,55,115,93,62,47,116,81,236,184,243,37,62,123,64,
    99,98,251,73,140,9,245,208,87,73,106,7,18,207,50,50,
    176,127,108,115,54,182,195,204,246,118,241,173,231,43,141,217,
    179,81,198,157,162,151,238,101,220,20,30,28,209,116,82,126,
    115,241,92,26,82,55,12,101,173,211,7,166,50,185,114,159,
    171,67,0,203,18,158,82,212,80,167,23,42,247,206,38,13,
    63,132,9,230,224,247,145,209,31,137,35,25,163,46,214,140,
    134,161,22,207,6,217,83,218,151,93,12,181,163,239,18,106,
    250,206,36,15,184,58,81,202,41,58,6,211,216,160,68,220,
    105,22,139,51,60,206,242,226,92,113,45,115,133,23,231,249,
    170,163,206,43,139,20,175,83,223,55,94,57,0,38,5,253,
    63,189,213,48,117,30,253,63,68,117,126,1,121,197,189,44,
    68,69,85,143,57,29,162,61,81,52,234,85,37,248,128,127,
    125,28,138,92,63,149,158,146,218,5,235,147,209,139,227,90,
    127,231,207,163,184,187,216,99,62,41,85,56,229,214,98,120,
    141,61,163,143,36,236,25,241,44,190,137,205,166,197,205,230,
    54,53,155,199,172,175,107,232,126,115,132,176,90,169,54,69,
    118,44,143,220,11,170,235,142,146,100,243,6,3,25,7,206,
    3,168,54,137,252,122,18,94,166,68,114,10,149,58,111,138,
    107,216,21,94,140,30,202,139,21,149,216,69,181,50,94,38,
    228,44,6,225,63,10,16,182,232,230,102,148,28,157,109,26,
    56,29,150,153,208,249,85,105,234,91,99,17,22,161,223,99,
    127,72,199,140,55,80,96,207,193,221,88,254,204,221,200,69,
    234,148,31,220,48,96,142,111,162,33,158,116,52,40,87,216,
    254,28,12,129,140,164,146,23,129,161,72,193,252,136,26,72,
    44,92,201,16,43,6,183,236,248,28,185,238,196,146,255,47,
    145,209,43,200,179,18,38,127,81,199,244,191,44,150,141,70,
    189,33,184,98,158,187,82,213,66,220,135,162,57,29,102,14,
    231,142,249,210,39,124,241,87,20,50,114,31,91,99,199,235,
    235,59,28,190,176,112,238,65,126,248,116,222,45,125,75,167,
    112,62,17,232,147,21,134,16,87,115,46,222,206,207,104,157,
    76,223,127,184,89,168,180,169,85,250,40,74,252,3,25,232,
    235,44,190,126,236,63,100,191,95,66,250,113,210,247,112,125,
    109,44,69,59,236,231,140,22,207,189,15,82,218,181,124,110,
    53,147,105,232,69,225,43,169,110,156,123,35,227,195,190,251,
    244,40,109,99,91,43,213,250,216,175,61,77,142,100,250,89,
    130,62,86,119,207,17,140,94,49,3,247,133,164,86,71,221,
    121,3,31,253,181,75,116,59,220,109,15,51,37,251,151,24,
    18,211,126,218,247,162,220,62,228,199,130,128,239,80,198,89,
    155,138,192,153,21,110,39,206,103,126,70,118,42,247,66,252,
    120,202,188,206,236,201,179,35,97,81,221,30,27,93,213,253,
    147,138,5,221,102,235,3,252,99,58,101,240,21,4,221,215,
    53,230,27,24,23,148,54,77,60,74,207,9,203,156,93,104,
    88,179,51,13,171,49,101,242,37,204,28,30,155,154,86,99,
    102,86,140,251,111,3,99,169,105,108,44,54,196,255,0,214,
    37,220,67,
};

EmbeddedPython embedded_m5_internal_param_BasicRouter(
    "m5/internal/param_BasicRouter.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_BasicRouter.py",
    "m5.internal.param_BasicRouter",
    data_m5_internal_param_BasicRouter,
    2323,
    6812);

} // anonymous namespace
