#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseMemProbe[] = {
    120,156,189,88,253,110,219,214,21,63,151,164,100,75,150,109,
    57,142,237,36,118,98,182,67,90,45,216,172,173,107,150,1,
    245,130,166,67,6,172,64,221,148,234,144,84,45,202,209,226,
    149,68,153,34,5,242,58,137,10,27,24,230,96,219,11,236,
    17,246,199,222,102,111,180,157,115,46,73,209,31,65,11,212,
    170,35,222,92,94,158,123,120,62,126,231,227,178,7,217,95,
    5,175,143,109,128,52,17,0,62,254,4,132,0,99,1,93,
    1,66,10,240,111,194,81,5,146,15,193,175,192,27,128,174,
    1,210,128,51,156,152,240,181,1,81,131,247,84,33,52,121,
    69,192,180,14,210,130,110,5,158,71,107,96,201,42,28,213,
    33,249,11,8,33,34,1,47,252,5,240,23,225,13,114,199,
    73,141,25,46,2,45,214,121,177,6,254,18,47,214,193,111,
    240,100,9,166,77,144,13,232,46,19,89,119,5,217,62,64,
    182,171,204,246,191,196,214,199,39,27,224,175,16,57,202,245,
    21,81,90,68,201,239,91,101,46,205,92,202,53,232,222,200,
    231,235,165,249,205,210,124,131,231,248,214,27,48,218,132,209,
    22,140,110,65,31,13,177,86,188,225,54,72,19,70,119,160,
    123,7,36,254,110,195,25,218,202,191,81,218,177,205,59,214,
    139,29,59,188,227,46,116,239,130,196,223,142,222,81,133,78,
    107,19,237,31,252,15,255,90,104,127,80,13,28,94,202,36,
    13,226,200,13,162,126,28,24,244,188,74,3,121,171,71,195,
    66,230,182,63,144,219,254,3,236,51,223,200,220,118,10,200,
    88,144,46,161,1,167,60,57,53,96,218,130,19,1,35,11,
    124,19,78,240,53,21,18,96,32,224,204,128,111,76,34,56,
    197,209,66,227,222,3,75,105,159,141,216,184,154,211,2,156,
    86,224,164,2,157,23,39,6,45,28,213,32,249,55,124,183,
    195,76,23,153,169,1,39,56,90,112,102,193,105,21,158,35,
    17,46,141,106,164,190,120,113,130,154,226,74,167,101,161,180,
    7,37,117,73,21,63,72,34,111,44,213,58,206,221,137,151,
    120,99,247,19,47,149,159,201,241,179,36,62,148,173,122,78,
    24,167,123,19,79,13,29,222,105,146,73,198,19,197,28,227,
    72,170,37,156,244,131,200,119,199,177,127,28,74,181,72,236,
    220,126,16,74,215,229,135,127,26,79,226,68,61,77,146,56,
    113,200,170,188,24,198,94,177,131,108,218,11,227,84,182,232,
    109,252,26,135,216,43,162,238,79,152,35,9,192,210,210,102,
    95,166,189,36,152,40,116,150,230,72,212,196,173,69,110,226,
    33,125,138,67,123,24,143,101,187,239,245,142,67,53,109,15,
    228,248,97,251,240,56,8,253,246,19,231,179,246,100,170,134,
    113,212,198,181,32,82,18,77,17,182,47,27,97,15,169,110,
    16,187,87,193,192,13,88,17,119,40,195,137,76,150,105,245,
    14,189,74,52,69,67,84,133,41,90,98,25,103,21,188,76,
    177,99,44,137,131,128,84,233,145,122,4,36,171,12,29,242,
    167,128,35,3,146,29,2,198,8,127,130,60,137,240,232,208,
    51,131,159,125,65,54,208,171,35,147,220,173,23,79,24,76,
    136,42,164,220,39,255,70,192,136,168,192,168,10,26,41,8,
    48,13,157,100,74,35,146,19,27,3,153,91,144,254,11,208,
    166,136,145,19,200,240,115,102,130,136,154,160,234,20,194,184,
    186,137,47,252,27,67,176,211,34,241,15,24,7,106,24,164,
    241,171,136,173,77,115,14,154,14,90,230,217,244,243,195,145,
    236,169,116,23,23,190,138,143,237,158,23,69,177,178,61,223,
    183,61,165,146,224,240,88,201,212,86,177,125,63,109,145,3,
    157,181,28,74,5,191,233,36,135,14,185,25,161,163,111,252,
    160,167,240,134,49,234,178,23,82,169,16,6,195,216,79,113,
    157,88,12,164,114,72,72,69,70,142,89,16,70,137,75,164,
    244,122,164,91,193,251,39,185,36,12,197,86,53,7,78,42,
    195,190,170,51,6,189,52,117,89,18,90,103,184,17,227,151,
    94,120,44,153,123,138,252,80,32,154,106,25,230,2,184,91,
    36,124,174,43,43,16,197,145,63,69,121,130,222,251,244,170,
    91,12,187,6,3,111,3,65,183,128,99,21,255,175,138,77,
    163,103,101,80,171,230,112,163,76,167,128,157,45,50,127,35,
    244,206,48,171,180,12,78,11,172,3,71,221,187,52,163,205,
    206,14,13,119,105,184,71,195,110,174,230,117,235,186,124,81,
    215,71,196,223,96,5,89,21,114,128,153,171,226,159,139,156,
    219,179,200,193,108,215,161,8,48,40,78,102,17,96,81,102,
    76,30,211,136,164,28,91,38,164,95,82,30,166,72,97,102,
    20,20,8,111,154,205,64,207,134,113,154,164,240,98,142,87,
    135,64,88,70,226,160,132,68,135,124,194,48,116,110,231,57,
    206,37,10,13,64,103,155,88,85,174,176,172,77,195,59,243,
    50,239,12,74,131,75,80,250,136,94,213,204,160,180,204,16,
    170,227,213,52,122,102,102,243,162,216,173,95,128,16,225,199,
    186,2,63,239,209,204,188,172,229,156,161,147,233,246,199,18,
    116,72,28,163,172,194,1,78,166,91,36,121,25,52,91,88,
    169,159,71,91,88,124,13,46,190,191,226,226,203,5,156,219,
    24,157,104,77,206,181,122,82,33,19,244,77,216,204,138,106,
    90,195,113,146,196,175,167,118,220,183,21,235,72,121,113,255,
    126,186,119,63,253,8,51,158,253,152,115,141,206,121,58,171,
    37,114,66,89,137,182,62,125,221,147,92,201,248,206,117,117,
    18,114,57,33,185,89,133,68,252,108,144,1,141,220,178,156,
    142,83,149,80,22,158,139,109,235,133,109,73,212,79,137,121,
    157,13,107,138,45,196,74,93,176,4,174,206,182,220,28,241,
    83,188,62,33,99,147,150,18,168,149,117,58,90,62,22,157,
    148,112,126,113,14,15,215,44,184,211,70,78,127,206,113,80,
    157,225,128,46,51,135,242,63,128,219,68,1,127,7,242,52,
    58,52,131,114,129,124,114,237,58,145,127,11,140,249,43,106,
    53,231,139,14,213,103,166,192,52,146,62,98,82,93,186,63,
    133,127,150,2,38,47,176,102,214,8,150,11,172,85,228,26,
    134,200,15,42,162,214,249,164,68,206,24,122,41,145,233,76,
    51,139,193,89,250,46,218,55,204,180,215,141,151,69,205,214,
    37,9,190,153,161,133,74,212,182,88,55,74,24,248,53,13,
    31,20,238,23,249,218,53,10,179,11,111,175,159,174,206,216,
    95,211,27,45,150,113,117,129,251,152,50,147,2,208,149,28,
    208,31,20,128,150,92,92,222,112,243,79,163,65,30,61,51,
    4,158,194,176,119,162,67,143,5,178,2,221,42,65,159,59,
    91,145,69,134,200,83,17,37,174,115,149,139,173,112,160,237,
    83,56,85,251,139,134,215,115,9,113,114,217,126,232,141,15,
    125,239,241,17,177,38,254,189,60,86,140,92,216,102,89,88,
    194,185,120,155,188,124,251,48,23,250,229,92,194,251,183,200,
    169,16,150,193,236,199,61,142,233,47,135,210,30,203,241,33,
    158,225,134,193,196,238,135,222,128,45,111,102,202,124,158,43,
    163,216,117,23,107,125,250,128,198,216,238,197,17,230,213,227,
    158,138,19,219,151,120,174,145,190,253,75,155,147,178,29,164,
    182,119,136,79,189,158,210,184,61,31,106,220,52,122,201,32,
    229,254,240,232,21,77,231,230,57,23,79,169,1,118,198,99,
    40,106,158,62,61,21,57,150,123,94,29,6,88,158,240,196,
    162,166,58,201,80,221,119,246,104,248,57,204,51,21,127,8,
    12,27,72,201,28,85,177,109,212,12,62,75,149,233,158,209,
    206,244,114,188,69,63,36,222,244,247,14,36,144,85,24,45,
    240,184,72,121,184,91,203,23,235,60,46,241,98,35,143,207,
    101,94,92,129,238,106,254,109,165,73,177,90,253,177,177,202,
    216,159,27,234,213,181,134,168,243,232,39,145,213,249,29,100,
    37,247,109,225,121,174,71,123,162,247,106,75,99,97,158,222,
    100,189,116,83,207,122,137,231,209,29,108,214,44,110,214,246,
    169,89,59,225,134,206,53,116,191,54,115,16,247,218,252,113,
    128,206,63,145,124,229,94,198,157,110,201,200,241,222,100,34,
    35,223,121,0,229,46,139,31,207,197,72,20,130,83,40,149,
    73,83,220,196,182,234,50,252,40,165,148,148,98,152,85,10,
    192,237,204,211,137,127,205,157,216,90,59,151,87,156,125,26,
    154,231,146,136,54,244,189,43,131,219,29,123,145,55,144,9,
    117,233,223,71,130,245,154,123,153,236,94,189,115,53,249,132,
    230,250,59,1,49,253,126,42,226,75,166,158,45,177,11,20,
    29,213,124,25,74,37,175,64,135,34,29,179,163,158,47,49,
    239,199,83,236,203,185,239,197,251,208,117,231,151,58,127,159,
    217,62,93,209,169,19,143,101,27,98,195,168,85,107,130,235,
    205,133,175,147,90,6,178,173,238,239,166,169,195,209,183,90,
    184,102,81,43,175,171,0,57,144,79,27,7,104,8,253,93,
    142,14,254,206,207,32,59,194,57,239,23,222,37,11,113,83,
    173,143,39,24,71,92,11,185,244,57,191,161,117,2,225,248,
    225,94,174,209,94,39,24,235,175,65,238,75,73,101,148,191,
    226,141,31,170,237,11,116,90,243,130,90,173,93,120,238,39,
    30,206,55,46,172,166,50,9,188,48,248,78,127,44,202,151,
    21,105,122,145,33,9,92,220,113,53,98,127,151,109,205,206,
    77,228,32,72,145,15,51,41,54,100,25,130,60,193,13,229,
    21,0,43,111,158,27,22,116,159,166,207,129,143,233,171,66,
    250,49,14,244,229,167,182,90,19,85,131,114,135,137,7,178,
    101,97,153,141,102,205,106,44,213,172,218,130,201,135,249,101,
    108,189,235,86,109,169,33,244,191,93,196,79,221,216,93,169,
    137,255,3,20,58,75,203,
};

EmbeddedPython embedded_m5_internal_param_BaseMemProbe(
    "m5/internal/param_BaseMemProbe.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_BaseMemProbe.py",
    "m5.internal.param_BaseMemProbe",
    data_m5_internal_param_BaseMemProbe,
    2183,
    6279);

} // anonymous namespace