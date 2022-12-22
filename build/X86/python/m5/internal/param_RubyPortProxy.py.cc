#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyPortProxy[] = {
    120,156,189,88,255,111,219,198,21,127,71,82,178,37,219,177,
    29,127,75,98,39,86,210,165,81,211,212,234,186,166,41,208,
    44,91,214,181,192,2,196,245,168,14,73,221,98,28,45,158,
    100,202,20,41,144,231,56,42,108,12,152,179,110,3,246,219,
    176,63,97,63,236,191,217,127,180,189,247,142,164,104,89,198,
    2,204,154,35,93,158,142,199,119,239,203,231,125,185,107,65,
    250,87,194,239,207,107,0,201,51,3,192,195,143,128,0,160,
    39,96,87,128,144,2,188,101,56,40,65,252,49,120,37,120,
    3,176,107,128,52,224,20,9,19,190,53,32,156,229,119,202,
    16,152,60,35,96,80,5,105,193,110,9,94,132,139,96,201,
    50,28,84,33,254,29,8,33,66,1,47,189,41,240,166,225,
    13,114,71,162,194,12,167,129,38,171,60,89,1,111,134,39,
    171,224,205,50,49,3,131,5,144,179,176,59,71,203,118,175,
    32,219,251,200,118,158,217,254,139,216,122,248,100,5,188,43,
    180,28,229,250,134,86,90,180,146,247,155,103,46,11,153,148,
    139,176,123,53,163,151,10,244,114,129,94,41,208,171,5,122,
    173,64,95,43,208,215,11,244,141,2,189,94,160,55,10,244,
    205,2,125,171,64,111,22,232,90,129,190,93,160,239,20,232,
    119,10,244,143,10,244,221,2,253,110,129,190,199,52,90,243,
    42,116,235,208,125,15,186,247,161,141,14,94,204,45,247,62,
    72,19,186,15,96,247,1,72,252,188,15,167,136,1,239,106,
    225,141,15,248,141,165,252,141,45,126,163,1,187,13,144,248,
    217,210,111,148,161,89,95,69,92,249,255,198,191,186,64,74,
    205,226,240,74,198,137,31,133,142,31,182,35,223,160,231,101,
    26,8,133,45,26,166,82,56,126,78,112,252,39,48,22,61,
    35,133,227,9,32,99,65,186,4,6,156,48,113,98,192,160,
    14,199,2,186,22,120,38,28,227,54,37,18,160,35,224,212,
    128,239,76,90,112,130,163,133,160,185,5,150,210,88,236,50,
    104,52,167,41,56,41,193,113,9,154,47,143,13,154,56,168,
    64,252,15,248,126,131,153,78,51,83,3,142,113,180,224,212,
    130,147,50,188,192,69,56,213,173,144,250,226,229,49,106,138,
    51,205,186,133,210,110,23,212,37,85,60,63,14,221,158,84,
    203,72,59,125,55,118,123,142,125,184,55,216,137,98,181,19,
    71,175,7,245,106,182,50,74,182,250,174,218,183,249,85,147,
    108,210,235,43,102,25,133,82,205,32,209,246,67,207,233,69,
    222,97,32,213,52,241,115,218,126,32,29,135,31,254,170,215,
    71,158,95,196,113,20,219,100,86,158,12,34,55,127,131,140,
    218,10,162,68,214,105,55,222,198,38,246,138,86,183,251,204,
    145,4,96,113,233,101,79,38,173,216,239,43,244,150,230,72,
    171,137,91,157,252,196,67,242,37,14,141,253,168,39,27,109,
    183,117,24,168,65,163,35,123,15,27,123,135,126,224,53,94,
    126,250,73,163,63,80,251,81,216,192,57,63,84,18,109,17,
    52,198,88,97,11,151,93,37,126,71,126,199,241,89,19,103,
    95,6,125,25,207,209,236,13,218,75,44,136,89,81,22,166,
    168,139,57,164,74,248,53,197,134,49,35,182,125,210,165,69,
    250,17,148,172,34,120,200,163,2,14,12,136,55,8,26,93,
    252,8,242,37,2,164,73,207,12,126,246,107,50,130,158,237,
    154,228,112,61,121,204,112,66,92,225,202,199,228,225,16,24,
    19,37,232,150,65,99,5,33,166,193,19,15,104,196,229,196,
    198,64,230,22,36,127,7,52,42,162,228,24,82,4,157,154,
    32,194,5,80,85,74,78,56,187,138,27,254,129,65,216,172,
    147,248,219,12,4,181,239,39,209,81,200,230,38,154,195,166,
    137,150,217,25,124,181,215,149,45,149,108,226,196,55,209,97,
    173,229,134,97,164,106,174,231,213,92,165,98,127,239,80,201,
    164,166,162,218,221,164,78,30,180,23,51,44,229,252,6,253,
    12,59,228,103,196,142,254,225,249,45,133,63,150,248,7,123,
    33,145,10,113,176,31,121,9,206,19,139,142,84,54,9,169,
    200,200,17,11,194,48,113,104,41,109,143,235,174,224,239,167,
    153,36,140,197,122,57,67,78,34,131,182,170,50,8,221,36,
    113,88,18,154,103,188,17,227,87,110,112,40,153,123,130,252,
    80,32,34,181,12,147,65,220,53,146,62,83,150,53,8,163,
    208,27,160,64,126,235,30,237,117,141,113,55,203,200,91,65,
    212,77,225,88,198,255,203,98,213,104,89,41,214,202,25,222,
    40,217,41,96,111,139,212,225,136,189,83,76,44,117,131,51,
    3,43,193,113,119,135,40,122,217,222,160,225,38,13,183,104,
    216,204,244,188,116,101,231,70,149,125,68,27,24,172,33,235,
    66,46,48,51,93,188,51,177,115,125,24,59,152,241,154,20,
    3,6,69,202,48,6,44,202,142,241,19,26,113,41,71,151,
    9,201,215,148,139,41,86,152,25,133,5,2,156,168,33,236,
    217,50,246,2,105,60,157,33,214,38,24,22,177,216,41,96,
    209,38,167,48,16,237,235,89,154,115,104,133,134,160,189,78,
    172,74,99,76,91,163,225,246,196,236,59,4,83,231,28,152,
    62,163,189,22,82,48,205,49,136,170,248,93,48,90,102,106,
    244,188,226,45,141,128,136,16,100,141,65,208,187,68,153,231,
    213,156,52,120,82,229,190,44,128,135,228,49,138,58,108,35,
    49,88,35,209,139,176,89,195,122,253,34,92,195,18,108,112,
    9,254,144,75,48,151,113,110,210,116,178,53,57,223,106,162,
    68,54,104,155,176,154,150,214,164,130,99,159,100,170,69,237,
    154,98,37,41,55,62,190,155,108,221,77,62,195,172,87,123,
    194,249,70,231,61,157,217,98,217,167,204,68,175,126,241,186,
    37,185,156,241,47,199,209,137,200,225,164,228,164,101,18,17,
    180,66,22,52,50,211,114,74,78,84,76,153,120,50,198,173,
    230,198,37,89,159,17,247,42,91,214,20,107,136,150,170,96,
    17,28,157,114,185,71,226,167,248,253,5,89,155,212,148,64,
    157,186,221,212,2,178,236,164,133,253,224,12,34,46,91,114,
    187,129,172,126,147,33,161,60,68,2,125,205,12,205,127,2,
    110,23,5,252,0,228,107,116,105,138,230,28,252,228,220,37,
    90,254,91,96,216,143,169,216,156,51,154,84,165,121,5,166,
    146,228,17,47,213,5,252,25,252,185,16,51,89,153,53,211,
    134,176,88,102,173,60,223,48,72,222,170,148,90,103,19,19,
    121,99,223,77,104,153,206,54,195,48,28,230,240,188,139,195,
    108,123,233,136,153,214,124,29,18,225,187,33,94,168,80,173,
    139,37,163,128,130,31,211,240,81,14,0,145,205,93,166,52,
    155,112,113,25,117,116,222,254,150,182,180,88,200,249,41,206,
    38,103,184,228,160,46,101,160,254,40,7,181,228,26,243,134,
    207,1,52,26,228,212,83,67,224,65,19,155,40,58,215,89,
    32,75,176,91,38,248,115,143,43,210,232,16,89,62,162,253,
    206,20,48,182,195,182,182,80,238,87,237,50,26,94,79,38,
    206,201,107,143,3,183,183,231,185,79,78,136,55,109,208,202,
    226,197,200,164,93,40,74,75,88,23,23,9,204,63,31,102,
    82,191,154,76,140,127,130,172,114,105,25,209,94,212,226,192,
    254,122,95,214,122,178,183,135,7,186,125,191,95,107,7,110,
    135,109,111,166,218,124,149,105,163,216,121,163,69,63,185,79,
    99,84,107,69,33,166,215,195,150,138,226,154,39,241,140,35,
    189,218,7,53,206,205,53,63,169,185,123,248,212,109,41,141,
    221,179,241,198,253,163,27,119,18,110,21,15,142,136,156,156,
    239,28,60,179,250,216,37,255,30,242,218,167,143,82,121,170,
    229,254,87,135,2,150,41,60,189,168,129,78,53,212,0,216,
    91,52,188,7,19,205,200,31,107,240,64,66,6,41,139,117,
    163,98,112,35,117,102,225,14,189,155,156,15,186,231,111,19,
    116,250,94,39,13,189,114,118,33,52,5,146,143,58,116,103,
    83,78,239,108,48,30,167,254,215,120,100,120,79,14,216,63,
    92,106,24,218,143,254,63,194,218,159,66,90,91,47,10,65,
    81,212,100,78,135,96,87,100,173,121,81,13,62,216,223,24,
    143,16,167,21,75,87,73,237,136,141,73,233,198,177,171,119,
    250,203,48,178,206,119,149,79,115,53,78,185,145,24,44,179,
    127,244,65,132,253,35,94,132,55,176,189,180,184,189,124,76,
    237,229,49,235,236,24,186,195,28,34,173,148,171,190,134,67,
    40,143,156,49,234,235,46,146,164,115,251,125,25,122,246,125,
    40,54,134,252,120,50,222,166,116,241,87,40,212,117,83,44,
    99,39,120,62,146,40,255,21,212,98,71,149,242,216,153,152,
    203,24,142,127,203,224,88,167,30,124,152,4,237,199,52,112,
    218,203,51,158,253,51,200,178,96,14,56,79,6,82,201,113,
    134,87,244,114,122,244,243,36,166,255,104,128,93,58,55,193,
    248,59,112,156,9,38,208,159,34,171,63,66,122,176,192,4,
    42,202,70,197,172,148,43,130,171,206,200,133,165,22,225,67,
    200,90,189,65,98,115,124,206,231,138,242,165,90,86,10,200,
    48,124,244,216,118,123,250,118,132,47,2,236,119,32,61,208,
    217,247,114,171,209,217,150,251,107,125,86,65,136,114,69,228,
    2,104,255,36,179,97,239,225,86,166,208,214,89,133,248,86,
    175,247,80,109,92,184,170,57,72,148,236,169,91,99,23,52,
    253,94,63,144,207,101,47,138,7,170,54,118,201,211,180,48,
    167,139,214,199,46,194,135,250,206,138,187,196,243,207,63,15,
    162,214,129,244,210,53,55,47,94,243,203,168,231,226,252,248,
    93,80,218,148,195,226,200,115,47,166,183,86,70,102,19,25,
    251,110,224,127,47,213,245,145,39,50,60,236,57,59,71,113,
    19,27,89,121,129,241,118,162,35,25,63,143,16,137,234,206,
    200,130,225,35,102,224,188,146,212,214,168,219,255,133,143,222,
    237,2,221,14,247,82,79,141,183,32,150,128,184,231,6,169,
    125,174,141,231,161,25,140,110,192,202,106,247,145,24,231,212,
    125,234,121,177,237,134,157,11,245,56,11,129,108,213,40,155,
    220,59,217,130,241,144,75,21,209,134,165,184,201,158,115,87,
    53,130,110,190,43,74,127,112,211,115,190,134,113,254,136,101,
    199,71,221,99,230,145,63,214,233,157,66,157,177,61,174,244,
    21,95,158,92,186,209,103,2,125,243,240,132,110,178,248,226,
    141,174,27,43,243,21,76,61,148,249,77,81,197,220,111,153,
    179,11,21,107,118,166,98,85,166,76,190,63,154,195,147,94,
    213,170,204,204,138,183,255,183,137,137,172,106,108,34,239,255,
    0,248,15,68,213,
};

EmbeddedPython embedded_m5_internal_param_RubyPortProxy(
    "m5/internal/param_RubyPortProxy.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_RubyPortProxy.py",
    "m5.internal.param_RubyPortProxy",
    data_m5_internal_param_RubyPortProxy,
    2373,
    7163);

} // anonymous namespace