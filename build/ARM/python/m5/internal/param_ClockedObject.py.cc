#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ClockedObject[] = {
    120,156,189,88,91,115,219,198,21,62,11,128,148,72,73,22,
    117,183,46,182,96,187,174,89,79,34,181,105,92,119,38,174,
    167,110,154,204,52,211,40,46,152,142,29,38,83,20,34,86,
    18,40,18,96,129,149,101,122,164,151,202,211,118,250,222,159,
    208,135,254,133,62,230,23,244,31,181,231,156,5,64,80,162,
    38,242,68,172,69,174,151,7,187,103,207,229,59,151,69,11,
    210,127,37,252,254,210,6,72,254,45,0,124,252,8,232,0,
    116,5,52,5,8,41,192,95,132,195,18,196,31,130,95,130,
    183,0,77,3,164,1,103,56,49,225,107,3,194,105,222,83,
    134,142,201,20,1,253,42,72,11,154,37,120,17,206,129,37,
    203,112,88,133,248,143,32,132,8,5,188,244,39,192,159,132,
    183,200,29,39,21,102,56,9,68,172,50,177,2,254,20,19,
    171,224,79,243,100,10,250,53,144,211,208,156,161,101,205,27,
    200,246,33,178,157,101,182,255,33,182,62,62,89,2,255,6,
    45,71,185,190,162,149,22,173,228,243,102,153,75,45,147,114,
    14,154,243,217,124,161,48,95,44,204,151,10,243,229,194,124,
    165,48,191,89,152,175,22,230,107,133,249,58,207,81,250,121,
    104,111,64,251,22,180,111,195,30,26,116,46,151,116,19,164,
    9,109,27,154,54,72,252,108,194,25,218,220,159,47,236,184,
    195,59,22,242,29,119,121,199,61,104,222,3,137,159,187,122,
    71,25,26,245,101,244,99,240,95,252,87,71,63,130,154,198,
    225,149,140,147,32,10,221,32,220,139,2,131,158,151,105,32,
    175,183,104,152,72,221,255,49,185,255,95,192,190,247,141,212,
    253,167,128,140,5,233,210,49,224,148,39,167,6,244,235,112,
    34,160,109,129,111,194,9,30,83,34,1,246,5,156,25,240,
    141,73,11,78,113,180,208,73,183,193,82,218,247,109,118,146,
    230,52,1,167,37,56,41,65,227,229,137,65,132,195,10,196,
    255,132,55,27,204,116,146,153,26,112,130,163,5,103,22,156,
    150,225,5,46,66,82,187,66,234,139,151,39,168,41,82,26,
    117,11,165,221,41,168,75,170,248,65,28,122,93,169,22,113,
    238,246,188,216,235,186,31,119,162,214,161,244,191,216,109,203,
    150,170,87,179,149,81,178,213,243,212,129,195,91,77,178,73,
    183,167,152,101,20,74,53,133,147,189,32,244,221,110,228,31,
    117,164,154,36,126,238,94,208,145,174,203,15,127,211,237,69,
    177,250,36,142,163,216,33,179,50,177,19,121,249,14,50,106,
    171,19,37,178,78,167,241,49,14,177,87,180,122,175,199,28,
    73,0,22,151,54,251,50,105,197,65,79,161,183,52,71,90,
    77,220,234,228,39,30,146,79,113,216,62,136,186,114,123,207,
    107,29,117,84,127,123,95,118,31,109,239,30,5,29,127,251,
    153,243,249,118,175,175,14,162,112,27,105,65,168,36,218,162,
    179,61,194,10,91,184,108,158,248,29,7,251,110,192,154,184,
    7,178,211,147,241,12,81,215,232,44,81,19,211,162,44,76,
    81,23,51,56,43,225,215,20,27,198,148,216,9,72,151,22,
    233,71,80,178,138,224,33,143,10,56,52,32,222,32,104,180,
    241,35,200,151,8,144,6,61,51,248,217,239,200,8,154,218,
    54,201,225,154,120,194,112,66,92,225,202,39,228,225,16,24,
    19,37,104,151,65,99,5,33,166,193,19,247,105,196,229,196,
    198,64,230,22,36,255,0,52,42,162,228,4,82,4,157,153,
    32,194,26,168,42,37,3,164,46,227,129,127,102,16,54,234,
    36,254,14,3,65,29,4,73,116,28,178,185,105,206,97,211,
    64,203,60,239,107,107,37,155,72,248,42,58,178,91,94,24,
    70,202,246,124,223,246,148,138,131,221,35,37,19,91,69,246,
    253,164,78,30,116,230,50,44,229,252,250,189,12,59,228,103,
    196,142,254,225,7,45,133,63,22,248,7,123,33,145,10,113,
    112,16,249,9,210,137,197,190,84,14,9,169,200,200,17,11,
    194,48,113,105,41,29,143,235,110,224,239,103,153,36,140,197,
    122,57,67,78,34,59,123,170,202,32,244,146,196,101,73,136,
    206,120,35,198,175,188,206,145,100,238,9,242,67,129,104,170,
    101,24,15,226,110,146,244,153,178,172,65,24,133,126,31,5,
    10,90,15,232,172,155,140,187,105,70,222,18,162,110,2,199,
    50,254,95,22,203,70,203,74,177,86,206,240,70,201,78,1,
    123,91,164,14,71,236,157,97,98,169,27,156,25,88,9,142,
    187,187,52,163,205,206,6,13,183,104,184,77,195,102,166,231,
    181,43,59,115,94,217,199,116,128,193,26,178,46,228,2,51,
    211,197,31,138,157,213,65,236,96,198,107,80,12,24,20,41,
    131,24,176,40,59,198,79,105,196,165,28,93,38,36,95,82,
    46,166,88,97,102,20,22,8,112,154,13,96,207,150,113,106,
    164,241,100,134,88,135,96,88,196,226,126,1,139,14,57,133,
    129,232,172,102,105,206,165,21,26,130,206,58,177,42,141,48,
    173,77,195,157,177,217,119,0,166,253,11,96,250,136,206,170,
    165,96,154,97,16,85,241,91,51,90,102,106,244,188,226,45,
    156,3,17,33,200,26,129,160,31,210,204,188,168,230,184,193,
    147,42,247,105,1,60,36,143,81,212,97,7,39,253,21,18,
    189,8,155,21,172,215,47,194,21,44,193,6,151,224,31,115,
    9,230,50,206,77,145,78,182,38,231,91,61,41,145,13,246,
    76,88,78,75,107,82,193,177,23,71,175,251,118,180,103,43,
    86,146,114,227,147,251,201,214,253,228,35,204,122,246,83,206,
    55,58,239,233,204,22,203,30,101,38,218,250,201,235,150,228,
    114,198,191,92,87,39,34,151,147,146,155,150,73,68,208,18,
    89,208,200,76,203,41,57,81,49,101,226,241,24,183,154,27,
    151,100,253,140,184,87,217,178,166,88,65,180,84,5,139,224,
    234,148,203,61,18,63,197,239,175,200,218,164,166,4,234,140,
    157,134,22,144,101,39,45,156,247,134,16,113,221,146,59,219,
    200,234,247,25,18,202,3,36,208,215,204,208,252,87,224,118,
    81,192,95,128,124,141,46,77,209,156,131,159,156,187,64,203,
    255,0,12,251,17,21,155,115,70,131,170,52,175,192,84,146,
    60,230,165,186,128,127,6,127,43,196,76,86,102,205,180,33,
    44,150,89,43,207,55,12,146,43,149,82,107,56,49,145,55,
    14,188,132,150,233,108,51,8,195,65,14,207,187,56,204,182,
    215,142,152,73,205,215,37,17,190,25,224,133,10,213,186,88,
    48,10,40,248,9,13,31,228,0,16,25,237,58,165,217,132,
    203,203,168,171,243,246,215,116,164,197,66,206,78,112,54,25,
    226,146,131,186,148,129,250,131,28,212,146,107,204,91,190,7,
    208,104,144,83,207,12,129,23,59,108,162,232,30,101,129,44,
    65,179,76,240,231,30,87,164,209,33,178,124,68,231,13,21,
    48,182,195,142,182,80,238,87,237,50,26,94,143,39,206,201,
    107,79,58,94,119,215,247,158,254,137,120,211,1,173,44,94,
    140,76,218,90,81,90,194,186,184,76,96,254,249,40,147,250,
    213,120,98,252,103,200,42,151,150,17,237,71,45,14,236,47,
    15,164,221,149,221,93,188,208,29,4,61,123,175,227,237,179,
    237,205,84,155,47,50,109,20,59,239,124,209,79,30,210,24,
    217,173,40,196,244,122,212,82,81,108,251,18,239,56,210,183,
    223,183,57,55,219,65,98,123,187,248,212,195,139,18,99,119,
    56,222,184,127,244,226,253,132,91,197,195,99,154,142,207,119,
    46,222,89,3,236,146,19,200,107,159,190,74,229,169,150,251,
    95,29,10,88,166,240,246,162,250,58,213,80,3,224,108,209,
    240,35,24,107,70,254,16,89,245,136,39,25,164,44,214,141,
    138,193,141,212,208,194,231,180,55,185,24,116,223,94,37,232,
    244,123,20,92,32,203,208,158,224,113,146,242,113,179,146,17,
    171,60,78,49,113,58,35,206,240,120,131,137,179,25,177,198,
    227,28,19,231,51,226,2,143,139,76,92,202,136,203,60,174,
    48,241,102,22,248,171,76,92,131,230,122,246,30,104,131,146,
    64,249,251,38,1,142,169,241,69,211,155,107,141,125,231,241,
    255,71,88,231,231,144,22,244,203,226,126,168,7,124,166,227,
    94,219,26,203,126,127,145,21,211,215,6,86,76,188,8,215,
    176,25,180,184,25,124,66,205,224,9,55,140,174,161,251,193,
    129,139,184,155,231,55,16,43,56,132,242,216,29,1,103,221,
    243,145,239,189,94,79,134,190,243,16,138,109,28,63,30,143,
    153,40,184,207,160,80,133,77,177,136,125,219,69,8,82,182,
    42,168,197,80,43,229,160,219,24,171,31,255,158,249,177,126,
    107,40,101,57,79,104,168,13,229,39,109,235,187,163,211,6,
    118,205,135,174,31,117,189,32,164,203,192,85,150,97,91,144,
    94,252,51,146,122,112,201,46,44,0,30,42,235,246,92,122,
    7,32,249,132,171,174,165,99,102,201,196,195,116,245,254,37,
    251,179,125,36,214,62,77,118,131,48,225,19,223,109,7,157,
    75,246,28,249,84,189,119,85,94,93,239,53,31,254,78,27,
    232,236,197,81,103,227,195,119,224,148,250,242,157,54,92,126,
    52,250,247,222,101,156,162,99,25,211,85,75,118,248,196,171,
    172,163,131,232,150,95,160,113,204,169,53,118,118,71,226,153,
    35,120,40,2,117,250,2,193,151,216,68,68,125,188,235,241,
    85,202,37,182,238,24,203,240,47,144,85,31,210,119,66,88,
    134,241,178,191,52,248,51,42,229,138,224,46,230,220,11,112,
    45,204,15,32,187,58,244,19,135,83,239,108,30,148,252,146,
    54,107,45,40,116,249,42,187,227,117,245,219,54,126,177,228,
    144,81,249,5,129,243,32,143,107,122,87,194,247,53,125,247,
    197,36,202,29,22,55,84,206,79,137,78,121,161,251,104,43,
    83,109,171,160,218,175,117,208,26,188,66,173,143,92,216,8,
    186,90,127,53,119,238,185,31,211,230,165,115,212,68,198,129,
    215,9,222,72,181,122,238,137,12,143,186,238,243,227,184,193,
    209,187,49,242,180,231,132,133,207,9,10,156,128,138,11,6,
    143,152,129,251,74,82,107,169,238,124,7,31,125,218,37,186,
    29,237,54,250,137,146,93,190,235,92,124,142,21,49,238,122,
    157,212,76,228,163,108,1,39,164,243,6,34,15,228,191,184,
    101,99,40,15,161,136,113,27,203,253,0,143,141,153,75,190,
    35,173,119,132,49,101,95,18,63,197,221,227,195,185,190,210,
    232,23,39,79,41,68,147,223,226,64,111,75,43,179,21,81,
    54,168,20,154,162,138,197,208,50,167,107,21,107,122,170,98,
    85,38,76,126,253,53,131,23,213,170,85,153,154,22,23,255,
    54,49,62,170,198,230,124,69,252,15,15,209,113,137,
};

EmbeddedPython embedded_m5_internal_param_ClockedObject(
    "m5/internal/param_ClockedObject.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_ClockedObject.py",
    "m5.internal.param_ClockedObject",
    data_m5_internal_param_ClockedObject,
    2382,
    7186);

} // anonymous namespace