#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ArmInterrupts[] = {
    120,156,189,88,253,110,220,198,17,159,37,121,148,238,36,89,
    146,245,101,91,106,196,182,112,115,53,18,41,77,227,186,64,
    84,181,106,144,0,9,18,57,229,165,176,115,9,202,80,228,
    158,196,19,143,60,144,43,219,23,156,128,162,50,218,190,64,
    31,161,127,244,109,250,70,237,204,44,201,163,100,9,8,80,
    93,229,227,122,185,220,157,157,143,223,124,236,6,80,252,53,
    240,249,157,3,144,247,4,64,136,63,1,49,192,64,64,87,
    128,144,2,194,85,56,109,64,246,1,132,13,120,13,208,53,
    64,26,112,129,29,19,190,49,32,153,231,53,54,196,38,143,
    8,24,181,64,90,208,109,192,179,100,25,44,105,195,105,11,
    178,239,64,8,145,8,120,30,206,64,56,11,175,145,58,118,
    154,76,112,22,104,176,197,131,77,8,231,120,176,5,225,60,
    119,230,96,180,4,114,30,186,11,52,173,123,7,201,62,66,
    178,139,76,246,223,68,54,196,47,107,16,222,161,233,200,215,
    215,52,211,162,153,188,223,34,83,89,42,185,92,134,238,221,
    178,191,82,235,175,114,31,119,186,11,253,53,232,175,67,127,
    3,80,33,225,114,69,245,30,72,19,250,247,161,123,31,36,
    254,238,193,5,234,39,188,91,91,241,128,87,172,84,43,54,
    121,197,22,116,183,64,226,111,83,175,176,161,211,94,71,157,
    71,255,193,191,54,234,28,212,60,54,47,100,150,71,105,226,
    69,73,47,141,12,250,110,83,67,22,10,168,153,41,76,245,
    17,153,234,95,192,118,10,141,194,84,231,128,132,5,201,18,
    27,112,206,157,115,3,70,109,24,11,232,91,16,154,48,198,
    109,26,196,192,177,128,11,3,190,53,105,194,57,182,22,42,
    244,45,176,148,182,83,159,21,170,41,205,192,121,3,198,13,
    232,60,31,27,52,112,218,132,236,159,240,253,22,19,157,101,
    162,6,140,177,181,224,194,130,115,27,158,225,36,28,234,55,
    73,124,241,124,140,146,226,72,167,109,33,183,135,53,113,73,
    148,48,202,18,127,32,213,42,246,189,161,159,249,3,239,32,
    27,124,154,40,153,101,103,67,149,183,91,229,204,52,223,25,
    250,234,196,229,165,38,233,100,48,84,76,50,77,164,154,195,
    78,47,74,66,111,144,134,103,177,84,179,68,207,235,69,177,
    244,60,254,248,233,96,152,102,234,227,44,75,51,151,212,202,
    131,113,234,87,43,72,169,65,156,230,178,77,187,241,54,46,
    145,87,52,187,55,100,138,196,0,179,75,139,67,153,7,89,
    52,84,104,45,77,145,102,19,181,54,217,137,155,252,19,108,
    118,79,210,129,220,237,249,193,89,172,70,187,199,114,240,120,
    247,232,44,138,195,221,3,247,139,221,225,72,157,164,201,46,
    142,69,36,115,226,199,187,215,104,97,7,167,221,37,122,47,
    163,99,47,98,73,188,19,25,15,101,182,64,163,15,104,47,
    177,36,230,133,45,76,209,22,11,216,107,224,99,138,45,99,
    78,28,70,36,75,64,242,17,148,172,58,120,200,162,2,78,
    13,200,182,8,26,125,252,9,178,37,2,164,67,223,12,254,
    246,7,82,130,30,237,155,100,112,61,56,102,56,33,174,112,
    230,30,89,56,1,198,68,3,250,54,104,172,32,196,52,120,
    178,17,181,56,157,200,24,72,220,130,252,31,128,74,69,148,
    140,161,64,208,133,9,34,89,2,213,34,199,197,209,117,220,
    240,47,12,194,78,155,216,63,100,32,168,147,40,79,95,38,
    172,110,234,179,219,116,80,51,95,142,158,30,245,101,160,242,
    109,28,248,58,61,115,2,63,73,82,229,248,97,232,248,74,
    101,209,209,153,146,185,163,82,231,97,222,38,11,186,203,37,
    150,42,122,163,97,137,29,178,51,98,71,191,132,81,160,240,
    101,133,95,216,10,185,84,136,131,147,52,204,113,156,72,28,
    75,229,18,147,138,148,156,50,35,12,19,143,166,210,246,56,
    239,14,190,31,148,156,48,22,219,118,137,156,92,198,61,213,
    98,16,250,121,238,49,39,52,206,120,35,194,47,252,248,76,
    50,245,28,233,33,67,212,213,60,76,7,113,247,136,251,82,
    88,150,32,73,147,112,132,12,69,193,219,180,215,61,198,221,
    60,35,111,13,81,55,131,173,141,255,219,98,221,8,172,2,
    107,118,137,55,10,118,10,216,218,162,48,56,98,239,2,3,
    75,219,224,200,192,66,176,223,253,132,122,180,216,221,162,230,
    71,212,188,69,205,118,41,231,173,11,187,112,85,216,39,180,
    129,193,18,178,44,100,2,179,148,37,188,228,59,247,39,190,
    131,17,175,67,62,96,144,167,76,124,192,162,232,152,237,83,
    139,83,217,187,76,200,191,162,88,76,190,194,196,200,45,16,
    224,212,155,192,158,53,227,46,145,196,179,37,98,93,130,97,
    29,139,199,53,44,186,100,20,6,162,123,191,12,115,30,205,
    208,16,116,55,137,84,227,26,213,58,212,252,120,106,250,157,
    128,233,248,13,48,125,72,123,45,21,96,90,96,16,181,240,
    89,50,2,179,80,122,149,241,86,174,128,136,16,100,93,131,
    160,159,81,207,124,83,204,105,131,167,16,238,147,26,120,136,
    31,163,46,195,33,118,70,27,196,122,29,54,27,152,175,159,
    37,27,152,130,13,78,193,239,113,10,230,52,206,5,140,14,
    182,38,199,91,221,105,144,14,122,38,172,23,169,53,111,98,
    59,204,210,87,35,39,237,57,138,133,164,216,184,247,48,223,
    121,152,127,136,81,207,217,231,120,163,227,158,142,108,153,28,
    82,100,162,165,31,191,10,36,167,51,126,243,60,29,136,60,
    14,74,94,145,38,17,65,107,164,65,163,84,45,135,228,92,
    101,20,137,167,163,220,86,165,92,226,245,51,162,222,98,205,
    154,98,3,209,210,18,204,130,167,67,46,215,72,252,21,159,
    223,147,182,73,76,9,84,197,186,29,205,32,243,78,82,184,
    239,92,66,196,109,115,238,238,34,169,63,150,72,176,39,72,
    160,199,44,209,252,55,224,114,81,192,95,129,108,141,38,45,
    208,92,129,159,140,187,66,211,255,4,12,251,107,50,54,199,
    140,14,101,105,158,129,161,36,127,194,83,117,2,255,12,254,
    94,243,153,50,205,154,69,65,88,79,179,86,21,111,24,36,
    63,40,149,90,151,3,19,89,227,196,207,105,154,142,54,19,
    55,156,196,240,170,138,195,104,123,235,136,153,213,116,61,98,
    225,219,9,94,40,81,109,138,21,163,134,130,95,80,243,126,
    5,0,81,142,221,38,55,219,112,115,26,245,116,220,254,134,
    182,180,152,201,197,25,14,149,68,165,115,224,125,244,244,243,
    167,135,29,111,66,176,194,119,163,196,247,251,21,190,37,167,
    155,215,124,36,160,214,32,251,94,24,2,207,99,88,79,209,
    241,199,2,217,128,174,77,158,192,229,174,40,28,69,148,161,
    137,2,217,165,92,198,42,57,212,202,170,76,172,173,71,205,
    171,233,184,60,25,112,47,246,7,71,161,191,223,39,218,180,
    65,80,186,142,81,114,187,84,231,150,96,47,110,98,152,95,
    31,151,92,191,152,142,187,255,10,152,23,205,45,131,59,76,
    3,246,241,175,78,164,51,144,131,35,60,219,157,68,67,167,
    23,251,199,172,123,179,144,230,105,41,141,98,227,93,205,255,
    249,35,106,83,39,72,19,140,180,103,129,74,51,39,148,120,
    220,145,161,243,174,195,97,218,137,114,199,63,194,175,126,160,
    52,140,47,187,30,151,146,126,118,156,115,213,120,250,146,186,
    211,179,157,135,199,215,8,11,230,24,170,52,168,79,85,85,
    212,229,82,88,123,5,102,44,60,200,168,145,142,58,84,11,
    184,59,212,252,28,166,26,156,63,0,125,172,206,73,33,182,
    216,52,154,6,215,84,151,38,126,73,107,175,113,186,47,126,
    136,211,233,235,143,194,245,236,242,222,100,6,36,159,122,232,
    106,195,46,174,54,208,31,103,254,87,127,100,120,79,15,216,
    249,173,186,161,251,228,255,195,172,251,107,40,210,236,77,46,
    40,234,146,44,104,23,236,139,178,74,175,139,193,103,252,7,
    215,35,196,11,50,233,43,169,13,177,53,45,217,216,119,245,
    78,47,38,158,245,102,129,121,80,137,113,193,53,197,104,149,
    237,163,207,36,108,31,241,44,121,128,149,166,197,149,230,30,
    85,154,99,150,217,51,116,177,57,65,90,163,18,125,3,155,
    68,190,244,174,17,95,23,148,196,157,63,28,202,36,116,31,
    65,189,70,228,207,211,177,54,133,139,17,212,82,188,41,86,
    177,40,124,211,147,40,254,213,196,98,67,53,42,223,153,154,
    201,24,142,127,46,225,216,166,114,124,18,4,221,61,106,56,
    236,85,17,207,253,45,148,81,176,2,92,40,99,169,228,117,
    138,87,180,184,56,5,134,18,195,127,58,194,130,157,235,97,
    124,143,61,111,138,1,244,55,72,42,131,226,140,129,1,84,
    216,70,211,108,218,77,193,89,231,202,221,165,102,129,142,97,
    186,234,27,229,46,251,231,98,37,40,223,175,149,169,128,20,
    195,167,144,67,127,160,47,74,248,78,192,253,41,20,103,59,
    247,237,74,107,116,204,229,82,91,31,91,16,162,156,17,57,
    1,186,191,164,113,234,13,30,239,148,2,237,104,129,58,209,
    64,223,23,241,13,223,224,177,90,190,50,45,204,124,236,175,
    93,25,205,101,22,249,113,244,189,190,39,42,135,21,9,114,
    149,46,241,83,189,113,194,81,15,225,230,218,142,205,152,201,
    227,40,199,17,38,88,45,46,220,140,84,174,156,27,66,80,
    125,245,244,204,174,107,51,125,24,220,167,203,133,124,31,27,
    186,1,106,46,54,17,2,228,129,38,30,202,22,132,101,206,
    47,53,173,249,185,166,213,156,49,249,72,191,128,197,119,203,
    106,206,205,11,250,183,141,80,105,25,219,184,234,191,178,119,
    73,17,
};

EmbeddedPython embedded_m5_internal_param_ArmInterrupts(
    "m5/internal/param_ArmInterrupts.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_ArmInterrupts.py",
    "m5.internal.param_ArmInterrupts",
    data_m5_internal_param_ArmInterrupts,
    2162,
    6276);

} // anonymous namespace