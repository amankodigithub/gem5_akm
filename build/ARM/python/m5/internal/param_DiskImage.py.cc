#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DiskImage[] = {
    120,156,181,88,253,110,219,214,21,63,151,164,100,75,150,109,
    57,142,237,36,118,99,109,67,86,45,216,236,173,107,150,1,
    245,140,165,91,7,180,192,220,142,234,144,84,45,198,209,226,
    181,76,89,34,5,146,78,162,194,198,128,57,216,246,2,123,
    132,253,177,183,217,27,109,231,119,174,72,201,178,211,22,152,
    237,72,55,151,71,247,158,123,62,126,231,227,178,67,227,191,
    18,127,127,221,32,74,143,20,81,192,31,69,125,162,129,162,
    182,34,165,21,5,119,233,164,68,201,251,20,148,232,13,81,
    219,34,109,209,5,79,108,250,210,162,168,38,123,202,212,183,
    133,162,104,84,37,237,80,187,68,207,163,21,114,116,153,78,
    170,148,252,153,148,82,145,162,23,193,28,5,243,244,134,185,
    243,164,34,12,231,9,196,170,16,43,20,44,8,177,74,65,
    77,38,11,52,170,147,174,81,123,17,203,218,75,204,246,49,
    179,93,22,182,255,1,219,128,127,89,163,96,9,203,89,174,
    47,176,210,193,74,57,111,89,184,212,115,41,87,168,125,39,
    159,175,78,205,239,202,156,79,186,67,189,53,234,173,83,111,
    131,216,32,193,74,193,245,30,105,155,122,247,169,125,159,52,
    127,238,209,5,219,39,184,51,181,227,129,236,88,45,118,108,
    202,142,45,106,111,145,230,207,166,217,81,166,86,115,157,109,
    30,254,151,255,154,108,115,202,106,60,188,212,73,26,198,145,
    23,70,71,113,104,225,247,50,6,120,168,131,97,110,236,170,
    223,192,85,255,38,241,83,96,141,93,117,78,204,88,65,151,
    190,69,231,50,57,183,104,212,164,51,69,61,135,2,155,206,
    248,152,18,4,232,42,186,176,232,43,27,11,206,121,116,216,
    160,15,201,201,140,159,122,98,80,195,105,142,206,75,116,86,
    162,214,139,51,11,132,147,10,37,255,162,175,183,132,233,188,
    48,181,232,140,71,135,46,28,58,47,211,115,94,196,164,94,
    5,234,171,23,103,172,41,83,90,77,135,165,61,152,82,23,
    170,4,97,18,249,3,157,213,121,238,13,253,196,31,120,191,
    13,211,147,143,7,126,87,55,171,249,170,56,221,25,250,217,
    177,43,219,108,216,99,48,204,132,93,28,233,108,129,39,71,
    97,20,120,131,56,56,237,235,108,30,188,188,163,176,175,61,
    79,126,252,120,48,140,147,236,163,36,137,19,23,38,21,98,
    63,246,139,29,48,104,167,31,167,186,137,211,228,24,23,236,
    51,172,62,26,10,71,8,32,162,98,115,160,211,78,18,14,
    51,246,148,225,136,213,224,214,132,143,100,72,63,228,97,247,
    56,30,232,221,35,191,115,218,207,70,187,93,61,120,178,123,
    120,26,246,131,221,103,238,239,119,135,163,236,56,142,118,153,
    22,70,153,102,59,244,119,103,44,176,195,75,238,128,215,171,
    176,235,133,162,133,119,172,251,67,157,44,130,250,0,231,168,
    186,170,169,178,178,85,83,45,242,172,196,95,91,109,89,11,
    234,32,132,30,29,232,6,8,57,211,160,129,39,21,157,88,
    148,108,1,18,61,254,40,248,144,129,209,194,111,150,252,246,
    7,24,192,80,123,54,28,109,136,103,2,35,198,19,175,220,
    131,103,35,18,44,148,168,87,38,131,17,134,150,1,77,50,
    194,200,203,193,198,98,230,14,165,255,36,54,40,163,227,140,
    198,200,185,176,73,69,117,202,170,8,88,166,174,243,129,127,
    21,240,181,154,16,255,64,64,144,29,135,105,252,42,18,83,
    99,46,225,210,98,203,124,54,250,244,176,167,59,89,186,205,
    132,47,226,211,70,199,143,162,56,107,248,65,208,240,179,44,
    9,15,79,51,157,54,178,184,241,40,109,194,123,238,74,142,
    163,130,223,104,152,227,6,62,102,220,152,135,32,236,100,252,
    176,42,15,226,133,84,103,140,129,227,56,72,153,14,22,93,
    157,185,16,50,131,145,99,17,68,32,226,97,41,142,231,117,
    75,252,252,44,151,68,112,216,44,231,168,73,117,255,40,171,
    10,0,253,52,245,68,18,208,5,107,96,252,210,239,159,106,
    225,158,50,63,22,8,83,35,195,205,163,237,30,36,207,21,
    21,233,163,56,10,70,44,76,216,121,23,231,220,19,204,213,
    4,117,107,140,184,57,30,203,252,127,89,173,91,29,103,140,
    179,114,142,53,36,184,140,196,211,106,236,108,198,221,5,39,
    147,166,37,217,64,20,144,120,251,62,102,216,236,110,97,120,
    7,195,67,12,219,185,142,55,170,232,226,172,162,79,193,220,
    18,237,68,15,152,222,206,245,8,46,197,204,253,73,204,112,
    134,107,1,251,22,34,100,130,125,7,217,48,217,199,200,75,
    37,170,108,74,63,71,238,69,140,8,51,132,3,3,27,179,
    9,220,197,42,46,178,97,115,62,71,170,11,248,77,99,176,
    59,133,65,23,14,17,0,186,247,243,212,230,97,133,129,158,
    187,9,86,165,107,204,218,192,240,189,91,177,237,4,68,221,
    43,32,250,0,231,212,199,32,90,20,240,84,249,91,183,58,
    246,216,224,69,117,91,157,1,15,144,227,92,131,156,31,98,
    102,95,85,241,54,65,51,86,236,119,83,160,129,44,214,180,
    252,7,60,25,109,64,236,105,184,108,112,93,126,30,109,112,
    169,181,164,212,254,84,74,173,148,107,105,84,76,114,181,37,
    191,154,73,9,250,31,217,180,62,46,161,105,133,199,97,18,
    191,30,53,226,163,70,38,10,34,23,238,61,74,119,30,165,
    31,112,150,107,236,75,126,49,121,206,100,178,68,15,145,137,
    176,245,163,215,29,45,165,75,158,60,207,36,30,79,146,144,
    55,46,137,140,156,53,88,207,202,205,42,41,56,205,18,100,
    222,155,55,108,181,48,44,228,252,4,156,171,98,85,91,109,
    48,74,170,74,142,247,76,122,149,62,72,126,229,239,135,176,
    52,84,212,132,78,213,109,25,225,68,110,104,224,254,248,18,
    18,110,82,106,119,151,217,252,49,71,64,121,130,0,124,237,
    28,193,127,39,105,7,21,253,141,224,99,118,229,24,193,5,
    224,225,212,85,44,255,19,9,212,175,169,204,146,35,90,168,
    198,178,130,83,71,250,84,150,154,66,253,9,253,99,42,78,
    242,114,106,143,27,190,233,114,234,20,249,69,192,241,157,74,
    166,115,57,17,193,19,199,126,138,101,38,187,76,66,111,146,
    175,139,78,141,179,235,141,34,101,222,240,244,112,252,87,19,
    156,160,32,109,170,85,107,202,251,63,195,240,94,225,120,149,
    211,110,74,146,109,122,123,169,244,76,126,254,18,199,57,34,
    224,242,156,68,91,193,161,0,113,41,7,241,123,5,136,181,
    212,145,55,210,219,99,180,224,200,11,75,241,197,138,27,36,
    220,99,28,210,37,106,151,1,119,233,93,213,56,26,84,158,
    123,144,169,46,21,41,209,255,192,88,166,240,165,113,19,134,
    215,55,31,211,240,212,94,223,31,28,6,254,126,15,124,193,
    188,147,199,135,149,75,90,159,150,20,216,86,111,19,86,30,
    159,228,18,191,188,249,120,254,5,137,28,70,82,65,111,16,
    119,36,136,63,63,214,141,129,30,28,242,229,236,56,28,54,
    142,250,126,87,108,110,143,53,249,52,215,36,19,167,205,22,
    244,244,49,198,184,209,137,35,78,161,167,157,44,78,26,129,
    230,59,139,14,26,63,105,72,254,109,132,105,195,63,228,95,
    253,78,102,176,122,57,182,164,39,244,147,110,42,237,223,201,
    43,76,111,199,103,30,223,61,67,238,122,251,84,212,54,115,
    45,42,210,169,244,179,6,250,92,134,248,54,146,141,76,74,
    65,113,119,119,48,252,136,110,45,235,190,79,230,62,156,194,
    16,101,181,105,85,172,108,121,58,180,62,195,158,244,106,128,
    69,223,37,192,204,59,11,94,160,203,212,155,147,113,30,249,
    182,93,201,137,85,25,23,132,88,203,3,114,81,136,75,212,
    94,206,223,143,212,17,156,229,255,55,56,5,239,183,131,244,
    244,70,99,210,125,122,251,130,186,191,164,113,81,125,91,60,
    94,234,191,158,153,120,52,54,230,210,59,186,43,74,153,86,
    93,148,82,207,163,7,220,136,57,210,136,237,161,17,59,147,
    102,205,179,76,47,54,113,141,116,208,114,211,199,241,145,126,
    229,205,192,205,244,90,240,183,63,28,234,40,112,31,211,116,
    251,36,63,223,188,121,16,112,175,105,170,10,218,234,46,247,
    75,87,33,135,236,49,165,142,64,171,84,128,108,235,214,124,
    247,151,220,119,205,149,75,41,196,221,195,80,191,148,47,140,
    125,31,94,13,101,47,196,220,188,209,225,198,251,219,150,112,
    57,150,134,114,66,202,222,185,102,71,162,253,192,139,163,254,
    72,120,126,243,10,176,68,249,46,40,98,249,12,215,219,64,
    51,127,61,11,7,243,66,203,228,200,64,115,90,143,71,220,
    97,75,19,203,207,125,207,187,165,228,248,43,8,9,126,75,
    38,57,242,213,106,77,173,89,149,114,69,73,45,153,121,165,
    104,4,128,238,166,89,27,165,174,4,218,114,225,14,121,245,
    149,39,121,56,77,236,112,224,15,204,123,12,185,182,187,63,
    160,241,53,204,125,183,240,40,110,163,210,33,155,91,6,135,
    140,212,57,41,107,238,207,65,199,108,240,100,39,87,103,199,
    168,211,10,7,230,117,142,188,124,27,60,201,86,102,150,5,
    137,207,243,181,25,106,170,147,208,239,135,95,155,215,56,57,
    89,10,195,44,95,200,83,60,73,57,17,71,22,118,20,175,
    37,186,27,166,204,68,56,20,171,199,177,14,43,103,91,215,
    32,102,122,231,237,120,216,180,85,230,146,182,143,203,126,186,
    207,3,222,198,84,150,43,170,108,33,5,216,124,97,90,84,
    142,93,171,87,156,218,66,197,169,204,217,114,205,94,228,6,
    185,234,84,22,106,10,255,182,25,19,85,107,123,169,162,254,
    7,32,127,30,86,
};

EmbeddedPython embedded_m5_internal_param_DiskImage(
    "m5/internal/param_DiskImage.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_DiskImage.py",
    "m5.internal.param_DiskImage",
    data_m5_internal_param_DiskImage,
    2165,
    6148);

} // anonymous namespace
