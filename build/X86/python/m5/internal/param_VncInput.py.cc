#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_VncInput[] = {
    120,156,181,88,221,114,219,198,21,62,11,128,148,72,73,22,
    101,89,146,109,169,17,155,142,27,214,211,74,109,26,199,153,
    137,162,214,237,164,51,201,133,146,130,105,237,40,153,162,16,
    176,148,64,145,0,7,128,108,211,35,93,180,242,180,125,129,
    62,66,47,250,54,125,163,246,124,103,1,144,146,236,105,102,
    34,201,196,122,177,216,61,123,126,190,243,179,27,80,241,87,
    227,231,215,109,162,172,167,136,66,254,41,26,16,13,21,237,
    43,82,90,81,120,135,142,107,148,126,64,97,141,94,19,237,
    91,164,45,58,231,142,77,223,88,20,207,203,154,58,13,108,
    25,81,52,110,146,118,104,191,70,79,227,37,114,116,157,142,
    155,148,254,153,148,82,177,162,103,225,12,133,179,244,154,169,
    115,167,33,4,103,9,131,77,25,108,80,56,39,131,77,10,
    231,165,51,71,227,22,233,121,218,95,192,180,253,91,76,246,
    33,147,93,20,178,255,1,217,144,191,172,80,120,11,211,153,
    175,175,49,211,193,76,217,111,81,168,180,74,46,151,104,255,
    118,217,95,158,234,223,145,62,239,116,155,250,43,212,95,165,
    254,26,177,66,194,165,138,234,93,210,54,245,239,209,254,61,
    210,252,187,75,231,172,159,240,246,212,138,251,178,98,185,90,
    177,46,43,54,104,127,131,52,255,214,205,138,58,117,59,171,
    172,243,232,191,252,215,97,157,83,62,207,205,115,157,102,81,
    18,123,81,220,75,34,11,223,235,104,96,161,0,205,76,97,
    170,223,194,84,255,38,177,83,104,21,166,58,35,38,172,32,
    203,192,162,51,233,156,89,52,238,208,169,162,190,67,161,77,
    167,188,77,13,12,28,42,58,183,232,91,27,19,206,184,117,
    88,161,239,144,147,27,59,245,69,161,134,210,12,157,213,232,
    180,70,221,103,167,22,6,142,27,148,254,139,94,109,8,209,
    89,33,106,209,41,183,14,157,59,116,86,167,167,60,137,135,
    250,13,136,175,158,157,178,164,60,210,237,56,204,237,222,148,
    184,16,37,140,210,216,31,234,124,145,251,222,200,79,253,161,
    247,199,56,248,44,30,157,228,157,102,57,41,201,182,70,126,
    126,228,202,42,27,234,24,142,114,161,150,196,58,159,227,78,
    47,138,67,111,152,132,39,3,157,207,130,148,215,139,6,218,
    243,228,227,103,195,81,146,230,159,166,105,146,186,208,168,12,
    14,18,191,90,1,125,6,131,36,211,29,236,38,219,184,32,
    159,99,118,111,36,20,193,128,112,138,197,161,206,130,52,26,
    229,108,40,67,17,179,65,173,3,19,73,147,61,225,102,251,
    40,25,234,237,158,31,156,12,242,241,246,161,30,62,218,62,
    56,137,6,225,246,179,143,62,220,30,141,243,163,36,222,230,
    177,40,206,53,171,97,176,125,81,1,91,60,227,54,72,189,
    136,14,189,72,132,240,142,244,96,164,211,5,140,222,199,54,
    170,165,230,85,93,217,170,163,22,184,87,227,199,86,27,214,
    156,218,139,32,70,0,209,0,32,103,26,50,176,163,162,99,
    139,210,13,0,162,207,63,5,11,50,44,186,248,102,201,183,
    223,67,126,51,218,183,97,102,51,120,42,32,98,52,241,204,
    29,216,53,38,65,66,141,250,117,50,8,97,96,25,200,164,
    99,180,60,29,100,44,38,238,80,246,79,98,125,50,54,78,
    169,192,205,185,77,42,110,81,222,132,187,242,232,42,111,248,
    87,129,94,183,3,246,247,4,3,249,81,148,37,47,98,209,
    52,250,226,44,93,214,204,151,227,47,14,250,58,200,179,77,
    30,248,58,57,105,7,126,28,39,121,219,15,195,182,159,231,
    105,116,112,146,235,172,157,39,237,7,89,7,198,115,151,74,
    24,85,244,198,163,18,54,48,49,195,198,188,132,81,144,243,
    203,178,188,136,21,50,157,51,4,142,146,48,227,113,144,56,
    212,185,11,38,115,40,57,17,70,4,33,30,166,98,123,158,
    119,139,223,159,148,156,8,12,59,245,18,52,153,30,244,242,
    166,224,207,207,50,79,56,193,184,64,13,132,159,251,131,19,
    45,212,51,166,199,12,161,107,120,184,118,176,221,5,227,165,
    156,194,124,156,196,225,152,121,137,130,247,176,205,93,129,220,
    188,128,110,133,1,55,195,109,157,255,175,171,85,43,112,10,
    152,213,75,168,33,186,229,36,134,86,133,173,25,118,231,28,
    73,58,150,132,2,225,95,188,237,93,244,176,216,221,64,243,
    3,52,239,160,217,44,69,188,78,57,23,46,203,249,24,180,
    45,17,78,196,128,226,237,82,140,240,130,199,220,155,120,12,
    71,183,46,144,111,193,63,38,200,119,16,9,211,93,180,60,
    85,124,202,166,236,43,196,93,120,136,16,131,51,48,172,209,
    155,128,93,148,226,182,32,236,108,137,83,23,224,155,70,224,
    225,20,2,93,216,67,224,231,222,43,227,154,135,25,6,120,
    238,58,72,213,222,160,213,54,154,31,222,132,106,39,16,58,
    188,2,161,143,177,77,171,128,208,130,64,167,201,79,203,10,
    236,66,223,85,98,91,190,4,29,224,198,121,3,110,126,140,
    158,125,85,194,27,132,76,33,215,239,166,32,3,86,172,105,
    246,247,184,51,94,3,215,211,96,89,227,140,252,52,94,227,
    36,107,73,146,253,185,36,89,73,212,82,162,152,192,106,75,
    108,53,157,26,196,239,217,180,90,36,207,172,193,237,40,77,
    94,142,219,73,175,157,139,124,136,131,59,15,178,173,7,217,
    199,28,225,218,187,18,91,76,140,51,81,44,213,35,68,33,
    44,253,244,101,160,37,107,201,155,231,153,160,227,73,0,242,
    138,108,200,184,89,129,242,172,82,171,18,126,179,60,69,212,
    189,118,189,54,43,189,130,205,207,65,184,41,74,181,213,26,
    99,164,169,100,119,207,68,86,41,128,228,43,63,191,129,162,
    33,161,38,148,168,110,215,240,38,108,67,0,247,167,23,112,
    112,141,76,187,219,76,229,15,165,253,235,19,251,227,177,75,
    248,254,157,164,12,84,244,55,130,133,217,144,5,124,43,180,
    195,164,203,152,254,39,18,156,191,33,39,75,124,232,34,15,
    203,12,14,27,217,99,153,106,82,244,231,244,143,41,39,41,
    19,169,93,20,122,211,137,212,169,98,139,64,227,59,37,75,
    231,98,16,130,33,142,252,12,211,76,100,153,248,221,36,84,
    87,37,26,71,214,235,196,201,172,33,233,97,247,111,39,40,
    65,42,90,87,203,214,148,237,127,129,230,253,202,236,170,28,
    187,38,70,54,233,237,57,210,51,145,249,27,236,230,8,127,
    139,51,194,121,73,160,2,112,173,4,240,251,21,128,181,36,
    144,215,82,208,163,181,96,197,115,75,241,105,138,235,34,28,
    94,28,210,53,218,175,3,234,82,177,170,194,19,84,25,118,
    16,164,46,100,39,145,126,207,232,165,50,164,177,17,154,151,
    215,238,206,16,118,103,224,15,15,66,127,183,15,178,160,29,
    148,190,97,149,140,182,166,25,5,174,213,219,120,149,215,71,
    37,195,207,175,221,149,63,36,97,195,48,42,192,13,147,64,
    252,247,171,35,221,30,234,225,1,159,199,142,162,81,187,55,
    240,15,69,227,118,33,200,23,165,32,185,152,236,114,30,207,
    30,162,77,218,65,18,115,236,60,9,242,36,109,135,154,207,
    41,58,108,255,172,45,129,183,29,101,109,255,128,191,250,65,
    110,112,122,209,173,164,16,244,211,195,76,106,190,227,23,232,
    222,136,197,60,62,109,70,92,233,14,168,202,105,230,36,84,
    197,81,169,97,13,236,57,253,240,9,36,31,155,96,130,156,
    238,110,161,249,9,221,84,184,253,128,204,1,56,131,26,234,
    106,221,106,88,194,79,57,231,75,172,200,174,250,214,193,119,
    241,45,115,71,81,120,88,29,51,245,12,142,181,104,27,8,
    184,184,130,168,21,87,16,24,52,87,16,117,25,185,5,95,
    156,249,190,190,40,248,190,17,100,103,215,234,130,238,227,27,
    231,211,253,136,138,244,249,54,247,83,211,66,44,24,247,235,
    171,178,210,158,150,64,14,230,43,87,112,226,5,169,246,115,
    109,52,191,113,3,18,137,183,154,77,158,79,28,234,106,145,
    248,164,98,254,92,42,132,241,29,49,136,57,77,136,65,212,
    211,248,62,87,139,142,84,139,59,168,22,79,69,82,207,50,
    5,227,4,85,181,74,96,92,24,196,250,133,119,81,104,83,
    15,130,49,127,52,210,113,232,62,164,233,18,79,62,95,187,
    101,17,27,94,209,84,174,182,213,29,174,233,174,250,10,226,
    220,148,48,98,153,90,229,29,55,97,35,65,221,95,74,212,
    117,112,251,52,9,118,238,14,26,9,111,85,100,115,127,85,
    105,184,125,21,82,189,20,215,6,129,63,202,79,82,141,19,
    194,255,159,196,213,131,28,42,46,140,138,202,4,179,161,30,
    232,92,95,178,98,14,158,138,115,96,168,57,113,36,99,46,
    222,165,64,230,247,129,231,221,76,252,253,132,169,164,32,135,
    160,203,241,87,213,57,2,175,88,141,122,67,73,178,186,116,
    77,105,246,199,81,204,20,130,227,204,21,215,94,172,52,40,
    247,105,101,26,129,178,229,56,178,199,138,48,151,116,184,13,
    112,127,68,197,249,206,125,175,178,4,78,185,82,125,155,243,
    11,227,92,18,169,228,77,247,151,24,71,111,248,104,171,148,
    102,203,72,211,141,134,230,146,72,110,244,134,143,242,165,75,
    211,194,212,231,254,202,165,209,76,167,145,63,136,94,153,203,
    161,114,88,238,42,47,211,5,63,213,155,100,172,11,161,71,
    108,150,234,195,40,99,26,66,160,154,92,56,232,39,37,247,
    151,80,51,189,240,70,204,107,106,54,115,246,219,197,13,66,
    182,203,13,110,120,26,139,13,54,53,220,214,230,131,216,130,
    114,236,249,86,195,153,159,107,56,141,25,91,14,239,11,92,
    122,55,157,198,220,188,194,191,77,6,68,211,218,108,53,212,
    255,0,19,244,39,102,
};

EmbeddedPython embedded_m5_internal_param_VncInput(
    "m5/internal/param_VncInput.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_VncInput.py",
    "m5.internal.param_VncInput",
    data_m5_internal_param_VncInput,
    2182,
    6229);

} // anonymous namespace
