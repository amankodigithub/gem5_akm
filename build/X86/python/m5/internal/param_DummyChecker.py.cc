#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DummyChecker[] = {
    120,156,189,88,91,115,219,198,21,62,11,144,148,72,73,182,
    108,249,110,217,162,157,56,102,220,68,74,28,223,26,187,110,
    125,235,140,51,177,162,130,206,216,81,50,69,33,96,37,129,
    2,1,14,0,90,102,70,122,169,60,109,58,125,74,103,50,
    211,183,62,245,161,255,166,207,253,51,237,57,103,1,112,197,
    75,38,51,49,43,147,235,195,197,238,217,115,249,206,101,225,
    66,246,87,198,239,111,234,0,201,127,12,0,15,63,2,2,
    128,182,128,117,1,66,10,240,78,192,78,25,226,27,224,149,
    225,13,192,186,1,210,128,3,36,76,248,218,128,112,150,247,
    84,32,48,121,70,64,175,6,178,4,235,101,120,17,30,131,
    146,172,192,78,13,226,63,128,16,34,20,240,210,155,2,111,
    26,222,32,119,36,170,204,112,26,104,178,198,147,85,240,102,
    120,178,6,222,44,19,51,208,155,7,57,11,235,115,180,108,
    253,8,178,189,134,108,143,50,219,127,19,91,15,159,156,4,
    239,8,45,71,185,190,162,149,37,90,201,231,29,101,46,243,
    185,148,199,96,253,120,78,47,104,244,9,141,62,169,209,167,
    52,250,180,70,159,209,232,179,26,125,78,163,207,107,244,162,
    70,95,208,232,139,26,189,164,209,117,141,190,164,209,151,53,
    250,29,141,126,87,163,175,104,244,123,26,125,85,163,27,26,
    253,190,70,95,211,232,95,104,244,7,26,253,161,70,47,107,
    244,138,70,127,164,209,31,107,244,117,141,254,132,105,244,238,
    113,104,221,128,214,77,104,221,130,77,4,220,177,194,147,183,
    65,154,208,186,3,235,119,64,226,231,54,28,32,38,189,227,
    218,142,95,242,142,133,98,199,167,188,227,46,172,223,5,137,
    159,79,213,142,10,52,27,167,16,231,254,127,241,175,33,144,
    74,103,113,120,37,227,196,143,66,219,15,55,35,223,160,231,
    21,26,40,42,92,26,166,178,240,120,68,225,241,47,224,216,
    240,140,44,60,246,1,25,11,210,37,48,96,159,137,125,3,
    122,13,216,19,208,42,129,103,194,30,30,83,38,1,182,4,
    28,24,240,141,73,11,246,113,44,33,136,47,66,41,85,177,
    209,98,16,43,78,83,176,95,134,189,50,52,95,238,25,52,
    177,83,133,248,159,240,237,34,51,157,102,166,6,236,225,88,
    130,131,18,236,87,224,5,46,194,169,86,149,212,23,47,247,
    80,83,156,105,54,74,40,237,170,166,46,169,226,249,113,232,
    180,101,186,128,180,221,113,98,167,109,63,238,182,219,189,71,
    219,210,221,145,113,163,150,47,140,146,229,142,147,110,91,188,
    211,36,147,180,59,41,115,140,66,153,206,32,177,233,135,158,
    221,142,188,110,32,211,105,98,103,111,250,129,180,109,126,248,
    180,221,137,226,244,73,28,71,177,69,86,229,201,32,114,138,
    29,100,83,55,136,18,217,160,211,248,24,139,216,167,180,122,
    179,195,28,73,0,150,150,54,123,50,113,99,191,147,162,179,
    20,71,90,77,220,26,228,38,30,146,39,56,172,108,71,109,
    185,178,233,184,221,32,237,173,108,201,246,205,149,141,174,31,
    120,43,47,239,220,90,233,244,210,237,40,92,193,57,63,76,
    37,154,34,88,25,54,194,50,174,58,78,236,118,253,45,219,
    103,69,236,109,25,116,100,60,71,179,231,232,40,49,47,102,
    69,69,152,162,33,230,144,42,227,215,20,139,198,140,88,245,
    73,21,151,212,35,32,149,116,232,144,63,5,236,24,16,47,
    18,48,90,248,17,228,73,132,71,147,158,25,252,236,119,100,
    3,53,219,50,201,221,106,114,143,193,132,168,194,149,247,200,
    191,33,48,34,202,208,170,128,66,10,2,76,65,39,238,209,
    136,203,137,141,129,204,75,144,252,0,104,83,196,200,30,100,
    248,57,48,65,132,243,144,214,40,85,226,236,41,60,240,143,
    12,193,102,131,196,95,101,28,164,219,126,18,237,134,108,109,
    162,57,104,154,104,153,181,222,23,27,45,233,166,201,18,78,
    124,21,117,235,174,19,134,81,90,119,60,175,238,164,105,236,
    111,116,83,153,212,211,168,126,37,105,144,3,173,99,57,148,
    10,126,189,78,14,29,114,51,66,71,253,240,124,55,197,31,
    140,81,155,189,144,200,20,97,176,29,121,9,206,19,139,45,
    153,90,36,100,74,70,142,88,16,70,137,77,75,233,120,92,
    119,4,127,63,200,37,97,40,54,42,57,112,18,25,108,166,
    53,198,160,147,36,54,75,66,243,12,55,98,252,202,9,186,
    146,185,39,200,15,5,34,82,201,48,17,192,157,33,225,115,
    93,89,129,48,10,189,30,202,227,187,87,233,168,51,12,187,
    89,6,222,73,4,221,20,142,21,252,191,34,78,25,110,41,
    131,90,37,135,27,101,186,20,216,217,34,243,55,66,239,0,
    179,74,195,224,180,192,58,112,212,93,38,138,54,91,139,52,
    92,160,225,34,13,75,185,154,111,91,215,185,65,93,111,19,
    127,131,21,100,85,200,1,102,174,138,119,40,114,206,246,35,
    7,179,93,147,34,192,160,56,233,71,64,137,50,99,124,159,
    70,92,202,177,101,66,242,156,242,48,69,10,51,163,160,64,
    120,19,213,7,61,27,198,154,39,133,167,115,188,90,4,66,
    29,137,91,26,18,45,242,9,195,208,58,155,231,56,155,86,
    40,0,90,231,137,85,121,132,101,235,52,92,154,148,121,251,
    80,218,26,130,210,93,58,106,62,131,210,28,67,168,134,223,
    121,195,53,51,155,23,197,110,97,0,66,132,159,210,8,252,
    188,71,148,57,172,229,132,161,147,233,246,91,13,58,36,142,
    161,171,176,138,68,239,52,73,174,131,230,52,86,234,23,225,
    105,44,190,6,23,223,143,184,248,114,1,231,118,81,37,90,
    147,115,173,34,202,100,130,77,19,78,101,69,53,169,226,216,
    137,163,215,189,122,180,89,79,89,71,202,139,247,174,36,203,
    87,146,187,152,241,234,247,57,215,168,156,167,178,90,44,59,
    148,149,104,235,147,215,174,228,74,198,191,108,91,37,33,155,
    19,146,157,85,72,196,207,73,50,160,145,91,150,211,113,146,
    198,148,133,39,98,219,90,97,91,18,245,51,98,94,99,195,
    154,226,52,98,165,38,88,2,91,101,91,110,142,248,41,126,
    31,146,177,73,75,9,116,101,176,154,74,62,22,157,148,176,
    62,56,132,135,183,44,184,181,130,156,190,204,113,80,233,227,
    128,190,102,14,229,63,3,183,137,2,254,4,228,105,116,104,
    6,229,2,249,228,218,5,90,254,123,96,204,143,168,213,156,
    47,154,84,159,121,5,166,145,228,54,47,85,165,251,51,248,
    78,11,152,188,192,154,89,35,168,23,216,82,145,107,24,34,
    63,169,136,150,14,39,37,114,198,182,147,208,50,149,105,250,
    49,216,79,223,69,251,134,153,246,109,227,101,90,177,181,73,
    130,111,250,104,161,18,117,94,44,24,26,6,62,166,225,122,
    225,126,145,207,189,69,97,150,96,124,253,180,85,198,254,154,
    78,44,177,140,71,167,184,143,209,153,20,128,46,231,128,190,
    94,0,90,114,113,121,195,205,63,141,6,121,244,192,16,120,
    219,197,222,137,46,151,37,144,101,88,175,16,244,185,179,21,
    89,100,136,60,21,81,226,58,84,185,216,10,171,202,62,133,
    83,149,191,104,120,61,145,16,39,151,221,11,156,246,134,231,
    220,255,11,177,38,254,110,30,43,70,46,236,188,46,44,225,
    92,140,147,151,127,222,204,133,126,53,145,240,190,133,156,10,
    97,25,204,94,228,114,76,63,223,150,245,182,108,111,224,29,
    110,219,239,212,55,3,103,139,45,111,102,202,124,145,43,147,
    178,235,6,107,125,114,141,198,168,238,70,33,230,213,174,155,
    70,113,221,147,120,175,145,94,253,195,58,39,229,186,159,212,
    157,13,124,234,184,169,194,237,225,80,227,166,209,137,183,18,
    238,15,119,118,137,156,152,231,108,188,165,250,216,25,255,21,
    138,154,167,110,79,69,142,229,158,87,133,1,150,39,188,177,
    164,61,149,100,168,238,91,203,52,188,15,147,76,197,55,144,
    211,119,196,146,204,81,17,231,141,170,193,119,41,125,221,26,
    237,76,134,227,237,217,79,137,55,245,94,41,139,186,74,254,
    66,106,10,36,95,110,232,157,81,37,123,103,132,161,56,245,
    115,67,145,161,61,49,80,255,237,173,70,160,117,251,255,34,
    171,117,7,178,138,58,46,250,132,174,200,156,138,190,150,200,
    155,113,93,11,190,199,159,29,9,15,219,141,165,147,74,229,
    133,197,9,105,198,65,171,14,250,161,31,83,195,125,228,131,
    66,137,3,110,30,122,39,216,57,234,226,193,206,17,47,194,
    115,216,80,150,184,161,188,71,13,229,30,107,108,27,170,167,
    236,163,172,92,40,78,119,180,80,238,218,195,202,171,182,145,
    132,115,58,29,25,122,214,53,208,59,65,126,60,17,79,83,
    154,248,59,104,165,220,20,39,176,245,27,142,33,74,123,154,
    82,236,165,114,17,53,147,242,23,35,241,31,57,18,27,84,
    194,251,185,207,186,71,3,103,187,34,209,89,191,134,60,249,
    21,88,243,100,32,83,57,194,234,41,237,205,174,121,158,196,
    156,31,245,176,39,231,158,23,127,7,182,61,185,180,249,43,
    228,244,61,100,183,8,76,155,162,98,84,205,106,165,42,184,
    210,12,188,151,84,18,144,182,170,179,235,37,22,7,230,209,
    66,77,126,121,150,231,127,94,72,247,140,85,167,173,94,131,
    240,149,223,122,7,178,203,155,117,181,176,25,217,135,219,105,
    117,49,65,116,114,21,228,162,103,125,66,243,228,218,246,205,
    229,92,159,101,165,79,166,202,163,181,47,249,253,93,251,38,
    91,122,120,221,67,39,145,180,232,204,200,167,104,178,231,159,
    63,76,223,29,247,112,205,161,75,223,70,32,95,56,1,158,
    54,134,75,179,151,164,178,157,158,31,120,40,195,110,219,126,
    38,219,81,220,123,22,121,114,72,145,7,158,23,91,78,184,
    37,237,87,146,58,129,244,210,224,130,172,13,80,60,242,85,
    245,145,50,28,94,59,36,139,90,132,15,213,43,52,110,94,
    71,24,53,136,208,168,94,182,230,194,248,53,143,163,182,131,
    243,163,79,105,250,249,41,199,6,158,123,49,237,58,57,48,
    155,200,216,119,2,255,91,57,228,66,182,224,218,110,220,196,
    254,122,216,126,234,180,181,104,87,198,100,223,32,189,60,176,
    160,255,136,25,140,51,243,32,31,117,218,24,221,186,27,153,
    183,71,91,16,43,84,220,118,130,204,62,131,18,23,150,201,
    69,185,248,99,76,148,82,227,97,77,200,29,148,2,49,251,
    121,228,58,193,131,14,94,66,126,244,16,125,229,24,76,225,
    33,190,187,230,71,143,229,43,223,29,103,145,254,243,65,73,
    241,132,167,205,7,185,20,99,3,16,215,164,231,6,30,62,
    138,186,68,230,123,71,123,254,41,246,208,207,17,243,24,151,
    131,251,215,226,200,149,73,146,239,31,109,195,108,17,231,174,
    252,17,103,228,161,12,67,181,169,255,147,91,206,161,38,130,
    179,120,44,183,124,68,71,204,108,250,59,178,26,75,57,151,
    61,54,162,249,208,119,79,44,235,171,219,152,122,219,115,159,
    222,29,38,216,48,0,189,223,173,30,173,98,5,160,234,107,
    138,26,214,223,146,57,59,95,45,205,206,84,75,213,41,147,
    95,217,205,225,5,187,86,170,206,204,138,159,255,111,9,235,
    76,205,88,194,51,255,7,8,0,203,141,
};

EmbeddedPython embedded_m5_internal_param_DummyChecker(
    "m5/internal/param_DummyChecker.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_DummyChecker.py",
    "m5.internal.param_DummyChecker",
    data_m5_internal_param_DummyChecker,
    2523,
    7697);

} // anonymous namespace
