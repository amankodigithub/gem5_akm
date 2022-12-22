#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Gicv2m[] = {
    120,156,181,88,109,111,27,199,17,158,189,59,82,34,37,89,
    239,150,95,100,139,118,234,152,113,19,41,118,227,186,64,92,
    167,142,243,130,4,176,162,158,82,216,81,130,94,79,188,165,
    116,20,121,71,220,173,36,51,144,208,34,50,218,20,200,167,
    0,253,208,31,208,15,253,55,253,71,237,204,236,221,113,69,
    81,69,138,82,142,184,153,219,157,157,155,151,103,103,102,175,
    1,217,191,18,254,126,83,3,72,35,11,32,192,63,1,109,
    128,142,128,45,1,66,10,8,22,96,175,4,201,123,16,148,
    224,53,192,150,5,210,130,19,36,108,248,218,130,104,146,247,
    148,161,109,243,140,128,94,21,164,3,91,37,120,17,205,130,
    35,203,176,87,133,228,15,32,132,136,4,188,12,198,32,24,
    135,215,40,29,137,10,11,28,7,154,172,242,100,5,130,9,
    158,172,66,48,201,196,4,244,102,64,78,194,214,20,177,109,
    93,66,177,247,80,236,52,139,253,23,137,13,112,101,17,130,
    75,196,142,122,125,69,156,14,113,242,251,166,89,202,76,174,
    229,44,108,205,229,244,188,65,47,24,244,162,65,95,54,232,
    37,131,190,98,208,87,13,250,154,65,95,55,232,101,131,190,
    97,208,55,13,122,197,160,107,6,125,203,160,111,27,244,27,
    6,253,51,131,190,99,208,111,26,244,93,131,174,27,244,91,
    6,125,143,105,244,248,28,180,126,14,173,183,161,245,14,52,
    17,4,179,133,119,87,65,218,208,90,131,173,53,144,248,183,
    10,39,136,147,96,206,216,241,46,239,152,47,118,220,231,29,
    15,96,235,1,72,252,187,175,119,148,97,179,126,25,177,23,
    254,27,255,213,5,82,106,18,135,3,153,164,97,28,121,97,
    212,140,67,139,214,203,52,16,82,27,52,140,101,144,125,70,
    144,253,39,48,94,3,43,131,236,49,160,96,65,182,180,45,
    56,102,226,216,130,94,29,142,4,180,28,8,108,56,194,215,
    148,72,129,29,1,39,22,124,99,19,195,49,142,14,2,235,
    38,56,74,227,181,197,192,210,146,198,224,184,4,71,37,216,
    124,121,100,209,196,94,5,146,127,192,183,203,44,116,156,133,
    90,112,132,163,3,39,14,28,151,225,5,50,225,84,171,66,
    230,139,151,71,104,41,206,108,214,29,212,118,221,48,151,76,
    9,194,36,242,59,82,77,33,237,117,253,196,239,120,159,134,
    141,131,7,157,122,53,103,137,211,213,174,175,118,93,222,99,
    147,51,58,93,197,178,226,72,170,9,36,154,97,20,120,157,
    56,216,111,75,53,78,130,188,102,216,150,158,199,139,159,117,
    186,113,162,62,78,146,56,113,201,159,60,217,142,253,98,7,
    121,179,209,142,83,89,167,183,241,107,92,18,175,136,187,217,
    101,137,164,0,235,73,155,3,153,54,146,176,171,48,76,90,
    34,113,147,180,58,5,136,135,244,3,28,214,118,227,142,92,
    107,250,141,253,182,234,173,237,200,206,195,181,237,253,176,29,
    172,61,117,159,175,117,123,106,55,142,214,112,46,140,148,68,
    39,180,215,76,243,87,113,125,142,4,29,134,59,94,200,38,
    120,187,178,221,149,9,121,42,189,70,47,17,51,98,82,148,
    133,45,234,98,10,169,18,254,108,177,108,77,136,245,144,140,
    104,144,97,4,30,199,132,11,197,80,192,158,5,201,50,129,
    161,133,127,130,162,135,144,216,164,53,139,215,126,75,214,235,
    217,150,77,33,214,147,71,12,32,68,18,114,62,166,152,70,
    192,40,40,65,171,12,26,29,8,42,13,151,164,71,35,178,
    147,24,11,133,59,144,254,13,208,155,136,139,35,200,48,115,
    98,131,136,102,64,85,41,101,225,236,101,124,225,119,12,187,
    205,58,169,191,206,8,80,187,97,26,31,70,236,103,162,249,
    160,108,162,103,54,122,95,108,183,100,67,165,43,56,241,85,
    188,95,107,248,81,20,171,154,31,4,53,95,169,36,220,222,
    87,50,173,169,184,118,39,173,83,232,220,217,28,68,133,188,
    94,55,7,13,5,24,65,163,31,130,176,161,240,97,158,31,
    56,10,169,84,8,128,221,56,72,113,158,68,236,72,229,146,
    146,138,156,28,179,34,140,15,143,88,233,245,200,119,9,159,
    159,230,154,48,8,235,229,28,50,169,108,55,85,149,209,231,
    167,169,199,154,208,60,3,141,4,31,248,237,125,201,210,83,
    148,135,10,17,169,117,24,49,212,174,144,218,185,149,172,122,
    20,71,65,15,53,9,27,119,233,37,87,24,112,147,12,185,
    69,132,219,24,142,101,252,127,89,92,182,26,78,6,178,114,
    14,52,202,107,10,56,204,34,139,52,130,238,4,115,72,221,
    226,36,192,218,243,73,187,77,20,109,118,151,105,184,65,195,
    77,26,86,114,3,71,103,229,212,160,149,143,72,178,197,166,
    177,17,228,116,59,55,34,56,117,90,174,246,79,11,102,181,
    77,66,189,69,103,163,143,122,135,50,96,242,132,70,100,229,
    243,100,67,250,37,229,91,58,29,44,140,14,2,66,154,168,
    62,208,217,37,238,12,153,58,158,99,212,37,224,153,232,219,
    49,208,231,82,52,24,122,238,213,60,163,121,196,161,65,231,
    94,39,81,165,33,62,173,209,112,107,244,142,237,195,103,231,
    12,124,222,167,151,204,100,240,153,98,216,84,241,55,99,53,
    236,204,219,69,57,155,31,128,13,97,198,25,130,153,55,137,
    178,207,218,119,97,112,201,172,250,196,128,11,41,98,153,202,
    175,35,209,91,34,157,77,160,44,97,21,126,17,45,97,97,
    181,184,176,190,203,133,149,139,51,183,103,58,161,218,156,83,
    53,81,34,227,155,54,92,206,10,102,90,193,177,155,196,175,
    122,181,184,89,83,108,29,229,191,199,119,210,213,59,233,251,
    152,217,106,79,56,167,232,220,166,179,87,34,187,148,125,104,
    235,199,175,26,146,107,21,63,121,158,78,54,30,39,30,47,
    171,129,136,153,69,114,157,149,251,148,211,110,170,18,202,182,
    35,246,106,181,240,42,41,249,57,137,173,178,75,109,177,132,
    248,168,10,126,183,167,243,41,183,60,188,138,191,15,201,205,
    100,159,4,106,206,221,77,173,25,43,77,234,187,111,159,194,
    192,200,84,118,215,80,198,239,242,216,151,251,177,167,159,157,
    3,247,47,192,109,159,128,63,3,69,23,131,152,1,183,192,
    57,133,115,158,216,127,15,140,240,33,117,152,243,194,38,213,
    94,230,192,116,145,62,98,86,93,150,63,135,239,141,227,145,
    23,79,59,107,236,204,226,233,20,57,133,97,241,147,10,164,
    115,58,249,80,24,118,253,148,216,116,70,233,159,184,126,130,
    46,154,50,204,168,163,195,200,184,22,232,209,187,191,233,35,
    132,202,207,117,49,111,25,113,191,79,195,131,34,228,34,159,
    27,137,26,43,112,126,85,244,116,54,254,154,222,229,176,118,
    211,99,92,159,245,246,2,184,165,28,184,15,10,224,74,46,
    25,175,185,117,167,209,162,248,157,88,2,239,143,216,5,209,
    117,205,1,89,130,173,50,65,156,187,83,145,157,0,145,39,
    27,74,77,167,234,17,91,190,174,125,82,132,80,71,135,134,
    87,35,62,196,20,160,199,109,191,179,29,248,79,254,68,66,
    73,114,35,63,19,86,174,230,140,169,38,225,89,156,167,41,
    63,62,204,213,61,24,241,1,254,37,202,40,212,100,184,6,
    113,131,79,237,151,187,178,214,145,157,109,188,117,237,134,221,
    90,179,237,239,176,183,237,204,140,47,114,51,20,135,107,176,
    106,167,247,104,140,107,141,56,194,108,185,223,80,113,82,11,
    36,222,71,100,80,123,167,198,169,182,22,166,53,127,27,87,
    253,134,210,248,60,125,152,184,229,243,147,157,148,209,179,119,
    72,228,5,68,203,195,27,101,136,29,237,119,80,212,48,125,
    223,41,50,39,247,170,26,238,88,110,240,166,161,122,58,129,
    80,5,119,87,105,120,11,46,38,193,190,135,50,254,72,194,
    200,5,101,113,221,170,88,220,227,107,142,13,226,78,207,158,
    168,31,126,202,137,210,223,98,178,115,85,38,78,57,70,215,
    86,26,43,148,96,183,170,249,228,4,143,147,60,57,149,79,
    94,226,113,154,39,103,242,111,64,179,60,57,7,91,243,244,
    209,128,102,22,232,172,142,253,191,103,149,79,192,5,96,255,
    175,35,61,162,238,163,11,214,210,253,21,100,69,245,188,227,
    41,76,19,166,244,241,108,137,188,239,54,245,231,11,250,252,
    0,150,188,70,34,125,37,181,207,151,71,110,13,159,100,253,
    138,31,250,199,237,108,203,248,180,80,252,132,123,134,222,2,
    135,66,223,43,56,20,226,69,116,13,123,71,135,123,199,199,
    212,59,30,177,149,158,165,219,199,62,154,74,133,177,20,209,
    72,30,122,166,193,186,55,36,181,252,110,87,70,129,123,15,
    204,118,143,151,71,28,81,202,26,63,130,81,187,109,177,128,
    253,221,217,243,65,249,207,48,132,99,82,42,78,196,232,163,
    195,88,251,123,142,181,58,231,191,34,9,186,143,105,224,180,
    87,100,60,247,131,194,183,75,131,64,106,226,40,83,186,32,
    156,187,134,189,3,123,94,63,170,133,65,182,29,108,38,104,
    255,208,5,218,204,223,26,240,246,127,109,144,161,27,198,94,
    32,219,126,143,247,255,151,101,146,194,215,136,124,134,163,195,
    199,2,31,165,146,167,192,194,8,202,174,157,1,106,156,196,
    61,188,47,112,87,78,187,61,239,34,74,192,175,81,198,247,
    36,140,190,122,97,9,16,101,44,2,139,120,93,92,180,42,
    229,138,224,122,57,240,61,84,107,240,11,200,59,208,94,234,
    114,246,152,46,194,197,159,238,242,90,70,145,101,47,172,99,
    28,244,247,64,250,248,224,190,1,217,149,210,189,91,132,157,
    174,213,220,246,235,75,19,30,39,174,229,92,186,93,126,35,
    181,192,157,135,171,185,61,171,218,146,79,40,198,222,129,164,
    70,128,191,31,118,30,170,27,3,156,166,229,204,175,174,15,
    229,216,12,59,250,235,150,154,29,88,15,18,31,233,197,129,
    217,84,38,161,223,14,191,149,234,234,80,121,31,250,169,252,
    52,131,209,217,213,141,182,175,154,113,210,57,71,221,207,34,
    149,60,195,59,100,18,183,249,182,63,68,221,94,170,100,231,
    140,45,50,218,239,120,207,101,39,78,122,207,227,64,170,229,
    129,245,167,65,144,184,126,180,83,120,237,214,32,67,214,59,
    105,25,57,87,109,168,14,167,121,207,241,43,46,102,126,93,
    25,186,254,172,29,55,246,100,144,241,12,119,7,243,124,20,
    119,40,14,131,222,102,139,55,14,147,77,188,50,156,181,55,
    243,118,124,40,19,242,71,91,221,30,96,232,47,177,128,243,
    220,50,40,71,191,237,28,36,237,111,103,209,25,110,49,86,
    217,164,227,183,51,123,6,53,46,112,152,171,50,8,253,83,
    66,180,81,195,245,216,8,227,143,228,65,216,208,31,92,243,
    69,69,231,117,144,129,142,93,241,196,253,161,81,196,57,53,
    37,114,39,68,155,18,222,94,176,102,229,142,178,9,7,230,
    84,66,52,183,93,64,14,211,183,34,253,69,229,9,125,147,
    75,177,171,2,250,98,90,153,174,96,62,163,18,104,139,42,
    22,65,199,158,156,169,56,147,19,21,167,50,102,243,7,177,
    41,188,214,86,157,202,196,164,248,95,255,91,193,236,88,181,
    86,230,42,226,63,247,21,94,21,
};

EmbeddedPython embedded_m5_internal_param_Gicv2m(
    "m5/internal/param_Gicv2m.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_Gicv2m.py",
    "m5.internal.param_Gicv2m",
    data_m5_internal_param_Gicv2m,
    2505,
    7379);

} // anonymous namespace
