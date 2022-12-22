#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RealViewCtrl[] = {
    120,156,189,88,91,115,219,214,17,222,3,128,148,72,73,214,
    221,87,197,162,157,58,102,156,88,138,211,184,238,76,92,183,
    142,227,206,52,51,86,92,48,173,29,38,83,20,2,142,36,
    80,32,192,1,142,44,51,149,250,80,185,109,30,58,121,203,
    79,232,67,255,77,255,81,187,187,7,0,33,146,74,60,83,
    179,50,121,188,60,88,44,246,242,237,229,192,131,236,175,130,
    223,95,53,0,210,7,6,128,143,31,1,33,64,87,64,91,
    128,144,2,252,21,216,175,64,242,17,248,21,120,5,208,54,
    64,26,112,130,132,9,95,25,16,205,242,61,85,8,77,222,
    17,208,175,131,180,160,93,129,103,209,34,88,178,10,251,117,
    72,254,8,66,136,72,192,115,127,10,252,105,120,133,210,145,
    168,177,192,105,160,205,58,111,214,192,159,225,205,58,248,179,
    76,204,64,127,1,228,44,180,231,136,173,125,14,197,222,66,
    177,243,44,246,223,36,214,199,43,171,224,159,35,118,212,235,
    75,226,180,136,147,159,55,207,82,22,114,45,23,161,189,148,
    211,203,37,122,165,68,175,150,232,243,37,250,66,137,190,88,
    162,47,149,232,203,37,250,74,137,94,43,209,111,149,232,171,
    37,122,189,68,55,74,244,181,18,125,189,68,191,93,162,127,
    82,162,111,148,232,119,152,70,15,46,65,231,38,116,154,208,
    121,23,118,48,168,139,133,183,110,129,52,161,243,30,180,223,
    3,137,159,91,112,130,113,247,151,74,119,188,207,119,44,23,
    119,220,230,59,54,160,189,1,18,63,183,245,29,85,104,53,
    207,35,150,130,255,224,95,83,32,165,102,113,121,33,147,52,
    136,35,39,136,118,226,192,160,235,85,90,8,121,30,45,83,
    25,4,31,17,4,255,5,140,63,223,200,32,120,12,40,88,
    144,45,161,1,199,76,28,27,208,111,194,145,128,142,5,190,
    9,71,248,152,10,41,176,43,224,196,128,175,77,98,56,198,
    213,66,160,92,5,75,105,252,117,24,40,90,210,20,28,87,
    224,168,2,173,231,71,6,109,236,215,32,249,39,124,179,198,
    66,167,89,168,1,71,184,90,112,98,193,113,21,158,33,19,
    110,117,106,100,190,120,126,132,150,226,78,171,105,161,182,91,
    37,115,201,20,63,72,34,183,43,213,50,210,78,207,77,220,
    174,99,75,55,252,125,32,15,31,169,36,108,214,115,198,56,
    221,232,185,106,207,230,59,77,114,73,183,167,88,98,28,73,
    53,131,196,78,16,249,78,55,246,15,66,169,166,73,156,179,
    19,132,210,113,248,226,111,186,189,56,81,143,147,36,78,108,
    242,42,111,134,177,91,220,65,62,245,194,56,149,77,122,26,
    63,198,38,241,138,184,119,122,44,145,20,96,109,233,102,95,
    166,94,18,244,20,6,75,75,36,110,146,214,164,48,241,146,
    62,198,101,115,47,238,202,205,29,215,59,8,85,127,115,87,
    118,239,110,110,31,4,161,191,249,208,126,178,217,235,171,189,
    56,218,196,189,32,82,18,93,17,110,142,58,97,3,185,150,
    72,220,97,176,235,4,108,136,179,39,195,158,76,230,104,247,
    50,61,74,44,136,89,81,21,166,104,138,57,164,42,248,53,
    197,154,49,35,182,2,50,197,35,243,8,72,86,25,58,20,
    79,1,251,6,36,107,4,140,14,126,4,69,18,225,209,162,
    107,6,95,251,45,249,64,239,118,76,10,183,222,60,98,48,
    33,170,144,243,62,197,55,2,70,68,5,58,85,208,72,65,
    128,105,232,36,125,90,145,157,196,24,40,220,130,244,123,64,
    159,34,70,142,32,195,207,137,9,34,90,0,85,167,114,132,
    187,231,241,129,127,97,8,182,154,164,254,22,227,64,237,5,
    105,124,24,177,183,137,230,164,105,161,103,158,246,63,223,238,
    72,79,165,235,184,241,101,124,208,240,220,40,138,85,195,245,
    253,134,171,84,18,108,31,40,153,54,84,220,184,145,54,41,
    128,246,98,14,165,66,94,191,151,67,135,194,140,208,209,63,
    252,192,83,248,131,49,234,112,20,82,169,16,6,123,177,159,
    226,62,137,216,149,202,38,37,21,57,57,102,69,24,37,14,
    177,210,227,145,239,28,254,126,152,107,194,80,108,86,115,224,
    164,50,220,81,117,198,160,155,166,14,107,66,251,12,55,18,
    252,194,13,15,36,75,79,81,30,42,68,164,214,97,34,128,
    187,72,202,231,182,178,1,81,28,249,125,212,39,240,110,210,
    163,46,50,236,102,25,120,171,8,186,41,92,171,248,127,85,
    156,55,60,43,131,90,53,135,27,85,58,5,28,108,145,197,
    27,161,119,130,85,165,105,112,89,96,27,56,235,174,19,69,
    55,219,107,180,188,69,203,85,90,214,115,51,223,180,173,115,
    195,182,222,35,249,6,27,200,166,80,0,204,220,20,255,84,
    230,92,26,100,14,86,187,22,101,128,65,121,50,200,0,139,
    42,99,242,128,86,100,229,220,50,33,253,130,234,48,101,10,
    11,163,164,64,120,19,53,0,61,59,198,94,32,131,167,115,
    188,218,4,194,50,18,119,75,72,180,41,38,12,67,251,82,
    94,227,28,226,208,0,180,175,144,168,202,24,207,54,104,185,
    54,41,247,14,160,180,59,2,165,143,233,81,11,25,148,230,
    24,66,117,252,46,24,158,153,249,188,104,118,203,67,16,34,
    252,88,99,240,243,14,81,230,168,149,19,134,78,102,219,175,
    75,208,33,117,140,178,9,91,72,244,47,144,230,101,208,92,
    192,78,253,44,186,128,205,215,224,230,251,1,55,95,110,224,
    60,146,233,66,107,114,173,213,68,133,92,176,99,194,249,172,
    169,166,53,92,123,73,252,178,223,136,119,26,138,109,164,186,
    120,255,70,186,113,35,253,24,43,94,227,1,215,26,93,243,
    116,85,75,100,143,170,18,221,250,248,165,39,185,147,241,47,
    199,209,69,200,225,130,228,100,29,18,241,179,74,14,52,114,
    207,114,57,78,85,66,85,120,34,190,173,23,190,37,85,63,
    35,225,117,118,172,41,46,32,86,234,130,53,112,116,181,229,
    225,136,175,226,247,19,114,54,89,41,129,198,114,187,165,245,
    99,213,201,8,251,253,83,120,120,195,138,219,155,40,233,119,
    57,14,170,3,28,208,215,204,161,252,119,224,49,81,192,223,
    128,34,141,1,205,160,92,32,159,66,187,76,236,127,0,198,
    252,152,94,205,245,162,69,253,153,57,176,140,164,247,152,85,
    183,238,207,224,219,82,194,228,13,214,204,6,193,114,131,181,
    138,90,195,16,121,173,38,106,157,46,74,20,140,61,55,37,
    54,93,105,6,57,56,40,223,197,248,134,149,246,77,227,101,
    90,139,117,72,131,175,7,104,161,22,117,69,44,27,37,12,
    220,161,229,195,34,252,34,223,123,131,202,172,195,217,253,211,
    209,21,251,43,122,162,197,58,206,79,241,28,83,22,82,0,
    186,146,3,250,195,2,208,146,155,203,43,30,254,105,53,40,
    162,39,134,192,19,37,206,78,116,128,179,64,86,160,93,37,
    232,243,100,43,178,204,16,121,41,162,194,117,170,115,177,23,
    182,180,127,138,160,234,120,209,242,114,34,41,78,33,187,31,
    186,221,109,223,125,112,68,162,73,190,151,231,138,145,43,187,
    80,86,150,112,46,206,210,151,127,222,205,149,126,49,145,244,
    254,153,214,70,43,203,96,246,99,143,115,250,139,61,217,232,
    202,238,54,158,225,246,130,94,99,39,116,119,217,243,102,102,
    204,231,185,49,138,67,55,220,235,211,91,180,198,13,47,142,
    176,174,30,120,42,78,26,190,196,115,141,244,27,183,27,92,
    148,27,65,218,112,183,241,170,235,41,141,219,211,169,198,67,
    163,155,236,166,60,31,238,31,18,57,177,200,57,120,74,13,
    112,50,254,51,20,61,79,159,158,138,26,203,51,175,78,3,
    108,79,120,98,81,125,93,100,168,239,219,27,180,188,11,147,
    44,197,31,161,164,63,145,72,114,71,85,92,49,106,6,159,
    165,202,124,79,233,206,116,52,223,254,241,58,249,166,223,221,
    100,89,87,37,78,57,69,199,98,90,107,84,144,219,245,124,
    115,134,215,89,222,156,203,55,207,241,58,207,155,11,249,59,
    163,69,222,92,130,246,50,189,148,160,157,21,202,228,169,255,
    53,147,57,51,38,150,19,127,125,163,9,108,223,251,191,232,
    106,255,28,178,134,124,86,242,138,178,33,115,58,121,59,34,
    159,229,203,86,240,107,128,75,99,209,229,120,137,116,149,212,
    81,88,155,144,101,156,243,250,65,223,14,82,114,116,12,125,
    88,24,113,194,179,71,127,133,131,163,207,45,28,28,241,44,
    186,140,243,168,197,243,232,125,154,71,143,216,98,199,208,35,
    233,0,101,149,194,112,58,226,69,242,208,25,53,94,79,157,
    164,156,219,235,201,200,183,111,65,121,144,228,203,19,137,52,
    85,153,239,160,52,9,152,98,5,39,199,209,28,162,170,89,
    50,138,163,84,41,178,102,82,241,98,36,126,159,35,177,201,
    85,179,40,157,246,125,90,184,88,22,117,210,254,101,225,237,
    181,241,48,11,252,68,242,89,228,135,25,112,38,225,183,10,
    252,139,103,149,49,172,88,177,61,228,255,128,197,253,24,15,
    73,228,119,100,217,198,143,220,112,231,53,132,222,25,22,122,
    135,3,202,25,230,203,80,42,57,6,107,138,60,150,157,141,
    125,137,141,50,238,227,65,134,15,10,248,59,116,156,201,245,
    154,95,0,247,8,72,169,193,96,175,17,85,236,54,171,120,
    166,93,53,106,213,154,224,38,61,244,74,87,235,65,231,5,
    61,20,247,83,155,139,210,124,17,231,204,124,221,58,9,18,
    124,68,219,114,187,250,13,18,191,45,177,223,134,236,220,107,
    223,44,240,194,117,104,51,191,193,193,204,228,1,130,231,5,
    251,167,180,143,192,135,238,221,141,220,170,13,109,213,39,110,
    26,120,79,131,248,83,249,34,240,36,191,254,236,222,85,87,
    198,242,14,216,46,142,189,222,234,167,74,118,71,110,150,209,
    65,215,121,34,187,113,210,127,18,251,146,161,90,190,254,208,
    247,19,219,141,118,165,243,66,210,16,164,174,13,51,100,19,
    144,150,145,115,141,183,231,52,239,25,134,224,69,253,246,144,
    33,57,122,253,81,24,123,251,210,207,120,222,58,155,231,211,
    184,235,226,254,248,167,180,130,252,41,139,67,215,253,132,238,
    90,29,218,77,101,18,184,97,240,141,100,200,143,120,240,233,
    97,210,194,163,197,168,255,178,224,196,135,50,33,255,134,234,
    250,16,195,224,18,11,56,203,205,195,114,244,211,206,176,237,
    96,59,139,246,120,15,98,119,77,186,110,152,249,103,88,227,
    194,51,185,42,87,127,72,136,54,138,50,35,191,174,86,40,
    77,198,225,151,6,208,211,91,60,19,142,180,105,174,24,88,
    12,3,180,33,97,113,167,239,202,58,25,229,248,89,101,171,
    44,97,98,85,70,31,153,244,43,153,7,244,130,47,221,198,
    133,94,194,214,230,107,88,113,168,199,153,162,142,93,206,50,
    103,23,106,214,236,76,205,170,77,153,252,94,109,14,79,193,
    117,171,54,51,43,94,247,223,58,214,173,186,177,190,84,19,
    255,5,250,198,138,110,
};

EmbeddedPython embedded_m5_internal_param_RealViewCtrl(
    "m5/internal/param_RealViewCtrl.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_RealViewCtrl.py",
    "m5.internal.param_RealViewCtrl",
    data_m5_internal_param_RealViewCtrl,
    2454,
    7424);

} // anonymous namespace