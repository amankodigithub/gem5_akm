#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_VirtIO9PDiod[] = {
    120,156,189,88,109,115,219,198,17,222,3,64,74,164,36,75,
    178,44,203,47,178,69,59,117,204,56,142,152,166,113,221,78,
    28,183,78,236,206,196,51,150,85,48,173,29,37,83,20,2,
    78,18,40,16,224,0,39,201,204,72,211,153,202,77,219,47,
    253,150,159,208,15,253,55,253,71,237,238,30,0,66,34,229,
    241,76,205,202,228,121,121,183,88,236,203,179,187,119,231,65,
    246,87,193,239,175,27,0,233,83,3,192,199,143,128,16,160,
    43,96,67,128,144,2,252,11,176,91,129,228,83,240,43,240,
    26,96,195,0,105,192,49,18,38,124,107,64,52,205,207,84,
    33,52,121,70,64,191,14,210,130,141,10,188,136,230,193,146,
    85,216,173,67,242,71,16,66,68,2,94,250,19,224,79,194,
    107,148,142,68,141,5,78,2,77,214,121,178,6,254,20,79,
    214,193,159,102,98,10,250,115,32,167,97,99,134,216,54,206,
    161,216,59,40,118,150,197,254,155,196,250,184,178,8,254,57,
    98,71,189,190,33,78,139,56,249,125,179,44,101,46,215,114,
    30,54,206,231,244,66,137,190,80,162,23,75,244,197,18,189,
    84,162,47,149,232,203,37,250,74,137,190,90,162,151,75,244,
    181,18,125,189,68,175,148,232,70,137,190,81,162,111,150,232,
    247,74,244,79,74,244,173,18,253,126,137,190,205,52,122,243,
    60,116,154,208,249,0,58,119,96,11,3,60,95,120,238,67,
    144,38,116,238,194,198,93,144,248,249,16,142,17,3,254,249,
    210,19,31,241,19,11,197,19,171,252,68,11,54,90,32,241,
    179,170,159,168,66,187,121,17,113,21,252,7,255,154,2,41,
    53,141,195,190,76,210,32,142,156,32,218,138,3,131,214,171,
    52,16,10,61,26,38,50,56,126,73,112,252,23,48,22,125,
    35,131,227,17,160,96,65,182,132,6,28,49,113,100,64,191,
    9,135,2,58,22,248,38,28,226,107,42,164,192,182,128,99,
    3,190,51,137,225,8,71,11,65,115,29,44,165,177,216,97,
    208,104,73,19,112,84,129,195,10,180,95,30,26,52,177,91,
    131,228,159,240,253,50,11,157,100,161,6,28,226,104,193,177,
    5,71,85,120,129,76,56,213,169,145,249,226,229,33,90,138,
    51,237,166,133,218,174,149,204,37,83,252,32,137,220,174,84,
    11,72,59,61,55,113,187,206,239,131,68,125,245,252,151,235,
    143,131,216,111,214,115,198,56,93,237,185,106,199,230,39,77,
    114,73,183,167,88,98,28,73,53,133,196,86,16,249,78,55,
    246,247,66,169,38,73,156,179,21,132,210,113,120,241,171,110,
    47,78,212,147,36,137,19,155,188,202,147,97,236,22,79,144,
    79,189,48,78,101,147,222,198,175,177,73,188,34,238,173,30,
    75,36,5,88,91,122,216,151,169,151,4,61,133,193,210,18,
    137,155,164,53,41,76,60,164,79,112,104,237,196,93,217,218,
    114,189,189,80,245,91,219,178,123,175,181,185,23,132,126,235,
    145,253,172,213,235,171,157,56,106,225,92,16,41,137,174,8,
    91,195,78,88,69,174,243,36,238,32,216,118,2,54,196,217,
    145,97,79,38,51,52,123,133,94,37,230,196,180,168,10,83,
    52,197,12,82,21,252,154,98,217,152,18,107,1,153,226,145,
    121,4,36,171,12,29,138,167,128,93,3,146,101,2,70,7,
    63,130,34,137,240,104,211,154,193,107,191,37,31,232,217,142,
    73,225,214,147,135,12,38,68,21,114,62,160,248,70,192,136,
    168,64,167,10,26,41,8,48,13,157,164,79,35,178,147,24,
    3,133,91,144,254,8,232,83,196,200,33,100,248,57,54,65,
    68,115,160,234,84,154,112,246,34,190,240,207,12,193,118,147,
    212,95,99,28,168,157,32,141,15,34,246,54,209,156,52,109,
    244,204,122,255,249,102,71,122,42,93,193,137,111,226,189,134,
    231,70,81,172,26,174,239,55,92,165,146,96,115,79,201,180,
    161,226,198,173,180,73,1,180,231,115,40,21,242,250,189,28,
    58,20,102,132,142,254,225,7,158,194,31,140,81,135,163,144,
    74,133,48,216,137,253,20,231,73,196,182,84,54,41,169,200,
    201,49,43,194,40,113,136,149,94,143,124,231,240,247,163,92,
    19,134,98,179,154,3,39,149,225,150,170,51,6,221,52,117,
    88,19,154,103,184,145,224,125,55,220,147,44,61,69,121,168,
    16,145,90,135,177,0,238,18,41,159,219,202,6,68,113,228,
    247,81,159,192,187,77,175,186,196,176,155,102,224,45,34,232,
    38,112,172,226,255,85,113,209,240,172,12,106,213,28,110,84,
    233,20,112,176,69,22,111,132,222,49,86,149,166,193,101,129,
    109,224,172,187,73,20,61,108,47,211,112,141,134,235,52,172,
    228,102,190,107,91,103,78,219,122,159,228,27,108,32,155,66,
    1,48,115,83,252,19,153,115,121,144,57,88,237,218,148,1,
    6,229,201,32,3,44,170,140,201,67,26,145,149,115,203,132,
    244,107,170,195,148,41,44,140,146,2,225,77,212,0,244,236,
    24,123,142,12,158,204,241,106,19,8,203,72,220,46,33,209,
    166,152,48,12,237,203,121,141,115,136,67,3,208,190,74,162,
    42,35,60,219,160,225,198,184,220,59,128,210,246,16,148,62,
    163,87,205,101,80,154,97,8,213,241,59,103,120,102,230,243,
    162,217,45,156,130,16,225,199,26,129,159,247,137,50,135,173,
    28,51,116,50,219,126,83,130,14,169,99,148,77,88,67,162,
    191,68,154,151,65,179,132,157,250,69,180,132,205,215,224,230,
    251,49,55,95,110,224,188,61,211,133,214,228,90,171,137,10,
    185,96,203,132,139,89,83,77,107,56,246,146,248,85,191,17,
    111,53,20,219,72,117,241,193,173,116,245,86,250,25,86,188,
    198,67,174,53,186,230,233,170,150,200,30,85,37,122,244,201,
    43,79,114,39,227,95,142,163,139,144,195,5,201,201,58,36,
    226,103,145,28,104,228,158,229,114,156,170,132,170,240,88,124,
    91,47,124,75,170,62,37,225,117,118,172,41,150,16,43,117,
    193,26,56,186,218,242,230,136,87,241,251,5,57,155,172,148,
    64,91,116,187,173,245,99,213,201,8,251,238,9,60,188,99,
    197,237,22,74,250,93,142,131,234,0,7,244,53,115,40,255,
    21,120,155,40,224,7,160,72,99,64,51,40,23,200,167,208,
    46,16,251,31,128,49,63,162,87,115,189,104,83,127,102,14,
    44,35,233,125,102,213,173,251,41,252,173,148,48,121,131,53,
    179,141,96,185,193,90,69,173,97,136,188,85,19,181,78,22,
    37,10,198,142,155,18,155,174,52,131,28,28,148,239,98,251,
    134,149,246,93,227,101,82,139,117,72,131,239,6,104,161,22,
    117,85,44,24,37,12,252,148,134,79,138,240,139,124,238,29,
    42,179,2,103,247,79,71,87,236,111,233,141,22,235,56,59,
    193,251,152,178,144,2,208,149,28,208,159,20,128,150,220,92,
    94,243,230,159,70,131,34,122,108,8,60,93,226,222,137,14,
    115,22,200,10,108,84,9,250,188,179,21,89,102,136,188,20,
    81,225,58,209,185,216,11,107,218,63,69,80,117,188,104,120,
    53,150,20,167,144,61,8,221,238,166,239,62,60,34,209,36,
    223,203,115,197,200,149,157,43,43,75,56,23,103,233,203,63,
    239,229,74,239,143,37,189,127,142,146,10,101,25,204,126,236,
    113,78,127,189,35,27,93,217,221,196,51,220,78,208,107,108,
    133,238,54,123,222,204,140,121,158,27,163,56,116,167,123,125,
    122,135,198,184,225,197,17,214,213,61,79,197,73,195,151,120,
    174,145,126,227,163,6,23,229,70,144,54,220,77,92,117,61,
    165,113,123,50,213,120,211,232,38,219,41,239,15,119,15,136,
    28,91,228,28,60,165,6,184,51,254,19,20,61,79,159,158,
    138,26,203,123,94,157,6,216,158,240,196,162,250,186,200,80,
    223,183,87,105,248,0,198,89,138,63,213,200,129,148,220,81,
    21,87,141,154,193,103,169,50,223,58,61,153,14,231,219,193,
    219,228,155,190,199,201,178,174,74,156,114,130,142,197,52,214,
    168,32,111,212,243,201,41,30,167,121,114,38,191,42,58,199,
    147,179,124,253,82,229,153,121,74,218,137,255,53,105,57,9,
    198,6,255,31,222,105,174,218,247,255,47,186,218,191,128,172,
    247,158,149,167,162,108,200,140,206,211,142,200,183,237,101,43,
    248,196,127,121,36,144,28,47,145,174,146,58,10,203,99,178,
    140,211,91,191,232,239,131,236,27,222,113,62,42,140,56,230,
    109,70,255,2,7,71,31,81,56,56,226,69,116,5,183,158,
    22,111,61,31,208,214,243,144,45,118,12,189,251,28,160,172,
    82,24,78,167,185,72,30,56,195,198,235,13,38,41,231,246,
    122,50,242,237,59,80,222,51,242,242,88,34,77,5,229,31,
    80,106,250,166,184,128,155,196,225,28,162,2,89,50,138,163,
    84,41,178,102,92,241,98,36,254,152,35,177,73,37,104,80,
    37,237,7,52,112,93,44,74,162,253,171,194,219,87,71,195,
    204,71,146,78,29,111,92,199,205,7,183,4,250,113,22,99,
    18,199,234,77,130,120,61,23,68,63,216,217,140,126,95,134,
    82,201,17,56,80,100,77,118,68,245,37,246,171,184,143,231,
    9,222,175,227,239,208,113,198,87,242,63,71,73,127,129,172,
    18,97,201,23,85,44,250,139,98,209,168,85,107,130,59,229,
    169,123,85,173,197,199,144,239,76,251,169,205,229,98,182,136,
    0,95,254,229,253,139,130,197,231,164,53,183,171,175,113,248,
    202,194,126,15,178,195,167,125,187,136,36,249,136,143,3,250,
    96,133,57,195,93,156,155,182,253,51,154,167,125,98,247,222,
    106,110,211,234,73,155,214,233,76,199,87,144,221,123,234,250,
    27,89,191,112,49,68,55,223,192,242,88,238,7,158,100,182,
    75,35,217,218,253,84,201,46,163,160,188,40,163,189,174,243,
    76,118,227,164,255,44,246,165,90,62,181,254,200,247,19,219,
    141,182,165,179,47,105,203,162,110,156,102,200,246,43,90,70,
    206,213,24,169,195,73,222,33,93,52,19,46,234,187,190,51,
    188,247,101,24,123,187,210,207,120,174,157,205,243,56,238,186,
    56,63,250,45,237,32,127,203,252,169,117,63,161,167,22,79,
    205,166,50,9,220,48,248,94,114,102,12,121,112,253,32,105,
    227,65,96,216,127,250,109,235,241,129,76,200,191,225,80,16,
    7,75,44,224,44,55,159,150,163,223,118,134,109,123,155,89,
    180,71,123,16,27,100,210,117,195,204,63,167,53,46,60,147,
    171,50,26,153,153,16,109,20,165,80,190,206,247,87,163,128,
    62,83,42,64,60,195,251,183,161,62,203,101,37,145,219,1,
    90,144,176,176,19,15,101,157,232,243,60,189,70,148,180,178,
    128,177,85,34,125,186,209,183,39,15,233,46,142,175,14,233,
    190,180,54,91,195,170,68,61,202,20,117,236,82,150,57,61,
    87,179,166,167,106,86,109,194,228,43,176,25,60,176,214,173,
    218,212,180,120,251,127,43,88,223,234,198,202,124,77,252,23,
    80,167,101,123,
};

EmbeddedPython embedded_m5_internal_param_VirtIO9PDiod(
    "m5/internal/param_VirtIO9PDiod.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_VirtIO9PDiod.py",
    "m5.internal.param_VirtIO9PDiod",
    data_m5_internal_param_VirtIO9PDiod,
    2436,
    7353);

} // anonymous namespace
