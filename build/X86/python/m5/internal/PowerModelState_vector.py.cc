#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_PowerModelState_vector[] = {
    120,156,197,91,107,136,36,87,21,62,85,253,152,237,158,153,
    157,153,157,215,62,102,119,123,55,217,100,18,117,199,71,54,
    137,38,108,18,99,12,137,100,147,212,68,118,51,137,86,106,
    186,238,204,212,76,119,85,167,170,102,119,59,206,42,113,86,
    227,19,21,31,168,136,136,32,42,34,8,130,32,8,130,32,
    8,130,40,8,130,32,8,1,65,16,4,255,9,66,60,223,
    169,170,126,77,79,147,221,222,170,108,79,159,189,93,125,251,
    158,251,221,243,221,115,239,57,117,171,74,241,191,2,191,31,
    174,16,5,47,105,68,54,255,105,84,35,170,107,180,162,145,
    166,52,178,103,104,171,64,254,61,100,23,232,58,209,138,78,
    74,167,93,46,228,232,5,157,220,49,249,77,145,106,57,185,
    162,81,179,76,42,79,43,5,186,232,78,81,94,21,105,171,
    76,254,75,164,105,154,171,209,37,123,132,236,3,116,157,91,
    231,66,73,26,60,64,184,88,150,139,37,178,71,229,98,153,
    236,49,41,140,82,115,146,212,24,173,140,163,218,202,65,110,
    246,110,110,118,66,154,253,35,154,181,249,155,89,178,15,162,
    58,247,235,121,212,204,163,166,232,155,144,86,38,201,150,86,
    214,24,207,84,171,226,20,169,28,109,30,162,149,67,164,248,
    111,138,118,25,114,12,103,154,86,102,18,104,179,29,229,185,
    142,242,188,148,15,37,13,79,183,26,62,44,13,31,161,149,
    35,164,248,239,112,212,112,145,150,23,231,120,180,157,55,248,
    223,34,143,54,133,99,44,46,43,63,112,60,215,116,220,53,
    207,209,241,125,17,2,182,169,66,140,196,70,122,20,70,250,
    49,137,133,108,61,54,210,53,226,134,53,116,168,166,211,53,
    41,92,211,169,185,72,59,26,109,230,201,206,209,14,171,41,
    160,3,235,26,237,234,244,98,14,21,174,177,204,243,80,158,
    160,124,24,89,104,83,134,50,106,105,132,174,21,104,167,64,
    203,151,118,116,92,216,42,145,255,3,122,101,65,26,61,32,
    141,234,180,195,50,79,187,121,186,86,164,139,92,137,47,109,
    150,0,95,187,180,195,72,249,202,242,98,158,123,123,161,3,
    46,160,216,142,239,90,117,21,206,115,217,124,198,187,162,252,
    167,60,91,213,150,67,43,84,230,101,85,13,61,127,177,156,
    84,246,130,179,13,43,220,48,228,215,57,12,75,189,17,74,
    171,158,171,194,81,46,172,57,174,109,214,61,123,187,166,194,
    3,104,210,92,115,106,202,52,229,203,39,234,13,207,15,31,
    243,125,207,55,48,178,114,177,230,89,173,95,96,92,171,53,
    47,80,139,208,38,106,12,52,31,162,246,90,67,90,68,7,
    164,199,248,177,173,130,170,239,52,66,54,88,212,34,106,163,
    181,69,152,74,68,240,4,139,165,13,175,174,150,214,172,234,
    118,45,108,46,173,171,250,185,165,213,109,167,102,47,93,186,
    255,222,165,70,51,220,240,220,37,190,230,184,161,226,225,168,
    45,245,31,136,179,92,243,16,154,188,226,172,155,142,128,49,
    55,84,173,161,252,113,92,61,10,117,218,164,54,166,21,181,
    156,182,168,141,115,169,192,239,156,182,160,143,106,23,28,192,
    169,2,34,8,149,239,164,16,236,170,209,150,78,254,2,8,
    178,201,127,26,44,202,52,89,198,119,186,124,247,44,198,33,
    186,186,153,131,217,163,139,59,66,42,102,23,215,124,16,118,
    118,73,152,81,160,205,34,69,140,97,162,69,20,242,155,144,
    92,29,205,232,220,120,158,130,175,19,143,43,115,101,135,98,
    30,237,230,72,115,39,41,44,99,226,242,213,57,86,248,73,
    161,226,242,34,186,127,65,184,16,110,56,129,119,197,149,17,
    71,89,38,207,50,143,204,51,205,167,87,55,121,188,130,147,
    124,225,121,111,187,82,181,92,215,11,43,150,109,87,172,48,
    244,157,213,237,80,5,149,208,171,156,9,22,97,68,99,42,
    161,83,171,189,102,35,161,15,76,205,244,137,62,216,78,53,
    228,15,211,242,65,172,16,168,144,169,176,225,217,1,95,71,
    19,235,42,52,208,201,16,131,236,73,71,132,41,38,170,66,
    61,215,59,200,159,31,73,122,34,116,92,44,38,228,9,84,
    109,45,44,11,15,173,32,48,165,39,184,46,148,67,195,151,
    173,218,182,146,214,3,110,143,59,132,98,212,135,212,72,119,
    24,0,18,188,2,194,245,92,187,201,125,114,170,119,66,221,
    97,161,222,152,144,111,150,137,55,194,178,200,255,23,181,57,
    189,154,143,233,86,76,40,7,175,23,146,24,92,139,109,206,
    244,219,101,15,179,168,139,139,16,28,50,251,78,163,132,31,
    27,11,16,199,33,78,64,156,76,160,166,129,119,188,23,239,
    125,208,161,11,72,129,3,67,228,18,56,118,215,12,58,210,
    158,65,236,253,150,49,19,116,204,151,246,76,200,195,83,250,
    231,33,185,170,204,177,28,5,207,193,47,99,198,72,99,152,
    28,76,115,148,218,228,151,193,49,38,1,250,64,194,91,3,
    100,236,100,228,122,7,35,13,216,69,232,104,28,73,252,157,
    137,26,17,17,141,99,104,170,208,103,116,43,16,167,210,28,
    226,54,165,214,247,80,234,1,168,155,140,41,53,46,84,42,
    243,123,82,175,230,226,113,111,45,128,211,61,84,2,143,242,
    125,120,116,7,74,185,189,72,51,160,80,140,239,131,29,20,
    66,151,244,78,24,23,184,208,156,71,239,59,201,51,207,43,
    248,69,119,158,23,101,93,22,229,119,202,162,44,11,187,108,
    102,34,199,155,19,223,27,21,10,24,134,181,28,205,197,139,
    109,80,98,217,240,189,171,205,138,183,86,9,5,39,252,228,
    131,103,130,179,103,130,7,216,3,86,206,139,239,137,124,96,
    228,229,124,213,128,151,194,79,31,187,90,85,178,186,201,39,
    211,140,156,146,41,14,202,140,87,77,230,209,44,6,81,79,
    70,87,220,115,16,250,240,202,169,141,111,185,53,190,232,238,
    147,80,80,150,193,205,105,243,204,153,178,38,189,48,35,15,
    44,27,39,249,150,223,239,199,128,3,169,34,108,106,141,229,
    168,143,210,125,0,49,222,222,197,139,20,58,111,44,113,107,
    31,78,248,80,108,243,1,239,92,66,235,215,72,182,145,26,
    125,154,96,113,54,108,76,235,214,44,128,137,167,81,253,163,
    36,252,239,179,134,139,255,88,198,186,45,53,216,173,4,247,
    73,213,104,73,127,146,62,211,49,121,146,133,55,23,111,20,
    59,23,222,124,203,247,8,85,222,212,226,154,239,118,82,48,
    200,134,21,160,90,228,121,218,243,177,237,210,91,91,59,246,
    188,105,240,230,64,212,180,137,94,188,216,102,13,150,174,99,
    218,180,222,193,133,119,65,188,187,69,3,45,185,118,139,59,
    116,146,246,95,91,205,200,147,191,0,173,121,233,231,196,136,
    236,30,162,125,206,19,220,184,197,205,180,232,93,72,232,253,
    122,139,222,74,150,157,235,18,38,64,234,176,237,174,174,113,
    116,198,187,43,4,67,121,82,5,90,41,146,26,193,110,30,
    49,87,33,137,185,138,113,204,213,14,211,198,164,92,146,242,
    184,132,105,132,216,42,14,211,38,146,48,141,3,172,113,41,
    76,197,145,24,199,84,113,236,53,141,216,11,133,153,56,246,
    90,153,69,208,132,194,92,28,52,173,204,35,204,68,225,48,
    98,57,20,142,144,61,39,133,163,100,207,75,225,24,102,46,
    86,17,153,61,201,91,188,41,124,111,215,34,44,198,187,16,
    153,181,197,199,136,106,16,87,83,243,82,96,219,131,53,171,
    190,106,91,231,215,209,60,116,84,147,169,174,39,29,158,236,
    236,48,166,169,182,95,159,229,227,185,164,227,151,83,243,80,
    247,114,107,173,14,203,124,180,189,170,184,165,231,54,84,165,
    174,234,171,28,166,110,56,141,202,90,205,90,23,11,228,98,
    64,79,39,128,66,225,92,239,246,37,184,27,210,171,84,61,
    151,151,136,109,232,171,216,138,195,54,101,87,222,81,145,245,
    165,226,4,21,107,149,191,181,170,97,52,237,186,189,133,236,
    135,45,127,61,144,173,239,214,21,20,83,181,160,201,193,184,
    195,27,127,135,186,151,240,46,210,161,83,118,155,107,210,239,
    66,203,113,44,80,138,203,9,140,85,111,177,43,233,85,139,
    93,227,145,49,54,181,100,187,217,73,45,137,90,103,246,184,
    20,83,194,140,12,250,14,247,231,181,199,53,10,82,91,107,
    97,231,4,105,65,136,214,177,189,40,166,247,162,112,220,170,
    223,177,49,193,47,220,212,168,2,6,64,161,223,65,147,91,
    134,196,86,157,72,140,243,41,218,68,128,64,223,246,208,64,
    230,251,0,225,80,221,114,171,170,3,204,185,52,193,96,2,
    39,58,175,14,13,168,207,76,81,47,111,91,181,172,208,192,
    163,136,194,143,245,241,69,55,48,227,251,48,172,234,53,154,
    233,79,120,33,23,84,125,252,150,3,112,213,213,48,35,0,
    80,245,234,112,0,250,76,13,83,32,152,102,6,32,226,228,
    150,168,187,126,203,129,52,124,117,217,241,182,131,140,128,36,
    234,94,27,122,122,207,237,197,98,217,151,123,220,85,170,190,
    23,65,82,172,242,115,67,195,153,237,199,49,245,50,51,44,
    35,119,85,20,154,65,227,23,211,1,227,170,172,193,64,227,
    151,135,6,211,119,246,59,28,69,119,193,73,149,105,241,206,
    86,116,126,53,37,64,193,246,106,230,128,68,231,55,210,112,
    5,166,153,169,129,36,129,21,169,252,22,209,158,228,33,224,
    60,222,15,206,23,250,121,233,190,112,122,205,243,222,244,225,
    136,202,239,208,222,21,167,43,144,218,105,7,82,210,157,172,
    22,68,135,235,153,230,119,219,221,91,148,113,105,165,5,37,
    249,18,101,107,26,190,215,80,126,216,140,114,98,72,89,27,
    103,33,238,234,114,88,172,73,177,158,238,145,15,39,169,149,
    174,183,21,7,186,94,211,52,227,241,225,31,152,166,68,69,
    198,67,16,143,64,60,10,241,24,196,227,16,64,110,124,8,
    226,41,136,167,33,158,133,88,134,64,98,209,184,8,241,60,
    4,146,71,198,139,93,67,151,70,28,119,15,183,182,134,102,
    49,76,69,237,152,94,210,139,90,73,43,233,165,220,24,191,
    74,251,189,116,97,102,212,78,239,253,223,189,121,45,91,123,
    19,121,173,232,188,65,156,221,42,38,233,172,145,36,157,37,
    7,12,80,40,73,82,43,202,116,149,146,76,87,148,209,26,
    75,50,90,227,73,70,235,96,146,209,154,72,50,90,147,73,
    70,107,42,201,104,29,74,50,90,211,73,70,107,38,201,104,
    205,38,25,173,185,36,163,53,159,100,180,14,39,25,173,35,
    100,31,78,114,92,71,226,28,151,125,84,10,11,100,31,147,
    194,113,178,23,164,112,130,236,227,82,56,73,246,9,41,84,
    200,62,41,133,83,100,87,164,112,154,236,83,82,184,141,236,
    211,82,184,157,236,219,164,112,134,236,219,165,112,7,169,59,
    105,115,145,86,238,34,251,140,92,185,27,137,53,220,47,25,
    42,177,150,234,82,44,25,143,31,209,173,204,167,25,247,101,
    214,95,227,126,138,83,252,251,229,210,110,112,7,126,114,223,
    25,36,14,13,46,39,35,15,154,168,251,9,13,112,240,229,
    150,117,118,123,242,101,85,202,194,215,139,55,252,105,159,30,
    222,192,144,159,222,127,200,77,36,240,95,81,190,151,73,32,
    23,221,210,109,105,252,217,112,176,6,48,201,52,87,61,175,
    150,97,112,26,169,251,249,112,128,78,12,2,84,83,110,38,
    120,162,149,93,180,253,162,3,78,231,109,60,129,51,77,221,
    27,185,232,150,220,94,80,183,13,2,181,174,194,160,230,84,
    17,23,181,51,230,154,204,77,200,205,212,80,142,81,124,184,
    32,86,255,203,30,203,221,248,158,117,32,206,160,141,51,163,
    13,108,4,176,173,247,87,169,219,146,139,123,108,105,108,65,
    212,210,7,218,86,254,235,161,45,57,208,93,114,145,215,141,
    122,118,134,28,77,240,69,106,127,147,46,60,158,17,111,5,
    188,150,218,223,166,11,47,120,107,224,181,212,254,142,134,90,
    32,142,238,143,173,225,53,50,88,28,96,10,214,244,251,14,
    24,55,151,176,56,190,63,18,171,209,80,174,157,101,158,44,
    210,248,135,225,108,179,176,63,34,85,111,132,89,220,173,144,
    251,45,208,245,167,225,160,28,219,31,74,224,188,146,193,141,
    214,232,112,41,171,250,243,208,68,27,132,229,138,213,232,160,
    89,154,49,85,4,136,245,253,37,53,146,173,170,117,199,205,
    136,100,162,235,175,169,249,50,76,255,108,124,25,107,250,219,
    112,48,6,56,50,63,43,147,192,135,69,202,254,158,218,196,
    247,179,49,10,230,9,84,189,158,218,60,169,214,148,149,69,
    134,33,122,60,131,117,253,99,56,40,183,239,15,101,29,71,
    3,107,53,175,154,81,210,4,157,237,210,249,207,225,160,13,
    8,224,121,147,97,174,90,213,173,172,110,202,198,234,254,213,
    3,232,198,183,159,131,182,1,190,21,168,172,54,158,178,23,
    128,194,127,247,64,74,78,164,11,164,15,180,33,49,158,232,
    249,171,25,201,119,37,143,1,224,233,175,139,238,81,202,243,
    212,196,177,238,135,112,172,123,71,142,232,154,122,116,178,187,
    157,23,43,80,167,119,119,213,21,179,255,80,68,57,77,156,
    10,49,112,194,174,35,94,196,152,200,183,169,229,211,112,243,
    227,63,68,201,89,218,9,45,167,205,104,227,55,187,189,168,
    12,160,240,118,176,17,113,56,163,173,172,28,159,79,148,254,
    55,53,7,186,230,123,110,22,71,87,64,38,209,245,191,225,
    160,12,88,212,50,242,48,88,212,160,234,141,14,32,55,157,
    131,25,20,57,5,129,179,238,118,204,166,243,169,115,78,194,
    39,81,171,107,195,186,206,65,91,41,37,129,71,70,190,83,
    246,83,162,177,144,38,40,199,13,148,31,102,9,42,210,120,
    160,3,212,205,121,189,1,137,106,30,55,229,95,206,244,4,
    82,172,114,84,75,107,51,82,181,26,86,213,201,36,132,199,
    102,36,81,119,176,15,160,174,131,7,111,225,9,238,41,45,
    190,63,184,248,54,234,60,115,96,124,4,66,78,25,180,15,
    24,224,78,153,220,199,50,20,4,142,234,27,56,158,110,224,
    28,184,129,3,213,198,203,16,104,208,192,57,94,227,10,68,
    147,146,77,194,53,136,79,64,188,10,177,11,241,41,8,28,
    162,51,62,11,241,121,8,156,219,50,190,4,241,21,8,57,
    231,240,53,8,156,176,49,190,9,241,109,8,28,233,48,112,
    112,194,248,30,196,247,187,102,107,124,10,98,159,157,139,137,
    186,47,117,13,111,26,99,108,113,107,63,68,179,120,88,172,
    168,29,211,138,58,78,39,220,208,107,164,247,244,66,73,147,
    181,161,231,65,253,8,3,54,108,209,163,76,205,192,192,21,
    99,162,53,42,209,177,197,248,4,9,12,44,91,141,11,86,
    61,122,30,88,158,123,53,112,111,64,158,92,52,238,108,89,
    31,207,113,202,243,99,209,19,121,188,33,148,103,38,228,17,
    9,227,61,16,56,137,33,43,116,207,113,31,28,55,241,57,
    162,13,248,66,120,138,191,175,159,59,155,12,219,217,134,229,
    91,245,94,203,200,99,239,245,115,210,216,222,202,203,78,61,
    122,208,58,156,234,249,222,246,45,46,207,246,92,101,143,226,
    88,53,94,1,196,18,131,110,124,116,246,52,85,78,68,207,
    231,68,143,49,158,71,94,57,120,152,5,30,98,46,77,148,
    152,31,120,118,62,167,149,121,47,155,207,141,77,150,242,99,
    163,165,124,105,36,39,207,163,142,107,211,122,57,95,26,157,
    123,95,73,43,115,205,232,53,183,85,210,254,15,168,80,50,
    10,
};

EmbeddedPython embedded_m5_internal_PowerModelState_vector(
    "m5/internal/PowerModelState_vector.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/PowerModelState_vector.py",
    "m5.internal.PowerModelState_vector",
    data_m5_internal_PowerModelState_vector,
    3473,
    17228);

} // anonymous namespace