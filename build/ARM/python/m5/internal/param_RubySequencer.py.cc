#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubySequencer[] = {
    120,156,189,89,221,115,219,198,17,223,3,72,74,164,36,75,
    214,167,45,203,22,109,199,49,237,198,146,157,198,117,103,226,
    186,117,221,100,166,153,177,162,130,233,216,81,50,69,33,224,
    36,66,2,1,22,56,90,102,70,106,167,85,166,205,76,159,
    211,183,62,246,161,255,77,255,153,62,183,187,123,0,8,73,
    164,63,166,102,37,242,180,216,91,236,237,222,254,110,111,239,
    228,66,250,83,198,239,207,234,0,201,182,1,224,225,71,64,
    0,208,22,176,37,64,72,1,222,60,236,151,33,254,8,188,
    50,124,11,176,101,128,52,224,24,9,19,190,50,32,156,228,
    119,42,16,152,204,17,208,171,129,44,193,86,25,158,133,231,
    161,36,43,176,95,131,248,183,32,132,8,5,60,247,198,192,
    27,135,111,81,59,18,85,86,56,14,196,172,49,179,10,222,
    4,51,107,224,77,50,49,1,189,25,144,147,176,53,69,98,
    91,231,80,237,109,84,59,205,106,255,69,106,61,236,89,0,
    239,28,137,163,93,95,146,100,137,36,121,188,105,214,50,147,
    89,121,30,182,102,51,122,174,64,207,23,232,133,2,189,88,
    160,151,10,244,133,2,125,177,64,47,23,232,75,5,122,165,
    64,95,46,208,87,10,244,106,129,174,23,232,171,5,250,90,
    129,190,94,160,223,43,208,55,10,244,251,5,250,102,129,110,
    20,232,91,76,227,44,207,194,222,109,216,251,1,236,125,0,
    59,24,248,243,249,140,222,1,105,194,222,26,108,173,129,196,
    207,29,56,70,108,120,179,133,55,214,249,141,185,252,141,187,
    252,198,61,216,186,7,18,63,119,245,27,21,104,54,22,17,
    111,254,127,240,167,33,144,82,147,216,188,144,113,226,71,161,
    237,135,59,145,111,80,127,133,26,66,167,75,205,88,10,211,
    39,4,211,127,2,99,212,51,82,152,30,1,42,22,228,75,
    96,192,17,19,71,6,244,26,112,40,96,175,4,158,9,135,
    56,76,153,12,216,21,112,108,192,215,38,9,28,97,91,66,
    48,93,129,146,210,24,221,99,48,105,77,99,112,84,134,195,
    50,52,159,31,26,196,216,175,66,252,15,248,102,133,149,142,
    179,82,3,14,177,45,193,113,9,142,42,240,12,133,144,181,
    87,37,247,197,243,67,244,20,57,205,70,9,173,221,40,184,
    75,174,120,126,28,58,109,169,230,145,182,59,78,236,180,109,
    171,187,221,107,202,223,117,101,232,202,184,81,203,36,163,100,
    173,227,168,150,197,175,154,52,39,237,142,98,149,81,40,213,
    4,18,59,126,232,217,237,200,235,6,82,141,147,62,123,199,
    15,164,109,115,231,47,219,157,40,86,159,196,113,20,91,52,
    173,204,12,34,39,127,131,38,213,13,162,68,54,104,52,30,
    198,34,245,138,164,119,58,172,145,12,96,115,233,101,79,38,
    110,236,119,20,70,75,107,36,105,210,214,160,56,113,147,124,
    138,205,122,43,106,203,245,29,199,237,6,170,183,190,43,219,
    247,215,183,187,126,224,173,63,182,158,174,119,122,170,21,133,
    235,200,243,67,37,113,46,130,245,1,179,176,134,98,179,164,
    239,192,223,181,125,246,196,110,201,160,35,227,41,226,46,211,
    88,98,70,76,138,138,48,69,67,76,33,85,198,175,41,86,
    140,9,177,225,147,47,46,249,71,80,42,21,193,67,17,21,
    176,111,64,188,66,208,216,195,143,160,88,34,64,154,212,103,
    112,223,175,104,18,52,119,207,164,128,107,230,33,195,9,113,
    133,146,15,41,194,33,48,38,202,176,87,1,141,21,132,152,
    6,79,220,163,22,197,73,141,129,202,75,144,124,15,56,169,
    136,146,67,72,17,116,108,130,8,103,64,213,40,105,33,119,
    17,7,252,19,131,176,217,32,243,55,24,8,170,229,39,209,
    65,200,211,77,52,47,155,38,206,204,102,239,243,237,61,233,
    170,100,21,25,95,70,221,186,235,132,97,164,234,142,231,213,
    29,165,98,127,187,171,100,82,87,81,253,70,210,160,8,90,
    231,51,44,229,250,122,157,12,59,20,103,196,142,126,240,124,
    87,225,195,28,63,112,20,18,169,16,7,173,200,75,144,79,
    42,118,165,178,200,72,69,147,28,177,33,12,19,155,68,105,
    120,148,59,135,207,143,51,75,24,139,141,74,134,156,68,6,
    59,170,198,32,116,146,196,102,75,136,207,120,35,197,47,156,
    160,43,89,123,130,250,208,32,34,181,13,163,65,220,5,178,
    62,115,150,61,8,163,208,235,161,65,190,123,147,198,186,192,
    184,155,100,228,45,32,234,198,176,173,224,223,138,88,52,220,
    82,138,181,74,134,55,74,118,10,56,218,34,13,56,98,239,
    24,19,75,195,224,204,192,78,240,186,187,70,20,189,108,173,
    80,115,153,154,43,212,172,102,126,190,115,103,167,78,59,251,
    128,6,48,216,67,246,133,66,96,102,190,120,39,214,206,197,
    254,218,193,140,215,164,53,96,208,74,233,175,129,18,101,199,
    248,17,181,40,202,171,203,132,228,11,202,197,180,86,88,25,
    45,11,4,56,81,125,216,243,204,88,51,228,241,120,134,88,
    139,96,88,196,226,110,1,139,22,5,133,129,104,93,204,210,
    156,77,18,26,130,214,37,82,85,30,48,181,117,106,174,142,
    108,126,251,96,218,61,3,166,143,105,172,153,20,76,83,12,
    162,26,126,103,12,215,76,39,61,223,241,230,78,129,136,16,
    84,26,128,160,247,137,50,207,186,57,106,240,164,206,125,90,
    0,15,217,99,20,125,216,64,162,183,68,166,23,97,179,132,
    251,245,179,112,9,183,96,131,183,224,187,188,5,243,54,206,
    197,155,78,182,38,231,91,77,148,105,14,118,76,88,76,183,
    214,164,138,109,39,142,94,246,234,209,78,93,177,147,148,27,
    31,222,72,214,110,36,31,99,214,171,63,226,124,163,243,158,
    206,108,177,236,80,102,162,87,63,121,233,74,222,206,248,201,
    182,117,34,178,57,41,217,233,54,137,8,90,160,25,52,178,
    169,229,148,156,168,152,50,241,104,38,183,150,79,46,217,250,
    25,105,175,241,204,154,98,9,209,82,19,108,130,173,83,46,
    215,72,220,139,223,159,211,108,147,155,18,168,130,183,154,218,
    64,182,157,188,176,62,56,129,136,119,109,185,181,142,170,126,
    157,33,161,210,71,2,125,205,12,205,127,1,46,23,5,252,
    25,40,214,24,210,20,205,57,248,41,184,115,36,254,27,96,
    216,15,216,177,57,103,52,105,151,102,9,76,37,201,3,22,
    213,27,248,103,240,93,97,205,100,219,172,153,22,132,197,109,
    182,148,231,27,6,201,27,109,165,165,147,137,137,162,209,114,
    18,18,211,217,166,191,12,251,57,60,175,226,48,219,190,115,
    196,140,107,189,54,153,240,117,31,47,180,81,93,18,115,70,
    1,5,247,168,249,48,7,128,200,120,239,210,154,85,24,190,
    141,218,58,111,127,69,67,150,216,200,233,49,94,125,185,134,
    28,208,229,12,208,31,230,128,150,188,191,124,203,103,0,106,
    13,10,232,177,33,240,240,137,5,20,157,245,74,32,203,176,
    85,33,232,115,125,43,210,149,33,178,92,68,153,235,196,230,
    197,115,176,161,103,39,143,169,14,23,53,47,71,179,198,41,
    98,15,3,167,189,237,57,143,254,64,186,105,0,55,91,43,
    70,102,237,76,209,90,194,185,24,102,48,63,222,207,172,126,
    49,154,245,253,35,84,149,91,203,104,246,34,151,23,245,23,
    45,89,111,203,246,54,30,230,90,126,167,190,19,56,187,60,
    247,102,234,205,231,153,55,138,131,119,122,195,79,110,83,27,
    213,221,40,196,212,218,117,85,20,215,61,137,231,27,233,213,
    239,212,57,47,215,253,164,238,108,99,175,227,42,141,219,147,
    107,141,107,71,39,222,77,184,76,220,63,32,114,116,177,179,
    241,188,234,99,133,252,71,200,247,61,125,140,202,211,44,215,
    190,122,25,224,22,133,39,23,213,211,105,134,54,127,107,141,
    154,91,48,210,108,252,17,170,250,61,233,164,9,169,136,75,
    70,213,224,34,234,132,224,38,189,155,156,93,116,255,126,147,
    69,167,239,122,210,165,87,33,73,57,70,71,100,106,171,148,
    148,183,106,25,115,130,219,73,102,78,101,204,115,220,78,51,
    115,38,99,158,231,118,150,153,115,25,115,158,219,5,102,46,
    102,204,37,110,47,48,243,98,198,92,230,246,18,51,87,50,
    230,101,110,175,48,115,53,187,204,170,51,243,42,108,93,163,
    155,16,226,92,167,188,49,246,191,230,13,94,134,163,91,128,
    223,189,211,116,97,61,248,255,24,107,253,24,210,253,127,88,
    170,16,69,79,166,116,170,216,19,217,241,161,232,6,95,62,
    44,15,70,178,237,198,210,81,82,7,98,101,84,190,113,142,
    209,35,253,181,159,1,206,86,190,143,115,55,142,185,216,233,
    205,115,124,244,97,137,227,35,158,133,203,88,2,151,184,4,
    126,72,37,240,33,251,108,27,186,10,238,35,173,156,187,190,
    132,77,40,15,236,1,238,235,74,151,172,115,58,29,25,122,
    214,109,40,22,175,220,61,154,104,83,90,251,27,20,106,15,
    83,204,99,181,122,118,37,81,158,46,184,197,129,42,231,107,
    103,100,33,99,56,254,61,131,99,227,61,40,38,107,235,33,
    53,156,158,243,204,108,253,52,159,240,43,195,176,22,197,210,
    247,232,12,244,58,17,172,132,52,102,248,113,168,180,231,58,
    110,75,190,82,97,42,146,41,212,143,234,246,171,165,91,184,
    87,5,8,214,208,237,177,242,183,16,167,129,102,243,129,138,
    93,195,181,72,199,11,34,119,223,86,173,88,38,173,40,240,
    94,61,232,89,241,124,208,51,93,234,214,16,45,187,78,28,
    98,9,156,40,39,244,156,32,10,245,44,190,185,52,13,73,
    171,227,76,207,208,72,248,175,15,150,127,50,88,254,171,131,
    229,191,93,176,6,136,103,243,118,182,75,221,29,162,165,237,
    188,180,163,174,98,127,253,144,206,156,216,159,168,132,135,126,
    235,151,200,0,186,249,24,38,192,105,130,115,183,39,3,169,
    228,160,28,166,104,29,166,55,61,30,190,20,71,61,60,148,
    243,153,23,159,3,219,30,97,205,244,19,224,3,42,36,148,
    135,176,102,18,21,172,154,22,196,137,95,163,90,169,10,46,
    60,79,253,191,66,155,68,199,21,125,210,235,37,22,111,125,
    211,121,34,225,59,245,172,26,164,156,195,103,159,13,167,173,
    47,71,249,30,208,186,14,233,125,142,117,51,79,72,116,181,
    197,199,107,125,85,129,217,159,139,98,174,129,173,31,18,159,
    168,246,253,181,204,193,181,190,131,79,24,116,6,247,171,235,
    131,197,100,39,112,92,217,150,161,218,140,2,31,225,50,88,
    93,211,111,235,43,103,94,42,197,126,47,118,144,94,56,197,
    77,100,236,59,129,255,141,84,43,67,205,107,246,18,37,219,
    188,132,6,14,216,9,228,83,217,142,226,158,170,15,20,121,
    156,30,10,82,161,193,134,99,103,106,248,234,192,254,39,148,
    101,164,151,202,92,30,46,243,139,168,77,142,94,60,37,33,
    195,110,219,222,60,136,155,120,224,29,230,236,102,116,32,227,
    167,17,66,88,93,59,37,208,239,98,5,246,11,73,71,32,
    117,245,53,122,244,104,67,66,213,221,78,103,118,176,199,88,
    134,197,109,39,72,253,89,30,26,158,77,180,67,47,233,179,
    67,104,253,167,199,231,185,208,209,32,43,207,204,198,99,207,
    139,45,39,220,29,234,230,201,136,102,82,167,213,228,88,204,
    4,6,35,40,245,83,207,59,173,191,172,159,15,104,167,252,
    28,79,243,29,61,240,249,73,209,37,126,158,33,56,39,197,
    114,215,71,191,99,126,63,19,78,171,47,74,31,12,211,65,
    73,179,248,242,232,82,152,190,90,208,151,151,143,232,50,60,
    105,97,67,255,177,168,78,87,49,157,81,97,102,138,26,150,
    102,37,115,114,166,90,154,156,168,150,170,99,38,95,65,79,
    137,57,163,86,170,78,76,138,183,251,93,197,132,88,51,86,
    151,170,226,191,182,27,173,48,
};

EmbeddedPython embedded_m5_internal_param_RubySequencer(
    "m5/internal/param_RubySequencer.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_RubySequencer.py",
    "m5.internal.param_RubySequencer",
    data_m5_internal_param_RubySequencer,
    2648,
    8282);

} // anonymous namespace
