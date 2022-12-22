#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86KvmCPU[] = {
    120,156,189,89,235,111,27,199,17,159,187,35,41,145,146,44,
    217,178,36,63,100,139,118,226,152,113,19,41,15,191,82,187,
    110,101,197,105,149,196,138,122,116,98,71,9,122,61,221,173,
    164,147,200,59,226,110,41,153,129,220,15,85,144,62,208,15,
    5,138,22,40,80,160,95,26,160,5,250,173,255,72,255,138,
    254,27,237,204,236,29,185,34,37,35,128,200,198,226,102,184,
    55,59,59,143,223,206,236,28,61,72,255,203,227,231,71,101,
    128,228,63,38,128,143,127,6,212,0,234,6,172,25,96,8,
    3,252,179,176,147,135,248,38,248,121,248,26,96,205,4,97,
    194,1,18,22,124,97,66,56,202,107,10,80,179,120,198,128,
    86,9,68,14,214,242,240,52,60,13,57,81,128,157,18,196,
    63,7,195,48,66,3,158,249,67,224,15,195,215,40,29,137,
    34,11,28,6,154,44,241,100,17,252,17,158,44,129,63,202,
    196,8,180,38,64,140,194,218,24,177,173,157,66,177,55,80,
    236,56,139,253,55,137,245,241,201,20,248,167,136,29,245,250,
    156,56,115,196,201,251,141,179,148,137,76,203,211,176,118,38,
    163,39,53,250,172,70,79,105,244,180,70,207,104,244,57,141,
    62,175,209,23,52,250,162,70,207,106,244,37,141,190,172,209,
    115,26,93,214,232,43,26,125,85,163,95,209,232,87,53,250,
    154,70,191,166,209,215,53,186,162,209,175,107,244,13,141,254,
    158,70,191,161,209,111,106,244,188,70,47,104,244,91,26,253,
    182,70,191,163,209,239,106,244,77,166,49,210,103,96,251,22,
    108,223,134,237,59,176,129,224,59,221,142,234,93,16,22,108,
    191,7,107,239,129,192,191,187,112,128,248,244,207,104,43,190,
    207,43,38,219,43,238,241,138,251,176,118,31,4,254,221,83,
    43,10,80,173,76,35,230,131,255,226,127,21,3,41,57,138,
    195,174,136,147,32,10,157,32,220,136,2,147,158,23,104,160,
    19,226,209,48,148,30,149,37,58,42,255,0,62,39,190,153,
    30,149,23,128,130,13,178,165,102,194,11,38,94,152,208,170,
    192,190,1,219,57,240,45,216,199,109,242,164,192,166,1,7,
    38,124,105,17,195,11,28,115,8,232,203,144,147,234,156,108,
    51,160,149,164,33,120,145,135,253,60,84,159,237,155,52,177,
    83,132,248,91,248,106,150,133,14,179,80,19,246,113,204,193,
    65,14,94,20,224,41,50,225,212,118,145,204,55,158,237,163,
    165,56,83,173,228,80,219,21,205,92,50,197,15,226,208,173,
    11,57,129,180,211,112,99,183,238,60,187,123,251,163,221,250,
    210,234,167,149,82,198,21,37,243,13,87,110,217,188,204,34,
    127,212,27,146,197,69,161,144,35,72,108,4,161,239,212,35,
    191,89,19,114,152,100,57,27,65,77,56,14,63,92,174,55,
    162,88,62,138,227,40,182,201,165,60,89,139,220,246,10,114,
    168,87,139,18,81,161,221,120,27,155,196,75,226,222,104,176,
    68,82,128,85,165,197,190,72,188,56,104,72,140,148,146,72,
    220,36,173,66,49,226,33,121,136,195,194,86,84,23,11,27,
    174,215,172,201,214,194,166,168,223,90,88,111,6,53,127,1,
    141,92,104,180,228,86,20,46,224,92,16,74,129,126,168,45,
    116,121,96,30,89,206,144,172,189,96,211,9,216,10,103,75,
    212,26,34,30,163,217,11,180,143,49,97,140,26,5,195,50,
    42,198,24,82,121,252,88,198,172,57,98,172,4,100,135,71,
    182,17,132,114,58,104,40,146,6,236,152,16,207,18,36,182,
    241,207,160,24,34,48,170,244,204,228,103,63,37,7,168,217,
    109,139,2,173,38,247,25,70,136,39,228,188,79,145,13,129,
    177,144,135,237,2,40,140,32,180,20,104,226,22,141,200,78,
    98,76,20,158,131,228,143,128,14,69,116,236,67,138,156,3,
    11,140,112,2,100,137,18,38,206,78,227,134,191,100,240,85,
    43,164,254,10,131,64,110,5,73,180,23,178,171,137,230,227,
    82,69,207,172,182,62,89,223,22,158,76,230,112,226,243,168,
    89,246,220,48,140,100,217,245,253,178,43,101,28,172,55,165,
    72,202,50,42,95,75,42,20,61,251,116,134,163,182,188,86,
    35,195,13,197,24,113,163,190,248,129,39,241,203,36,127,225,
    40,36,66,34,6,182,34,63,193,121,18,177,41,164,77,74,
    74,114,114,196,138,48,68,28,98,165,237,145,239,20,126,95,
    204,52,97,28,86,10,25,106,18,81,219,144,37,6,160,155,
    36,14,107,66,243,140,53,18,188,235,214,154,130,165,39,40,
    15,21,34,82,233,208,127,180,157,35,205,51,67,89,251,48,
    10,253,22,42,19,120,215,105,159,115,140,185,81,70,221,20,
    34,110,8,199,2,254,191,96,76,155,94,46,197,89,33,195,
    26,37,56,9,28,105,35,13,54,226,238,0,147,73,197,228,
    108,192,6,240,121,187,74,20,45,182,103,105,184,68,195,101,
    26,230,50,27,251,106,232,88,183,161,119,72,184,201,214,177,
    29,228,122,43,179,195,63,116,102,206,119,206,12,102,184,42,
    97,223,164,19,210,193,126,142,178,97,252,128,70,100,229,83,
    101,65,242,132,114,47,157,17,22,70,199,1,129,77,84,7,
    238,236,21,155,178,97,101,56,67,170,77,240,211,49,184,169,
    97,208,166,128,48,0,237,243,89,106,115,136,67,65,207,190,
    72,162,242,71,184,181,76,195,149,129,248,182,3,162,205,30,
    16,221,163,125,38,82,16,141,49,120,74,248,153,48,61,43,
    117,120,187,186,77,118,129,135,144,147,59,2,57,175,17,101,
    245,154,56,72,208,164,134,125,160,129,134,116,49,117,253,87,
    144,104,205,144,218,58,92,102,176,46,63,13,103,176,212,154,
    92,106,223,226,82,203,229,154,47,138,42,185,90,156,95,21,
    145,39,251,55,44,152,78,75,104,82,196,177,17,71,207,91,
    229,104,163,44,217,64,202,133,247,175,37,243,215,146,123,152,
    229,202,15,56,191,168,60,167,50,89,44,26,148,137,104,233,
    163,231,158,224,210,197,223,28,71,37,30,135,147,144,147,150,
    68,68,206,20,121,207,204,220,202,41,56,145,49,101,222,254,
    59,182,212,118,44,233,249,33,73,46,177,87,45,99,6,81,
    82,50,120,123,71,165,87,190,7,241,83,252,60,36,79,147,
    137,2,168,83,176,171,74,57,214,155,44,176,223,56,132,132,
    126,106,109,47,160,152,79,51,4,20,58,8,160,143,149,33,
    248,87,192,215,65,3,190,1,138,49,134,50,69,112,27,240,
    20,212,73,98,255,25,48,212,143,168,204,156,35,170,84,141,
    153,3,83,71,114,135,89,85,161,254,16,126,173,157,147,172,
    156,90,233,133,79,47,167,185,118,126,97,112,124,167,146,153,
    59,156,136,40,18,91,110,66,108,42,187,116,142,94,39,95,
    183,111,106,152,93,251,138,148,97,37,211,161,237,191,236,224,
    132,10,210,69,99,210,212,162,255,54,13,239,180,3,111,100,
    115,253,210,100,14,142,47,149,142,202,207,95,208,118,57,86,
    112,124,136,79,91,91,66,27,196,249,12,196,91,109,16,11,
    174,35,95,243,221,158,70,147,2,121,96,26,216,216,226,5,
    137,250,200,28,136,60,172,21,178,94,120,136,122,151,118,15,
    75,68,145,219,91,213,192,22,211,6,150,122,91,36,70,233,
    144,80,153,96,188,102,31,206,88,148,223,14,149,54,246,218,
    138,242,103,27,1,42,184,52,60,239,127,38,160,248,222,175,
    185,245,117,223,125,240,91,146,75,194,189,236,84,153,153,166,
    19,186,166,116,34,140,227,148,229,175,183,50,141,119,251,159,
    5,110,163,152,182,166,140,121,63,242,248,232,63,217,18,229,
    186,168,175,99,75,183,21,52,202,27,53,119,147,125,110,165,
    150,124,146,89,34,57,212,221,215,128,228,6,141,81,217,139,
    66,76,188,77,79,70,113,217,23,216,233,8,191,252,102,153,
    179,118,57,72,202,238,58,62,117,61,169,16,126,248,68,242,
    77,210,141,55,19,190,52,238,236,17,57,152,152,57,216,177,
    6,120,87,254,29,28,174,136,89,78,108,227,75,170,144,65,
    79,200,184,143,154,210,207,136,227,55,235,141,15,26,77,91,
    160,214,70,102,83,255,245,231,142,174,179,213,239,251,109,194,
    114,40,255,95,38,164,91,253,225,100,38,76,247,152,80,109,
    8,111,208,54,140,166,54,100,123,253,233,100,70,156,233,49,
    226,217,146,61,80,3,134,83,3,104,159,63,159,76,249,201,
    94,229,171,238,174,24,164,246,197,76,123,218,232,47,39,83,
    255,92,143,250,159,45,53,154,143,118,69,40,7,26,129,83,
    169,13,157,221,254,218,49,164,66,122,119,46,133,204,172,10,
    56,94,166,27,34,150,45,117,49,162,22,197,158,167,225,117,
    26,126,64,195,15,105,88,164,97,137,134,71,52,252,24,6,
    118,179,188,137,98,126,67,242,8,196,5,227,162,89,52,11,
    102,209,202,254,201,113,221,191,171,180,62,233,189,80,172,195,
    119,184,80,168,119,228,233,181,162,64,156,98,136,94,235,209,
    88,164,139,38,221,32,242,233,13,130,38,213,43,112,117,221,
    56,69,87,9,186,15,158,232,42,193,213,121,48,117,249,91,
    232,231,13,194,190,51,120,69,237,187,144,54,14,199,221,30,
    78,146,203,21,84,28,47,22,174,28,104,50,161,235,134,218,
    229,239,93,153,228,80,139,188,216,86,255,128,187,163,214,89,
    142,137,122,155,194,49,49,158,134,23,176,87,206,113,175,124,
    159,122,229,125,182,213,49,85,187,220,65,86,30,244,228,25,
    138,61,167,203,108,213,14,147,102,110,163,33,66,223,190,209,
    142,238,108,22,241,254,71,151,178,201,63,65,107,84,44,227,
    44,182,180,189,39,134,174,106,154,57,28,156,124,251,140,12,
    36,76,12,189,127,101,208,171,80,86,233,228,71,251,39,52,
    112,70,236,36,195,143,218,78,158,61,2,87,205,68,112,245,
    160,215,35,47,103,192,150,137,203,101,54,193,110,98,172,250,
    162,38,164,232,142,157,250,129,64,101,107,95,224,133,55,106,
    57,142,122,41,128,223,107,142,51,160,68,188,140,98,254,70,
    242,168,88,96,34,54,48,13,155,83,102,177,80,52,248,150,
    221,245,19,141,82,128,42,134,106,126,91,137,205,135,122,188,
    237,54,254,41,33,43,55,228,97,174,187,43,110,93,189,23,
    230,215,160,246,43,144,190,214,178,175,183,221,79,111,247,248,
    141,131,122,107,131,248,230,14,128,47,252,246,187,89,68,234,
    183,230,51,115,230,149,57,15,221,68,40,123,248,215,140,250,
    45,57,115,36,31,242,124,246,184,71,198,162,239,199,182,27,
    110,10,103,87,80,3,194,149,189,119,113,181,149,72,81,151,
    23,187,30,138,176,89,119,30,139,122,20,183,30,71,190,144,
    87,186,165,167,173,139,98,201,182,40,31,185,197,97,222,158,
    173,20,19,62,84,191,5,112,119,222,251,124,169,22,121,59,
    194,79,121,46,29,207,243,126,84,119,113,254,232,93,170,65,
    182,203,233,174,231,126,76,171,166,186,102,19,17,7,110,45,
    248,74,200,243,71,57,104,117,47,174,74,204,148,199,4,112,
    53,218,19,49,185,175,38,175,118,49,116,30,177,128,204,129,
    221,110,238,150,163,118,59,198,182,230,122,26,204,163,61,136,
    85,41,174,187,181,212,63,221,26,183,61,147,169,114,249,101,
    66,148,81,221,62,233,192,150,48,123,52,222,240,140,62,249,
    248,161,124,245,184,135,171,46,189,160,93,175,137,167,110,109,
    7,143,218,241,123,144,152,110,75,81,192,199,145,231,214,22,
    27,129,247,114,67,116,206,99,112,139,155,4,222,106,16,189,
    47,118,3,239,56,175,119,158,119,107,138,59,44,87,23,95,
    126,250,20,143,188,208,245,112,41,106,18,153,173,61,26,93,
    203,97,34,159,224,185,66,39,117,175,95,141,35,79,36,73,
    182,254,104,31,166,76,156,215,178,71,156,172,123,178,15,213,
    191,206,87,190,226,118,53,154,148,221,99,177,25,32,252,98,
    150,209,97,79,43,248,242,113,149,71,95,58,152,82,160,222,
    76,169,183,227,15,168,221,78,126,129,3,253,12,86,28,47,
    98,89,160,194,110,25,37,44,237,57,107,116,162,152,27,29,
    41,230,138,67,22,255,190,49,102,76,154,165,92,113,100,212,
    232,199,191,185,115,69,163,100,206,77,20,141,255,1,19,106,
    208,184,
};

EmbeddedPython embedded_m5_internal_param_X86KvmCPU(
    "m5/internal/param_X86KvmCPU.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_X86KvmCPU.py",
    "m5.internal.param_X86KvmCPU",
    data_m5_internal_param_X86KvmCPU,
    2738,
    9021);

} // anonymous namespace