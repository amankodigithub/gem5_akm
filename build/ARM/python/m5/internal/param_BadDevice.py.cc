#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BadDevice[] = {
    120,156,181,88,91,115,219,198,21,62,11,128,148,72,221,173,
    155,109,201,22,237,212,49,163,196,82,155,198,117,103,162,170,
    181,115,153,73,102,172,184,96,58,118,148,76,81,8,88,73,
    160,64,128,3,172,36,51,149,250,80,185,109,30,250,214,233,
    79,232,67,255,77,255,81,123,206,89,0,132,40,170,245,76,
    37,153,92,31,46,118,15,206,229,59,151,93,15,178,191,10,
    126,127,213,0,72,55,13,0,31,63,2,66,128,142,128,109,
    1,66,10,240,231,224,160,2,201,71,224,87,224,13,192,182,
    1,210,128,51,36,76,248,214,128,104,156,247,84,33,52,121,
    70,64,175,14,210,130,237,10,188,140,102,192,146,85,56,168,
    67,242,59,16,66,68,2,94,249,35,224,143,194,27,228,142,
    68,141,25,142,2,77,214,121,178,6,254,24,79,214,193,31,
    103,98,12,122,211,32,199,97,123,130,150,109,79,34,219,85,
    100,59,197,108,255,69,108,125,124,50,15,254,36,45,71,185,
    190,161,149,22,173,228,247,77,49,151,233,92,202,25,216,190,
    145,211,179,37,122,174,68,207,151,232,133,18,189,88,162,111,
    150,232,91,37,250,118,137,94,42,209,203,37,250,78,137,190,
    91,162,87,74,116,163,68,223,43,209,247,75,244,59,37,250,
    71,37,250,65,137,126,151,105,180,224,13,104,63,132,118,19,
    218,239,193,46,58,117,166,176,214,42,72,19,218,239,195,246,
    251,32,241,179,10,103,232,119,255,70,105,199,7,188,99,182,
    216,241,136,119,172,193,246,26,72,252,60,210,59,170,208,106,
    46,32,150,130,127,227,95,83,32,165,198,113,56,146,73,26,
    196,145,19,68,187,113,96,208,243,42,13,132,60,143,134,145,
    12,130,159,16,4,255,9,140,63,223,200,32,120,10,200,88,
    144,46,161,1,167,76,156,26,208,107,194,137,128,182,5,190,
    9,39,248,154,10,9,176,39,224,204,128,239,76,90,112,138,
    163,133,64,185,11,150,210,248,107,51,80,52,167,17,56,173,
    192,73,5,90,175,78,12,154,56,168,65,242,15,248,126,153,
    153,142,50,83,3,78,112,180,224,204,130,211,42,188,196,69,
    56,213,174,145,250,226,213,9,106,138,51,173,166,133,210,110,
    149,212,37,85,252,32,137,220,142,84,211,72,59,93,55,113,
    59,206,51,215,255,84,30,5,158,108,214,243,85,113,186,214,
    117,213,190,205,219,76,178,71,167,171,152,93,28,73,53,134,
    196,110,16,249,78,39,246,15,67,169,70,137,151,179,27,132,
    210,113,248,225,23,157,110,156,168,207,146,36,78,108,50,41,
    79,134,177,91,236,32,131,122,97,156,202,38,189,141,95,99,
    19,123,69,171,119,187,204,145,4,96,81,105,179,47,83,47,
    9,186,10,61,165,57,210,106,226,214,36,31,241,144,62,195,
    97,125,63,238,200,245,93,215,59,12,85,111,125,79,118,30,
    175,239,28,6,161,191,254,212,126,190,222,237,169,253,56,90,
    199,185,32,82,18,237,16,174,15,88,96,13,151,220,32,94,
    199,193,158,19,176,22,206,190,12,187,50,153,160,217,219,244,
    30,49,45,198,69,85,152,162,41,38,144,170,224,215,20,203,
    198,152,216,10,72,15,143,116,35,8,89,101,208,144,39,5,
    28,24,144,44,19,36,218,248,17,228,67,4,70,139,158,25,
    252,236,215,100,0,61,219,54,201,209,122,242,132,97,132,120,
    194,149,27,228,217,8,24,11,21,104,87,65,99,4,161,165,
    65,147,244,104,196,229,196,198,64,230,22,164,127,7,52,40,
    162,227,4,50,228,156,153,32,162,105,80,117,74,68,56,187,
    128,47,252,35,131,175,213,36,241,183,24,4,106,63,72,227,
    227,136,77,77,52,135,75,11,45,243,162,247,213,78,91,122,
    42,93,193,137,111,226,195,134,231,70,81,172,26,174,239,55,
    92,165,146,96,231,80,201,180,161,226,198,131,180,73,222,179,
    103,114,28,21,252,122,221,28,55,228,99,196,141,254,225,7,
    158,194,31,179,252,131,189,144,74,133,24,216,143,253,20,231,
    137,197,158,84,54,9,169,200,200,49,11,194,16,113,104,41,
    189,30,215,77,226,239,167,185,36,140,195,102,53,71,77,42,
    195,93,85,103,0,186,105,234,176,36,52,207,88,35,198,71,
    110,120,40,153,123,138,252,80,32,34,181,12,87,143,182,155,
    36,121,174,40,75,31,197,145,223,67,97,2,239,33,189,231,
    38,99,110,156,81,55,143,136,27,193,177,138,255,87,197,130,
    225,89,25,206,170,57,214,40,193,41,96,79,139,204,217,136,
    187,51,76,38,77,131,179,1,43,192,241,118,159,40,218,108,
    47,211,112,135,134,187,52,172,228,58,94,169,162,19,131,138,
    62,33,230,6,107,199,122,144,233,205,92,15,255,92,204,220,
    234,199,12,102,184,22,97,223,160,8,233,99,223,162,108,152,
    108,210,136,75,57,170,76,72,191,166,220,75,49,194,204,40,
    28,16,216,68,245,225,206,86,177,41,27,54,71,115,164,218,
    4,191,50,6,247,74,24,180,201,33,12,64,251,86,158,218,
    28,90,161,161,103,47,17,171,202,16,179,54,104,184,119,45,
    182,237,131,104,239,2,136,62,166,247,76,103,32,154,96,240,
    212,241,59,109,120,102,102,240,162,186,205,14,128,135,144,99,
    13,65,206,187,68,153,23,85,188,78,208,100,138,125,94,2,
    13,201,98,148,229,223,66,162,183,72,98,151,225,178,136,117,
    249,101,180,136,165,214,224,82,251,99,46,181,92,174,185,1,
    211,201,213,228,252,170,137,10,233,191,107,194,66,86,66,211,
    26,142,221,36,126,221,107,196,187,13,197,10,82,46,220,120,
    144,174,61,72,63,198,44,215,216,228,252,162,243,156,206,100,
    137,236,82,38,162,173,159,189,246,36,151,46,254,229,56,58,
    241,56,156,132,156,172,36,34,114,230,201,122,70,110,86,78,
    193,169,74,40,243,94,189,97,235,133,97,73,206,47,137,115,
    157,173,106,138,69,68,73,93,240,235,29,157,94,185,15,226,
    167,248,125,70,150,38,21,37,80,7,110,183,180,112,44,55,
    105,96,127,112,14,9,87,41,181,189,142,108,126,147,35,160,
    218,71,0,125,205,28,193,127,1,110,7,5,252,25,200,199,
    232,202,12,193,5,224,201,169,179,180,252,183,192,80,31,82,
    153,57,71,180,168,26,243,10,76,29,233,19,94,170,11,245,
    151,240,67,41,78,242,114,106,102,13,95,185,156,90,69,126,
    97,112,188,85,201,180,206,39,34,242,196,190,155,210,50,157,
    93,250,161,215,207,215,69,167,134,217,245,74,145,50,170,121,
    58,244,250,239,250,56,161,130,180,36,102,141,146,247,127,66,
    195,135,133,227,69,62,119,85,146,172,192,229,165,210,209,249,
    249,91,122,157,197,2,78,141,112,180,21,28,10,16,87,114,
    16,127,88,128,88,114,29,121,195,189,61,141,6,57,242,204,
    16,120,96,196,6,137,206,103,22,200,10,108,87,9,238,220,
    187,138,44,26,68,158,123,40,83,157,43,82,172,255,150,182,
    76,225,75,237,38,26,94,95,125,76,147,167,54,66,183,179,
    227,187,155,39,196,151,152,123,121,124,24,185,164,211,101,73,
    9,219,226,50,97,249,231,227,92,226,163,171,143,231,159,105,
    81,180,164,140,94,63,246,56,136,191,222,151,141,142,236,236,
    224,225,108,63,232,54,118,67,119,143,109,110,102,154,124,149,
    107,162,216,105,131,5,61,93,165,49,110,120,113,132,41,244,
    208,83,113,210,240,37,158,89,164,223,120,212,224,252,219,8,
    210,134,187,131,79,93,79,105,172,158,143,45,238,9,221,100,
    47,229,246,239,224,152,200,235,241,153,131,103,207,0,187,222,
    63,64,81,219,244,177,168,72,167,220,207,106,232,99,25,194,
    211,136,234,233,148,66,197,221,94,163,225,61,184,182,172,251,
    17,178,249,61,241,35,67,84,197,146,81,51,212,84,57,180,
    94,208,158,244,98,128,237,188,77,128,233,187,152,44,204,170,
    180,82,142,208,49,151,198,26,37,94,186,106,169,100,87,45,
    52,169,175,90,170,60,51,73,1,57,242,255,6,36,99,252,
    122,208,253,167,43,141,67,251,201,245,11,106,255,28,178,66,
    122,89,12,138,178,22,19,58,6,219,34,239,187,203,42,240,
    73,125,225,34,84,28,47,145,174,146,218,248,203,215,161,19,
    7,173,126,203,15,253,176,186,216,50,62,45,196,63,227,110,
    161,55,199,62,209,167,11,246,137,120,25,221,198,222,209,226,
    222,113,131,122,199,19,214,213,49,116,251,216,71,86,165,80,
    153,172,23,201,99,103,64,109,221,30,146,100,110,183,43,35,
    223,94,133,114,199,199,143,175,222,187,148,35,254,10,165,194,
    109,138,57,108,241,46,70,12,37,188,146,58,236,156,74,17,
    35,215,226,38,134,222,223,114,232,53,41,171,244,179,158,189,
    65,3,231,185,34,197,217,191,44,140,124,119,8,174,124,254,
    193,55,10,120,96,248,95,75,176,141,224,70,184,63,197,198,
    98,196,250,50,148,74,14,122,80,95,155,233,76,236,75,44,
    30,113,15,251,120,110,149,241,119,232,56,215,148,130,127,1,
    156,61,33,165,66,128,41,88,84,49,9,207,27,181,106,77,
    112,197,26,184,184,212,2,80,183,172,91,194,94,106,115,104,
    79,21,198,227,11,182,188,148,144,157,185,89,218,66,19,232,
    91,59,186,28,176,223,129,236,176,103,63,44,156,64,103,94,
    238,195,245,89,6,81,206,213,148,139,167,253,83,154,71,40,
    65,231,241,90,174,206,90,174,78,26,120,47,130,88,235,196,
    247,124,157,199,106,105,232,218,254,178,155,67,159,183,122,169,
    146,157,11,155,101,116,216,113,158,203,78,156,244,158,199,190,
    84,203,3,207,159,250,126,98,187,209,158,116,142,36,117,4,
    234,222,224,130,172,29,208,60,242,85,195,245,57,191,246,18,
    69,240,161,190,41,227,222,245,226,243,79,194,216,59,144,126,
    182,230,206,229,107,62,141,59,46,206,15,127,75,43,200,223,
    50,51,240,220,79,104,215,252,192,108,42,147,192,13,131,239,
    165,186,53,204,130,47,142,147,22,182,215,23,237,151,57,39,
    62,150,9,217,55,84,247,7,22,244,31,49,131,203,204,60,
    200,71,191,237,18,221,14,119,50,111,15,183,32,214,168,164,
    227,134,153,125,6,37,46,44,147,139,114,247,191,49,209,74,
    81,100,228,207,213,28,133,201,48,252,78,114,102,41,79,113,
    155,116,190,216,113,158,72,228,94,128,10,36,204,235,252,150,
    172,42,80,112,179,232,131,169,170,188,253,122,18,139,62,51,
    232,27,136,77,186,201,226,158,141,174,26,107,83,53,76,50,
    84,44,76,81,199,114,97,153,227,211,53,107,124,172,102,213,
    70,76,190,67,154,192,211,95,221,170,141,141,139,183,253,183,
    130,233,170,110,172,76,215,196,127,0,47,24,38,133,
};

EmbeddedPython embedded_m5_internal_param_BadDevice(
    "m5/internal/param_BadDevice.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_BadDevice.py",
    "m5.internal.param_BadDevice",
    data_m5_internal_param_BadDevice,
    2398,
    7133);

} // anonymous namespace
