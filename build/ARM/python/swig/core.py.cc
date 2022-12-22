#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_core[] = {
    120,156,189,89,205,115,20,199,21,127,51,251,33,118,37,33,
    9,161,15,64,192,2,6,22,12,18,73,236,144,42,19,108,
    125,65,225,24,137,140,228,128,215,174,76,70,211,189,210,72,
    179,51,235,153,94,208,186,164,170,84,68,57,174,84,114,204,
    49,135,28,124,240,33,135,28,114,200,33,135,252,7,249,143,
    146,247,94,207,204,174,36,112,97,118,43,146,182,213,243,166,
    63,94,191,247,235,223,123,221,235,66,242,83,192,207,71,21,
    128,248,59,19,64,224,159,1,62,64,195,128,154,1,134,52,
    64,92,130,157,2,68,239,129,40,192,75,128,154,9,210,132,
    3,172,228,224,115,19,130,33,238,83,4,63,199,18,3,218,
    101,144,121,168,21,224,105,48,6,121,89,132,157,50,68,191,
    1,195,48,2,3,158,137,1,16,39,224,37,142,142,149,18,
    15,120,2,72,88,102,97,9,196,32,11,203,32,134,184,50,
    8,237,81,144,67,80,27,166,102,181,147,56,236,77,28,118,
    132,135,253,15,13,43,240,205,101,16,39,169,57,234,245,25,
    181,204,83,75,158,111,132,71,25,5,193,163,212,113,61,99,
    89,195,49,144,57,216,62,5,181,83,32,241,111,12,14,104,
    201,40,26,135,218,56,200,113,216,62,13,181,211,32,78,241,
    24,19,220,122,130,42,98,156,37,147,44,153,164,138,56,205,
    146,41,150,76,81,69,76,164,19,78,102,19,78,243,235,51,
    80,59,3,18,255,166,245,132,56,207,89,168,157,229,9,207,
    65,237,28,87,102,160,54,195,149,243,80,59,207,149,11,80,
    187,192,253,47,82,153,170,90,129,90,133,165,151,186,165,151,
    161,134,38,153,98,157,174,240,235,43,84,17,211,44,121,135,
    37,239,80,69,156,97,201,85,150,92,165,138,56,203,146,107,
    44,185,70,21,113,142,37,215,89,114,157,42,98,134,37,85,
    150,84,169,34,206,179,228,6,75,110,80,69,92,96,201,77,
    150,220,164,138,184,200,146,119,89,242,46,85,68,133,37,183,
    88,114,139,43,184,208,219,80,187,205,149,89,168,205,114,101,
    14,106,115,92,185,3,181,59,132,182,181,234,21,132,173,247,
    95,252,169,26,88,83,67,88,60,151,81,236,133,129,237,5,
    245,208,51,233,125,145,10,2,185,75,197,64,130,246,69,70,
    59,48,212,133,153,160,125,31,192,160,103,0,223,132,125,174,
    236,155,208,174,194,158,1,219,121,16,57,216,195,105,10,100,
    225,77,3,14,76,248,34,71,13,246,177,204,35,38,47,64,
    94,105,168,111,51,38,245,72,3,176,95,128,189,2,172,61,
    219,51,73,176,83,130,232,91,248,106,134,7,61,193,131,154,
    176,135,101,30,14,242,176,95,132,167,216,8,69,219,37,194,
    139,241,108,15,87,138,146,181,106,30,181,93,233,90,46,45,
    69,120,81,224,52,164,162,37,217,110,24,201,106,57,125,21,
    198,179,77,71,109,89,220,54,71,70,104,52,21,143,17,6,
    82,13,98,165,238,5,194,110,132,162,229,75,117,130,6,176,
    235,158,47,109,155,95,62,106,52,195,72,45,71,81,24,89,
    100,71,22,250,161,147,245,160,41,93,63,140,101,149,102,227,
    105,44,26,94,81,235,122,147,71,36,5,88,63,234,44,100,
    236,70,94,83,161,123,244,136,212,154,70,171,146,99,184,136,
    239,96,49,183,21,54,228,92,221,113,91,190,106,207,109,202,
    198,251,115,27,45,207,23,115,243,214,227,185,102,91,109,133,
    193,92,252,194,219,156,163,245,206,162,224,20,245,68,129,237,
    177,206,246,150,244,155,50,26,38,233,89,26,213,24,53,134,
    140,162,145,51,170,198,48,214,10,248,201,25,51,230,160,177,
    226,145,214,46,173,132,80,146,239,198,5,57,203,128,29,19,
    162,25,242,250,54,254,25,228,38,244,253,26,189,51,249,221,
    47,105,185,90,186,157,35,95,106,225,30,35,5,33,131,45,
    239,145,243,2,96,119,23,96,187,8,26,6,136,30,141,139,
    168,77,37,54,167,97,76,28,60,15,241,159,1,205,135,0,
    216,131,4,28,7,57,48,130,81,80,101,162,53,148,78,226,
    132,191,99,124,173,85,73,253,21,118,185,218,242,226,240,69,
    192,134,165,58,239,136,53,180,204,147,246,234,198,182,116,85,
    124,17,5,159,133,173,138,235,4,65,168,42,142,16,21,71,
    169,200,219,104,41,25,87,84,88,185,26,87,201,87,214,88,
    138,154,108,188,118,51,69,9,121,20,81,162,31,132,231,42,
    124,24,231,7,246,66,44,21,122,124,43,20,49,202,105,136,
    77,169,44,82,82,145,145,67,86,132,1,97,83,83,154,30,
    219,157,196,231,249,84,19,70,93,181,152,98,36,150,126,93,
    149,25,110,78,28,219,172,9,201,51,228,63,119,252,150,228,
    209,99,28,15,21,162,170,214,161,87,108,77,147,158,233,178,
    88,215,32,12,68,27,167,246,220,235,52,234,52,35,108,136,
    49,54,129,248,26,192,178,136,255,139,198,164,233,230,19,84,
    21,83,100,77,210,154,128,253,106,36,174,69,148,29,32,59,
    84,77,222,222,172,46,239,165,203,84,163,206,214,12,21,231,
    169,184,64,197,197,116,69,61,44,107,248,232,178,238,210,80,
    38,175,133,181,38,179,230,82,173,197,161,253,112,166,179,31,
    144,160,214,8,215,38,161,191,131,235,60,145,89,116,159,74,
    108,202,59,38,7,241,58,81,39,225,159,7,35,168,35,104,
    169,214,129,50,219,192,26,165,181,157,72,81,104,17,180,186,
    241,181,217,133,47,139,204,207,224,178,206,164,36,101,83,11,
    13,43,235,28,13,85,120,133,17,43,84,92,234,131,37,59,
    0,217,60,6,144,15,104,212,209,4,32,195,12,140,50,126,
    70,77,55,151,152,55,11,69,227,71,128,65,168,200,191,2,
    21,215,168,150,59,190,160,254,1,34,89,198,131,46,64,208,
    204,102,183,182,43,88,105,79,145,146,221,80,152,194,144,249,
    52,152,194,40,104,114,20,188,195,81,144,35,41,167,97,154,
    20,115,204,139,186,82,160,213,214,115,48,153,68,183,184,132,
    101,51,10,119,219,149,176,94,81,188,28,226,176,123,87,227,
    217,171,241,7,200,78,149,251,204,11,154,159,52,3,69,178,
    73,12,66,93,151,119,93,201,1,134,159,108,91,19,134,205,
    228,97,39,129,11,81,49,65,182,50,83,35,50,117,198,42,
    34,198,236,213,140,229,204,140,164,213,199,52,78,153,109,152,
    51,166,16,1,101,131,39,179,53,9,114,66,194,111,241,179,
    64,118,165,5,73,160,172,219,90,211,170,176,150,164,175,117,
    235,144,151,223,94,71,107,14,59,125,154,122,183,216,241,46,
    125,114,41,22,127,15,156,182,26,240,53,144,255,208,77,9,
    22,51,232,146,195,198,169,249,175,129,65,251,138,104,201,123,
    123,141,34,36,183,192,45,31,223,229,166,58,120,126,12,223,
    116,33,62,13,113,185,36,207,234,14,113,249,140,23,216,241,
    111,20,198,242,135,9,132,236,190,229,196,212,76,179,66,103,
    19,117,88,53,203,149,144,21,123,64,193,9,61,130,77,147,
    125,209,193,0,5,137,115,198,184,217,229,217,31,81,241,227,
    204,169,70,42,123,187,121,47,194,235,131,149,173,57,243,115,
    26,60,207,234,140,12,112,156,92,108,187,62,102,102,41,22,
    11,41,22,151,50,44,74,38,246,151,156,43,83,105,146,135,
    14,76,3,207,122,250,148,135,57,9,165,240,69,144,3,148,
    210,210,9,174,144,156,224,16,199,52,9,131,44,253,48,133,
    16,225,28,138,35,188,248,21,109,150,204,109,218,35,84,236,
    246,186,53,201,41,247,124,167,177,33,156,251,155,52,10,13,
    229,166,192,55,83,189,70,187,245,34,208,26,175,83,141,31,
    223,79,245,123,222,235,182,252,41,118,202,244,98,16,138,208,
    229,189,184,190,37,43,13,217,216,192,163,205,150,215,172,212,
    125,103,147,237,153,6,144,135,169,187,84,170,244,31,245,193,
    229,52,175,36,13,206,116,46,124,26,156,69,122,206,51,61,
    127,72,244,188,199,155,211,54,53,67,119,220,192,49,147,179,
    116,194,110,32,95,216,26,39,154,120,201,165,78,179,41,3,
    97,221,60,180,151,56,47,115,162,77,221,174,31,46,179,241,
    40,231,97,134,185,221,217,71,35,200,166,167,145,77,143,131,
    138,102,239,90,4,111,167,66,182,177,102,122,87,137,189,244,
    101,234,37,157,42,103,236,204,73,172,222,127,24,195,240,8,
    162,218,154,179,102,169,184,65,197,189,204,172,132,127,33,241,
    28,37,19,203,170,81,200,82,28,60,42,169,40,108,99,228,
    226,112,129,207,190,109,247,133,252,223,195,78,245,212,148,69,
    164,163,162,89,42,150,58,166,204,246,193,112,7,79,112,108,
    19,100,192,136,194,198,99,207,141,194,39,139,29,238,108,53,
    221,94,181,156,167,13,15,135,19,144,31,168,29,181,8,194,
    168,225,248,221,10,90,11,125,176,225,162,166,136,94,180,163,
    164,198,139,173,195,214,235,139,114,196,3,191,237,40,167,70,
    128,14,86,33,70,128,213,230,131,86,224,170,48,58,206,245,
    143,225,13,184,62,97,249,60,200,2,113,125,66,241,3,32,
    249,168,74,183,117,197,228,182,14,73,159,112,219,19,233,51,
    179,246,99,183,190,132,126,114,189,117,183,223,106,89,63,131,
    36,231,250,62,158,39,5,86,83,157,21,187,231,232,185,41,
    38,42,94,9,43,110,24,32,123,180,200,211,21,33,235,94,
    32,69,229,118,133,83,225,138,23,87,156,13,124,235,184,74,
    91,249,72,42,68,39,22,102,247,157,23,196,226,189,46,148,
    232,238,235,174,157,146,165,153,221,30,200,118,138,78,17,143,
    111,150,233,227,16,182,49,183,119,124,34,197,78,26,79,221,
    154,253,9,57,122,236,63,188,98,143,255,159,67,205,159,82,
    148,84,137,49,58,161,198,250,57,21,28,92,56,164,116,34,
    204,163,204,108,116,215,144,68,152,35,214,179,62,164,70,31,
    29,210,177,7,69,151,129,175,182,245,81,13,99,138,89,50,
    49,170,152,111,23,85,104,12,204,94,87,91,170,217,82,75,
    94,212,137,43,2,31,122,212,244,23,216,233,47,93,94,133,
    228,39,243,106,57,211,239,40,59,117,130,118,184,188,235,169,
    69,95,58,65,171,217,23,251,17,251,254,181,7,173,198,217,
    56,177,179,225,203,121,223,255,196,139,149,12,144,67,250,162,
    27,157,244,191,237,65,55,162,80,63,213,104,73,43,41,250,
    162,217,42,118,250,14,142,239,208,31,152,193,196,82,10,203,
    9,68,216,208,72,203,39,178,94,213,123,130,157,254,214,155,
    122,99,122,43,44,250,161,187,243,32,146,95,182,100,224,182,
    181,150,148,105,42,207,221,137,159,200,104,77,34,227,247,172,
    175,133,157,254,222,131,163,57,224,183,162,117,84,170,47,238,
    93,199,78,255,232,205,126,154,74,34,207,241,189,175,104,103,
    116,190,54,113,155,202,238,3,157,208,45,202,63,123,211,145,
    90,108,162,143,183,164,187,211,12,189,32,9,203,191,234,131,
    5,159,98,167,127,245,166,29,125,179,210,10,50,27,62,244,
    195,13,199,143,181,29,77,182,99,175,74,62,195,78,255,238,
    40,201,169,200,145,239,237,244,20,116,43,162,175,102,218,49,
    97,21,172,145,76,77,254,170,41,61,113,81,100,228,235,191,
    21,167,161,191,73,224,171,116,139,190,44,228,235,83,139,238,
    237,117,196,164,59,99,190,15,211,247,133,120,204,229,52,137,
    179,34,235,39,84,208,121,137,9,86,31,210,248,120,22,201,
    77,98,180,136,185,194,125,238,68,140,169,199,206,46,129,159,
    207,46,124,68,224,84,156,131,163,162,116,224,104,6,115,104,
    36,114,69,114,20,192,67,193,130,167,210,33,231,133,136,56,
    135,127,20,60,71,31,136,245,173,72,58,226,209,18,159,22,
    19,217,98,24,40,185,171,80,56,220,17,62,9,35,146,208,
    149,208,130,183,185,28,8,207,9,22,218,74,174,70,66,234,
    201,57,79,116,2,197,94,62,222,70,145,213,62,65,77,124,
    249,189,189,39,94,215,140,163,45,7,55,142,34,76,216,76,
    139,204,53,188,193,121,7,49,80,25,8,124,125,239,134,141,
    166,231,203,37,71,73,38,104,74,131,237,165,229,133,79,31,
    234,47,45,233,113,69,63,143,164,207,235,214,252,226,163,149,
    135,246,234,74,63,184,71,95,21,233,219,226,251,52,103,76,
    153,32,125,193,83,26,41,225,129,153,190,62,204,25,101,99,
    216,200,231,134,70,75,249,161,193,82,190,52,144,227,219,253,
    97,99,220,44,231,75,131,147,67,37,124,42,25,165,92,201,
    204,126,141,201,193,68,170,127,115,195,70,201,164,207,27,255,
    114,191,255,1,246,89,174,9,
};

EmbeddedPython embedded_m5_internal_core(
    "m5/internal/core.py",
    "/home/faculty/gem5/build/ARM/python/swig/core.py",
    "m5.internal.core",
    data_m5_internal_core,
    2824,
    8631);

} // anonymous namespace