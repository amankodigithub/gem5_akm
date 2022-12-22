#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_StridePrefetcher[] = {
    120,156,189,89,221,115,219,198,17,223,3,64,74,164,36,75,
    178,44,201,182,100,139,182,99,155,113,98,169,77,227,186,51,
    113,221,58,31,157,73,102,172,56,96,58,118,148,76,81,136,
    56,146,160,72,128,3,28,45,51,149,250,80,185,109,222,59,
    125,233,123,31,250,223,244,159,233,115,179,187,7,128,16,41,
    186,154,105,24,75,60,47,23,139,189,253,248,221,222,222,169,
    14,201,191,2,126,126,93,1,136,31,27,0,30,254,10,232,
    0,116,5,236,9,16,82,128,119,9,14,10,16,189,15,94,
    1,94,3,236,25,32,13,56,65,194,132,175,13,8,230,249,
    157,34,116,76,230,8,24,148,65,90,176,87,128,231,193,50,
    88,178,8,7,101,136,126,15,66,136,64,192,11,111,6,188,
    89,120,141,218,145,40,177,194,89,32,102,153,153,37,240,230,
    152,89,6,111,158,137,57,24,44,129,156,135,189,5,18,219,
    187,128,106,239,161,218,69,86,251,111,82,235,225,147,85,240,
    46,144,56,218,245,21,73,90,36,201,243,45,178,150,165,212,
    202,101,216,187,152,210,43,57,250,82,142,94,205,209,107,57,
    122,61,71,95,206,209,87,114,244,213,28,189,145,163,55,115,
    244,181,28,125,61,71,111,229,232,74,142,190,145,163,111,230,
    232,91,57,250,173,28,125,59,71,223,97,26,35,120,17,218,
    119,161,93,133,246,219,208,192,164,46,103,209,186,7,210,132,
    246,59,176,247,14,72,252,189,7,39,152,119,239,98,238,141,
    119,249,141,149,236,141,251,252,198,54,236,109,131,196,223,251,
    250,141,34,212,170,107,136,37,255,191,248,175,42,144,82,243,
    56,188,148,81,236,135,129,227,7,141,208,55,232,121,145,6,
    66,94,157,134,153,4,130,31,17,4,255,5,140,63,207,72,
    32,120,12,168,88,144,47,29,3,142,153,56,54,96,80,133,
    35,1,109,11,60,19,142,112,154,2,25,208,20,112,98,192,
    55,38,9,28,227,104,33,80,174,131,165,52,254,218,12,20,
    173,105,6,142,11,112,84,128,218,139,35,131,24,7,37,136,
    254,9,223,110,178,210,89,86,106,192,17,142,22,156,88,112,
    92,132,231,40,132,172,118,137,220,23,47,142,208,83,228,212,
    170,22,90,187,155,115,151,92,241,252,40,112,187,82,173,35,
    237,244,220,200,237,58,53,21,249,158,124,22,201,134,84,245,
    150,140,170,229,84,56,140,183,123,174,106,217,252,182,73,97,
    233,246,20,107,13,3,169,230,144,104,248,129,231,116,67,175,
    223,145,106,150,84,58,13,191,35,29,135,31,126,218,237,133,
    145,250,36,138,194,200,166,200,50,179,19,186,217,27,20,215,
    122,39,140,101,149,102,227,105,108,82,175,72,186,209,99,141,
    100,0,91,76,47,123,50,174,71,126,79,97,194,180,70,146,
    38,109,85,74,21,15,241,167,56,236,180,194,174,220,105,184,
    245,126,71,13,118,154,178,251,96,103,191,239,119,188,157,39,
    246,211,157,222,64,181,194,96,7,121,126,160,36,134,163,179,
    115,118,32,182,81,242,34,169,60,244,155,142,207,206,56,45,
    217,233,201,104,129,184,87,105,58,177,36,230,69,81,152,162,
    42,22,144,42,224,199,20,155,198,156,216,245,201,157,58,185,
    72,128,178,242,16,162,188,10,56,48,32,218,36,128,180,241,
    87,80,70,17,38,53,122,102,240,179,47,40,14,154,219,54,
    41,237,154,121,196,160,66,116,161,228,35,202,115,0,140,140,
    2,180,139,160,17,131,64,211,16,138,6,52,162,56,169,49,
    80,185,5,241,223,1,227,138,88,57,130,4,71,39,38,136,
    96,9,84,153,202,18,114,215,112,194,63,49,20,107,85,50,
    127,151,177,160,90,126,28,30,6,28,113,162,121,241,212,48,
    50,207,6,159,239,183,101,93,197,91,200,248,42,236,87,234,
    110,16,132,170,226,122,94,197,85,24,210,253,190,146,113,69,
    133,149,219,113,149,146,104,47,167,112,202,244,13,122,41,124,
    40,213,8,31,253,197,243,235,10,191,172,240,23,206,66,44,
    21,66,161,21,122,49,242,73,69,83,42,155,140,84,20,228,
    144,13,97,164,56,36,74,211,163,220,5,252,254,36,181,132,
    225,88,45,166,224,137,101,167,161,202,140,67,55,142,29,182,
    132,248,12,57,82,252,210,237,244,37,107,143,81,31,26,68,
    164,182,97,106,160,187,76,14,164,254,178,19,65,24,120,3,
    180,201,175,223,165,233,46,51,244,230,25,124,171,8,188,25,
    28,139,248,127,81,172,25,117,43,129,91,49,133,28,85,61,
    5,156,112,145,228,28,225,119,130,21,166,106,112,137,96,63,
    120,245,221,36,138,94,182,55,105,184,70,195,117,26,182,82,
    87,167,225,239,194,168,191,15,105,14,131,157,100,119,40,17,
    102,234,142,119,106,5,93,25,174,32,172,126,53,90,9,6,
    173,151,225,74,176,168,82,70,143,105,68,81,94,99,38,196,
    95,82,93,166,21,195,202,104,113,32,204,137,26,130,159,131,
    99,47,145,211,179,41,110,109,2,99,30,145,205,28,34,109,
    202,11,195,209,190,146,214,59,135,36,52,16,237,13,82,85,
    56,35,186,21,26,110,76,51,196,67,72,53,199,32,245,1,
    77,183,148,64,106,129,161,84,198,207,146,81,55,147,184,103,
    27,224,202,8,148,8,71,214,25,56,186,67,148,57,238,233,
    143,0,161,196,191,223,228,32,68,38,25,121,55,118,145,24,
    172,147,245,121,240,172,227,14,254,60,88,199,77,217,224,77,
    249,39,188,41,243,198,206,173,154,46,188,38,215,94,77,20,
    40,12,13,19,214,146,205,54,46,225,216,139,194,87,131,74,
    216,168,40,246,147,234,228,163,219,241,246,237,248,3,172,128,
    149,199,92,123,116,13,212,85,46,146,61,170,82,244,234,39,
    175,234,146,119,55,254,230,56,186,40,57,92,160,156,100,215,
    68,28,173,82,16,141,52,186,92,158,99,21,81,85,158,90,
    124,203,89,124,201,220,207,104,130,50,7,215,20,235,136,153,
    178,96,43,28,93,129,185,113,226,167,248,249,144,2,78,158,
    74,160,150,221,174,105,27,217,124,114,196,126,247,20,46,166,
    96,188,189,131,218,126,155,226,161,56,196,3,125,204,20,214,
    127,5,110,35,5,252,5,40,227,152,216,4,214,217,42,160,
    20,175,144,248,239,128,241,127,198,30,206,245,163,70,251,54,
    75,96,89,137,31,178,168,222,210,63,131,239,114,139,39,221,
    120,205,164,81,204,111,188,86,86,123,24,42,231,218,92,173,
    211,69,138,18,210,114,99,18,211,149,103,184,30,135,37,61,
    107,237,176,242,78,3,55,179,90,181,67,86,124,51,68,13,
    109,93,27,98,197,200,97,225,167,52,188,151,193,64,164,188,
    31,216,160,45,152,188,183,58,186,146,127,77,179,90,108,231,
    226,140,162,28,140,42,202,0,94,72,1,254,94,6,112,201,
    27,207,107,62,40,208,104,80,118,79,12,129,167,79,236,175,
    232,176,103,129,44,192,94,145,150,2,119,192,34,89,41,34,
    45,79,84,204,78,237,106,28,141,93,29,167,44,193,58,119,
    52,188,154,218,178,167,244,61,234,184,221,125,207,125,124,68,
    234,105,142,122,186,118,140,212,224,165,188,193,132,123,49,201,
    102,254,250,32,53,252,229,212,150,252,207,181,69,218,96,6,
    184,23,214,121,157,127,217,146,149,174,236,238,227,185,175,229,
    247,42,141,142,219,228,12,152,137,67,159,167,14,41,78,225,
    104,63,16,223,163,49,172,212,195,0,107,110,191,174,194,168,
    226,73,60,7,73,175,114,191,194,5,187,226,199,21,119,31,
    159,186,117,165,113,124,122,249,113,131,233,70,205,152,123,201,
    131,67,34,167,154,65,7,79,183,62,118,210,127,132,108,79,
    212,39,174,172,254,114,143,172,151,5,110,95,120,194,81,3,
    93,124,168,55,176,183,105,120,27,166,93,166,223,71,109,127,
    32,181,20,150,162,216,48,74,134,90,59,99,245,61,35,13,
    241,248,26,252,207,121,214,160,190,251,73,86,98,145,36,229,
    12,29,171,105,44,81,193,222,43,167,204,57,30,231,153,185,
    144,50,47,240,184,200,204,165,148,185,204,227,69,102,174,164,
    204,75,60,174,50,115,45,101,174,243,120,153,153,87,82,230,
    85,30,55,152,185,153,50,175,241,120,157,153,91,233,229,86,
    133,153,55,96,239,38,221,158,16,231,22,149,145,153,255,183,
    140,240,146,156,234,98,252,243,15,90,61,236,135,63,154,189,
    246,47,32,233,16,38,85,14,145,119,102,65,87,142,182,72,
    15,27,121,79,248,206,226,218,68,72,59,245,72,186,74,234,
    140,108,78,209,67,46,60,122,178,239,134,53,97,188,79,126,
    146,57,115,194,77,209,224,18,39,74,31,176,56,81,226,121,
    112,21,27,102,139,27,230,71,212,48,31,177,231,142,161,123,
    230,33,234,10,89,0,232,226,36,144,135,99,134,233,32,232,
    214,152,12,116,123,61,25,120,246,61,200,119,187,252,120,106,
    153,167,114,247,55,200,181,41,166,184,132,237,237,248,218,162,
    18,158,115,142,51,86,200,86,211,52,115,199,232,252,71,138,
    206,234,91,144,175,227,246,35,26,184,114,103,69,219,254,85,
    22,249,27,147,161,231,201,102,36,37,157,158,206,33,133,173,
    19,103,72,127,85,183,38,191,208,117,95,57,184,85,54,88,
    241,121,228,72,53,237,89,41,227,141,47,249,193,249,148,167,
    114,153,242,132,161,110,79,126,41,86,110,164,134,234,207,39,
    73,19,16,116,134,44,117,103,242,139,202,221,199,243,28,118,
    12,97,157,231,56,167,40,77,66,87,11,57,222,155,204,211,
    98,248,82,252,191,28,201,73,166,142,12,89,111,180,174,21,
    201,184,53,12,214,57,69,51,71,134,60,62,132,76,120,181,
    31,75,196,73,140,11,196,241,61,158,231,220,194,52,19,85,
    230,83,92,94,237,92,142,61,217,145,74,78,40,72,124,2,
    72,110,123,60,137,109,93,56,192,35,57,31,119,241,123,199,
    113,166,219,21,253,18,184,147,129,152,138,10,118,69,162,136,
    125,209,170,56,245,99,148,138,37,193,13,230,200,159,48,180,
    85,116,254,213,135,188,65,108,243,158,182,152,149,4,190,99,
    79,91,62,170,30,124,245,176,235,118,245,77,41,223,8,218,
    180,182,248,78,199,190,155,149,22,186,225,226,147,181,190,171,
    192,130,206,205,47,247,186,246,207,136,79,175,118,31,108,167,
    62,110,107,31,191,232,203,190,244,134,62,242,101,127,247,129,
    170,156,41,253,161,27,231,226,193,215,88,227,66,181,1,102,
    180,171,54,70,30,202,160,223,117,158,202,110,24,13,158,134,
    158,84,155,35,207,159,120,94,100,187,65,83,58,47,37,245,
    241,92,248,78,9,36,77,188,214,145,74,157,109,232,105,217,
    49,91,180,16,62,212,151,229,124,12,29,127,254,81,39,172,
    31,72,47,145,185,54,89,230,227,176,235,34,255,236,89,106,
    126,58,203,242,200,115,47,162,183,86,71,184,177,140,124,183,
    227,127,43,213,149,179,34,248,236,48,170,225,73,121,60,126,
    122,182,103,225,161,140,40,190,157,177,132,15,31,177,130,73,
    97,30,213,163,103,155,224,91,127,63,201,246,217,17,196,30,
    45,234,186,157,36,62,163,22,103,145,73,77,185,254,38,37,
    218,41,90,32,233,115,62,142,76,128,49,85,137,81,38,31,
    105,206,108,248,184,156,68,178,233,83,45,98,181,163,239,38,
    221,16,45,255,55,237,109,121,61,83,45,68,250,46,64,223,
    65,62,166,170,29,239,227,64,127,129,40,45,150,176,40,81,
    175,100,138,50,118,75,150,57,191,84,178,230,231,74,86,105,
    198,228,203,228,5,177,98,148,173,210,220,188,56,239,207,22,
    22,180,178,177,181,94,18,223,3,107,45,154,48,
};

EmbeddedPython embedded_m5_internal_param_StridePrefetcher(
    "m5/internal/param_StridePrefetcher.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_StridePrefetcher.py",
    "m5.internal.param_StridePrefetcher",
    data_m5_internal_param_StridePrefetcher,
    2605,
    8201);

} // anonymous namespace
