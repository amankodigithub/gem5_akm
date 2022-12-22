#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_EmulatedDriver[] = {
    120,156,189,88,255,115,219,72,21,127,43,201,78,236,216,141,
    211,124,107,155,112,209,29,83,206,116,32,134,227,74,153,185,
    92,134,2,133,225,102,200,29,242,49,109,125,55,8,197,90,
    59,114,100,201,35,109,154,250,198,225,7,210,1,254,1,254,
    4,126,224,191,225,63,130,247,222,74,178,157,164,76,103,46,
    38,181,182,171,213,238,219,247,229,243,190,236,118,33,251,43,
    225,243,115,27,32,237,9,0,31,127,2,66,128,161,128,142,
    0,33,5,248,27,112,90,130,228,99,240,75,240,6,160,99,
    128,52,224,18,59,38,124,101,64,84,227,53,101,8,77,30,
    17,48,174,130,180,160,83,130,231,209,26,88,178,12,167,85,
    72,254,4,66,136,72,192,11,127,9,252,101,120,131,212,177,
    83,97,130,203,64,131,85,30,172,128,191,194,131,85,240,107,
    220,89,129,113,3,100,13,58,117,154,214,185,131,100,31,33,
    217,85,38,251,111,34,235,227,151,77,240,239,208,116,228,235,
    37,205,180,104,38,239,183,202,84,26,57,151,107,208,185,155,
    247,215,103,250,27,220,199,157,238,194,96,19,6,91,48,216,
    6,84,136,191,86,80,189,7,210,132,193,125,232,220,7,137,
    191,123,112,137,250,241,239,206,172,120,192,43,214,139,21,59,
    188,98,23,58,187,32,241,183,163,87,148,161,221,220,66,157,
    7,255,193,191,38,234,28,84,13,155,87,50,73,131,56,114,
    131,168,23,7,6,125,47,83,67,22,234,82,179,148,153,234,
    151,100,170,127,1,219,201,55,50,83,93,0,18,22,36,75,
    104,192,5,119,46,12,24,55,97,34,96,96,129,111,194,4,
    183,41,17,3,125,1,151,6,124,109,210,132,11,108,45,84,
    232,123,96,41,109,167,1,43,84,83,90,130,139,18,76,74,
    208,126,49,49,104,224,180,2,201,63,225,155,93,38,186,204,
    68,13,152,96,107,193,165,5,23,101,120,142,147,112,104,80,
    33,241,197,139,9,74,138,35,237,166,133,220,30,205,136,75,
    162,248,65,18,121,67,169,54,177,239,142,188,196,27,186,207,
    134,103,161,167,164,255,171,36,64,101,52,171,249,212,56,221,
    31,121,234,196,225,181,38,41,101,56,82,76,51,142,164,90,
    193,78,47,136,124,119,24,251,103,161,84,203,68,208,237,5,
    161,116,93,254,248,219,225,40,78,212,179,36,137,19,135,244,
    202,131,97,236,21,43,72,171,221,48,78,101,147,118,227,109,
    28,34,175,104,118,111,196,20,137,1,230,151,22,251,50,237,
    38,193,72,161,185,52,69,154,77,212,154,100,40,110,210,223,
    96,211,58,137,135,178,213,243,186,103,161,26,183,250,114,248,
    184,117,124,22,132,126,235,169,243,187,214,104,172,78,226,168,
    133,99,65,164,36,42,35,108,221,164,134,125,156,119,151,8,
    158,7,125,55,96,81,220,19,25,142,100,82,167,209,7,180,
    153,104,136,154,40,11,83,52,69,29,123,37,124,76,177,107,
    172,136,163,128,132,233,146,128,4,38,107,22,62,100,83,1,
    167,6,36,187,4,142,1,254,4,89,19,33,210,166,111,6,
    127,251,61,105,65,143,14,76,50,185,30,156,48,160,16,89,
    56,243,128,108,28,1,163,162,4,131,50,104,180,32,200,52,
    124,146,49,181,56,157,200,24,72,220,130,244,31,128,90,69,
    156,76,32,195,208,165,9,34,106,128,170,146,235,226,232,22,
    110,248,23,134,97,187,73,236,31,49,18,212,73,144,198,231,
    17,235,155,250,236,56,109,212,204,23,227,207,143,7,178,171,
    210,61,28,120,25,159,217,93,47,138,98,101,123,190,111,123,
    74,37,193,241,153,146,169,173,98,251,97,218,36,19,58,107,
    57,152,10,122,227,81,14,30,50,52,130,71,191,248,65,87,
    225,203,58,191,176,21,82,169,16,8,39,177,159,226,56,145,
    232,75,229,16,147,138,148,28,51,35,140,19,151,166,210,246,
    56,239,14,190,63,205,57,97,48,54,203,57,116,82,25,246,
    84,149,81,232,165,169,203,156,208,56,3,142,8,191,242,194,
    51,201,212,83,164,135,12,81,87,243,176,32,200,221,35,246,
    115,105,89,132,40,142,252,49,114,20,116,63,164,205,238,49,
    240,106,12,189,77,132,221,18,182,101,252,191,44,182,140,174,
    149,129,173,156,3,142,226,157,2,54,183,200,44,142,224,187,
    196,216,210,52,56,56,176,20,236,121,31,80,143,22,59,187,
    212,124,135,154,247,168,217,203,5,189,125,105,235,87,165,125,
    66,59,24,44,34,11,67,70,48,115,97,252,57,239,185,63,
    245,30,140,122,109,242,2,131,124,101,234,5,22,69,200,228,
    144,90,156,202,254,101,66,250,37,197,99,242,22,38,70,142,
    129,16,167,222,20,248,172,26,167,65,34,47,231,152,117,8,
    136,179,104,236,207,160,209,33,171,48,20,157,251,121,164,115,
    105,134,6,161,179,67,164,74,55,232,214,166,230,253,197,41,
    120,10,167,254,53,56,125,66,155,53,50,56,213,25,70,85,
    124,26,70,215,204,180,94,164,189,245,43,48,34,12,89,55,
    96,232,123,212,51,175,203,185,112,248,100,210,253,122,6,62,
    196,144,49,43,196,17,118,198,219,196,251,44,112,182,49,107,
    63,143,182,49,17,27,156,136,127,196,137,152,147,57,151,49,
    58,224,154,28,115,117,167,68,74,232,153,176,149,37,216,180,
    130,237,40,137,95,143,237,184,103,43,150,146,226,227,193,195,
    116,255,97,250,9,70,62,251,144,99,142,142,125,58,186,37,
    114,68,209,137,150,62,123,221,149,156,211,248,205,117,117,48,
    114,57,48,185,89,174,68,12,81,194,102,133,179,110,57,44,
    167,42,161,104,188,32,237,86,11,237,18,179,159,17,249,42,
    171,214,20,219,136,151,170,96,30,92,29,119,185,84,226,175,
    248,252,130,212,77,114,74,160,98,214,105,107,14,153,121,18,
    195,249,193,28,38,110,157,117,167,133,180,254,144,99,161,60,
    197,2,61,102,14,232,191,1,151,141,2,254,10,100,109,52,
    106,6,232,2,255,100,222,117,154,254,71,96,228,223,144,183,
    57,110,180,41,87,243,12,12,39,233,19,158,170,211,248,103,
    240,247,25,183,201,147,173,153,21,134,179,201,214,42,98,14,
    195,228,157,18,170,53,31,156,200,28,39,94,74,211,116,196,
    153,122,226,52,144,23,197,28,70,220,219,199,204,178,38,236,
    18,15,95,79,17,67,233,106,71,172,27,51,56,248,49,53,
    31,21,16,16,249,216,173,178,179,7,111,207,166,174,142,222,
    95,209,158,22,115,185,186,196,213,194,60,153,2,216,165,28,
    216,31,21,192,150,156,106,222,240,145,128,90,131,236,122,105,
    8,60,143,97,53,69,199,31,11,100,9,58,101,114,1,174,
    118,69,230,33,34,15,74,20,194,230,242,24,107,226,72,235,
    168,48,173,182,26,53,175,23,228,236,100,184,131,208,27,30,
    251,222,225,128,136,211,14,221,220,103,140,156,221,198,44,187,
    132,119,241,54,142,249,245,113,206,246,171,5,57,250,79,129,
    153,209,236,50,172,253,184,203,222,253,229,137,180,135,114,120,
    140,167,187,147,96,100,247,66,175,207,218,55,51,113,62,207,
    197,81,108,190,171,217,63,125,68,109,108,119,227,8,163,236,
    89,87,197,137,237,75,60,239,72,223,254,161,205,33,218,14,
    82,219,59,198,175,94,87,105,252,206,59,29,151,146,94,210,
    79,185,106,60,61,167,238,2,173,231,226,9,54,192,138,57,
    132,34,7,234,115,85,17,113,25,221,218,29,48,93,225,73,
    70,141,117,192,161,74,192,217,167,230,251,176,216,192,252,49,
    232,163,117,74,42,41,139,29,163,98,168,141,107,62,247,5,
    173,78,175,123,222,203,119,241,60,125,7,130,19,100,25,6,
    75,220,46,83,92,166,43,14,43,187,226,160,193,21,232,212,
    242,171,149,58,57,104,249,219,58,40,195,125,129,64,79,111,
    213,47,157,39,255,39,110,157,159,65,150,113,223,230,147,115,
    101,218,83,237,147,90,219,152,151,199,27,44,153,174,237,89,
    50,241,60,122,128,245,154,197,245,218,1,213,107,19,174,233,
    92,67,151,108,83,35,113,201,205,55,5,84,8,71,242,220,
    189,9,104,186,46,35,243,123,163,145,140,124,231,17,204,150,
    90,252,121,65,138,34,207,59,135,153,60,105,138,13,172,173,
    174,195,144,98,201,140,96,12,183,82,1,188,221,197,154,242,
    207,185,41,155,119,230,2,138,115,64,77,99,46,122,104,117,
    191,255,22,159,230,251,33,62,230,99,197,254,14,179,48,109,
    115,112,203,7,88,97,138,226,172,47,67,169,228,141,246,84,
    196,81,118,74,243,37,6,232,120,140,229,52,23,171,248,30,
    186,238,34,35,220,167,72,43,129,236,8,128,17,14,79,84,
    155,70,165,92,17,156,24,174,92,48,106,30,232,152,164,75,
    178,113,234,176,199,172,22,138,228,59,176,60,88,147,186,249,
    144,112,132,170,208,23,107,116,106,119,190,11,217,217,203,249,
    176,176,5,157,67,185,14,214,167,10,196,62,39,45,206,81,
    206,79,114,45,14,31,239,231,18,237,107,137,218,193,80,95,
    233,240,45,220,240,177,90,187,50,205,79,60,236,111,94,25,
    77,101,18,120,97,240,141,190,202,201,135,21,9,114,149,46,
    241,83,188,113,70,96,86,230,85,201,214,75,100,63,72,145,
    18,147,41,150,100,78,251,233,255,196,217,236,242,5,154,91,
    215,77,250,140,118,72,167,254,244,16,27,186,155,169,172,86,
    68,217,32,135,54,241,168,84,23,150,89,107,84,172,218,74,
    197,170,44,153,124,212,174,99,65,92,181,42,43,53,65,255,
    246,16,34,85,99,175,94,17,255,5,84,215,57,235,
};

EmbeddedPython embedded_m5_internal_param_EmulatedDriver(
    "m5/internal/param_EmulatedDriver.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_EmulatedDriver.py",
    "m5.internal.param_EmulatedDriver",
    data_m5_internal_param_EmulatedDriver,
    2142,
    6177);

} // anonymous namespace