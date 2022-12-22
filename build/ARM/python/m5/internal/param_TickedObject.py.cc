#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_TickedObject[] = {
    120,156,189,88,235,114,219,198,21,62,11,128,148,72,81,22,
    101,89,146,109,201,22,108,199,13,227,105,165,54,141,235,206,
    68,241,212,77,220,153,102,38,138,3,186,99,71,201,20,129,
    136,165,4,10,4,88,96,101,153,174,212,31,149,123,121,129,
    62,66,127,244,69,242,59,111,148,158,115,22,0,65,93,166,
    153,137,88,153,92,31,46,118,207,158,203,119,46,139,14,100,
    127,21,252,254,198,6,72,191,21,0,62,126,4,132,0,125,
    1,219,2,132,20,224,95,131,253,10,36,31,128,95,129,183,
    0,219,6,72,3,78,144,48,225,43,3,162,6,239,169,66,
    104,242,140,128,97,29,164,5,219,21,120,17,205,131,37,171,
    176,95,135,228,27,16,66,68,2,94,250,83,224,79,195,91,
    228,142,68,141,25,78,3,77,214,121,178,6,254,12,79,214,
    193,111,48,49,3,195,38,200,6,108,207,210,178,237,43,200,
    246,1,178,157,99,182,223,17,91,31,159,44,130,127,133,150,
    163,92,95,210,74,139,86,242,121,115,204,165,153,75,57,15,
    219,87,115,122,161,68,95,43,209,139,37,122,169,68,47,151,
    232,235,37,250,70,137,190,89,162,87,74,244,42,211,168,201,
    85,232,221,130,222,109,232,173,65,23,141,59,95,72,109,131,
    52,161,119,7,182,239,128,196,143,13,39,104,127,255,106,105,
    199,93,222,177,80,236,184,199,59,222,129,237,119,64,226,231,
    158,222,81,133,118,107,9,125,26,124,143,127,45,244,41,168,
    6,14,175,100,146,6,113,228,6,81,55,14,12,122,94,165,
    129,16,208,161,97,42,131,194,199,4,133,255,0,227,192,55,
    50,40,28,3,50,22,164,75,104,192,49,19,199,6,12,91,
    112,36,160,103,129,111,194,17,30,83,33,1,118,5,156,24,
    240,181,73,11,142,113,180,208,97,183,193,82,26,7,61,118,
    152,230,52,5,199,21,56,170,64,251,229,145,65,19,251,53,
    72,254,13,111,86,153,233,52,51,53,224,8,71,11,78,44,
    56,174,194,11,92,132,83,189,26,169,47,94,30,161,166,56,
    211,110,89,40,237,86,73,93,82,197,15,146,200,235,75,181,
    128,180,59,240,18,175,239,62,15,58,251,210,255,124,167,39,
    59,170,85,207,23,198,233,250,192,83,123,14,239,52,201,36,
    253,129,98,142,113,36,213,12,18,221,32,242,221,126,236,31,
    132,82,77,19,59,183,27,132,210,117,249,225,239,251,131,56,
    81,79,147,36,78,28,178,42,79,134,177,87,236,32,155,118,
    194,56,149,45,58,141,143,113,136,189,162,213,221,1,115,36,
    1,88,90,218,236,203,180,147,4,3,133,206,210,28,105,53,
    113,107,145,155,120,72,159,226,176,177,23,247,229,70,215,235,
    28,132,106,184,177,43,251,15,55,118,14,130,208,223,120,226,
    124,182,49,24,170,189,56,218,192,185,32,82,18,77,17,110,
    156,53,194,58,174,186,74,236,14,131,93,55,96,69,220,61,
    25,14,100,50,75,179,55,233,40,209,20,13,81,21,166,104,
    137,89,164,42,248,53,197,170,49,35,182,2,82,165,67,234,
    17,144,172,50,116,200,159,2,246,13,72,86,9,24,61,252,
    8,242,36,194,163,77,207,12,126,246,5,217,64,207,246,76,
    114,183,158,60,98,48,33,170,112,229,38,249,55,2,70,68,
    5,122,85,208,72,65,128,105,232,36,67,26,113,57,177,49,
    144,185,5,233,191,0,109,138,24,57,130,12,63,39,38,136,
    168,9,170,78,105,1,103,151,240,192,191,50,4,219,45,18,
    127,139,113,160,246,130,52,62,140,216,218,68,115,208,180,209,
    50,207,134,218,90,233,26,78,124,25,31,216,29,47,138,98,
    101,123,190,111,123,74,37,193,206,129,146,169,173,98,251,126,
    218,34,7,58,243,57,148,10,126,195,65,14,29,114,51,66,
    71,255,240,131,142,194,31,140,81,151,189,144,74,133,48,216,
    139,253,20,231,137,197,174,84,14,9,169,200,200,49,11,194,
    40,113,105,41,29,143,235,174,224,239,39,185,36,12,197,86,
    53,7,78,42,195,174,170,51,6,189,52,117,89,18,154,103,
    184,17,227,87,94,120,32,153,123,138,252,80,32,34,181,12,
    19,1,220,117,18,62,215,149,21,136,226,200,31,162,60,65,
    231,93,58,234,58,195,174,193,192,91,68,208,77,225,88,197,
    255,171,98,201,232,88,25,212,170,57,220,40,211,41,96,103,
    139,204,223,8,189,19,204,42,45,131,211,2,235,192,81,119,
    151,40,218,236,172,210,112,139,134,219,52,172,229,106,94,182,
    174,179,167,117,125,68,252,13,86,144,85,33,7,152,185,42,
    254,88,228,220,24,69,14,102,187,54,69,128,65,113,50,138,
    0,139,50,99,242,152,70,92,202,177,101,66,250,156,242,48,
    69,10,51,163,160,64,120,19,53,2,61,27,198,105,146,194,
    211,57,94,29,2,97,25,137,187,37,36,58,228,19,134,161,
    115,35,207,113,46,173,208,0,116,86,136,85,229,28,203,218,
    52,220,153,148,121,71,80,218,61,3,165,15,233,168,102,6,
    165,89,134,80,29,191,77,163,99,102,54,47,138,221,194,41,
    8,17,126,172,115,240,243,19,162,204,179,90,78,24,58,153,
    110,191,43,65,135,196,49,202,42,108,33,49,92,38,201,203,
    160,89,198,74,253,34,90,198,226,107,112,241,253,57,23,95,
    46,224,220,26,233,68,107,114,174,213,68,133,76,208,53,97,
    41,43,170,105,13,199,65,18,191,30,218,113,215,86,172,35,
    229,197,205,251,233,250,253,244,67,204,120,246,99,206,53,58,
    231,233,172,150,200,1,101,37,218,250,244,117,71,114,37,227,
    95,174,171,147,144,203,9,201,205,42,36,226,103,145,12,104,
    228,150,229,116,156,170,132,178,240,68,108,91,47,108,75,162,
    126,74,204,235,108,88,83,44,35,86,234,130,37,112,117,182,
    229,230,136,159,226,247,183,100,108,210,82,2,181,199,78,91,
    203,199,162,147,18,206,79,199,240,112,201,130,59,27,200,233,
    15,57,14,170,35,28,208,215,204,161,252,15,224,54,81,192,
    223,129,60,141,14,205,160,92,32,159,92,187,64,203,255,8,
    140,249,115,106,53,231,139,54,213,103,94,129,105,36,125,196,
    75,117,233,254,20,254,89,10,152,188,192,154,89,35,88,46,
    176,86,145,107,24,34,63,168,136,90,227,73,137,156,177,231,
    165,180,76,103,154,81,12,142,210,119,209,190,97,166,189,108,
    188,76,107,182,46,73,240,245,8,45,84,162,86,196,130,81,
    194,192,47,104,120,191,112,191,200,231,46,81,152,53,184,184,
    126,186,58,99,127,69,39,90,44,227,220,20,247,49,101,38,
    5,160,43,57,160,223,47,0,45,185,184,188,229,230,159,70,
    131,60,122,98,8,188,217,97,239,68,23,41,11,100,5,182,
    171,4,125,238,108,69,22,25,34,79,69,148,184,198,42,23,
    91,97,75,219,167,112,170,246,23,13,175,39,18,226,228,178,
    205,208,235,239,248,222,227,132,88,19,255,78,30,43,70,46,
    108,179,44,44,225,92,92,36,47,255,124,152,11,253,106,34,
    225,253,43,228,84,8,203,96,246,227,14,199,244,243,61,105,
    247,101,127,7,239,112,123,193,192,238,134,222,46,91,222,204,
    148,249,60,87,70,177,235,78,215,250,244,1,141,177,221,137,
    35,204,171,7,29,21,39,182,47,241,94,35,125,251,103,54,
    39,101,59,72,109,111,7,159,122,120,57,98,220,142,135,26,
    55,141,94,178,155,114,127,184,127,72,228,196,60,231,226,45,
    53,160,206,24,138,154,167,111,79,69,142,229,158,87,135,1,
    150,39,188,177,168,161,78,50,84,247,157,117,26,222,131,73,
    166,226,15,144,211,159,136,37,153,163,42,86,140,154,193,119,
    169,242,186,103,180,51,61,27,111,159,252,144,120,211,239,80,
    178,168,171,130,156,162,59,49,189,31,169,100,239,71,48,2,
    171,63,54,2,25,209,19,195,242,159,47,53,240,156,71,255,
    23,89,157,95,67,86,72,47,10,186,177,206,235,137,14,58,
    109,105,44,183,195,107,172,151,110,213,89,47,241,34,186,137,
    45,152,197,45,216,38,181,96,71,220,166,185,134,238,194,70,
    14,226,14,154,175,252,116,171,137,228,161,123,22,77,186,209,
    34,199,123,131,129,140,124,231,1,148,123,39,126,60,17,35,
    81,96,253,5,74,197,207,20,215,176,89,58,11,63,74,20,
    37,165,24,102,149,2,112,171,147,116,226,223,114,39,234,123,
    120,145,45,156,77,26,154,99,169,65,103,10,182,54,221,105,
    124,25,74,37,207,49,184,162,109,217,157,200,151,152,32,227,
    33,38,38,110,16,241,119,232,186,147,203,49,31,33,167,55,
    185,201,49,199,136,170,81,171,214,4,39,229,83,175,240,244,
    249,247,33,111,130,134,169,195,96,158,43,148,228,247,76,121,
    170,36,123,112,75,190,229,245,245,27,3,190,29,59,247,32,
    187,231,56,239,22,198,34,235,112,231,169,123,120,132,37,23,
    12,174,15,206,47,105,158,90,146,254,195,245,92,155,117,173,
    205,199,97,60,82,135,223,118,245,31,170,91,23,47,253,36,
    238,123,56,191,114,238,138,118,208,207,24,205,159,122,238,39,
    180,107,241,212,108,42,147,192,11,131,55,146,157,91,126,34,
    163,131,190,251,236,48,105,99,243,36,213,234,185,167,61,139,
    15,101,242,89,140,238,85,119,79,45,24,61,98,6,238,43,
    73,213,84,221,249,31,124,244,105,23,232,118,176,211,30,166,
    74,246,47,48,36,230,161,164,239,133,153,125,200,143,249,2,
    190,175,159,103,109,42,1,99,51,92,175,216,22,101,144,49,
    170,19,185,27,224,233,9,51,27,219,148,101,156,143,114,31,
    159,13,142,49,6,19,11,4,221,205,233,219,226,99,138,108,
    190,239,210,251,161,218,92,13,131,130,114,145,137,215,182,89,
    97,153,141,102,205,106,204,212,172,218,148,201,87,254,89,108,
    208,235,86,109,166,33,206,251,183,134,225,84,55,214,26,53,
    241,95,173,57,115,27,
};

EmbeddedPython embedded_m5_internal_param_TickedObject(
    "m5/internal/param_TickedObject.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_TickedObject.py",
    "m5.internal.param_TickedObject",
    data_m5_internal_param_TickedObject,
    2214,
    6415);

} // anonymous namespace