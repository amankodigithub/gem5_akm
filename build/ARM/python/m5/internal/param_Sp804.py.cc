#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Sp804[] = {
    120,156,181,88,109,115,219,198,17,222,3,64,74,164,36,235,
    93,242,139,108,209,78,29,51,110,34,89,174,93,103,38,174,
    91,199,73,59,201,140,21,23,76,199,142,146,41,10,1,39,
    9,20,8,112,0,200,50,51,210,180,19,121,218,116,166,31,
    219,79,253,220,15,253,3,253,29,249,71,233,238,30,0,158,
    40,42,147,78,105,139,60,47,239,22,123,251,242,220,238,30,
    60,200,255,85,240,251,171,6,64,26,25,0,62,126,4,132,
    0,29,1,91,2,132,20,224,47,192,126,5,146,123,224,87,
    224,53,192,150,1,210,128,19,36,76,248,210,128,104,146,159,
    169,66,104,242,140,128,94,29,164,5,91,21,120,30,205,130,
    37,171,176,95,135,228,15,32,132,136,4,188,240,199,192,31,
    135,215,40,29,137,26,11,28,7,154,172,243,100,13,252,9,
    158,172,131,63,201,196,4,244,102,64,78,194,214,20,177,109,
    93,64,177,183,81,236,52,139,253,142,196,250,184,178,8,254,
    5,98,71,189,190,32,78,139,56,121,191,105,150,50,83,104,
    57,11,91,115,5,61,175,209,11,26,189,168,209,75,26,189,
    172,209,23,53,250,146,70,95,214,232,43,26,189,162,209,87,
    53,250,154,70,175,106,116,67,163,175,107,244,13,141,126,75,
    163,127,162,209,55,53,250,109,141,190,165,209,77,141,126,71,
    163,111,51,141,30,159,131,246,79,161,253,46,180,223,131,29,
    4,193,108,233,221,53,144,38,180,215,97,107,29,36,126,214,
    224,4,113,226,207,105,79,220,225,39,230,203,39,54,248,137,
    187,176,117,23,36,126,54,212,19,85,104,53,151,16,123,193,
    247,248,175,41,144,202,38,113,120,41,147,52,136,35,39,136,
    118,226,192,160,245,42,13,132,84,143,134,177,28,178,79,8,
    178,255,6,198,171,111,228,144,61,6,20,44,200,150,208,128,
    99,38,142,13,232,53,225,72,64,219,2,223,132,35,220,166,
    66,10,236,10,56,49,224,43,147,24,142,113,180,16,88,215,
    192,202,20,94,219,12,44,37,105,12,142,43,112,84,129,214,
    139,35,131,38,246,107,144,252,11,190,94,97,161,227,44,212,
    128,35,28,45,56,177,224,184,10,207,145,9,167,218,53,50,
    95,188,56,66,75,113,166,213,180,80,219,77,205,92,50,197,
    15,146,200,237,72,54,221,233,186,137,219,113,90,221,247,239,
    220,107,214,11,142,56,93,235,186,217,158,205,143,152,228,139,
    78,55,99,81,113,36,179,9,36,118,130,200,119,58,177,127,
    16,202,108,156,228,56,59,65,40,29,135,23,63,233,116,227,
    36,251,56,73,226,196,38,119,242,100,24,187,229,19,228,76,
    47,140,83,217,164,221,120,27,155,196,103,196,189,211,101,137,
    164,0,171,73,15,251,50,245,146,160,155,97,148,148,68,226,
    38,105,77,138,15,15,233,35,28,214,247,226,142,92,223,113,
    189,131,48,235,173,239,202,206,253,245,237,131,32,244,215,31,
    219,79,215,187,189,108,47,142,214,113,46,136,50,137,62,8,
    215,53,235,215,112,121,142,228,28,6,187,78,192,22,56,123,
    50,236,202,100,138,102,47,211,30,98,70,76,138,170,48,69,
    83,76,33,85,193,175,41,86,140,9,177,25,144,13,30,217,
    69,208,177,116,176,80,4,5,236,27,144,172,16,20,218,248,
    17,20,59,4,68,139,214,12,94,251,45,25,175,102,219,38,
    5,88,77,30,49,124,16,71,200,249,144,34,26,1,99,160,
    2,237,42,40,108,32,164,20,88,146,30,141,200,78,98,12,
    20,110,65,250,15,64,103,34,42,142,32,71,204,137,9,34,
    154,129,172,78,9,11,103,151,112,195,111,24,116,173,38,169,
    191,201,0,200,246,130,52,62,140,216,205,68,51,86,90,232,
    153,103,189,207,182,219,210,203,210,85,156,248,34,62,104,120,
    110,20,197,89,195,245,253,134,155,101,73,176,125,144,201,180,
    145,197,141,155,105,147,34,103,207,22,24,42,229,245,186,5,
    102,40,190,136,25,245,195,15,188,12,127,204,243,15,142,66,
    42,51,140,255,94,236,167,56,79,34,118,101,102,147,146,25,
    57,57,102,69,24,30,14,177,210,246,200,119,1,127,63,46,
    52,97,12,54,171,5,98,82,25,238,100,117,6,159,155,166,
    14,107,66,243,140,51,18,252,210,13,15,36,75,79,81,30,
    42,68,164,210,97,180,72,187,72,90,23,70,178,230,81,28,
    249,61,84,36,240,110,209,30,23,25,111,147,140,184,69,68,
    219,24,142,85,252,191,42,150,12,207,202,49,86,45,112,70,
    73,45,3,142,178,200,3,141,152,59,193,4,210,52,56,3,
    176,242,124,206,110,16,69,15,219,43,52,92,165,225,26,13,
    171,133,125,35,51,114,106,208,200,7,36,216,96,203,216,6,
    114,185,89,216,224,159,58,43,151,250,103,5,51,90,139,48,
    111,208,201,232,99,222,162,236,151,60,162,17,89,249,52,153,
    144,126,78,185,150,206,6,11,163,99,128,128,38,170,15,115,
    246,136,61,67,150,142,23,8,181,9,118,58,246,118,53,236,
    217,20,12,6,158,125,169,72,103,14,113,40,200,217,87,72,
    84,101,136,75,27,52,92,31,185,95,251,224,217,61,3,158,
    15,104,143,153,28,60,83,12,154,58,126,103,12,207,204,157,
    93,86,178,249,1,208,16,98,172,33,136,121,155,40,243,172,
    121,111,10,44,185,81,191,214,192,66,122,24,186,238,155,72,
    244,150,73,101,29,38,203,88,127,159,71,203,88,82,13,46,
    169,119,184,164,114,89,230,198,76,37,83,147,243,169,34,42,
    100,251,142,9,75,121,169,76,107,56,118,147,248,85,175,17,
    239,52,50,54,142,114,223,195,155,233,218,205,244,3,204,106,
    141,71,156,79,84,94,83,153,43,145,93,202,60,244,232,199,
    175,60,201,101,138,127,57,142,74,52,14,39,29,39,47,127,
    136,152,69,242,156,81,184,148,83,110,154,37,148,105,71,235,
    212,122,233,84,210,241,83,146,90,103,143,154,98,25,209,81,
    23,188,181,163,82,41,247,58,188,138,223,15,201,203,100,158,
    4,234,202,237,150,82,140,117,38,237,237,119,79,33,96,84,
    26,219,235,40,226,119,69,228,171,253,200,211,215,44,80,251,
    23,224,118,79,192,159,129,98,139,33,204,81,91,130,156,130,
    57,79,236,191,7,134,247,144,10,204,57,161,69,85,151,57,
    48,85,164,15,152,85,21,228,79,225,91,237,108,20,101,211,
    204,27,58,189,108,90,101,62,97,80,252,168,210,104,157,78,
    60,20,133,61,55,37,54,149,77,250,199,173,159,155,203,110,
    12,179,233,200,16,50,174,228,57,180,245,87,125,124,80,225,
    185,34,230,13,45,234,27,52,220,45,3,46,138,185,81,104,
    177,10,231,151,67,71,229,225,47,105,43,139,149,155,30,227,
    98,205,79,151,160,173,20,160,189,91,130,86,114,173,120,205,
    253,58,141,6,5,239,196,16,120,105,196,230,135,238,104,22,
    200,10,108,85,9,222,220,147,138,28,253,162,200,51,148,149,
    78,21,34,182,123,83,121,164,140,159,10,13,13,175,70,123,
    126,41,58,15,67,183,179,237,187,143,254,68,50,73,176,87,
    156,7,163,208,114,70,215,146,176,44,206,83,148,127,222,47,
    180,125,57,218,179,251,115,20,81,106,201,72,245,99,143,15,
    236,231,123,178,209,145,157,109,188,104,237,5,221,198,78,232,
    238,178,175,205,220,138,207,10,43,50,14,214,96,177,78,111,
    211,24,55,188,56,194,52,121,224,101,113,210,240,37,222,65,
    164,223,120,175,193,57,182,17,164,13,119,27,87,93,47,83,
    216,60,125,142,184,207,115,147,221,148,91,186,253,67,34,71,
    31,43,7,239,144,1,118,177,223,64,89,187,212,21,167,76,
    153,220,159,42,168,99,153,193,219,69,214,83,169,131,10,183,
    189,70,195,59,240,70,50,235,61,20,241,71,146,69,14,168,
    138,43,70,205,224,78,134,25,158,17,111,122,246,48,253,231,
    199,28,38,245,238,37,63,82,85,226,148,99,116,77,165,177,
    70,137,117,171,94,76,78,240,56,201,147,83,197,228,5,30,
    167,121,114,166,152,156,229,113,142,39,231,139,201,5,30,23,
    121,114,169,120,59,180,204,147,23,97,235,18,189,78,160,153,
    203,116,160,199,254,223,3,205,231,100,244,39,228,175,35,61,
    199,246,131,55,171,164,253,62,228,69,247,188,51,44,116,11,
    166,212,25,110,139,162,39,215,213,231,155,251,220,105,200,57,
    94,34,221,76,42,135,175,140,218,22,62,236,106,135,191,245,
    143,228,217,118,242,113,169,246,9,119,20,189,5,142,131,186,
    113,112,28,196,243,232,50,246,149,22,247,149,15,169,175,60,
    98,27,29,67,181,150,125,36,85,74,83,167,113,136,228,161,
    163,153,171,218,70,210,202,237,118,101,228,219,183,65,239,4,
    121,121,180,209,164,188,242,119,208,10,187,41,22,176,245,59,
    123,50,40,65,106,102,112,64,42,229,89,24,121,104,24,102,
    255,44,96,214,164,108,221,207,146,246,67,26,56,47,150,41,
    209,254,101,233,216,165,65,12,133,177,183,127,135,46,14,231,
    45,97,91,161,176,192,63,135,115,109,156,47,96,227,180,128,
    13,190,41,234,92,187,216,167,208,211,195,230,233,81,126,123,
    17,120,124,117,211,215,209,57,78,116,208,81,186,159,187,72,
    18,168,188,20,19,231,113,110,252,144,152,141,65,49,27,140,
    13,62,144,190,12,101,38,117,160,102,228,252,252,46,236,75,
    172,171,113,15,175,49,124,91,192,223,161,227,188,129,10,245,
    11,20,241,45,228,175,51,176,66,137,42,214,168,69,145,255,
    25,181,106,77,112,65,31,120,71,171,148,248,25,20,221,113,
    47,181,57,115,77,151,120,225,247,137,69,181,37,104,241,237,
    108,211,237,168,23,68,252,78,196,126,11,242,187,174,125,171,
    196,29,93,247,249,74,162,174,115,120,152,185,217,224,222,194,
    230,29,137,163,115,127,173,48,105,77,153,244,161,155,202,223,
    96,184,13,94,205,46,15,101,122,22,186,217,78,156,116,178,
    171,67,151,63,137,178,228,9,94,36,147,56,228,144,158,229,
    104,245,210,76,118,178,43,3,139,18,99,235,60,149,157,56,
    233,61,141,125,153,173,12,172,63,246,253,196,118,163,93,233,
    188,148,212,74,101,215,7,25,242,62,74,201,40,184,26,67,
    117,56,205,123,70,23,197,132,139,234,181,33,55,250,103,215,
    159,208,161,146,126,206,51,220,29,204,243,81,220,113,113,126,
    248,46,173,160,216,101,118,96,221,79,232,169,197,129,217,84,
    38,129,27,6,95,203,51,65,100,15,62,59,76,90,120,23,
    57,235,191,60,122,241,161,76,200,191,97,118,99,128,161,191,
    196,2,206,115,243,160,28,181,219,57,182,29,108,231,209,30,
    238,65,44,206,73,199,13,115,255,12,106,92,122,166,80,229,
    218,15,9,81,70,13,215,227,89,16,127,36,95,6,158,60,
    71,143,199,157,109,183,207,51,28,50,120,56,2,175,207,148,
    103,36,230,224,252,57,76,18,245,21,167,102,184,157,237,55,
    19,156,168,18,185,27,160,143,18,150,114,138,59,47,190,148,
    96,206,164,71,253,201,209,39,53,117,133,83,47,126,30,81,
    187,157,98,119,7,244,86,183,54,93,195,4,71,245,216,20,
    117,172,200,150,57,57,83,179,38,39,106,86,109,204,228,215,
    118,83,120,1,175,91,181,137,73,241,191,254,173,98,170,172,
    27,171,11,53,241,95,35,7,120,31,
};

EmbeddedPython embedded_m5_internal_param_Sp804(
    "m5/internal/param_Sp804.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_Sp804.py",
    "m5.internal.param_Sp804",
    data_m5_internal_param_Sp804,
    2538,
    7540);

} // anonymous namespace
