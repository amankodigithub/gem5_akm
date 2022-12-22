#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Cache[] = {
    120,156,181,88,109,115,219,198,17,222,3,64,74,164,36,75,
    178,44,191,202,22,237,212,49,227,218,162,155,198,117,103,226,
    186,117,220,116,166,153,177,226,130,110,237,40,153,162,16,113,
    148,64,129,0,7,56,89,102,70,234,116,42,79,210,233,151,
    126,74,255,65,63,244,223,244,31,181,187,123,0,120,162,36,
    55,157,210,50,121,94,222,237,237,237,203,115,187,11,116,32,
    255,171,224,247,23,13,128,236,119,22,64,128,31,1,17,64,
    95,192,134,0,33,5,4,231,96,167,2,233,71,16,84,224,
    13,192,134,5,210,130,67,36,108,248,210,130,120,150,247,84,
    33,178,121,70,192,176,14,210,129,141,10,188,136,23,193,145,
    85,216,169,67,250,7,16,66,196,2,94,6,83,16,76,195,
    27,148,142,68,141,5,78,3,77,214,121,178,6,193,12,79,
    214,33,152,101,98,6,134,11,32,103,97,99,142,216,54,206,
    160,216,219,40,118,158,197,254,139,196,6,184,178,12,193,25,
    98,71,189,190,32,78,135,56,249,188,121,150,178,80,104,185,
    8,27,103,11,122,201,160,207,25,244,178,65,159,55,232,11,
    6,125,209,160,47,25,244,101,131,190,98,208,43,6,125,213,
    160,175,25,244,170,65,55,12,250,186,65,223,48,232,247,12,
    250,7,6,125,211,160,223,55,232,91,6,221,100,26,61,123,
    22,122,31,64,239,54,244,126,8,93,12,246,98,233,197,59,
    32,109,232,221,133,141,187,32,241,115,7,14,17,15,193,89,
    99,199,26,239,88,42,119,180,120,199,61,216,184,7,18,63,
    45,189,163,10,237,230,121,196,88,248,111,252,107,10,164,212,
    44,14,175,100,154,133,73,236,133,113,55,9,45,90,175,210,
    64,136,236,208,48,149,67,243,9,65,243,159,192,184,12,172,
    28,154,7,128,130,5,217,18,89,112,192,196,129,5,195,38,
    236,11,232,57,16,216,176,143,199,84,72,129,45,1,135,22,
    124,101,19,195,1,142,14,2,232,26,56,74,227,178,199,0,
    210,146,166,224,160,2,251,21,104,191,220,183,104,98,167,6,
    233,63,224,235,21,22,58,205,66,45,216,199,209,129,67,7,
    14,170,240,2,153,112,170,87,35,243,197,203,125,180,20,103,
    218,77,7,181,93,55,204,37,83,130,48,141,253,190,100,211,
    189,129,159,250,125,239,137,223,217,150,205,122,193,145,100,107,
    3,95,109,187,188,197,38,95,244,7,138,69,37,177,84,51,
    72,116,195,56,240,250,73,176,27,73,53,77,114,188,110,24,
    73,207,227,197,95,247,7,73,170,62,77,211,36,117,201,157,
    60,25,37,126,185,131,156,217,137,146,76,54,233,52,62,198,
    37,241,138,184,187,3,150,72,10,176,154,180,57,144,89,39,
    13,7,10,163,164,37,18,55,73,107,82,124,120,200,30,225,
    208,218,78,250,178,213,245,59,187,145,26,182,182,100,255,126,
    107,115,55,140,130,214,99,247,105,107,48,84,219,73,220,194,
    185,48,86,18,125,16,181,12,235,215,112,249,44,201,217,11,
    183,188,144,45,240,182,101,52,144,233,28,205,94,166,51,196,
    130,152,21,85,97,139,166,152,67,170,130,95,91,172,88,51,
    98,61,36,27,58,100,23,65,199,49,193,66,17,20,176,99,
    65,186,66,80,232,225,71,80,236,16,16,109,90,179,120,237,
    55,100,188,158,237,217,20,96,61,185,207,240,65,28,33,231,
    67,138,104,12,140,129,10,244,170,160,177,129,144,210,96,73,
    135,52,34,59,137,177,80,184,3,217,119,128,206,68,84,236,
    67,142,152,67,27,68,188,0,170,78,137,9,103,207,227,129,
    127,102,208,181,155,164,254,58,3,64,109,135,89,178,23,179,
    155,137,102,172,180,209,51,207,134,159,111,246,100,71,101,171,
    56,241,69,178,219,232,248,113,156,168,134,31,4,13,95,169,
    52,220,220,85,50,107,168,164,113,51,107,82,228,220,197,2,
    67,165,188,225,160,192,12,197,23,49,163,127,4,97,71,225,
    143,37,254,193,81,200,164,194,248,111,39,65,134,243,36,98,
    75,42,151,148,84,228,228,132,21,97,120,120,196,74,199,35,
    223,25,252,253,184,208,132,49,216,172,22,136,201,100,212,85,
    117,6,159,159,101,30,107,66,243,140,51,18,252,202,143,118,
    37,75,207,80,30,42,68,164,214,97,178,72,187,72,90,23,
    70,178,230,113,18,7,67,84,36,236,220,162,51,46,50,222,
    102,25,113,203,136,182,41,28,171,248,127,85,156,183,58,78,
    142,177,106,129,51,74,106,10,56,202,34,15,52,98,238,16,
    19,72,211,226,12,192,202,243,61,187,65,20,109,118,87,104,
    184,74,195,53,26,86,11,251,38,102,228,220,184,145,15,72,
    176,197,150,177,13,228,114,187,176,33,56,114,87,46,141,238,
    10,102,180,54,97,222,162,155,49,194,188,67,217,47,125,68,
    35,178,242,109,178,33,123,78,185,150,238,6,11,163,107,128,
    128,38,106,4,115,246,136,187,64,150,78,23,8,117,9,118,
    38,246,182,12,236,185,20,12,6,158,123,169,72,103,30,113,
    104,200,185,87,72,84,229,4,151,54,104,184,62,113,191,142,
    192,179,117,12,60,31,211,25,11,57,120,230,24,52,117,252,
    46,88,29,59,119,118,89,201,150,198,64,67,136,113,78,64,
    204,251,68,217,199,205,123,87,96,201,141,250,149,1,22,210,
    195,50,117,95,71,98,120,129,84,54,97,114,1,235,239,139,
    248,2,150,84,139,75,234,61,46,169,92,150,185,1,211,201,
    212,230,124,170,137,10,217,222,181,225,124,94,42,179,26,142,
    131,52,121,61,108,36,221,134,98,227,40,247,61,188,153,173,
    221,204,62,198,172,214,120,196,249,68,231,53,157,185,82,57,
    160,204,67,91,63,125,221,145,92,166,248,151,231,233,68,227,
    113,210,241,242,242,135,136,89,38,207,89,133,75,57,229,102,
    42,165,76,59,89,167,214,75,167,146,142,159,145,212,58,123,
    212,22,23,16,29,117,193,71,123,58,149,114,175,195,171,248,
    253,132,188,76,230,73,160,238,219,109,107,197,88,103,210,222,
    189,115,4,1,147,210,216,109,161,136,223,22,145,175,142,34,
    79,95,187,64,237,183,192,237,158,128,111,128,98,139,33,204,
    81,91,130,156,130,185,68,236,191,7,134,247,9,21,152,115,
    66,155,170,46,115,96,170,200,30,48,171,46,200,159,193,95,
    140,187,81,148,77,59,111,232,204,178,233,148,249,132,65,241,
    189,74,163,115,52,241,80,20,182,253,140,216,116,54,25,93,
    183,81,110,46,187,49,204,166,19,67,200,180,150,231,209,209,
    95,141,240,65,133,231,138,88,178,140,168,255,136,134,15,203,
    128,139,98,110,18,90,172,194,233,229,208,211,121,248,75,58,
    202,97,229,230,167,184,88,243,238,18,180,149,2,180,31,150,
    160,149,92,43,222,112,191,78,163,69,193,59,180,4,62,28,
    98,243,67,207,98,14,200,10,108,84,9,222,220,147,138,28,
    253,162,200,51,148,149,142,20,34,182,123,93,123,164,140,159,
    14,13,13,175,39,123,127,41,58,15,35,191,191,25,248,143,
    254,72,50,73,112,167,184,15,86,161,229,130,169,37,97,89,
    156,166,40,255,188,95,104,251,106,178,119,247,39,40,162,212,
    146,145,26,36,29,190,176,207,183,101,163,47,251,155,248,160,
    181,29,14,26,221,200,223,98,95,219,185,21,159,23,86,40,
    14,214,120,177,206,110,211,152,52,58,73,140,105,114,183,163,
    146,180,17,72,124,6,145,65,227,110,131,115,108,35,204,26,
    254,38,174,250,29,165,177,121,244,30,113,159,231,167,91,25,
    183,116,59,123,68,78,62,86,30,62,67,134,216,197,254,9,
    202,218,165,31,113,202,148,201,253,169,134,58,150,25,124,186,
    80,67,157,58,168,112,187,107,52,124,0,239,36,179,126,132,
    34,14,72,22,57,160,42,174,88,53,139,59,25,102,120,70,
    188,217,241,203,180,247,125,46,147,126,199,146,95,169,42,113,
    202,41,122,76,165,177,70,137,117,163,94,76,206,240,56,203,
    147,115,197,107,156,51,60,57,207,175,70,170,60,179,72,55,
    114,234,255,189,145,12,244,201,67,252,219,137,94,68,247,193,
    187,85,210,253,41,228,85,243,180,75,40,76,11,230,244,37,
    236,137,162,169,54,213,231,71,239,179,71,49,227,117,82,233,
    43,169,29,190,50,105,91,248,182,234,19,254,58,186,83,199,
    251,193,199,165,218,135,220,18,12,207,113,28,244,35,3,199,
    65,188,136,47,99,99,232,112,99,248,144,26,195,125,182,209,
    179,116,111,56,66,82,165,52,117,30,135,88,238,121,134,185,
    186,239,35,173,252,193,64,198,129,123,27,204,86,142,151,39,
    27,77,74,12,127,3,163,50,219,226,28,246,110,199,111,6,
    101,56,195,12,14,72,165,188,11,19,15,13,195,236,239,5,
    204,154,4,139,81,154,115,31,210,192,137,173,204,105,238,207,
    75,199,94,26,199,80,180,155,133,175,66,53,164,230,255,45,
    171,216,29,112,99,93,206,112,231,96,242,238,165,161,146,155,
    126,103,7,119,73,63,102,121,255,141,135,164,82,168,199,230,
    217,243,12,247,64,70,82,73,19,6,138,76,203,31,21,3,
    137,101,39,25,98,151,207,205,52,254,142,60,239,29,36,240,
    159,161,136,111,32,207,50,152,192,69,21,83,248,178,88,182,
    106,213,154,224,74,55,246,242,82,31,79,61,154,110,27,135,
    153,203,25,97,190,140,3,191,104,43,202,16,133,140,189,187,
    238,247,245,155,19,126,89,224,190,7,249,67,160,123,171,140,
    39,133,136,123,117,253,156,131,151,132,171,48,23,93,247,199,
    52,79,47,204,250,247,215,10,99,214,100,188,139,182,148,113,
    179,120,89,93,25,227,210,38,127,226,103,146,205,86,43,99,
    235,143,131,32,117,253,120,75,122,175,36,181,1,170,113,170,
    128,103,169,236,74,133,66,82,126,96,62,206,212,30,102,74,
    246,143,169,192,138,62,149,253,36,29,62,77,2,169,174,143,
    171,144,119,25,154,229,237,122,28,229,61,197,90,92,212,47,
    213,24,168,199,215,159,68,73,103,71,6,57,207,213,211,121,
    126,153,244,125,156,63,249,148,118,88,156,178,56,182,30,164,
    180,107,121,108,54,147,105,232,71,225,215,146,175,227,49,7,
    61,219,75,219,216,169,31,143,144,62,237,89,178,39,83,114,
    95,164,110,140,49,140,150,88,64,225,192,113,55,143,203,209,
    167,157,98,219,238,102,30,204,147,61,136,149,47,237,251,81,
    238,159,113,141,75,207,20,170,92,123,155,16,109,212,56,186,
    71,176,123,238,99,143,73,247,170,88,227,212,50,142,107,186,
    53,229,47,110,205,70,117,149,179,74,42,183,66,180,40,229,
    221,37,103,94,131,40,19,48,168,205,172,102,238,154,124,246,
    209,143,34,250,5,198,35,106,27,179,46,14,244,118,178,54,
    95,195,76,68,101,201,22,117,44,76,142,61,187,80,115,102,
    103,106,78,109,202,230,215,79,115,248,32,89,119,106,51,179,
    226,127,249,183,138,89,173,110,173,46,214,196,127,0,238,127,
    47,20,
};

EmbeddedPython embedded_m5_internal_param_Cache(
    "m5/internal/param_Cache.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_Cache.py",
    "m5.internal.param_Cache",
    data_m5_internal_param_Cache,
    2450,
    7200);

} // anonymous namespace