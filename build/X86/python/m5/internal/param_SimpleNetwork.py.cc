#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SimpleNetwork[] = {
    120,156,189,89,235,115,219,198,17,223,3,72,74,164,36,75,
    178,94,126,200,22,237,212,49,227,38,82,226,248,149,196,113,
    107,187,206,76,50,181,226,130,233,216,81,50,69,33,226,36,
    129,2,1,14,0,90,166,71,250,82,121,218,76,63,181,51,
    237,167,126,106,103,250,161,255,76,167,255,81,187,187,7,128,
    39,62,82,119,98,86,18,207,203,195,222,222,62,126,187,183,
    7,55,32,253,41,226,231,167,85,128,248,159,6,128,139,127,
    2,124,128,150,128,45,1,66,10,112,23,97,191,8,209,13,
    112,139,240,10,96,203,0,105,192,49,18,38,124,99,64,48,
    205,107,74,224,155,60,35,160,91,1,89,128,173,34,60,13,
    230,161,32,75,176,95,129,232,215,32,132,8,4,60,115,39,
    192,157,132,87,40,29,137,50,11,156,4,154,172,240,100,25,
    220,41,158,172,128,59,205,196,20,116,231,64,78,195,214,12,
    177,109,157,66,177,215,80,236,44,139,253,23,137,117,241,201,
    18,184,167,136,29,245,250,154,56,11,196,201,251,205,178,148,
    185,76,203,121,216,58,157,209,11,26,189,168,209,75,26,189,
    172,209,43,26,125,70,163,207,106,244,57,141,62,175,209,171,
    26,125,65,163,47,106,244,154,70,87,53,250,146,70,95,214,
    232,183,52,250,71,26,125,69,163,223,214,232,171,26,93,211,
    232,119,52,250,154,70,255,88,163,223,213,232,247,52,122,93,
    163,55,52,250,125,141,254,64,163,175,51,141,17,61,13,205,
    15,161,121,3,154,55,97,7,65,54,159,71,239,22,72,19,
    154,183,97,235,54,72,252,187,5,199,136,67,247,180,182,226,
    14,175,88,200,87,124,196,43,62,134,173,143,65,226,223,71,
    106,69,9,234,181,101,196,182,247,111,252,169,9,164,146,105,
    28,158,203,40,246,194,192,246,130,157,208,51,232,121,137,6,
    202,132,6,13,19,105,74,60,164,148,248,7,112,62,184,70,
    154,18,71,128,130,5,217,226,27,112,196,196,145,1,221,26,
    28,10,104,22,192,53,225,16,183,41,146,2,187,2,142,13,
    248,214,36,134,35,28,11,8,220,139,80,72,84,62,52,25,
    184,74,210,4,28,21,225,176,8,245,103,135,6,77,236,151,
    33,250,59,188,92,101,161,147,44,212,128,67,28,11,112,92,
    128,163,18,60,69,38,156,106,150,201,124,241,236,16,45,197,
    153,122,173,128,218,110,106,230,146,41,174,23,5,78,75,38,
    139,72,219,109,39,114,90,118,221,107,181,125,185,41,147,131,
    48,218,175,85,50,206,48,94,111,59,201,158,197,75,77,242,
    73,171,157,176,200,48,144,201,20,18,59,94,224,218,173,208,
    237,248,50,153,36,121,246,142,231,75,219,230,135,159,183,218,
    97,148,60,138,162,48,178,200,173,60,233,135,78,190,130,156,
    218,240,195,88,214,104,55,222,198,34,241,9,113,239,180,89,
    34,41,192,234,210,98,87,198,141,200,107,39,24,45,37,145,
    184,73,90,141,226,196,67,252,25,14,27,123,97,75,110,236,
    56,141,142,159,116,55,118,101,235,230,198,118,199,243,221,141,
    103,119,110,109,180,187,201,94,24,108,224,156,23,36,18,125,
    225,111,12,241,194,58,178,157,38,121,7,222,174,237,177,37,
    246,158,244,219,50,154,161,217,115,180,151,152,19,211,162,36,
    76,81,19,51,72,21,241,99,138,85,99,74,108,122,100,75,
    131,236,35,40,21,116,240,80,68,5,236,27,16,173,18,52,
    154,248,39,40,150,8,144,58,61,51,248,217,47,200,9,106,
    182,105,82,192,213,228,33,195,9,113,133,156,119,41,194,1,
    48,38,138,208,44,129,194,10,66,76,129,39,234,210,136,236,
    36,198,64,225,5,136,255,12,232,84,68,201,33,164,8,58,
    54,65,4,115,144,84,168,64,226,236,50,110,248,27,6,97,
    189,70,234,111,50,16,146,61,47,14,15,2,118,55,209,156,
    54,117,244,204,147,238,151,219,77,217,72,226,53,156,248,58,
    236,84,27,78,16,132,73,213,113,221,170,147,36,145,183,221,
    73,100,92,77,194,234,149,184,70,17,180,230,51,44,229,242,
    186,237,12,59,20,103,196,142,250,226,122,141,4,191,44,240,
    23,142,66,44,19,196,193,94,232,198,56,79,34,118,101,98,
    145,146,9,57,57,100,69,24,38,54,177,210,246,200,119,10,
    191,223,207,52,97,44,214,74,25,114,98,233,239,36,21,6,
    161,19,199,54,107,66,243,140,55,18,252,220,241,59,146,165,
    199,40,15,21,34,82,233,48,30,196,157,33,237,51,99,217,
    130,32,12,220,46,42,228,53,174,210,94,103,24,119,211,140,
    188,37,68,221,4,142,37,252,183,36,150,141,70,33,197,90,
    41,195,27,21,187,4,56,218,34,13,56,98,239,24,11,75,
    205,224,202,192,70,112,222,93,38,138,22,91,171,52,92,160,
    225,34,13,107,153,157,111,220,216,153,126,99,111,211,6,6,
    91,200,182,80,8,204,204,22,247,68,238,156,237,229,14,86,
    188,58,229,128,65,153,210,203,129,2,85,199,232,30,141,200,
    202,217,101,66,252,21,213,98,202,21,22,70,105,129,0,39,
    170,7,123,246,140,53,71,22,79,102,136,181,8,134,58,22,
    119,53,44,90,20,20,6,162,117,54,43,115,54,113,40,8,
    90,231,73,84,113,136,107,171,52,92,26,155,127,123,96,218,
    29,0,211,39,180,215,92,10,166,25,6,81,5,63,115,70,
    195,76,157,158,159,120,11,125,32,34,4,21,134,32,232,109,
    162,204,65,51,199,13,158,212,184,207,52,240,144,62,134,110,
    195,38,18,221,21,82,93,135,205,10,158,215,79,131,21,60,
    130,13,62,130,223,231,35,152,143,113,110,20,85,177,53,185,
    222,42,162,72,62,216,49,97,57,61,90,227,50,142,237,40,
    124,209,173,134,59,213,132,141,164,218,120,247,74,188,126,37,
    254,4,171,94,245,30,215,27,85,247,84,101,139,100,155,42,
    19,45,125,244,162,33,249,56,227,111,182,173,10,145,205,69,
    201,78,143,73,68,208,18,121,208,200,92,203,37,57,78,34,
    170,196,227,113,110,37,119,46,233,250,5,73,175,176,103,77,
    177,130,104,169,8,86,193,86,37,151,123,36,126,138,159,7,
    228,109,50,83,2,221,22,172,186,82,144,117,39,43,172,119,
    79,32,226,77,107,110,109,160,168,95,102,72,40,245,144,64,
    31,51,67,243,239,128,219,69,1,191,5,138,53,134,52,69,
    115,14,126,10,238,2,177,255,10,24,246,67,78,108,174,25,
    117,58,165,153,3,75,73,124,155,89,213,1,254,5,124,167,
    229,76,118,204,154,105,67,168,31,179,133,188,222,48,72,94,
    235,40,45,156,44,76,20,141,61,39,38,54,85,109,122,105,
    216,171,225,121,23,135,213,246,141,35,102,82,201,181,73,133,
    111,123,120,161,131,234,188,88,48,52,20,124,64,195,245,28,
    0,34,155,123,147,218,172,193,232,99,212,86,117,251,27,218,
    178,192,74,206,78,112,53,57,33,37,7,117,49,3,245,245,
    28,212,146,207,152,87,124,15,160,209,160,160,30,27,2,47,
    187,216,68,209,221,178,0,178,8,91,37,130,63,247,184,34,
    205,14,145,213,35,218,239,196,1,198,126,216,84,30,202,227,
    170,66,70,195,139,241,228,57,69,237,174,239,180,182,93,231,
    222,119,36,155,54,104,100,249,98,100,218,206,233,218,18,214,
    197,40,133,249,235,205,76,235,231,227,201,241,91,40,42,215,
    150,17,237,134,13,78,236,175,246,100,181,37,91,219,120,161,
    219,243,218,213,29,223,217,101,223,155,169,53,95,102,214,36,
    28,188,254,67,63,190,70,99,88,109,132,1,150,215,78,35,
    9,163,170,43,241,142,35,221,234,123,85,174,205,85,47,174,
    58,219,248,212,105,36,10,187,39,243,141,251,71,39,218,141,
    185,85,220,63,32,114,124,177,179,241,206,234,97,151,252,123,
    200,207,62,117,149,202,75,45,247,191,42,21,240,152,194,219,
    75,210,85,165,134,26,0,107,157,134,119,96,172,21,249,6,
    112,193,133,152,28,82,18,231,141,178,193,141,212,9,198,39,
    180,54,30,76,186,191,190,78,210,169,119,75,105,234,149,136,
    83,78,208,53,153,198,50,21,230,173,74,54,57,197,227,52,
    79,206,100,147,167,120,156,229,201,185,108,114,158,199,211,60,
    185,144,189,232,90,228,201,37,216,90,166,55,23,52,179,66,
    57,62,241,67,115,156,83,102,124,201,242,199,55,154,218,214,
    237,255,143,178,214,29,72,207,235,81,105,45,116,75,102,84,
    90,55,69,214,238,235,102,240,203,130,115,195,81,103,55,34,
    233,36,82,5,98,117,92,182,113,61,80,59,253,169,151,173,
    131,157,234,253,220,140,99,110,78,186,139,28,31,117,185,225,
    248,136,167,193,57,108,89,11,220,178,222,165,150,245,144,109,
    182,13,213,181,246,144,86,204,77,95,193,33,144,7,246,16,
    243,85,103,74,218,57,237,182,12,92,235,26,232,205,38,63,
    30,79,180,169,4,253,5,180,94,193,20,139,216,93,14,102,
    18,213,84,205,44,14,84,49,207,157,177,133,140,225,248,183,
    12,142,53,190,229,229,133,213,186,75,3,151,210,188,138,90,
    63,201,29,94,27,129,53,199,117,176,223,127,46,237,40,236,
    36,94,192,183,151,215,103,198,110,38,161,45,251,31,36,111,
    141,144,176,221,217,217,145,145,29,123,47,37,239,244,58,124,
    180,9,93,97,181,185,228,218,136,117,136,151,118,136,110,180,
    183,157,192,61,240,220,100,143,183,249,31,216,105,55,122,207,
    54,248,104,164,91,136,203,247,130,253,84,235,248,123,125,56,
    192,156,249,176,255,1,195,145,107,132,43,125,153,200,97,185,
    194,11,211,55,0,174,196,46,32,236,226,101,141,239,66,248,
    221,183,237,49,158,163,159,162,168,63,144,76,122,111,139,231,
    168,40,225,73,186,36,248,215,40,151,202,130,155,144,190,247,
    215,74,21,182,140,59,255,110,108,113,105,157,205,129,202,239,
    88,179,206,128,48,205,55,209,77,167,165,94,150,241,123,33,
    139,96,195,247,123,235,106,14,120,122,213,193,215,45,117,117,
    197,234,194,13,18,247,67,214,135,52,143,169,11,173,155,235,
    153,97,235,143,101,28,59,187,242,129,194,213,115,73,253,21,
    191,234,109,221,228,142,93,231,85,78,56,177,34,57,63,148,
    7,29,165,222,65,38,243,125,207,221,200,65,122,169,111,54,
    150,145,231,248,4,234,11,67,229,89,157,237,110,234,246,1,
    173,30,56,177,215,120,244,34,249,57,225,38,53,224,226,80,
    41,58,231,128,35,122,27,61,196,155,127,20,250,62,90,183,
    58,146,169,222,141,19,217,26,177,145,194,201,99,217,10,163,
    238,136,141,238,167,253,106,202,52,220,141,248,48,117,227,240,
    80,60,244,195,198,190,116,83,158,225,174,99,158,159,133,45,
    114,251,217,62,14,25,116,90,246,147,131,168,142,247,49,57,
    194,216,39,225,129,140,30,135,152,73,201,229,62,134,222,35,
    22,144,57,255,210,127,145,163,118,27,1,156,206,118,234,217,
    225,22,99,215,17,181,28,63,181,231,204,112,25,74,64,255,
    6,108,172,114,55,169,49,96,238,125,215,141,44,39,216,29,
    105,199,201,144,101,92,253,98,114,232,127,63,22,83,67,148,
    99,135,71,142,225,106,225,97,50,50,205,152,131,209,60,52,
    41,62,15,94,55,41,82,206,1,172,158,0,216,40,57,154,
    158,25,203,164,170,229,252,156,75,192,96,26,83,129,78,105,
    190,142,12,118,130,92,210,35,185,235,197,228,1,110,122,123,
    235,211,62,233,211,172,166,13,59,102,244,245,227,59,4,212,
    133,93,189,22,188,71,103,116,252,18,7,250,191,128,242,108,
    25,15,4,106,161,76,81,193,38,170,96,78,207,149,11,211,
    83,229,66,121,194,228,151,187,51,98,193,168,20,202,83,211,
    226,135,254,174,225,97,83,49,214,22,202,226,63,151,115,146,
    20,
};

EmbeddedPython embedded_m5_internal_param_SimpleNetwork(
    "m5/internal/param_SimpleNetwork.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_SimpleNetwork.py",
    "m5.internal.param_SimpleNetwork",
    data_m5_internal_param_SimpleNetwork,
    2641,
    8242);

} // anonymous namespace
