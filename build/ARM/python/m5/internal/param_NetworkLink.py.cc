#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_NetworkLink[] = {
    120,156,189,88,91,115,219,198,21,62,11,128,148,72,81,214,
    93,178,45,217,162,237,184,97,61,173,212,166,113,221,153,184,
    110,221,36,157,105,166,81,92,48,29,59,76,166,40,4,172,
    36,80,32,192,2,43,201,116,165,62,84,238,229,161,175,249,
    1,125,232,67,255,72,159,251,143,146,115,206,2,32,36,81,
    99,207,84,172,69,174,151,7,187,7,231,242,157,203,174,7,
    217,191,10,126,127,222,4,72,255,35,0,124,252,8,8,1,
    122,2,58,2,132,20,224,47,194,126,5,146,247,193,175,192,
    107,128,142,1,210,128,83,156,152,240,165,1,81,131,247,84,
    33,52,153,34,96,80,7,105,65,167,2,207,163,57,176,100,
    21,246,235,144,252,30,132,16,145,128,23,254,4,248,147,240,
    26,185,227,164,198,12,39,129,136,117,38,214,192,159,98,98,
    29,252,6,79,166,96,48,11,178,1,157,105,90,214,185,134,
    108,31,32,219,25,102,251,95,98,235,227,147,37,240,175,209,
    114,148,235,11,90,105,209,74,126,223,12,115,153,205,165,156,
    131,206,124,62,95,40,205,23,75,243,165,210,124,185,52,95,
    41,205,175,151,230,55,74,243,155,165,249,106,105,190,198,115,
    212,100,30,186,183,160,123,27,186,235,176,131,198,157,43,164,
    110,130,52,161,123,7,58,119,64,226,167,9,167,104,127,127,
    190,180,227,46,239,88,40,118,220,227,29,239,64,231,29,144,
    248,185,167,119,84,161,221,90,70,159,6,223,224,191,22,250,
    20,84,3,135,67,153,164,65,28,57,65,180,19,7,6,61,
    175,210,64,8,240,104,152,200,160,240,33,65,225,223,192,56,
    240,141,12,10,39,128,140,5,233,18,26,112,194,147,19,3,
    6,45,56,22,208,181,192,55,225,24,95,83,33,1,118,5,
    156,26,240,149,73,11,78,112,180,208,97,183,193,82,26,7,
    93,118,152,230,52,1,39,21,56,174,64,251,197,177,65,132,
    253,26,36,255,130,87,107,204,116,146,153,26,112,140,163,5,
    167,22,156,84,225,57,46,66,82,183,70,234,139,23,199,168,
    41,82,218,45,11,165,221,42,169,75,170,248,65,18,185,61,
    169,230,113,238,244,221,196,237,57,91,82,29,197,201,254,175,
    131,104,191,85,207,215,197,233,70,223,85,123,54,111,52,201,
    34,189,190,98,134,113,36,213,20,78,118,130,200,119,122,177,
    127,16,74,53,73,220,156,157,32,148,142,195,15,127,213,235,
    199,137,250,56,73,226,196,38,163,50,49,140,221,98,7,153,
    212,11,227,84,182,232,109,252,26,155,216,43,90,189,211,103,
    142,36,0,11,75,155,125,153,122,73,208,87,232,43,205,145,
    86,19,183,22,121,137,135,244,35,28,54,247,226,158,220,220,
    113,189,131,80,13,54,119,101,239,225,230,246,65,16,250,155,
    79,237,79,55,251,3,181,23,71,155,72,11,34,37,209,18,
    225,230,5,27,108,224,34,178,78,122,20,236,58,1,235,225,
    236,201,176,47,147,105,162,222,164,55,137,89,209,16,85,97,
    138,150,152,198,89,5,191,166,88,51,166,196,86,64,154,120,
    164,29,193,200,42,3,135,188,41,96,223,128,100,141,96,209,
    197,143,32,63,34,56,218,244,204,224,103,191,33,19,104,106,
    215,36,103,107,226,49,67,9,49,133,43,31,147,119,35,96,
    60,84,160,91,5,141,19,132,151,6,78,50,160,17,151,19,
    27,3,153,91,144,126,13,104,82,68,200,49,100,232,57,53,
    65,68,179,160,234,148,20,144,186,140,47,252,51,3,176,221,
    34,241,183,24,6,106,47,72,227,163,136,141,77,115,14,153,
    54,90,230,217,224,179,237,174,244,84,186,142,132,47,226,131,
    166,231,70,81,172,154,174,239,55,93,165,146,96,251,64,201,
    180,169,226,230,253,180,69,254,179,231,114,36,21,252,6,253,
    28,57,228,101,68,142,254,225,7,158,194,31,11,252,131,189,
    144,74,133,40,216,139,253,20,233,196,98,87,42,155,132,84,
    100,228,152,5,97,144,56,180,148,94,143,235,174,225,239,167,
    185,36,140,196,86,53,199,77,42,195,29,85,103,8,186,105,
    234,176,36,68,103,180,17,227,67,55,60,144,204,61,69,126,
    40,16,77,181,12,227,192,219,117,146,61,87,149,229,143,226,
    200,31,160,56,129,247,46,189,233,58,163,174,193,184,91,66,
    204,77,224,88,197,255,171,98,217,240,172,12,105,213,28,109,
    148,230,20,176,175,69,230,110,68,222,41,166,148,150,193,57,
    129,85,224,152,187,75,51,218,108,175,209,112,139,134,219,52,
    172,231,90,94,177,170,211,231,85,125,68,236,13,214,143,53,
    33,243,155,185,38,254,153,184,185,49,140,27,204,116,109,194,
    191,65,81,50,196,191,69,89,49,121,66,35,46,229,200,50,
    33,253,156,114,48,197,9,51,163,144,64,112,211,108,8,121,
    182,139,61,75,250,78,230,104,181,9,130,101,28,238,150,112,
    104,147,75,24,132,246,141,60,193,57,180,66,195,207,94,37,
    86,149,17,134,109,210,112,103,76,214,29,2,105,247,2,144,
    62,160,55,205,102,64,154,102,0,213,241,59,107,120,102,102,
    242,162,206,45,156,3,16,161,199,26,129,158,239,208,204,188,
    168,228,120,129,147,169,246,203,18,112,72,26,163,172,193,22,
    78,6,43,36,120,25,50,43,88,163,159,71,43,88,118,13,
    46,187,63,224,178,203,165,155,155,34,157,100,77,206,179,122,
    82,33,11,236,152,176,156,149,211,180,134,99,63,137,95,14,
    154,241,78,83,177,138,148,19,31,223,79,55,238,167,31,96,
    182,107,62,225,60,163,243,157,206,104,137,236,83,70,162,173,
    31,191,244,36,23,49,254,229,56,58,1,57,156,140,156,172,
    56,34,122,150,200,126,70,110,88,78,197,169,74,40,3,143,
    195,180,245,194,180,36,233,39,196,187,206,118,53,197,10,34,
    165,46,88,0,71,39,90,238,138,248,41,126,127,65,182,38,
    37,37,80,95,108,183,181,120,44,57,233,96,127,239,12,26,
    174,86,110,123,19,25,253,54,71,65,117,136,2,250,154,57,
    142,255,6,220,30,10,248,43,144,159,209,157,25,142,11,216,
    147,99,23,104,249,239,128,1,63,162,74,115,174,104,83,101,
    230,21,152,66,210,71,188,84,23,237,79,224,239,165,104,201,
    75,171,153,53,128,229,210,106,21,121,134,1,242,86,229,211,
    58,155,144,200,23,123,110,74,203,116,150,25,6,224,48,115,
    23,125,27,102,217,43,70,203,164,230,234,144,0,95,13,177,
    66,197,105,85,44,24,37,4,252,144,134,247,10,231,139,156,
    118,117,178,172,195,229,133,211,209,185,250,75,122,161,197,34,
    206,76,112,154,46,241,40,192,92,201,193,252,94,1,102,201,
    85,229,53,119,252,52,26,228,206,83,67,224,113,14,91,38,
    58,61,89,32,43,208,169,18,236,185,159,21,89,84,136,60,
    11,81,206,58,83,178,216,6,91,218,58,133,71,181,179,104,
    120,57,142,232,38,127,61,14,221,222,182,239,62,73,136,51,
    177,247,242,56,49,114,89,103,203,178,18,198,197,101,226,242,
    207,135,185,204,135,227,136,236,31,35,163,66,86,198,177,31,
    123,28,206,159,239,201,102,79,246,182,241,216,182,23,244,155,
    59,161,187,203,118,55,51,93,62,203,117,81,236,184,243,37,
    62,125,64,99,220,244,226,8,19,234,129,167,226,164,233,75,
    60,203,72,191,249,253,38,103,227,102,144,54,221,109,124,234,
    122,74,99,246,108,148,113,167,232,38,187,41,55,133,251,71,
    52,29,151,223,28,60,151,6,212,13,67,81,235,244,129,169,
    72,174,220,231,234,16,192,178,132,167,20,53,208,233,133,202,
    189,189,65,195,119,97,140,57,248,125,100,244,7,226,72,198,
    168,138,85,163,102,168,185,179,65,246,140,246,165,23,67,237,
    159,111,19,106,250,206,36,11,184,42,173,148,19,116,12,166,
    177,70,137,184,83,207,137,83,60,54,152,56,157,19,175,241,
    56,195,196,217,156,56,199,227,60,19,23,242,11,156,69,38,
    46,65,103,153,110,38,136,178,66,145,61,241,191,70,54,135,
    202,184,130,228,143,87,26,208,246,163,255,135,168,246,79,32,
    171,205,151,5,179,40,235,49,173,131,185,43,242,150,190,172,
    4,95,5,92,31,133,55,199,75,164,171,164,118,193,218,120,
    244,226,12,160,223,243,167,97,132,94,236,70,159,22,42,156,
    114,19,50,88,100,207,232,195,11,123,70,60,143,110,98,91,
    106,113,91,250,152,218,210,99,214,215,49,116,103,58,68,88,
    165,80,155,114,64,36,143,156,11,170,235,222,147,100,115,251,
    125,25,249,246,3,40,183,147,252,120,28,94,166,148,243,23,
    40,117,4,166,88,196,254,241,98,244,80,6,45,169,196,46,
    170,20,241,50,38,103,49,8,255,145,131,176,197,231,183,34,
    141,218,143,105,224,196,89,228,76,251,103,133,169,111,141,68,
    88,136,83,39,240,233,64,242,134,21,216,157,112,223,150,253,
    86,119,47,95,29,34,152,34,111,192,76,223,98,25,113,110,
    228,156,51,226,37,251,14,189,212,193,2,225,28,70,216,189,
    93,206,254,204,178,156,125,153,200,93,215,136,125,65,162,28,
    124,156,50,239,55,173,33,198,116,4,42,40,140,30,14,101,
    95,134,82,201,139,176,86,228,158,236,40,238,75,44,208,241,
    0,43,35,31,77,240,119,232,56,99,43,114,63,69,70,175,
    136,227,34,112,145,19,85,44,115,75,130,255,140,90,181,38,
    184,59,56,119,125,172,5,185,15,121,35,62,72,109,206,126,
    51,5,170,248,146,51,47,218,4,64,182,200,150,219,211,247,
    85,124,57,99,223,131,236,160,109,191,91,160,147,110,28,248,
    244,163,79,145,152,4,184,115,225,70,197,254,17,209,201,252,
    189,135,27,185,90,27,90,173,15,195,216,219,151,190,190,186,
    227,171,214,222,67,70,238,37,75,63,138,123,46,210,87,71,
    174,104,7,189,140,209,220,185,231,126,66,187,150,206,81,83,
    153,4,110,24,188,146,234,198,185,39,50,58,232,57,207,142,
    146,54,182,240,82,173,141,124,219,179,248,72,38,159,198,232,
    103,134,109,121,193,240,17,51,112,14,37,181,117,234,206,27,
    248,232,183,93,162,219,193,118,123,144,42,217,187,196,144,88,
    184,146,158,27,102,246,33,63,230,11,248,190,104,148,181,169,
    140,157,161,112,235,116,190,118,49,186,19,185,27,224,203,19,
    230,117,102,79,150,223,9,143,234,246,200,8,43,239,31,87,
    60,232,35,133,190,172,120,66,39,42,190,110,161,187,201,218,
    76,13,99,131,18,191,41,234,152,250,45,179,49,91,179,26,
    83,53,171,54,97,242,133,211,52,30,17,235,86,109,170,33,
    70,253,173,99,44,213,141,245,133,154,248,22,236,75,42,161,
};

EmbeddedPython embedded_m5_internal_param_NetworkLink(
    "m5/internal/param_NetworkLink.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_NetworkLink.py",
    "m5.internal.param_NetworkLink",
    data_m5_internal_param_NetworkLink,
    2384,
    7048);

} // anonymous namespace
