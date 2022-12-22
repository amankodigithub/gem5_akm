#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ArmNativeTrace[] = {
    120,156,189,88,91,115,220,72,21,62,45,105,198,158,177,29,
    143,227,91,18,123,99,237,82,97,103,83,224,129,101,67,168,
    90,19,8,75,160,118,139,117,22,77,168,100,103,183,16,178,
    212,99,107,172,145,166,164,182,147,217,178,95,112,10,40,222,
    249,9,60,240,111,248,71,112,206,105,73,35,223,168,165,240,
    224,140,58,173,86,247,233,115,249,206,165,219,135,252,175,134,
    207,207,109,128,236,175,2,32,192,159,128,8,96,40,160,39,
    64,72,1,193,10,28,214,32,253,8,130,26,188,5,232,25,
    32,13,56,195,142,9,95,25,16,207,243,154,58,68,38,143,
    8,24,55,65,90,208,171,193,203,120,9,44,89,135,195,38,
    164,127,0,33,68,44,224,85,48,3,193,44,188,69,234,216,
    105,48,193,89,160,193,38,15,54,32,152,227,193,38,4,243,
    220,153,131,113,11,228,60,244,22,104,90,239,22,146,125,136,
    100,23,153,236,63,137,108,128,95,86,33,184,69,211,145,175,
    47,105,166,69,51,121,191,69,166,210,42,184,92,130,222,237,
    162,191,92,233,175,84,250,171,149,254,90,165,191,206,125,228,
    230,54,12,238,192,224,46,12,238,65,31,21,180,84,238,188,
    1,210,132,193,38,244,54,65,226,111,3,206,80,135,193,237,
    202,138,119,120,197,114,185,226,62,175,216,130,222,22,72,252,
    221,215,43,234,208,109,175,161,93,194,127,225,95,27,237,2,
    106,30,155,99,153,102,97,18,187,97,220,79,66,131,190,215,
    169,33,43,250,212,204,228,230,252,132,204,249,15,96,91,6,
    70,110,206,83,64,194,130,100,137,12,56,229,206,169,1,227,
    54,156,8,24,88,16,152,112,130,219,212,136,129,125,1,103,
    6,124,109,210,132,83,108,45,84,250,125,176,148,182,229,128,
    149,174,41,205,192,105,13,78,106,208,125,117,98,208,192,97,
    3,210,191,195,55,155,76,116,150,137,26,112,130,173,5,103,
    22,156,214,225,37,78,194,161,65,131,196,23,175,78,80,82,
    28,233,182,45,228,118,183,34,46,137,18,132,105,236,13,165,
    90,197,190,59,242,82,111,232,62,77,135,187,158,10,143,229,
    139,212,243,101,187,89,76,77,178,237,145,167,14,28,94,107,
    146,82,134,35,197,52,147,88,170,57,236,244,195,56,112,135,
    73,112,20,73,53,75,4,221,126,24,73,215,229,143,159,14,
    71,73,170,158,165,105,146,58,164,87,30,140,18,175,92,65,
    90,245,163,36,147,109,218,141,183,113,136,188,162,217,253,17,
    83,36,6,152,95,90,28,200,204,79,195,145,66,115,105,138,
    52,155,168,181,201,80,220,100,191,198,166,115,144,12,101,167,
    239,249,71,145,26,119,246,229,240,81,103,239,40,140,130,206,
    83,231,243,206,104,172,14,146,184,131,99,97,172,36,42,35,
    234,92,165,134,109,156,119,155,8,190,14,247,221,144,69,113,
    15,100,52,146,233,2,141,222,163,205,68,75,204,139,186,48,
    69,91,44,96,175,134,143,41,54,141,57,177,27,146,48,62,
    9,72,96,178,170,240,33,155,10,56,52,32,221,36,112,12,
    240,39,200,154,8,145,46,125,51,248,219,111,73,11,122,116,
    96,146,201,245,224,9,3,10,145,133,51,119,200,198,49,48,
    42,106,48,168,131,70,11,130,76,195,39,29,83,139,211,137,
    140,129,196,45,200,254,6,168,85,196,201,9,228,24,58,51,
    65,196,45,80,77,114,111,28,93,195,13,255,200,48,236,182,
    137,253,93,70,130,58,8,179,228,117,204,250,166,62,59,78,
    23,53,243,197,248,249,222,64,250,42,219,194,129,47,147,35,
    219,247,226,56,81,182,23,4,182,167,84,26,238,29,41,153,
    217,42,177,31,100,109,50,161,179,84,128,169,164,55,30,21,
    224,33,67,35,120,244,75,16,250,10,95,150,249,133,173,144,
    73,133,64,56,72,130,12,199,137,196,190,84,14,49,169,72,
    201,9,51,194,56,113,105,42,109,143,243,110,225,251,211,130,
    19,6,99,187,94,64,39,147,81,95,53,25,133,94,150,185,
    204,9,141,51,224,136,240,177,23,29,73,166,158,33,61,100,
    136,186,154,135,41,65,238,14,177,95,72,203,34,196,73,28,
    140,145,163,208,127,159,54,187,195,192,155,103,232,173,34,236,
    102,176,173,227,255,117,177,102,248,86,14,182,122,1,56,138,
    119,10,216,220,34,183,56,130,239,12,99,75,219,224,224,192,
    82,176,231,189,71,61,90,236,108,82,243,14,53,247,169,217,
    42,4,189,121,105,23,46,74,251,152,118,48,88,68,22,134,
    140,96,22,194,4,231,188,231,238,196,123,48,234,117,201,11,
    12,242,149,137,23,88,20,33,211,39,212,226,84,246,47,19,
    178,23,20,143,201,91,152,24,57,6,66,156,122,19,224,179,
    106,156,22,137,60,91,96,214,33,32,86,209,184,95,65,163,
    67,86,97,40,58,119,139,72,231,210,12,13,66,103,131,72,
    213,174,208,173,77,205,187,211,83,240,4,78,251,151,224,244,
    49,109,214,202,225,180,192,48,106,226,211,50,124,51,215,122,
    153,246,150,47,192,136,48,100,93,129,161,239,82,207,188,44,
    231,212,225,147,75,247,171,10,124,136,33,163,42,196,46,118,
    198,235,196,123,21,56,235,152,181,95,198,235,152,136,13,78,
    196,63,224,68,204,201,156,75,29,29,112,77,142,185,186,83,
    35,37,244,77,88,203,19,108,214,192,118,148,38,111,198,118,
    210,183,21,75,73,241,113,231,65,182,253,32,251,24,35,159,
    253,132,99,142,142,125,58,186,165,114,68,209,137,150,62,123,
    227,75,206,105,252,230,186,58,24,185,28,152,220,60,87,34,
    134,40,97,179,194,89,183,28,150,51,149,82,52,158,146,118,
    155,165,118,137,217,207,136,124,147,85,107,138,117,196,75,83,
    48,15,174,142,187,92,42,241,87,124,126,65,234,38,57,37,
    80,193,235,116,53,135,204,60,137,225,124,239,28,38,110,156,
    117,167,131,180,126,87,96,161,62,193,2,61,102,1,232,63,
    3,151,141,2,254,4,100,109,52,106,14,232,18,255,100,222,
    101,154,254,123,96,228,95,145,183,57,110,116,41,87,243,12,
    12,39,217,99,158,170,211,248,103,240,151,138,219,20,201,214,
    204,11,195,106,178,181,202,152,195,48,249,86,9,213,58,31,
    156,200,28,7,94,70,211,116,196,153,120,226,36,144,151,197,
    28,70,220,155,199,204,172,38,236,18,15,95,79,16,67,233,
    106,67,44,27,21,28,252,144,154,15,75,8,136,98,236,70,
    217,217,130,235,179,169,171,163,247,87,180,167,197,92,46,206,
    40,82,27,175,118,63,121,254,155,231,187,221,11,52,75,148,
    215,10,148,127,88,162,92,114,222,121,203,231,3,106,13,50,
    242,153,33,240,0,135,165,21,157,151,44,144,53,232,213,201,
    31,184,244,21,185,187,136,34,66,81,60,59,151,212,88,45,
    187,90,97,165,157,181,9,169,121,51,37,207,39,43,238,68,
    222,112,47,240,158,12,137,56,237,224,23,14,100,20,236,182,
    170,236,18,248,197,117,28,243,235,163,130,237,227,41,121,253,
    143,145,86,201,46,99,60,72,124,118,245,23,7,210,30,202,
    225,30,30,245,14,194,145,221,143,188,125,214,190,153,139,243,
    188,16,71,177,249,46,150,2,217,67,106,19,219,79,98,12,
    185,71,190,74,82,59,144,120,248,145,129,253,125,155,227,181,
    29,102,182,183,135,95,61,95,105,48,159,247,64,174,43,189,
    116,63,227,18,242,240,53,117,167,104,61,23,143,179,33,150,
    207,9,148,9,81,31,178,202,240,203,133,177,246,13,204,93,
    120,172,81,99,29,125,168,44,112,182,169,249,0,166,27,165,
    63,66,90,17,17,37,149,212,197,134,209,48,212,10,118,207,
    207,252,130,86,103,151,61,111,239,219,120,158,190,52,201,253,
    175,78,51,229,12,157,161,169,109,80,180,166,59,145,90,126,
    39,66,131,250,78,164,206,35,183,200,83,103,254,87,79,101,
    220,79,17,241,199,55,234,160,206,227,255,19,183,206,79,32,
    207,195,215,57,167,168,138,178,160,157,115,32,138,82,190,42,
    7,223,5,108,92,131,28,215,79,165,167,164,182,197,230,212,
    164,99,191,214,91,141,39,78,119,185,10,125,90,10,114,198,
    101,199,120,133,77,164,143,46,108,34,241,50,190,135,229,168,
    197,229,232,14,149,163,39,44,181,107,232,138,116,130,182,90,
    41,60,213,249,177,124,237,94,165,0,93,118,18,123,222,104,
    36,227,192,121,8,213,74,146,63,79,201,226,20,75,78,161,
    82,6,152,98,5,75,199,203,254,68,209,177,34,24,219,170,
    86,122,208,244,172,198,152,124,91,96,178,189,8,213,16,233,
    236,80,195,65,177,140,135,206,207,74,157,127,112,29,224,50,
    149,140,220,36,118,71,190,43,233,194,129,78,39,255,197,108,
    44,85,20,109,122,241,3,107,147,97,30,200,72,42,121,165,
    177,121,101,126,66,13,36,230,163,100,140,71,9,46,212,241,
    61,114,221,105,6,244,159,34,173,35,34,74,185,5,3,186,
    168,99,72,95,53,26,245,134,224,76,120,225,122,85,115,97,
    67,81,144,142,51,135,35,195,98,169,98,190,1,44,178,19,
    89,131,143,72,187,222,80,223,228,240,157,133,243,29,200,79,
    158,206,251,165,169,232,20,206,167,0,125,166,66,215,224,44,
    205,73,217,249,17,141,211,217,116,248,104,187,144,105,91,203,
    84,17,136,111,33,135,143,88,225,151,39,62,123,163,103,165,
    106,243,202,239,159,98,165,144,79,184,154,64,55,28,234,171,
    51,181,116,225,123,144,122,216,95,189,48,154,201,52,244,162,
    240,27,125,87,86,12,243,226,203,172,83,56,56,87,198,86,
    62,114,218,229,210,255,63,20,186,12,160,84,238,135,25,238,
    195,155,92,14,43,100,109,245,238,181,176,174,16,152,34,230,
    116,173,170,15,201,79,232,218,37,251,37,54,116,57,214,88,
    108,32,254,40,228,152,120,86,93,16,150,57,223,106,88,243,
    115,13,171,49,99,242,93,199,2,158,72,154,86,99,110,94,
    76,254,109,33,86,155,198,86,171,33,254,13,86,60,169,137,
};

EmbeddedPython embedded_m5_internal_param_ArmNativeTrace(
    "m5/internal/param_ArmNativeTrace.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_ArmNativeTrace.py",
    "m5.internal.param_ArmNativeTrace",
    data_m5_internal_param_ArmNativeTrace,
    2240,
    6604);

} // anonymous namespace