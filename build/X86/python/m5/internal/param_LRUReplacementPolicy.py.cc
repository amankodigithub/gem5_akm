#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_LRUReplacementPolicy[] = {
    120,156,189,88,253,114,219,198,17,223,3,64,74,164,36,139,
    178,44,201,150,229,8,105,199,53,235,73,165,54,141,227,204,
    68,117,227,118,210,153,100,18,197,5,147,177,195,100,138,64,
    192,145,2,5,2,28,224,100,153,30,233,143,86,158,182,47,
    208,71,232,31,125,155,190,81,187,187,7,128,144,104,121,50,
    211,210,50,113,62,28,238,246,246,227,183,31,119,62,228,127,
    53,124,62,177,1,178,84,0,4,248,19,16,1,12,5,116,
    5,8,41,32,184,1,71,53,72,63,128,160,6,175,0,186,
    6,72,3,206,177,99,194,119,6,196,139,188,166,14,145,201,
    35,2,198,77,144,22,116,107,240,52,94,1,75,214,225,168,
    9,233,15,32,132,136,5,60,11,230,32,152,135,87,72,29,
    59,13,38,56,15,52,216,228,193,6,4,11,60,216,132,96,
    145,59,11,48,110,129,92,132,238,18,77,235,94,67,178,247,
    145,236,50,147,253,55,145,13,240,203,26,4,215,104,58,242,
    245,45,205,180,104,38,239,183,204,84,90,5,151,43,208,189,
    94,244,87,43,253,27,149,254,26,247,113,215,235,48,88,135,
    193,6,12,110,66,15,21,177,82,238,112,11,164,9,131,77,
    232,110,130,196,223,45,56,71,93,5,215,43,43,110,243,138,
    213,114,197,22,175,184,3,221,59,32,241,183,165,87,212,161,
    211,94,71,253,135,255,193,191,54,234,31,212,34,54,207,101,
    154,133,73,236,134,113,47,9,13,250,94,167,134,172,229,83,
    51,151,155,237,247,100,182,127,1,219,44,48,114,179,157,1,
    18,22,36,75,100,192,25,119,206,12,24,183,225,84,192,192,
    130,192,132,83,220,166,70,12,244,5,156,27,240,189,73,19,
    206,176,181,80,185,239,128,165,180,205,6,172,92,77,105,14,
    206,106,112,90,131,206,179,83,131,6,142,26,144,254,19,94,
    110,49,209,121,38,106,192,41,182,22,156,91,112,86,135,167,
    56,9,135,6,13,18,95,60,59,69,73,113,164,211,182,144,
    219,253,138,184,36,74,16,166,177,55,148,234,54,246,221,145,
    151,122,67,247,11,231,27,71,142,34,207,151,67,25,171,39,
    73,20,250,227,118,179,88,144,100,59,35,79,29,58,76,193,
    36,213,12,71,138,41,39,177,84,11,216,233,133,113,224,14,
    147,224,56,146,106,158,200,186,189,48,146,174,203,31,63,27,
    142,146,84,125,154,166,73,234,144,118,121,48,74,188,114,5,
    233,214,143,146,76,182,105,55,222,198,33,242,138,102,247,70,
    76,145,24,96,174,105,113,32,51,63,13,71,10,141,166,41,
    210,108,162,214,38,115,113,147,125,137,205,238,97,50,148,187,
    61,207,63,142,212,120,183,47,135,15,118,15,142,195,40,216,
    125,246,209,135,187,163,177,58,76,226,93,28,11,99,37,81,
    37,209,238,213,202,216,193,217,215,137,236,73,216,119,67,22,
    200,61,148,209,72,166,75,52,186,73,91,138,150,88,20,117,
    97,138,182,88,194,94,13,31,83,108,25,11,98,63,36,145,
    124,18,147,128,101,85,161,68,246,21,112,100,64,186,69,64,
    25,224,79,144,101,17,46,29,250,102,240,183,63,146,46,244,
    232,192,36,243,235,193,83,6,23,162,12,103,238,145,189,99,
    96,132,212,96,80,7,141,28,4,156,134,82,58,166,22,167,
    19,25,3,137,91,144,253,3,80,183,136,153,83,200,241,116,
    110,130,136,91,160,154,228,210,56,186,142,27,254,133,33,217,
    105,19,251,251,140,7,117,24,102,201,73,204,90,167,62,59,
    81,7,53,243,100,252,213,193,64,250,42,219,198,129,111,147,
    99,219,247,226,56,81,182,23,4,182,167,84,26,30,28,43,
    153,217,42,177,239,102,109,50,164,179,82,64,170,164,55,30,
    21,16,34,115,35,132,244,75,16,250,10,95,86,249,133,173,
    144,73,133,112,56,76,130,12,199,137,68,95,42,135,152,84,
    164,228,132,25,97,180,184,52,149,182,199,121,215,240,253,113,
    193,9,67,178,93,47,0,148,201,168,167,154,140,69,47,203,
    92,230,132,198,25,118,68,248,185,23,29,75,166,158,33,61,
    100,136,186,154,135,153,2,239,38,9,81,200,204,130,196,73,
    28,140,145,175,208,191,71,91,222,100,248,45,50,0,215,16,
    124,115,216,214,241,255,186,88,55,124,43,135,92,189,128,29,
    69,64,5,108,116,145,219,29,33,120,142,209,166,109,112,184,
    96,89,216,11,127,66,61,90,236,108,81,115,135,154,119,168,
    217,46,196,157,149,204,75,151,101,126,72,251,24,44,40,139,
    68,6,49,11,145,130,11,158,116,107,226,73,24,13,59,228,
    17,6,249,205,196,35,44,138,156,233,35,106,113,42,251,154,
    9,217,215,20,167,201,115,152,24,57,9,194,157,122,19,39,
    96,5,57,45,18,124,190,192,175,67,160,172,34,179,95,65,
    166,67,182,97,88,58,183,138,216,231,210,12,13,72,135,130,
    48,187,214,101,13,219,212,188,59,107,53,79,160,213,159,130,
    214,199,180,101,43,135,214,18,67,170,137,79,203,240,205,92,
    247,101,82,92,189,4,41,194,147,245,26,60,253,140,122,230,
    180,180,111,9,74,185,140,127,168,64,137,216,50,170,162,236,
    99,103,188,65,18,84,65,180,129,153,253,105,188,129,201,218,
    224,100,253,75,78,214,156,240,185,236,209,129,216,228,88,172,
    59,53,82,69,207,132,245,60,9,103,13,108,71,105,242,98,
    108,39,61,91,177,172,20,55,247,238,102,59,119,179,143,49,
    34,218,143,56,22,233,152,168,163,94,42,71,20,181,104,233,
    167,47,124,201,25,143,223,92,87,7,41,151,3,150,155,103,
    82,196,211,26,41,210,40,52,204,225,58,83,41,69,233,153,
    234,184,89,234,152,88,254,156,54,105,178,130,77,177,129,216,
    105,10,230,196,213,81,153,139,42,254,138,207,239,72,233,36,
    173,4,42,129,157,142,230,147,69,32,97,156,247,46,224,99,
    70,2,56,187,72,241,155,2,23,245,9,46,232,49,11,136,
    255,13,184,204,20,240,87,32,203,163,129,115,136,151,30,65,
    166,94,165,233,127,2,246,133,215,228,118,142,39,29,202,231,
    60,3,195,76,246,144,167,234,84,255,57,252,189,226,72,69,
    66,54,243,66,178,154,144,173,50,22,49,100,126,84,210,181,
    46,6,45,50,202,161,151,209,52,29,137,38,190,57,9,243,
    101,217,135,145,120,86,248,153,215,228,93,226,228,251,9,122,
    40,165,221,22,171,70,5,19,191,162,230,253,18,14,162,24,
    155,1,83,219,112,117,222,117,117,132,255,142,118,182,152,215,
    229,57,246,76,36,166,41,148,40,175,21,40,127,191,68,185,
    228,76,244,138,79,18,212,26,100,222,115,67,224,145,14,11,
    47,58,65,89,32,107,208,173,147,63,112,121,44,114,119,17,
    69,156,162,168,118,33,205,177,42,246,181,146,74,11,107,227,
    81,243,98,166,254,79,246,219,139,188,225,65,224,61,58,162,
    45,104,31,191,112,32,163,96,186,85,101,154,192,47,174,226,
    155,95,31,20,204,63,159,169,239,127,136,20,75,166,25,233,
    65,226,179,195,127,125,40,237,161,28,30,224,1,241,48,28,
    217,189,200,235,179,37,204,92,168,175,10,161,20,155,242,114,
    161,144,221,167,54,177,253,36,198,32,124,236,171,36,181,3,
    137,135,37,25,216,191,176,57,130,219,97,102,123,7,248,213,
    243,149,6,243,69,63,228,10,212,75,251,25,23,155,71,39,
    212,157,185,37,93,60,10,135,88,110,15,161,76,148,250,104,
    86,6,100,46,164,181,111,96,78,195,99,144,26,235,72,68,
    69,131,179,67,205,207,225,109,196,237,15,128,225,4,25,169,
    167,46,110,27,13,67,109,106,55,156,154,255,132,40,101,211,
    126,249,229,143,241,75,125,201,146,123,103,189,184,157,153,3,
    201,39,40,186,64,169,231,23,40,232,178,115,255,171,203,50,
    244,103,14,122,245,127,245,84,231,225,91,229,217,249,8,242,
    180,124,149,151,138,170,64,75,122,237,64,20,21,127,85,26,
    190,68,120,247,141,176,113,253,84,122,74,106,235,108,205,88,
    82,118,118,189,225,201,196,7,167,139,213,199,165,80,231,92,
    145,140,111,176,209,244,105,135,141,38,158,198,155,88,181,90,
    92,181,238,81,213,122,202,26,112,13,93,184,78,80,88,43,
    21,65,169,63,150,39,175,101,78,43,67,215,168,196,164,55,
    26,201,56,112,238,67,181,236,228,207,51,69,2,133,153,151,
    80,169,19,76,113,3,235,204,105,159,163,240,89,17,146,173,
    87,43,189,108,214,118,100,196,254,185,64,108,155,234,253,73,
    12,117,246,168,225,168,89,6,76,231,183,80,4,209,18,147,
    129,140,164,146,111,176,134,34,26,249,217,51,144,152,75,146,
    49,30,12,184,224,198,247,200,117,103,31,134,127,147,203,200,
    71,26,12,195,162,110,52,204,70,189,33,56,147,93,186,84,
    213,156,16,202,116,89,57,206,28,118,232,229,82,108,190,241,
    43,242,10,169,137,75,171,125,111,168,239,108,248,94,194,249,
    41,228,39,74,231,94,169,67,58,99,115,45,175,79,73,136,
    98,206,178,156,84,157,95,211,56,173,26,62,216,41,228,218,
    209,114,77,9,197,119,143,195,7,124,73,58,61,189,19,14,
    245,77,151,90,185,244,61,72,61,236,175,93,26,205,100,26,
    122,81,248,82,95,109,21,195,106,131,196,188,98,127,146,228,
    113,94,24,76,125,229,180,167,214,161,82,110,178,249,83,217,
    15,51,36,206,148,175,242,93,178,149,186,247,230,96,87,37,
    54,115,244,232,234,81,31,97,31,209,5,73,246,9,54,116,
    153,213,88,110,32,146,200,187,77,60,67,46,9,203,92,108,
    53,172,197,133,134,213,152,51,249,62,98,9,79,7,77,171,
    177,176,40,244,191,109,196,92,211,216,198,117,255,5,183,139,
    154,42,
};

EmbeddedPython embedded_m5_internal_param_LRUReplacementPolicy(
    "m5/internal/param_LRUReplacementPolicy.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_LRUReplacementPolicy.py",
    "m5.internal.param_LRUReplacementPolicy",
    data_m5_internal_param_LRUReplacementPolicy,
    2178,
    6514);

} // anonymous namespace
