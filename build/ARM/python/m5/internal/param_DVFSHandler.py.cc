#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DVFSHandler[] = {
    120,156,189,88,221,115,220,72,17,239,145,180,107,239,218,142,
    191,237,36,118,236,77,32,220,146,2,27,142,11,161,234,76,
    32,92,238,10,174,10,223,161,61,46,185,189,43,132,44,205,
    174,181,214,74,91,210,56,201,94,173,95,112,10,40,222,249,
    3,120,224,225,94,248,91,248,143,160,187,71,210,202,94,7,
    82,133,151,216,158,140,70,61,173,254,248,245,199,140,7,217,
    191,10,254,253,188,1,144,254,67,0,248,248,43,32,4,232,
    11,104,11,16,82,128,191,6,39,21,72,222,3,191,2,175,
    1,218,6,72,3,206,113,98,194,151,6,68,243,188,167,10,
    161,201,43,2,134,117,144,22,180,43,240,44,90,6,75,86,
    225,164,14,201,239,65,8,17,9,120,238,207,128,63,11,175,
    145,59,78,106,204,112,22,104,177,206,139,53,240,231,120,177,
    14,254,60,79,230,96,184,4,114,30,218,11,68,214,190,129,
    108,31,32,219,69,102,251,79,98,235,227,155,117,240,111,16,
    57,202,245,5,81,90,68,201,223,91,100,46,75,185,148,203,
    208,94,201,231,171,165,249,90,105,190,94,154,111,148,230,155,
    165,249,205,210,252,86,105,126,155,231,40,241,10,244,182,160,
    183,13,189,59,208,65,35,46,23,210,237,128,52,161,183,11,
    237,93,144,248,187,3,231,104,103,127,165,180,163,193,59,86,
    139,29,119,121,199,61,104,223,3,137,191,119,245,142,42,180,
    154,27,232,187,224,95,248,175,137,190,3,53,143,195,11,153,
    164,65,28,57,65,212,137,3,131,222,87,105,32,79,123,52,
    204,100,46,255,128,92,254,13,176,191,125,35,115,249,25,32,
    99,65,186,132,6,156,241,228,204,128,97,19,70,2,122,22,
    248,38,140,240,51,21,18,160,43,224,220,128,175,76,34,56,
    195,209,66,199,236,128,165,180,191,123,236,24,205,105,6,206,
    42,48,170,64,235,249,200,160,133,147,26,36,127,135,175,183,
    153,233,44,51,53,96,132,163,5,231,22,156,85,225,25,18,
    225,82,175,70,234,139,231,35,212,20,87,90,77,11,165,61,
    44,169,75,170,248,65,18,185,125,169,86,112,238,12,220,196,
    237,59,79,63,255,168,245,75,55,242,67,153,52,235,57,93,
    156,238,13,92,117,108,243,70,147,44,210,31,40,102,24,71,
    82,205,225,164,19,68,190,211,143,253,211,80,170,89,226,230,
    116,130,80,58,14,191,252,85,127,16,39,234,195,36,137,19,
    155,140,202,139,97,236,22,59,200,164,94,24,167,178,73,95,
    227,207,216,196,94,17,117,103,192,28,73,0,22,150,54,251,
    50,245,146,96,160,208,87,154,35,81,19,183,38,121,137,135,
    244,41,14,251,199,113,95,238,119,92,239,52,84,195,253,174,
    236,63,220,63,58,13,66,127,255,137,253,235,253,193,80,29,
    199,209,62,174,5,145,146,104,137,112,127,194,6,123,72,68,
    214,73,95,6,93,39,96,61,156,99,25,14,100,178,64,171,
    183,233,75,98,73,204,139,170,48,69,83,44,224,172,130,127,
    166,216,54,230,196,97,64,154,120,164,29,193,200,42,3,135,
    188,41,224,196,128,100,155,96,209,195,95,65,126,68,112,180,
    232,157,193,239,126,67,38,208,171,61,147,156,173,23,71,12,
    37,196,20,82,30,144,119,35,96,60,84,160,87,5,141,19,
    132,151,6,78,50,164,17,201,137,141,129,204,45,72,255,10,
    104,82,68,200,8,50,244,156,155,32,162,37,80,117,10,126,
    92,221,192,15,254,129,1,216,106,146,248,135,12,3,117,28,
    164,241,203,136,141,77,115,14,153,22,90,230,211,225,39,71,
    61,233,169,116,23,23,190,136,79,27,158,27,69,177,106,184,
    190,223,112,149,74,130,163,83,37,211,134,138,27,247,211,38,
    249,207,94,206,145,84,240,27,14,114,228,144,151,17,57,250,
    193,15,60,133,15,171,252,192,94,72,165,66,20,28,199,126,
    138,235,196,162,43,149,77,66,42,50,114,204,130,48,72,28,
    34,165,207,35,221,13,124,126,146,75,194,72,108,86,115,220,
    164,50,236,168,58,67,208,77,83,135,37,161,117,70,27,49,
    126,225,134,167,146,185,167,200,15,5,162,169,150,97,26,120,
    187,73,178,231,170,178,252,81,28,249,67,20,39,240,222,161,
    47,221,100,212,205,51,238,214,17,115,51,56,86,241,255,170,
    216,48,60,43,67,90,53,71,27,165,57,5,236,107,145,185,
    27,145,119,142,41,165,105,112,78,96,21,56,230,238,209,140,
    54,219,219,52,220,161,97,135,134,221,92,203,107,86,117,225,
    178,170,143,136,189,193,250,177,38,100,126,51,215,196,191,16,
    55,183,198,113,131,153,174,69,248,55,40,74,198,248,183,40,
    43,38,143,105,68,82,142,44,19,210,207,40,7,83,156,48,
    51,10,9,4,55,205,198,144,103,187,216,75,164,239,108,142,
    86,155,32,88,198,97,183,132,67,155,92,194,32,180,111,229,
    9,206,33,10,13,63,123,139,88,85,174,48,108,131,134,187,
    83,178,238,24,72,221,9,32,189,79,95,90,202,128,180,192,
    0,170,227,223,146,225,153,153,201,139,58,183,122,9,64,132,
    30,235,10,244,124,135,102,230,164,146,211,5,78,166,218,71,
    37,224,144,52,70,89,131,67,156,12,55,73,240,50,100,54,
    177,70,63,139,54,177,236,26,92,118,127,192,101,151,75,55,
    55,63,58,201,154,156,103,245,164,66,22,232,152,176,145,149,
    211,180,134,227,32,137,95,13,27,113,167,161,88,69,202,137,
    7,247,211,189,251,233,251,152,237,26,143,57,207,232,124,167,
    51,90,34,7,148,145,104,235,135,175,60,201,69,140,159,28,
    71,39,32,135,147,145,147,21,71,68,207,58,217,207,200,13,
    203,169,56,85,9,101,224,105,152,182,94,152,150,36,253,152,
    120,215,217,174,166,216,68,164,212,5,11,224,232,68,203,93,
    17,191,197,191,95,144,173,73,73,9,212,255,218,45,45,30,
    75,78,58,216,223,187,128,134,235,149,219,222,71,70,191,205,
    81,80,29,163,128,254,204,28,199,127,2,110,15,5,252,17,
    200,207,232,206,12,199,5,236,201,177,171,68,254,59,96,192,
    95,81,165,57,87,180,168,50,51,5,166,144,244,17,147,234,
    162,253,49,252,185,20,45,121,105,53,179,6,176,92,90,173,
    34,207,48,64,222,170,124,90,23,19,18,249,226,216,77,137,
    76,103,153,113,0,142,51,119,209,183,97,150,189,102,180,204,
    106,174,14,9,240,213,24,43,84,156,182,196,170,81,66,192,
    15,105,120,183,112,190,200,215,174,79,150,93,120,115,225,116,
    116,174,254,146,62,104,177,136,139,51,156,166,75,60,10,48,
    87,114,48,191,91,128,89,114,85,121,205,29,63,141,6,185,
    243,220,16,120,108,195,150,137,78,73,22,200,10,180,171,4,
    123,238,103,69,22,21,34,207,66,148,179,46,148,44,182,193,
    161,182,78,225,81,237,44,26,94,77,35,186,201,95,7,161,
    219,63,242,221,199,3,226,76,236,189,60,78,140,92,214,165,
    178,172,132,113,241,38,113,249,241,97,46,243,139,105,68,246,
    143,145,81,33,43,227,216,143,61,14,231,207,142,101,163,47,
    251,71,120,108,59,14,6,141,78,232,118,217,238,102,166,203,
    39,185,46,138,29,119,185,196,167,15,104,140,27,94,28,97,
    66,61,245,84,156,52,124,137,103,25,233,55,190,223,224,108,
    220,8,210,134,123,132,111,93,79,105,204,94,140,50,238,20,
    221,164,155,114,83,120,242,146,166,211,242,155,131,231,210,0,
    187,225,4,138,90,167,15,76,69,114,229,62,87,135,0,150,
    37,60,165,168,161,78,47,84,238,237,61,26,190,11,83,204,
    193,239,33,163,152,56,146,49,170,98,203,168,25,106,249,98,
    144,125,74,251,210,201,80,251,219,219,132,154,190,27,201,2,
    174,74,148,114,134,142,193,52,214,40,17,183,235,249,226,28,
    143,243,188,184,144,47,222,224,113,145,23,151,242,197,101,30,
    87,120,113,53,191,168,89,227,197,117,104,111,208,205,4,173,
    108,82,100,207,252,175,145,205,161,50,173,32,25,94,107,64,
    219,143,254,31,162,218,63,129,172,54,191,41,152,69,89,143,
    5,29,204,61,145,183,244,101,37,248,42,224,230,85,120,115,
    188,68,186,74,106,23,108,79,71,47,206,0,250,59,163,113,
    132,78,118,163,79,10,21,206,185,9,25,174,177,103,244,225,
    133,61,35,158,69,183,177,45,181,184,45,61,160,182,116,196,
    250,58,134,238,76,199,8,171,20,106,83,14,136,228,75,103,
    66,117,221,123,146,108,238,96,32,35,223,126,0,229,118,146,
    95,79,195,203,148,114,206,161,212,17,152,98,13,251,199,201,
    232,161,12,90,82,137,93,84,41,226,101,74,206,98,16,254,
    37,7,97,147,207,111,69,26,181,15,104,224,196,89,228,76,
    251,103,133,169,239,92,137,48,63,238,187,65,148,210,129,228,
    191,80,96,119,162,175,223,244,179,218,190,146,90,70,238,17,
    182,255,196,238,63,18,16,55,242,174,126,84,223,190,146,54,
    29,98,8,132,39,153,8,204,244,173,8,137,57,213,148,139,
    203,220,68,78,238,197,34,25,165,1,157,103,156,16,131,32,
    242,134,252,161,183,38,166,143,209,101,219,228,43,6,19,71,
    182,47,81,71,57,137,114,69,222,202,78,230,190,196,122,29,
    15,241,32,197,39,21,124,14,29,103,106,53,239,167,200,232,
    21,113,92,3,174,121,162,138,85,111,93,240,143,81,171,214,
    4,55,11,151,110,147,181,32,223,130,188,47,31,166,54,39,
    195,197,2,100,124,231,153,215,112,194,35,159,17,15,221,190,
    190,190,226,187,26,155,24,240,185,219,126,167,0,43,93,64,
    240,97,72,31,42,49,39,112,35,195,125,139,253,35,90,167,
    251,134,254,195,189,92,173,189,86,226,125,16,198,222,201,83,
    237,243,23,146,26,33,190,123,237,63,84,141,75,196,218,6,
    23,183,176,103,202,68,252,46,103,180,123,37,135,207,227,80,
    185,93,153,49,184,125,137,38,123,155,179,216,186,90,136,160,
    175,239,29,185,199,40,191,247,19,98,186,126,105,53,149,73,
    224,134,193,215,146,227,115,146,95,89,35,50,127,254,90,145,
    87,46,127,146,140,91,60,113,227,115,185,242,48,24,19,217,
    13,82,100,195,60,10,250,44,51,19,116,212,206,213,113,88,
    218,59,45,232,234,195,128,190,102,120,76,103,161,148,78,251,
    116,171,88,91,172,33,140,41,101,155,120,224,95,16,150,57,
    191,84,179,230,231,106,86,109,198,228,171,162,5,60,220,213,
    173,218,220,188,184,252,179,139,144,175,27,187,171,53,241,111,
    32,202,251,59,
};

EmbeddedPython embedded_m5_internal_param_DVFSHandler(
    "m5/internal/param_DVFSHandler.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_DVFSHandler.py",
    "m5.internal.param_DVFSHandler",
    data_m5_internal_param_DVFSHandler,
    2356,
    6950);

} // anonymous namespace