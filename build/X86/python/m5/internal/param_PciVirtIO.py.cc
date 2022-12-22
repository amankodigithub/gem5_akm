#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_PciVirtIO[] = {
    120,156,181,88,109,83,220,214,21,62,87,210,46,236,2,102,
    49,6,108,131,205,58,169,227,141,27,131,157,198,113,102,66,
    221,218,113,58,77,102,130,93,109,90,59,36,83,85,72,23,
    208,162,149,118,164,11,120,51,208,78,139,167,205,76,62,244,
    83,251,15,250,161,255,166,255,168,61,231,92,73,43,118,161,
    147,78,1,239,94,159,189,47,71,231,229,57,47,87,30,100,
    127,21,252,254,188,9,144,110,26,0,62,126,4,132,0,93,
    1,27,2,132,20,224,95,129,221,10,36,31,128,95,129,55,
    0,27,6,72,3,142,145,48,225,107,3,162,73,62,83,133,
    208,228,25,1,253,58,72,11,54,42,240,50,154,1,75,86,
    97,183,14,201,239,64,8,17,9,120,229,143,129,63,14,111,
    144,59,18,53,102,56,14,52,89,231,201,26,248,19,60,89,
    7,127,146,137,9,232,55,64,78,194,198,20,109,219,184,132,
    108,239,34,219,105,102,251,47,98,235,227,202,28,248,151,104,
    59,202,245,21,237,180,104,39,63,111,154,185,52,114,41,103,
    96,227,114,78,207,150,232,43,37,122,174,68,207,151,232,133,
    18,125,181,68,95,43,209,215,75,244,98,137,94,42,209,55,
    74,244,205,18,189,92,162,155,37,250,86,137,126,171,68,191,
    93,162,127,84,162,111,151,232,119,74,244,157,18,221,42,209,
    239,50,141,86,190,12,157,187,208,249,49,116,222,131,45,116,
    252,76,97,209,123,32,77,232,172,192,198,10,72,252,220,131,
    99,196,134,127,185,116,98,149,79,204,22,39,238,243,137,7,
    176,241,0,36,126,238,235,19,85,104,183,230,17,111,193,191,
    241,175,37,144,82,147,56,236,203,36,13,226,200,9,162,173,
    56,48,104,189,74,3,161,211,163,97,44,131,233,39,4,211,
    127,2,99,212,55,50,152,30,1,50,22,164,75,104,192,17,
    19,71,6,244,91,112,40,160,99,129,111,194,33,62,166,66,
    2,108,11,56,54,224,27,147,54,28,225,104,33,152,110,130,
    165,52,70,59,12,38,205,105,12,142,42,112,88,129,246,171,
    67,131,38,118,107,144,252,3,190,93,98,166,227,204,212,128,
    67,28,45,56,182,224,168,10,47,113,19,78,117,106,164,190,
    120,117,136,154,226,76,187,101,161,180,235,37,117,73,21,63,
    72,34,183,43,85,3,105,167,231,38,110,215,121,225,5,191,
    9,18,245,217,243,86,61,223,21,167,43,61,87,237,216,124,
    204,36,123,116,123,138,217,197,145,84,19,72,108,5,145,239,
    116,99,127,47,148,106,156,120,57,91,65,40,29,135,23,63,
    235,246,226,68,125,154,36,113,98,147,73,121,50,140,221,226,
    4,25,212,11,227,84,182,232,105,252,24,155,216,43,218,189,
    213,99,142,36,0,139,74,135,125,153,122,73,208,83,232,41,
    205,145,118,19,183,22,249,136,135,244,41,14,171,59,113,87,
    174,110,185,222,94,168,250,171,219,178,251,112,117,115,47,8,
    253,213,87,31,125,184,218,235,171,157,56,90,197,185,32,82,
    18,237,16,174,14,89,96,5,183,92,38,94,7,193,182,19,
    176,22,206,142,12,123,50,153,162,217,235,244,28,209,16,147,
    162,42,76,209,18,83,72,85,240,107,138,37,99,66,172,7,
    164,135,71,186,17,132,172,50,104,200,147,2,118,13,72,150,
    8,18,29,252,8,242,33,2,163,77,107,6,175,253,138,12,
    160,103,59,38,57,90,79,30,50,140,16,79,184,115,141,60,
    27,1,99,161,2,157,42,104,140,32,180,52,104,146,62,141,
    184,157,216,24,200,220,130,244,111,128,6,69,116,28,66,134,
    156,99,19,68,212,0,85,167,100,133,179,243,248,192,63,49,
    248,218,45,18,127,157,65,160,118,130,52,62,136,216,212,68,
    115,184,180,209,50,47,250,207,55,59,210,83,233,50,78,124,
    21,239,53,61,55,138,98,213,116,125,191,233,42,149,4,155,
    123,74,166,77,21,55,111,167,45,242,158,61,147,227,168,224,
    215,239,229,184,33,31,35,110,244,15,63,240,20,254,152,229,
    31,236,133,84,42,196,192,78,236,167,56,79,44,182,165,178,
    73,72,69,70,142,89,16,134,136,67,91,233,241,184,239,18,
    254,126,146,75,194,56,108,85,115,212,164,50,220,82,117,6,
    160,155,166,14,75,66,243,140,53,98,188,239,134,123,146,185,
    167,200,15,5,34,82,203,112,254,104,187,74,146,231,138,178,
    244,81,28,249,125,20,38,240,238,208,115,174,50,230,38,25,
    117,115,136,184,49,28,171,248,127,85,204,27,158,149,225,172,
    154,99,141,18,156,2,246,180,200,156,141,184,59,198,100,210,
    50,56,27,176,2,28,111,111,17,69,135,237,37,26,110,208,
    112,147,134,229,92,199,115,85,116,106,88,209,71,196,220,96,
    237,88,15,50,189,153,235,225,159,136,153,107,131,152,193,12,
    215,38,236,27,20,33,3,236,91,148,13,147,199,52,226,86,
    142,42,19,210,47,41,247,82,140,48,51,10,7,4,54,81,
    3,184,179,85,108,202,134,173,241,28,169,54,193,175,140,193,
    237,18,6,109,114,8,3,208,190,150,167,54,135,118,104,232,
    217,139,196,170,114,138,89,155,52,220,186,16,219,14,64,180,
    61,2,162,143,233,57,141,12,68,83,12,158,58,126,27,134,
    103,102,6,47,170,219,236,16,120,8,57,214,41,200,121,135,
    40,115,84,197,139,4,77,166,216,47,74,160,33,89,140,178,
    252,235,72,244,23,72,236,50,92,22,176,46,191,140,22,176,
    212,26,92,106,239,115,169,229,114,205,77,154,78,174,38,231,
    87,77,84,72,255,45,19,230,179,18,154,214,112,236,37,241,
    235,126,51,222,106,42,86,144,114,225,218,237,116,229,118,250,
    49,102,185,230,99,206,47,58,207,233,76,150,200,30,101,34,
    58,250,233,107,79,114,233,226,95,142,163,19,143,195,73,200,
    201,74,34,34,103,142,172,103,228,102,229,20,156,170,132,50,
    239,249,27,182,94,24,150,228,252,156,56,215,217,170,166,88,
    64,148,212,5,63,222,209,233,149,251,32,94,197,239,83,178,
    52,169,40,129,186,116,187,173,133,99,185,73,3,251,189,19,
    72,56,79,169,237,85,100,243,235,28,1,213,1,2,232,107,
    230,8,254,11,112,59,40,224,207,64,62,70,87,102,8,46,
    0,79,78,157,165,237,191,5,134,250,41,149,153,115,68,155,
    170,49,239,192,212,145,62,226,173,186,80,127,14,223,149,226,
    36,47,167,102,214,240,149,203,169,85,228,23,6,199,15,42,
    153,214,201,68,68,158,216,113,83,218,166,179,203,32,244,6,
    249,186,232,212,48,187,158,43,82,198,53,79,135,30,255,205,
    0,39,84,144,22,197,172,81,242,254,3,26,222,47,28,47,
    242,185,243,146,100,25,206,46,149,142,206,207,95,211,227,44,
    22,112,122,140,163,173,224,80,128,184,146,131,248,253,2,196,
    146,235,200,27,238,237,105,52,200,145,199,134,192,75,37,54,
    72,116,135,179,64,86,96,163,74,112,231,222,85,100,209,32,
    242,220,67,153,234,68,145,98,253,215,181,101,10,95,106,55,
    209,240,250,252,99,154,60,181,22,186,221,77,223,125,252,7,
    226,75,204,189,60,62,140,92,210,70,89,82,194,182,56,75,
    88,254,249,48,151,120,255,252,227,249,67,100,83,72,202,232,
    245,99,143,131,248,203,29,217,236,202,238,38,94,206,118,130,
    94,115,43,116,183,217,230,102,166,201,243,92,19,197,78,27,
    46,232,233,93,26,227,166,23,71,152,66,247,60,21,39,77,
    95,226,157,69,250,205,123,77,206,191,205,32,109,186,155,184,
    234,122,74,99,245,100,108,113,79,232,38,219,41,183,127,187,
    7,68,94,140,207,28,188,123,6,216,245,254,17,138,218,166,
    175,69,69,58,229,126,86,67,31,203,16,222,70,84,95,167,
    20,42,238,246,10,13,239,194,133,101,221,15,144,205,239,137,
    31,25,162,42,22,141,154,161,166,203,161,245,130,206,164,163,
    1,182,249,67,2,76,191,175,201,194,172,74,59,229,24,93,
    115,105,172,81,226,165,215,49,149,236,117,12,77,234,215,49,
    85,158,185,68,1,57,246,255,6,36,99,252,98,208,253,221,
    185,198,161,253,232,226,5,181,63,130,172,144,158,21,131,162,
    172,197,148,142,193,142,200,251,238,178,10,124,83,159,31,133,
    138,227,37,210,85,82,27,127,233,34,116,226,160,213,79,249,
    126,16,86,163,45,227,147,66,252,99,238,22,250,87,216,39,
    250,118,193,62,17,47,163,235,216,59,90,220,59,174,81,239,
    120,200,186,58,134,110,31,7,200,170,20,42,147,245,34,121,
    224,12,169,173,219,67,146,204,237,245,100,228,219,119,161,220,
    241,241,242,249,123,151,114,196,95,161,84,184,77,113,5,91,
    188,209,136,161,132,87,82,135,157,83,41,98,228,66,220,196,
    208,251,123,14,189,22,101,149,65,214,179,215,104,224,60,87,
    164,56,251,103,133,145,23,78,193,213,126,16,211,77,225,204,
    53,108,28,184,204,32,205,118,97,112,250,50,148,74,14,59,
    75,191,33,211,73,215,151,88,39,226,62,182,236,220,21,227,
    239,208,113,46,40,219,254,20,184,133,133,148,114,62,102,91,
    81,197,124,59,103,212,170,53,193,197,105,232,29,165,22,128,
    90,25,221,253,245,83,155,163,120,186,176,19,191,75,203,171,
    6,153,148,251,162,117,183,171,95,140,240,123,0,251,109,200,
    238,117,246,157,194,222,116,189,229,150,91,95,91,16,208,92,
    56,185,78,218,63,161,121,58,218,125,184,146,171,179,162,213,
    209,186,60,147,251,129,39,159,186,104,114,131,183,241,45,117,
    116,119,187,159,42,217,85,139,67,139,50,218,235,58,95,200,
    110,156,244,191,136,125,169,150,134,214,159,248,126,98,187,209,
    182,116,246,37,149,119,117,107,120,67,86,219,53,143,124,87,
    243,84,25,78,238,29,145,69,111,194,69,253,218,139,27,209,
    209,245,79,194,216,219,149,126,182,231,198,217,123,158,197,93,
    23,231,79,127,74,59,200,159,50,51,180,238,39,116,106,110,
    104,54,149,73,224,134,193,183,82,93,59,205,130,47,14,146,
    54,246,202,163,246,203,144,23,31,200,132,236,27,142,248,114,
    176,196,12,206,50,243,48,31,253,180,51,116,219,219,204,188,
    125,186,5,177,224,36,93,55,204,236,51,44,113,97,153,92,
    148,155,255,141,137,86,234,116,57,48,222,52,58,71,108,86,
    172,255,50,78,213,89,167,131,56,59,125,250,250,179,174,155,
    173,83,228,229,139,220,49,13,63,62,187,160,232,95,220,103,
    157,172,150,156,125,18,185,29,160,209,146,188,231,210,187,179,
    138,66,217,130,45,53,156,237,202,39,47,38,83,233,251,134,
    126,123,241,152,222,130,165,59,56,208,107,202,218,116,13,179,
    22,21,26,83,212,177,212,88,230,100,163,102,77,78,212,172,
    218,152,201,239,159,166,240,230,88,183,106,19,147,226,127,251,
    183,140,89,176,110,44,55,106,226,63,248,6,60,210,
};

EmbeddedPython embedded_m5_internal_param_PciVirtIO(
    "m5/internal/param_PciVirtIO.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_PciVirtIO.py",
    "m5.internal.param_PciVirtIO",
    data_m5_internal_param_PciVirtIO,
    2430,
    7235);

} // anonymous namespace
