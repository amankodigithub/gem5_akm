#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_VncServer[] = {
    120,156,181,88,235,114,219,198,21,62,11,128,148,72,81,22,
    101,89,146,45,201,17,218,142,27,214,211,74,109,26,199,153,
    177,234,230,50,233,76,242,67,73,193,180,118,152,76,81,8,
    88,74,160,72,128,3,44,45,51,67,253,169,60,109,95,160,
    143,208,31,125,155,190,81,123,206,89,0,132,40,185,147,153,
    146,50,177,94,44,118,207,158,203,119,46,187,62,100,127,21,
    124,62,178,1,210,68,0,4,248,19,208,7,24,8,232,8,
    16,82,64,112,15,206,43,144,188,15,65,5,222,0,116,12,
    144,6,92,97,199,132,111,13,136,26,188,166,10,125,147,71,
    4,140,235,32,45,232,84,224,69,180,14,150,172,194,121,29,
    146,63,131,16,34,18,240,50,88,130,96,25,222,32,117,236,
    212,152,224,50,208,96,157,7,107,16,172,240,96,29,130,6,
    119,86,96,220,4,217,128,206,42,77,235,220,65,178,143,145,
    236,26,147,253,55,145,13,240,203,38,4,119,104,58,242,245,
    13,205,180,104,38,239,183,198,84,154,57,151,235,208,185,155,
    247,55,74,253,123,165,254,38,247,113,215,187,208,219,130,222,
    54,244,238,67,23,21,177,94,236,240,0,164,9,189,29,232,
    236,128,196,223,3,184,66,93,5,119,75,43,118,121,197,70,
    177,98,143,87,60,132,206,67,144,248,219,211,43,170,208,110,
    109,161,254,195,255,224,95,11,245,15,170,129,205,43,153,164,
    97,28,185,97,212,141,67,131,190,87,169,33,107,249,212,44,
    101,102,251,148,204,246,47,96,155,5,70,102,182,75,64,194,
    130,100,233,27,112,201,157,75,3,198,45,152,8,232,89,16,
    152,48,193,109,42,196,192,169,128,43,3,190,51,105,194,37,
    182,22,42,247,29,176,148,182,89,143,149,171,41,45,193,101,
    5,38,21,104,191,156,24,52,112,94,131,228,159,240,253,30,
    19,93,102,162,6,76,176,181,224,202,130,203,42,188,192,73,
    56,212,171,145,248,226,229,4,37,197,145,118,203,66,110,143,
    75,226,146,40,65,152,68,222,64,170,38,246,221,161,151,120,
    3,247,143,145,223,150,9,234,161,85,207,103,197,233,193,208,
    83,103,14,47,51,73,31,131,161,98,114,113,36,213,10,118,
    186,97,20,184,131,56,24,245,165,90,38,90,110,55,236,75,
    215,229,143,159,15,134,113,162,62,75,146,56,113,72,165,60,
    216,143,189,98,5,41,212,239,199,169,108,209,110,188,141,67,
    228,21,205,238,14,153,34,49,192,172,210,226,64,166,126,18,
    14,21,90,74,83,164,217,68,173,69,54,226,38,253,4,155,
    195,179,120,32,15,187,158,63,234,171,241,225,169,28,60,57,
    60,25,133,253,224,240,229,135,31,28,14,199,234,44,142,14,
    113,44,140,148,68,61,244,15,103,52,112,128,83,238,18,173,
    139,240,212,13,89,10,247,76,246,135,50,89,165,209,29,218,
    71,52,69,67,84,133,41,90,98,21,123,21,124,76,177,103,
    172,136,227,144,228,240,73,54,130,144,85,6,13,89,82,192,
    185,1,201,30,65,162,135,63,65,54,68,96,180,233,155,193,
    223,126,79,10,208,163,61,147,12,173,7,39,12,35,196,19,
    206,60,34,203,70,192,88,168,64,175,10,26,35,8,45,13,
    154,100,76,45,78,39,50,6,18,183,32,253,7,160,66,17,
    29,19,200,144,115,101,130,136,154,160,234,228,188,56,186,133,
    27,254,133,193,215,110,17,251,199,12,2,117,22,166,241,69,
    196,170,166,62,187,75,27,53,243,213,248,203,147,158,244,85,
    186,143,3,223,196,35,219,247,162,40,86,182,23,4,182,167,
    84,18,158,140,148,76,109,21,219,143,210,22,89,207,89,207,
    113,84,208,27,15,115,220,144,141,17,55,250,37,8,125,133,
    47,27,252,194,86,72,165,66,12,156,197,65,138,227,68,226,
    84,42,135,152,84,164,228,152,25,97,136,184,52,149,182,199,
    121,119,240,253,227,156,19,198,97,171,154,163,38,149,253,174,
    170,51,0,189,52,117,153,19,26,103,172,17,225,87,94,127,
    36,153,122,138,244,144,33,234,106,30,230,143,182,251,196,121,
    46,40,115,31,197,81,48,70,102,66,255,93,218,231,62,99,
    174,193,168,219,68,196,45,97,91,197,255,171,98,203,240,173,
    12,103,213,28,107,20,224,20,176,165,69,102,108,196,221,21,
    6,147,150,193,209,128,5,96,127,251,49,245,104,177,179,71,
    205,67,106,222,161,102,63,151,113,174,130,174,206,10,250,148,
    136,27,44,29,203,65,170,55,115,57,130,107,62,243,96,234,
    51,24,225,218,132,125,131,60,100,138,125,139,162,97,242,156,
    90,156,202,94,101,66,250,53,197,94,242,17,38,70,238,128,
    192,166,222,20,238,172,21,135,162,97,107,57,71,170,67,240,
    43,99,240,180,132,65,135,12,194,0,116,30,228,161,205,165,
    25,26,122,206,46,145,170,220,162,86,155,154,31,45,68,183,
    83,16,157,222,0,209,51,218,167,153,129,104,149,193,83,199,
    167,105,248,102,166,240,34,187,109,204,128,135,144,99,221,130,
    156,159,82,207,188,41,226,34,65,147,9,246,187,18,104,136,
    23,163,204,255,49,118,198,219,196,118,25,46,219,152,151,95,
    68,219,152,106,13,78,181,191,228,84,203,233,154,139,22,29,
    92,77,142,175,186,83,33,249,187,38,108,101,41,52,173,97,
    59,76,226,215,99,59,238,218,138,5,164,88,120,244,40,61,
    120,148,62,195,40,103,63,231,248,162,227,156,142,100,137,28,
    82,36,162,165,159,189,246,37,167,46,126,115,93,29,120,92,
    14,66,110,150,18,17,57,155,164,61,35,87,43,135,224,84,
    37,20,121,231,175,216,122,161,88,226,243,11,162,92,103,173,
    154,98,27,81,82,23,188,189,171,195,43,215,65,252,21,159,
    79,72,211,36,162,4,170,90,157,182,102,142,249,38,9,156,
    159,95,67,194,60,185,118,14,145,204,31,114,4,84,167,8,
    160,199,204,17,252,55,224,114,80,192,95,129,108,140,166,204,
    16,92,0,158,140,186,65,211,255,4,12,245,91,50,51,199,
    136,54,101,99,158,129,161,35,125,202,83,117,162,254,2,254,
    94,242,147,60,157,154,89,193,87,78,167,86,17,95,24,28,
    63,40,101,90,215,3,17,89,226,204,75,105,154,142,46,83,
    215,155,198,235,162,82,195,232,58,87,164,44,107,154,46,109,
    255,221,20,39,148,144,118,197,134,81,178,254,175,168,121,175,
    48,188,200,199,230,197,201,62,188,61,85,186,58,62,127,75,
    219,89,204,224,218,18,123,91,65,161,0,113,37,7,241,123,
    5,136,37,231,145,55,92,219,83,107,144,33,175,12,129,135,
    44,44,144,232,76,99,129,172,64,167,74,112,231,218,85,100,
    222,32,242,216,67,145,234,90,146,98,249,143,181,102,10,91,
    106,51,81,243,122,254,62,77,150,58,234,123,131,147,192,123,
    126,78,116,137,184,159,251,135,145,115,218,44,115,74,216,22,
    111,99,150,95,159,228,28,191,154,191,63,127,128,100,10,78,
    25,189,65,236,179,19,127,125,38,237,129,28,156,224,225,236,
    44,28,218,221,190,119,202,58,55,51,73,190,204,37,81,108,
    180,217,132,158,62,166,54,182,253,56,194,16,58,242,85,156,
    216,129,196,51,139,12,236,95,216,28,127,237,48,181,189,19,
    252,234,249,74,99,245,186,111,113,77,232,37,167,41,151,127,
    231,23,212,93,140,205,92,60,123,134,88,245,14,160,200,109,
    250,88,84,132,83,174,103,53,244,49,13,225,105,68,141,117,
    72,161,228,238,28,80,243,51,88,88,212,125,31,24,45,144,
    146,34,170,98,215,168,25,106,173,236,90,95,209,154,244,166,
    131,93,252,16,7,211,247,23,153,155,85,105,166,92,162,99,
    46,181,53,10,188,157,122,62,184,194,109,131,7,87,243,43,
    146,59,60,184,198,215,14,85,30,89,39,47,93,250,127,189,
    148,129,191,24,200,171,185,58,167,243,116,241,140,58,31,66,
    150,93,223,230,152,162,44,197,170,94,219,19,121,49,94,22,
    129,143,239,91,55,241,227,250,137,244,148,212,202,223,91,132,
    76,236,201,122,151,139,169,175,221,172,35,63,46,216,191,226,
    18,98,124,143,109,162,143,28,108,19,241,34,218,193,130,210,
    226,130,242,136,10,202,9,203,234,26,186,166,156,34,171,82,
    136,76,218,139,228,133,59,35,182,174,25,137,51,111,56,148,
    81,224,60,134,114,25,200,159,231,111,221,103,26,103,211,108,
    110,138,123,88,247,221,244,24,138,130,37,113,216,56,149,194,
    71,22,98,38,134,222,85,14,189,22,221,199,76,67,161,115,
    68,13,7,191,34,238,57,191,45,148,188,115,11,174,162,17,
    193,149,78,16,255,235,51,214,20,108,5,253,202,71,170,217,
    153,124,29,68,100,222,250,145,136,144,198,232,133,117,204,64,
    15,100,95,42,57,107,120,125,5,167,163,122,32,49,17,197,
    99,60,19,112,217,141,239,125,215,93,80,56,255,77,166,89,
    142,53,24,206,69,21,3,250,166,216,52,106,213,154,224,252,
    55,115,13,170,89,160,82,83,23,152,227,212,225,152,176,86,
    104,157,175,235,242,196,68,6,226,210,235,216,27,232,187,23,
    190,106,112,126,2,217,209,209,121,183,176,30,157,160,185,170,
    215,39,35,116,15,206,205,156,138,157,95,231,6,29,60,57,
    200,5,58,40,4,250,60,26,142,20,223,23,14,158,168,221,
    91,103,181,195,129,190,168,82,235,51,223,131,196,195,254,230,
    204,104,42,147,208,235,135,223,235,155,169,124,152,147,239,204,
    182,203,26,0,252,194,249,241,122,64,99,163,38,242,52,76,
    145,4,175,207,39,103,62,79,54,80,123,183,160,168,188,112,
    49,246,215,101,162,62,116,62,167,203,139,244,35,108,232,118,
    169,182,86,67,44,80,40,48,241,0,184,42,44,179,209,172,
    89,141,149,154,85,91,50,249,218,96,21,11,254,186,85,91,
    105,8,253,111,31,17,83,55,246,215,107,226,191,218,153,80,
    229,
};

EmbeddedPython embedded_m5_internal_param_VncServer(
    "m5/internal/param_VncServer.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_VncServer.py",
    "m5.internal.param_VncServer",
    data_m5_internal_param_VncServer,
    2209,
    6370);

} // anonymous namespace