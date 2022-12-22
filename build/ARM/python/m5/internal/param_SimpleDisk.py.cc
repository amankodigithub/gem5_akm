#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SimpleDisk[] = {
    120,156,189,88,109,115,219,198,17,222,3,64,74,164,36,139,
    178,222,44,75,182,104,167,142,105,213,150,90,55,174,59,19,
    213,173,235,164,51,201,140,21,23,76,199,142,146,41,2,17,
    39,9,20,8,112,128,147,101,186,210,151,202,211,244,67,191,
    117,250,19,250,33,255,166,255,168,221,221,3,64,136,162,60,
    158,169,88,71,188,44,238,14,139,125,121,246,229,174,5,233,
    191,18,254,126,91,7,72,30,26,0,30,254,9,8,0,58,
    2,182,5,8,41,192,155,131,131,18,196,159,128,87,130,119,
    0,219,6,72,3,78,145,48,225,91,3,194,73,126,167,12,
    129,201,51,2,122,85,144,22,108,151,224,101,56,3,150,44,
    195,65,21,226,239,65,8,17,10,120,229,141,129,55,14,239,
    144,59,18,21,102,56,14,52,89,229,201,10,120,19,60,89,
    5,111,146,137,9,232,213,64,78,194,246,20,109,219,190,130,
    108,215,144,237,52,179,253,55,177,245,112,101,30,188,43,180,
    29,229,250,134,118,90,180,147,191,55,205,92,106,153,148,51,
    176,125,53,163,103,11,244,92,129,158,47,208,11,5,122,177,
    64,95,43,208,75,5,250,122,129,94,46,208,43,5,250,70,
    129,190,89,160,87,11,116,189,64,223,42,208,183,11,244,71,
    5,250,39,5,250,14,211,104,181,171,208,254,24,218,119,161,
    221,128,93,116,228,76,110,161,123,32,77,104,175,193,246,26,
    72,252,187,7,167,232,107,239,106,225,141,159,242,27,179,249,
    27,247,249,141,7,176,253,0,36,254,221,215,111,148,161,217,
    88,64,252,248,255,193,127,13,129,148,154,196,225,181,140,19,
    63,10,29,63,220,141,124,131,214,203,52,16,218,90,52,140,
    165,176,123,70,176,251,17,24,115,158,145,194,238,4,144,177,
    32,93,2,3,78,152,56,49,160,215,128,99,1,109,11,60,
    19,142,241,51,37,18,96,79,192,169,1,223,153,180,225,4,
    71,11,193,113,19,44,165,49,215,102,112,104,78,99,112,82,
    130,227,18,52,95,29,27,52,113,80,129,248,95,240,118,133,
    153,142,51,83,3,142,113,180,224,212,130,147,50,188,196,77,
    56,213,174,144,250,226,213,49,106,138,51,205,134,133,210,110,
    21,212,37,85,60,63,14,221,142,84,51,72,59,93,55,118,
    59,78,211,239,116,3,249,153,159,28,52,170,217,182,40,89,
    239,186,106,223,230,247,76,50,72,167,171,152,95,20,74,53,
    129,196,174,31,122,78,39,242,14,3,169,198,137,153,179,235,
    7,210,113,120,241,139,78,55,138,213,231,113,28,197,54,217,
    148,39,131,200,205,223,32,139,182,130,40,145,13,250,26,127,
    198,38,246,138,118,239,118,153,35,9,192,178,210,203,158,76,
    90,177,223,85,232,42,205,145,118,19,183,6,57,137,135,228,
    25,14,27,251,81,71,110,236,186,173,195,64,245,54,246,100,
    231,209,198,206,161,31,120,27,79,237,231,27,221,158,218,143,
    194,13,156,243,67,37,209,16,193,198,160,9,214,113,207,85,
    98,118,228,239,57,62,171,225,236,203,160,43,227,41,154,189,
    78,31,18,53,49,41,202,194,20,13,49,133,84,9,127,166,
    88,49,38,196,150,79,138,180,72,57,2,145,85,132,13,249,
    82,192,129,1,241,10,129,162,141,127,130,188,136,208,104,210,
    154,193,107,127,32,11,232,217,182,73,174,214,147,199,12,36,
    68,20,238,220,36,223,134,192,104,40,65,187,12,26,37,8,
    46,13,155,184,71,35,110,39,54,6,50,183,32,249,39,160,
    69,17,31,199,144,98,231,212,4,17,214,64,85,41,253,224,
    236,2,126,240,47,12,191,102,131,196,223,98,20,168,125,63,
    137,142,66,182,53,209,28,48,77,180,204,139,222,87,59,109,
    217,82,201,42,78,124,19,29,214,91,110,24,70,170,238,122,
    94,221,85,42,246,119,14,149,76,234,42,170,223,73,26,228,
    62,123,38,3,82,206,175,215,205,128,67,78,70,224,232,7,
    207,111,41,124,152,229,7,246,66,34,21,130,96,63,242,18,
    156,39,22,123,82,217,36,164,34,35,71,44,8,99,196,161,
    173,244,121,220,119,5,159,159,102,146,48,16,27,229,12,54,
    137,12,118,85,149,17,232,38,137,195,146,208,60,131,141,24,
    191,118,131,67,201,220,19,228,135,2,17,169,101,24,1,220,
    174,145,232,153,166,44,126,24,133,94,15,165,241,91,119,233,
    67,215,24,116,147,12,187,121,132,220,24,142,101,252,127,89,
    44,24,45,43,5,90,57,3,27,229,56,5,236,106,145,122,
    27,129,119,138,249,164,97,112,66,96,13,56,226,110,19,69,
    47,219,43,52,220,160,225,38,13,171,153,146,151,171,233,212,
    160,166,143,137,187,193,234,177,34,100,124,51,83,196,59,19,
    53,75,253,168,193,44,215,36,244,27,20,35,125,244,91,148,
    17,227,39,52,226,86,142,43,19,146,175,41,255,82,148,48,
    51,10,8,132,54,81,125,192,179,89,236,26,169,59,158,97,
    213,38,0,22,81,184,87,64,161,77,30,97,8,218,75,89,
    118,115,104,135,6,159,189,76,172,74,67,236,90,167,225,214,
    104,140,219,135,209,222,57,24,125,74,31,170,165,48,154,98,
    248,84,241,87,51,90,102,106,241,188,196,205,14,192,135,176,
    99,13,193,206,199,68,153,231,117,28,41,108,82,205,126,95,
    128,13,9,99,20,21,216,66,162,183,72,114,23,1,179,136,
    213,249,101,184,136,5,215,224,130,251,51,46,184,92,180,185,
    245,210,9,214,228,28,171,137,18,25,96,215,132,133,180,144,
    38,21,28,187,113,244,166,87,143,118,235,138,53,164,124,184,
    121,39,89,191,147,124,138,153,174,254,132,115,140,206,117,58,
    155,197,178,75,217,136,94,253,252,77,75,114,253,226,39,199,
    209,201,199,225,68,228,164,117,17,177,51,79,230,51,50,187,
    114,26,78,84,76,217,119,4,150,173,230,150,37,65,191,36,
    214,85,54,171,41,22,17,39,85,193,223,119,116,142,229,118,
    136,87,241,247,59,50,53,233,40,129,154,111,187,169,165,99,
    193,73,5,251,254,25,44,92,170,216,246,6,242,249,99,134,
    129,114,31,3,244,51,51,16,255,0,220,22,10,248,43,144,
    151,209,153,41,136,115,204,147,91,103,105,251,159,128,209,62,
    164,62,115,158,104,82,77,230,29,152,62,146,199,188,85,151,
    235,47,225,111,133,80,201,138,170,153,54,126,197,162,106,229,
    57,134,225,241,65,133,211,58,155,140,200,21,251,110,66,219,
    116,134,233,71,95,63,105,231,13,27,102,216,203,197,202,184,
    102,234,208,247,191,235,35,133,202,210,178,152,53,10,254,255,
    57,13,15,115,215,139,108,238,210,68,89,133,139,43,166,163,
    179,244,183,244,61,139,37,156,30,99,156,247,89,228,64,46,
    101,64,126,152,3,89,114,57,121,199,109,62,141,6,249,242,
    212,16,120,94,196,78,137,142,103,22,200,18,108,151,9,242,
    220,197,138,52,34,68,150,128,40,93,157,169,85,108,129,45,
    109,155,220,157,218,83,52,188,25,65,96,147,179,54,3,183,
    179,227,185,79,254,76,140,137,123,43,139,17,35,19,181,86,
    20,149,240,45,46,146,150,31,31,101,34,191,30,65,80,255,
    18,249,228,162,50,132,189,168,197,145,252,245,190,172,119,100,
    103,7,79,106,251,126,183,190,27,184,123,108,117,51,85,229,
    171,76,21,197,110,27,172,236,201,26,141,81,189,21,133,152,
    73,15,91,42,138,235,158,196,243,139,244,234,15,234,156,134,
    235,126,82,119,119,112,213,109,41,141,215,179,1,198,237,161,
    27,239,37,220,9,30,28,17,57,34,175,57,120,18,245,177,
    3,62,129,188,198,233,51,82,158,85,185,183,213,240,199,114,
    132,39,19,213,211,137,133,170,188,189,78,195,61,24,93,242,
    253,4,249,188,37,134,100,138,178,88,54,42,134,170,157,137,
    175,23,244,86,114,62,202,142,62,36,202,244,125,76,26,107,
    101,218,41,199,232,216,75,99,133,18,240,118,53,155,156,224,
    113,146,39,167,178,43,159,43,60,57,205,215,40,101,158,153,
    161,80,29,251,95,67,149,193,63,34,216,191,187,212,8,181,
    31,255,31,36,181,127,5,105,157,189,40,58,69,81,141,41,
    29,157,109,145,181,230,69,29,248,60,191,56,4,66,78,43,
    150,174,146,218,254,43,35,209,138,3,90,127,230,135,126,196,
    157,239,42,159,230,10,156,114,59,209,155,99,183,232,35,8,
    187,69,188,12,175,99,123,105,113,123,185,73,237,229,49,107,
    235,24,186,195,236,163,171,148,43,61,135,67,40,143,156,65,
    197,117,11,73,162,185,221,174,12,61,123,13,138,93,33,47,
    143,192,195,148,64,254,14,133,210,110,138,57,108,3,207,199,
    13,165,195,130,66,236,159,82,30,41,163,241,20,227,239,31,
    25,254,26,116,73,211,207,137,246,38,13,156,5,243,4,104,
    255,38,183,243,210,48,112,121,72,210,137,226,61,171,216,94,
    112,234,167,7,181,60,108,91,210,75,148,236,48,155,247,173,
    19,35,190,79,224,71,54,52,35,222,147,129,84,242,156,255,
    57,161,166,7,79,79,98,93,138,122,120,82,224,94,28,159,
    3,199,25,85,114,255,53,240,29,170,206,59,152,220,69,25,
    211,251,188,152,55,42,229,138,224,122,56,112,71,170,101,32,
    155,235,174,179,151,216,156,30,166,115,219,243,85,94,86,167,
    200,77,124,254,217,114,59,250,90,134,47,33,236,143,32,61,
    82,218,119,115,31,146,91,184,213,215,7,38,140,19,174,213,
    92,154,237,95,208,60,81,157,71,235,153,70,235,90,35,210,
    229,139,142,139,46,49,120,253,130,109,168,184,190,196,226,187,
    208,226,186,23,187,72,207,15,204,38,50,246,221,192,127,43,
    249,164,61,132,31,187,246,220,199,100,120,216,113,158,203,78,
    20,247,158,71,158,84,43,3,235,79,61,47,182,221,112,79,
    58,175,37,181,38,234,214,224,134,180,47,209,60,178,93,245,
    161,50,156,221,123,129,226,184,152,42,190,58,116,253,89,16,
    181,14,164,151,238,185,113,241,158,207,162,14,25,106,105,152,
    198,47,142,226,38,182,230,231,245,213,239,191,136,142,100,76,
    246,8,212,237,129,13,253,37,102,112,145,89,6,249,232,175,
    93,224,234,195,157,212,59,195,53,198,18,22,119,220,32,213,
    103,80,226,28,40,153,40,55,223,199,68,43,69,160,207,214,
    21,197,194,32,230,42,58,89,232,39,238,169,6,42,32,7,
    127,44,247,124,148,59,102,22,249,246,180,70,80,172,178,123,
    206,39,157,194,171,35,202,20,250,132,161,111,45,158,208,253,
    87,242,61,14,116,67,89,153,174,96,214,160,218,97,138,42,
    86,15,203,156,172,85,172,201,137,138,85,25,51,249,226,105,
    10,143,139,85,171,50,49,41,62,236,191,85,204,61,85,99,
    117,166,34,254,11,10,199,59,23,
};

EmbeddedPython embedded_m5_internal_param_SimpleDisk(
    "m5/internal/param_SimpleDisk.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_SimpleDisk.py",
    "m5.internal.param_SimpleDisk",
    data_m5_internal_param_SimpleDisk,
    2409,
    7177);

} // anonymous namespace
