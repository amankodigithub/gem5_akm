#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_PowerModelState_vector[] = {
    120,156,197,91,107,136,36,87,21,62,85,253,152,237,158,153,
    157,153,157,157,153,125,204,238,246,110,178,73,39,234,142,143,
    172,81,19,54,137,49,134,68,178,73,106,34,155,76,162,149,
    154,174,59,51,53,211,93,213,169,170,217,221,142,179,74,156,
    213,248,68,197,7,42,34,34,136,138,8,130,32,8,130,32,
    8,130,32,10,130,32,8,66,64,16,4,193,127,130,16,207,
    119,170,170,95,211,211,100,183,183,42,219,211,103,111,87,223,
    190,231,126,247,124,247,220,123,78,221,170,81,252,175,192,239,
    7,43,68,193,139,26,145,205,127,26,213,137,26,26,173,104,
    164,41,141,236,195,180,85,32,255,30,178,11,116,157,104,69,
    39,165,211,46,23,114,244,188,78,238,132,252,166,72,245,156,
    92,209,168,85,38,149,167,149,2,93,114,103,40,175,138,180,
    85,38,255,69,210,52,205,213,232,89,123,140,236,3,116,157,
    91,231,66,73,26,60,64,184,88,150,139,37,178,199,229,98,
    153,236,9,41,140,83,107,154,212,4,173,76,162,218,202,65,
    110,246,110,110,118,74,154,253,35,154,181,249,155,57,178,15,
    162,58,247,235,57,212,204,163,166,232,155,146,86,166,201,150,
    86,214,24,207,76,187,226,12,169,28,109,30,162,149,67,164,
    248,111,134,118,25,114,12,103,150,86,14,39,208,230,186,202,
    243,93,229,5,41,31,74,26,158,109,55,124,68,26,62,74,
    43,71,73,241,223,145,168,225,34,45,87,231,121,180,157,215,
    249,95,149,71,155,194,9,22,151,149,31,56,158,107,58,238,
    154,231,232,248,190,8,1,219,212,32,198,98,35,61,12,35,
    253,152,196,66,182,30,27,233,26,113,195,26,58,84,215,233,
    154,20,174,233,212,170,210,142,70,155,121,178,115,180,195,106,
    10,232,192,186,70,187,58,189,144,67,133,107,44,243,60,148,
    39,41,31,70,22,218,148,161,140,90,26,163,107,5,218,41,
    208,242,179,59,58,46,108,149,200,255,1,189,188,40,141,30,
    144,70,117,218,97,153,167,221,60,93,43,210,37,174,196,151,
    54,75,128,175,61,187,195,72,249,202,114,53,207,189,189,216,
    5,23,80,108,199,119,173,134,10,23,184,108,62,229,93,81,
    254,19,158,173,234,203,161,21,42,243,178,170,133,158,95,45,
    39,149,189,224,92,211,10,55,12,249,117,14,195,210,104,134,
    210,170,231,170,112,156,11,107,142,107,155,13,207,222,174,171,
    240,0,154,52,215,156,186,50,77,249,242,177,70,211,243,195,
    71,124,223,243,13,140,172,92,172,123,86,251,23,24,215,90,
    221,11,84,21,218,68,141,129,230,67,212,94,107,74,139,232,
    128,244,24,63,182,85,80,243,157,102,200,6,139,90,68,109,
    180,86,133,169,68,4,143,177,88,218,240,26,106,105,205,170,
    109,215,195,214,210,186,106,156,95,90,221,118,234,246,210,67,
    198,19,75,205,86,184,225,185,75,124,205,113,67,197,195,81,
    95,26,60,16,231,184,230,33,52,121,197,89,55,29,1,99,
    110,168,122,83,249,147,184,122,12,234,180,105,109,66,43,106,
    57,173,170,77,114,169,192,239,156,182,168,143,107,23,29,192,
    169,1,34,8,149,239,166,16,236,170,209,150,78,254,34,8,
    178,201,127,26,44,202,52,89,198,119,186,124,247,52,198,33,
    186,186,153,131,217,163,139,59,66,42,102,23,215,188,31,118,
    118,73,152,81,160,205,34,69,140,97,162,69,20,242,91,144,
    92,29,205,232,220,120,158,130,175,19,143,43,115,101,135,98,
    30,237,230,72,115,167,41,44,99,226,242,213,121,86,248,73,
    161,226,114,21,221,191,40,92,8,55,156,192,187,226,202,136,
    163,44,147,103,153,71,230,169,214,147,171,155,60,94,193,41,
    190,240,156,183,93,169,89,174,235,133,21,203,182,43,86,24,
    250,206,234,118,168,130,74,232,85,206,6,85,24,209,152,73,
    232,212,110,175,213,76,232,3,83,51,125,162,15,182,83,11,
    249,195,172,124,16,43,4,42,100,42,108,120,118,192,215,209,
    196,186,10,13,116,50,196,32,123,210,17,97,138,137,170,80,
    207,245,14,242,231,135,146,158,8,29,171,197,132,60,129,170,
    175,133,101,225,161,21,4,166,244,4,215,133,114,104,248,178,
    85,223,86,210,122,192,237,113,135,80,140,250,144,26,233,142,
    0,64,130,87,64,184,158,107,183,184,79,78,237,78,168,59,
    34,212,155,16,242,205,49,241,198,88,22,249,255,162,54,175,
    215,242,49,221,138,9,229,224,245,66,18,131,107,177,205,153,
    126,187,236,97,170,186,184,8,193,33,179,239,12,74,248,177,
    177,8,113,2,226,36,196,169,4,106,26,120,39,251,241,222,
    11,29,186,128,20,56,48,68,46,129,99,247,204,160,163,157,
    25,196,222,111,25,51,65,199,124,233,204,132,60,60,165,127,
    1,146,171,202,28,203,81,240,12,252,50,102,140,52,134,201,
    193,52,71,169,67,126,25,28,99,26,160,15,36,188,53,64,
    198,110,70,174,119,49,210,128,93,132,142,198,209,196,223,153,
    168,17,17,209,56,142,166,10,3,70,183,2,113,58,205,33,
    238,80,106,125,15,165,238,131,186,233,152,82,147,66,165,50,
    191,167,245,90,46,30,247,246,2,56,219,71,37,240,40,63,
    128,71,119,160,148,219,139,52,3,10,197,248,62,216,69,33,
    116,73,239,134,113,145,11,173,5,244,190,155,60,11,188,130,
    95,114,23,120,81,214,101,81,126,187,44,202,178,176,203,102,
    38,114,188,57,241,189,81,161,128,97,88,203,209,124,188,216,
    6,37,150,77,223,187,218,170,120,107,149,80,112,194,79,222,
    127,54,56,119,54,184,143,61,96,229,130,248,158,200,7,70,
    94,206,87,77,120,41,252,244,145,171,53,37,171,155,124,50,
    205,200,41,153,226,160,204,120,213,100,30,205,97,16,245,100,
    116,197,61,7,161,15,175,156,218,248,150,219,227,139,238,62,
    14,5,101,25,220,156,182,192,156,41,107,210,11,51,242,192,
    178,113,146,111,249,253,126,12,56,144,42,194,166,214,88,142,
    250,40,221,7,16,227,173,61,188,72,161,243,198,18,183,246,
    225,132,15,197,14,31,240,206,37,180,126,149,100,27,169,209,
    167,9,22,103,195,198,180,110,207,2,152,120,22,213,63,74,
    194,255,1,107,184,248,143,101,172,219,82,131,221,74,112,175,
    84,141,150,244,199,233,51,93,147,39,89,120,115,241,70,177,
    123,225,205,183,125,143,80,229,13,45,174,249,94,39,5,131,
    108,88,1,170,69,158,167,51,31,59,46,189,189,181,99,207,
    155,6,111,14,68,77,155,232,197,11,29,214,96,233,58,174,
    205,234,93,92,120,7,196,59,219,52,208,146,107,183,184,67,
    167,104,255,181,213,140,60,249,243,208,154,151,126,78,141,201,
    238,33,218,231,60,198,141,91,220,76,155,222,133,132,222,175,
    181,233,173,100,217,185,46,97,2,164,14,219,238,234,26,71,
    103,188,187,66,48,148,39,85,160,149,34,169,49,236,230,17,
    115,21,146,152,171,24,199,92,157,48,109,66,202,37,41,79,
    74,152,70,136,173,226,48,109,42,9,211,56,192,154,148,194,
    76,28,137,113,76,21,199,94,179,136,189,80,56,28,199,94,
    43,115,8,154,80,152,143,131,166,149,5,132,153,40,28,65,
    44,135,194,81,178,231,165,112,140,236,5,41,28,199,204,197,
    42,34,179,39,121,139,55,133,239,237,89,132,197,120,23,35,
    179,182,249,24,81,13,226,106,106,94,10,108,187,191,110,53,
    86,109,235,194,58,154,135,142,90,50,213,245,164,195,211,221,
    29,198,52,213,246,235,179,124,60,159,116,252,114,106,30,234,
    221,220,90,187,195,50,31,109,175,38,110,233,153,13,85,105,
    168,198,42,135,169,27,78,179,178,86,183,214,197,2,185,24,
    208,147,9,160,80,56,215,191,125,9,238,134,244,42,53,207,
    229,37,98,27,250,42,182,226,176,77,217,149,183,85,100,125,
    169,56,65,197,90,229,111,173,90,24,77,187,94,111,33,251,
    97,203,95,15,100,235,187,117,5,197,84,45,104,114,48,238,
    240,198,223,161,222,37,188,135,116,232,148,221,225,154,244,187,
    208,118,28,139,148,226,114,2,99,53,218,236,74,122,213,102,
    215,100,100,140,77,45,217,110,118,83,75,162,214,195,123,92,
    138,41,97,70,6,125,135,251,243,58,227,26,5,169,237,181,
    176,123,130,180,33,68,235,216,94,20,179,123,81,56,110,205,
    239,218,152,224,23,110,106,84,1,3,160,208,239,162,201,45,
    67,98,171,110,36,198,133,20,109,34,64,160,111,123,100,32,
    11,3,128,112,168,110,185,53,213,5,230,124,154,96,48,129,
    19,157,87,71,6,52,96,166,168,151,182,173,122,86,104,224,
    81,68,225,199,6,248,162,27,152,241,3,24,86,243,154,173,
    244,39,188,144,11,170,62,126,203,1,184,234,106,152,17,0,
    168,122,101,52,0,3,166,134,41,16,76,51,3,16,113,114,
    75,212,93,191,229,64,154,190,186,236,120,219,65,70,64,18,
    117,175,142,60,189,231,247,98,177,236,203,125,238,42,85,223,
    139,32,41,86,249,185,145,225,204,13,226,152,122,137,25,150,
    145,187,42,10,205,160,241,139,233,128,113,85,214,96,160,241,
    203,35,131,25,56,251,29,142,162,123,224,164,202,180,120,103,
    43,58,191,154,18,160,96,123,53,115,64,162,243,27,105,184,
    2,211,204,212,64,146,192,138,84,126,139,104,79,242,16,112,
    30,29,4,231,11,131,188,244,64,56,253,230,121,111,250,112,
    68,229,119,104,239,138,211,19,72,237,116,2,41,233,78,86,
    11,162,195,245,76,243,187,157,238,85,101,92,218,105,65,73,
    190,68,217,154,166,239,53,149,31,182,162,156,24,82,214,198,
    57,136,187,122,28,22,107,82,172,167,119,228,195,105,106,167,
    235,109,197,129,174,215,50,205,120,124,248,7,166,41,81,145,
    241,0,196,67,16,15,67,60,2,241,40,4,144,27,31,130,
    120,2,226,73,136,167,33,150,33,144,88,52,46,65,60,7,
    129,228,145,241,66,207,208,165,17,199,221,195,173,173,161,89,
    12,83,81,59,174,151,244,162,86,210,74,122,41,55,193,175,
    210,126,47,93,152,25,181,211,127,255,119,111,94,203,214,222,
    64,94,43,58,111,16,103,183,138,73,58,107,44,73,103,201,
    1,3,20,74,146,212,138,50,93,165,36,211,21,101,180,38,
    146,140,214,100,146,209,58,152,100,180,166,146,140,214,116,146,
    209,154,73,50,90,135,146,140,214,108,146,209,58,156,100,180,
    230,146,140,214,124,146,209,90,72,50,90,71,146,140,214,81,
    178,143,36,57,174,163,113,142,203,62,38,133,69,178,143,75,
    225,4,217,139,82,56,73,246,9,41,156,34,251,164,20,42,
    100,159,146,194,105,178,43,82,56,67,246,105,41,220,70,246,
    25,41,220,78,246,109,82,56,75,246,237,82,184,131,212,157,
    180,89,165,149,187,200,62,43,87,238,70,98,13,247,75,70,
    74,172,165,186,20,75,198,227,71,116,43,243,105,198,189,153,
    245,215,120,15,197,41,254,253,114,105,55,184,3,63,181,239,
    12,18,135,6,151,147,145,7,77,212,253,132,134,56,248,114,
    219,58,187,125,249,178,26,101,225,235,197,27,254,116,64,15,
    111,96,200,207,236,63,228,38,18,248,47,43,223,203,36,144,
    139,110,233,182,53,254,108,52,88,67,152,100,154,171,158,87,
    207,48,56,141,212,253,124,52,64,39,135,1,170,43,55,19,
    60,209,202,46,218,126,209,5,167,251,54,158,192,153,165,222,
    141,92,116,75,110,47,168,219,134,129,90,87,97,80,119,106,
    136,139,58,25,115,77,230,38,228,102,106,40,39,40,62,92,
    16,171,255,101,159,229,110,124,207,58,20,103,208,193,153,209,
    6,54,2,216,209,251,171,212,109,201,197,61,182,52,182,32,
    234,233,3,237,40,255,245,200,150,28,234,46,185,200,235,70,
    35,59,67,142,39,248,34,181,191,73,23,30,207,136,55,3,
    94,91,237,111,211,133,23,188,57,240,218,106,127,71,35,45,
    16,199,246,199,214,244,154,25,44,14,48,5,107,250,125,23,
    140,155,75,88,156,216,31,137,213,108,42,215,206,50,79,22,
    105,252,195,104,182,89,220,31,145,106,52,195,44,238,86,200,
    253,22,232,250,211,104,80,142,239,15,37,112,94,206,224,70,
    107,116,184,148,85,253,121,100,162,13,195,114,197,106,118,209,
    44,205,152,42,2,196,250,254,146,26,201,86,213,186,227,102,
    68,50,209,245,215,212,124,25,166,127,54,190,140,53,253,109,
    52,24,67,28,153,159,149,73,224,195,34,101,127,79,109,226,
    251,217,24,5,243,4,170,94,75,109,158,212,234,202,202,34,
    195,16,61,158,193,186,254,49,26,148,219,247,135,178,142,163,
    129,245,186,87,203,40,105,130,206,246,232,252,231,104,208,134,
    4,240,188,201,48,87,173,218,86,86,55,101,99,117,255,234,
    3,116,227,219,207,97,219,0,223,10,84,86,27,79,217,11,
    64,225,191,251,32,37,39,210,5,210,7,58,144,24,79,244,
    252,213,97,201,119,37,143,1,224,233,175,75,238,49,202,243,
    212,196,177,238,7,112,172,123,71,142,232,154,122,116,178,187,
    147,23,43,80,183,119,119,213,21,115,240,80,68,57,77,156,
    10,49,112,194,174,43,94,196,152,200,183,169,229,211,112,243,
    227,63,68,201,89,218,41,45,167,29,214,38,111,118,123,81,
    25,66,225,237,96,35,226,112,70,91,89,57,62,159,40,253,
    111,106,14,116,205,247,220,44,142,174,128,76,162,235,127,163,
    65,25,178,168,101,228,97,176,168,65,213,235,93,64,110,58,
    7,51,44,114,10,2,103,221,237,154,77,23,82,231,156,132,
    79,162,86,215,70,117,157,195,182,82,74,2,143,140,124,167,
    236,167,68,99,33,77,80,142,27,40,63,204,18,84,164,241,
    64,23,168,155,243,122,67,18,213,60,110,202,191,156,233,9,
    164,88,229,184,150,214,102,164,102,53,173,154,147,73,8,143,
    205,72,162,238,224,0,64,61,7,15,222,196,19,220,51,90,
    124,127,176,250,22,234,62,115,96,124,4,66,78,25,116,14,
    24,224,78,153,220,199,50,20,4,142,234,27,56,158,110,224,
    28,184,129,3,213,198,75,16,104,208,192,57,94,227,10,68,
    139,146,77,194,53,136,79,64,188,2,177,11,241,41,8,28,
    162,51,62,11,241,121,8,156,219,50,190,4,241,21,8,57,
    231,240,53,8,156,176,49,190,9,241,109,8,28,233,48,112,
    112,194,248,30,196,247,123,102,107,124,10,98,159,157,139,137,
    186,47,246,12,111,26,99,108,113,107,63,68,179,120,88,172,
    168,29,215,138,58,78,39,220,208,107,172,255,244,66,73,147,
    181,161,239,65,253,8,3,54,108,209,163,76,173,192,192,21,
    99,170,61,42,209,177,197,248,4,9,12,44,91,141,139,86,
    35,122,30,88,158,123,53,112,111,64,158,92,52,238,108,91,
    31,207,113,202,243,99,209,19,121,188,33,148,103,38,228,17,
    9,227,93,16,56,137,33,43,116,223,113,31,28,55,241,57,
    162,13,248,66,120,154,191,111,156,63,151,12,219,185,166,229,
    91,141,126,203,200,99,239,141,243,210,216,222,202,203,78,35,
    122,208,58,156,233,251,222,246,45,46,207,245,93,101,143,226,
    88,117,94,1,196,18,195,110,124,116,247,52,85,78,68,207,
    231,68,143,49,94,64,94,57,120,144,5,30,98,46,77,149,
    152,31,120,118,62,167,149,121,47,155,207,77,76,151,242,19,
    227,165,124,105,44,39,207,163,78,106,179,122,57,95,26,159,
    127,95,73,43,115,205,232,53,191,85,210,254,15,132,27,57,
    12,
};

EmbeddedPython embedded_m5_internal_PowerModelState_vector(
    "m5/internal/PowerModelState_vector.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/PowerModelState_vector.py",
    "m5.internal.PowerModelState_vector",
    data_m5_internal_PowerModelState_vector,
    3473,
    17228);

} // anonymous namespace
