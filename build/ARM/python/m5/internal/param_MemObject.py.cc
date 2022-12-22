#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_MemObject[] = {
    120,156,181,88,235,114,219,198,21,62,11,128,148,72,81,22,
    101,89,146,109,201,22,108,199,9,227,105,165,54,141,235,206,
    68,245,212,185,116,166,153,177,226,128,201,216,81,50,65,32,
    98,41,129,2,1,22,88,89,166,43,245,71,229,94,94,160,
    143,208,31,125,145,254,238,27,181,231,156,5,64,144,150,166,
    153,41,37,147,235,195,197,238,217,115,249,206,101,209,129,236,
    175,130,223,223,216,0,233,191,4,128,143,31,1,33,64,95,
    192,174,0,33,5,248,215,224,176,2,201,135,224,87,224,13,
    192,174,1,210,128,51,36,76,248,214,128,168,193,123,170,16,
    154,60,35,96,88,7,105,193,110,5,158,71,139,96,201,42,
    28,214,33,249,1,132,16,145,128,23,254,12,248,179,240,6,
    185,35,81,99,134,179,64,147,117,158,172,129,63,199,147,117,
    240,27,76,204,193,176,9,178,1,187,243,180,108,247,10,178,
    125,128,108,23,152,237,191,137,173,143,79,150,193,191,66,203,
    81,174,111,104,165,69,43,249,188,5,230,210,204,165,92,132,
    221,171,57,189,84,162,175,149,232,229,18,189,82,162,87,75,
    244,245,18,125,163,68,223,44,209,107,37,122,157,105,212,228,
    42,244,110,65,239,54,244,54,160,139,198,93,44,164,182,65,
    154,208,187,3,187,119,64,226,199,134,51,180,191,127,181,180,
    227,46,239,88,42,118,220,227,29,239,192,238,59,32,241,115,
    79,239,168,66,187,181,130,62,13,254,131,127,45,244,41,168,
    6,14,47,101,146,6,113,228,6,81,55,14,12,122,94,165,
    129,16,208,161,97,38,131,194,39,4,133,127,2,227,192,55,
    50,40,156,2,50,22,164,75,104,192,41,19,167,6,12,91,
    112,34,160,103,129,111,194,9,30,83,33,1,246,5,156,25,
    240,157,73,11,78,113,180,208,97,183,193,82,26,7,61,118,
    152,230,52,3,167,21,56,169,64,251,197,137,65,19,135,53,
    72,254,1,175,215,153,233,44,51,53,224,4,71,11,206,44,
    56,173,194,115,92,132,83,189,26,169,47,94,156,160,166,56,
    211,110,89,40,237,78,73,93,82,197,15,146,200,235,75,213,
    68,218,29,120,137,215,119,159,202,254,23,123,61,217,81,173,
    122,190,42,78,55,7,158,58,112,120,155,73,246,232,15,20,
    179,139,35,169,230,144,232,6,145,239,246,99,255,40,148,106,
    150,120,185,221,32,148,174,203,15,127,215,31,196,137,250,44,
    73,226,196,33,147,242,100,24,123,197,14,50,104,39,140,83,
    217,162,211,248,24,135,216,43,90,221,29,48,71,18,128,69,
    165,205,190,76,59,73,48,80,232,41,205,145,86,19,183,22,
    249,136,135,244,99,28,182,14,226,190,220,234,122,157,163,80,
    13,183,246,101,255,225,214,222,81,16,250,91,79,156,167,91,
    131,161,58,136,163,45,156,11,34,37,209,14,225,214,132,5,
    54,113,201,85,226,117,28,236,187,1,107,225,30,200,112,32,
    147,121,154,189,73,231,136,166,104,136,170,48,69,75,204,35,
    85,193,175,41,214,141,57,177,19,144,30,29,210,141,32,100,
    149,65,67,158,20,112,104,64,178,78,144,232,225,71,144,15,
    17,24,109,122,102,240,179,47,201,0,122,182,103,146,163,245,
    228,9,195,8,241,132,43,183,201,179,17,48,22,42,208,171,
    130,198,8,66,75,131,38,25,210,136,203,137,141,129,204,45,
    72,255,14,104,80,68,199,9,100,200,57,51,65,68,77,80,
    117,74,8,56,187,130,7,254,137,193,215,110,145,248,59,12,
    2,117,16,164,241,113,196,166,38,154,195,165,141,150,121,54,
    212,214,74,55,112,226,155,248,200,238,120,81,20,43,219,243,
    125,219,83,42,9,246,142,148,76,109,21,219,247,211,22,121,
    207,89,204,113,84,240,27,14,114,220,144,143,17,55,250,135,
    31,116,20,254,88,226,31,236,133,84,42,196,192,65,236,167,
    56,79,44,246,165,114,72,72,69,70,142,89,16,134,136,75,
    75,233,120,92,119,5,127,63,201,37,97,28,182,170,57,106,
    82,25,118,85,157,1,232,165,169,203,146,208,60,99,141,24,
    191,244,194,35,201,220,83,228,135,2,17,169,101,152,62,218,
    174,147,228,185,162,44,125,20,71,254,16,133,9,58,239,209,
    57,215,25,115,13,70,221,50,34,110,6,199,42,254,95,21,
    43,70,199,202,112,86,205,177,70,9,78,1,123,90,100,206,
    70,220,157,97,50,105,25,156,13,88,1,142,183,187,68,209,
    102,103,157,134,91,52,220,166,97,35,215,113,170,138,206,79,
    42,250,136,152,27,172,29,235,65,166,55,115,61,252,177,152,
    185,49,138,25,204,112,109,194,190,65,17,50,194,190,69,217,
    48,121,76,35,46,229,168,50,33,253,138,114,47,197,8,51,
    163,112,64,96,19,53,130,59,91,197,161,108,216,154,205,145,
    234,16,252,202,24,220,47,97,208,33,135,48,0,157,27,121,
    106,115,105,133,134,158,179,70,172,42,231,152,213,166,225,206,
    165,216,118,4,162,253,183,64,244,17,157,211,204,64,52,207,
    224,169,227,183,105,116,204,204,224,69,117,91,154,0,15,33,
    199,58,7,57,239,18,101,190,173,226,101,130,38,83,236,183,
    37,208,144,44,70,89,254,29,36,134,171,36,118,25,46,171,
    88,151,159,71,171,88,106,13,46,181,63,227,82,203,229,154,
    27,33,157,92,77,206,175,154,168,144,254,93,19,86,178,18,
    154,214,112,28,36,241,171,161,29,119,109,197,10,82,46,220,
    190,159,110,222,79,63,194,44,103,63,230,252,162,243,156,206,
    100,137,28,80,38,162,173,159,189,234,72,46,93,252,203,117,
    117,226,113,57,9,185,89,73,68,228,44,147,245,140,220,172,
    156,130,83,149,80,230,157,190,97,235,133,97,73,206,207,137,
    115,157,173,106,138,85,68,73,93,240,241,174,78,175,220,7,
    241,83,252,126,76,150,38,21,37,80,39,236,180,181,112,44,
    55,105,224,252,100,12,9,211,148,218,217,66,54,95,231,8,
    168,142,16,64,95,51,71,240,95,129,219,65,1,127,1,242,
    49,186,50,67,112,1,120,114,234,18,45,255,30,24,234,231,
    84,102,206,17,109,170,198,188,2,83,71,250,136,151,234,66,
    253,57,252,173,20,39,121,57,53,179,134,175,92,78,173,34,
    191,48,56,126,84,201,180,198,19,17,121,226,192,75,105,153,
    206,46,163,208,27,229,235,162,83,195,236,58,85,164,204,106,
    158,46,29,255,221,8,39,84,144,214,196,146,81,242,254,207,
    105,248,160,112,188,200,231,166,37,201,6,92,92,42,93,157,
    159,191,165,227,44,22,112,97,134,163,173,224,80,128,184,146,
    131,248,131,2,196,146,235,200,27,238,237,105,52,200,145,103,
    134,192,139,27,54,72,116,79,178,64,86,96,183,74,112,231,
    222,85,100,209,32,242,220,67,153,106,172,72,177,254,59,218,
    50,133,47,181,155,104,120,53,253,152,38,79,109,135,94,127,
    207,247,30,39,196,151,152,119,242,248,48,114,73,155,101,73,
    9,219,226,34,97,249,231,195,92,226,151,211,143,231,95,34,
    155,66,82,70,175,31,119,56,136,191,58,144,118,95,246,247,
    240,114,118,16,12,236,110,232,237,179,205,205,76,147,47,114,
    77,20,59,109,178,160,167,15,104,140,237,78,28,97,10,61,
    234,168,56,177,125,137,119,22,233,219,63,181,57,255,218,65,
    106,123,123,248,212,195,139,15,99,117,60,182,184,39,244,146,
    253,148,219,191,195,99,34,47,199,103,46,222,61,3,234,122,
    161,168,109,250,90,84,164,83,238,103,53,244,177,12,225,109,
    68,13,117,74,161,226,238,108,210,240,62,92,90,214,253,16,
    217,252,158,248,145,33,170,98,205,168,25,106,161,28,90,207,
    104,79,250,118,128,125,250,99,2,76,191,19,201,194,172,10,
    114,134,238,184,244,190,163,146,189,239,192,144,171,254,191,33,
    199,40,190,28,252,254,97,170,145,230,60,186,124,65,157,95,
    65,86,42,47,138,178,177,174,234,137,142,50,109,99,44,168,
    195,107,172,148,110,192,89,41,241,60,186,137,237,149,197,237,
    213,54,181,87,39,220,130,185,134,238,176,70,174,225,190,152,
    239,239,116,124,36,143,221,9,16,233,14,138,252,237,13,6,
    50,242,157,7,80,110,138,248,241,244,205,67,97,244,71,40,
    213,54,83,92,195,46,232,109,200,81,78,40,169,195,208,170,
    20,32,91,191,52,223,253,57,247,157,190,78,23,137,193,217,
    166,161,57,150,5,116,82,96,35,211,109,208,151,161,84,114,
    210,206,250,253,143,78,41,190,196,44,24,15,49,1,113,207,
    135,191,67,215,189,164,92,242,107,100,243,58,183,52,230,18,
    81,53,106,213,154,224,180,59,241,246,77,31,126,31,242,190,
    102,152,58,140,222,133,66,61,126,75,148,231,67,178,4,87,
    252,29,188,199,235,87,79,116,195,117,238,65,118,99,113,222,
    43,204,68,23,55,110,38,117,67,142,56,228,146,192,21,192,
    249,5,205,83,175,209,127,184,153,171,178,169,85,249,36,140,
    59,135,210,215,234,240,187,170,254,67,117,235,226,165,159,198,
    125,15,231,215,206,93,209,14,50,187,168,197,137,231,126,66,
    187,150,39,102,83,153,4,94,24,188,150,234,198,196,19,25,
    29,245,221,103,199,73,27,187,34,169,214,207,61,237,89,124,
    44,147,167,49,250,86,221,157,88,48,122,196,12,220,151,146,
    234,165,186,243,63,248,232,211,46,208,237,104,175,61,76,149,
    236,95,96,72,76,60,73,223,11,51,251,144,31,243,5,156,
    24,206,179,54,101,251,177,25,174,75,12,241,2,97,140,231,
    68,238,7,120,116,194,156,198,118,100,41,134,48,200,86,154,
    136,137,177,221,151,131,127,221,163,233,27,223,99,10,101,190,
    179,210,171,157,218,66,13,99,129,50,143,137,183,175,121,97,
    153,141,102,205,106,204,213,172,218,140,201,119,246,121,236,182,
    235,86,109,174,33,206,251,183,129,81,84,55,54,26,53,241,
    95,60,64,83,107,
};

EmbeddedPython embedded_m5_internal_param_MemObject(
    "m5/internal/param_MemObject.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_MemObject.py",
    "m5.internal.param_MemObject",
    data_m5_internal_param_MemObject,
    2213,
    6337);

} // anonymous namespace
