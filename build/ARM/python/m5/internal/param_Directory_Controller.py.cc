#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Directory_Controller[] = {
    120,156,189,89,235,115,219,198,17,223,3,31,18,41,201,122,
    75,126,200,22,109,71,54,227,196,146,157,198,117,103,236,186,
    117,156,100,166,153,177,226,130,238,216,81,50,69,33,226,40,
    129,2,1,22,56,90,102,70,106,167,149,167,205,76,63,119,
    250,173,223,250,161,255,77,255,163,118,119,15,0,65,138,146,
    173,73,105,75,58,47,247,238,246,246,241,187,189,189,99,29,
    226,127,5,252,251,101,5,32,218,54,0,28,252,21,224,1,
    180,4,108,9,16,82,128,179,0,123,5,8,63,5,167,0,
    111,0,182,12,144,6,28,33,145,131,111,13,240,39,121,78,
    17,188,28,115,4,116,203,32,243,176,85,128,23,254,44,228,
    101,17,246,202,16,254,14,132,16,190,128,151,206,24,56,227,
    240,6,165,35,81,98,129,227,64,204,50,51,75,224,76,48,
    179,12,206,36,19,19,208,157,1,57,9,91,83,52,108,235,
    28,138,189,133,98,167,89,236,127,72,172,131,61,139,224,156,
    163,225,168,215,55,52,50,79,35,121,189,105,150,50,147,104,
    57,11,91,115,9,61,159,161,23,50,244,98,134,94,202,208,
    203,25,250,124,134,190,144,161,47,102,232,75,25,122,37,67,
    95,206,208,87,50,244,106,134,174,100,232,171,25,250,90,134,
    190,158,161,63,200,208,107,25,250,70,134,190,153,161,171,25,
    250,67,166,209,203,115,208,188,5,205,143,160,249,49,52,48,
    240,179,169,71,111,131,204,65,115,29,182,214,65,226,239,109,
    56,66,108,56,115,153,25,27,60,99,62,157,113,135,103,220,
    133,173,187,32,241,247,142,158,81,132,90,117,9,241,230,254,
    23,255,85,5,82,106,18,155,87,50,140,220,192,183,92,191,
    17,184,6,245,23,169,33,116,214,169,25,139,97,250,132,96,
    250,111,96,140,58,70,12,211,67,64,193,130,108,241,12,56,
    100,226,208,128,110,21,14,4,52,243,224,228,224,0,151,41,
    144,2,59,2,142,12,248,46,71,3,14,177,205,35,152,174,
    64,94,105,140,54,25,76,90,210,24,28,22,224,160,0,181,
    151,7,6,49,246,74,16,254,11,190,95,97,161,227,44,212,
    128,3,108,243,112,148,135,195,34,188,192,65,200,106,150,200,
    124,241,242,0,45,69,78,173,154,71,109,55,51,230,146,41,
    142,27,250,118,75,170,75,72,91,109,59,180,91,214,231,110,
    40,235,42,8,187,214,147,192,87,97,224,121,50,172,150,147,
    9,65,180,222,182,213,174,201,18,114,228,154,86,91,177,228,
    192,151,106,2,137,134,235,59,86,43,112,58,158,84,227,36,
    214,106,184,158,180,44,238,252,85,171,29,132,234,139,48,12,
    66,147,188,203,76,47,176,211,25,228,219,186,23,68,178,74,
    171,241,50,38,137,87,52,186,209,102,137,164,0,107,77,147,
    29,25,213,67,183,173,48,104,90,34,141,38,105,85,10,23,
    55,209,83,108,54,118,131,150,220,104,216,245,142,167,186,27,
    59,178,117,111,99,187,227,122,206,198,99,243,233,70,187,171,
    118,3,127,3,121,174,175,36,186,196,219,56,217,25,235,56,
    122,142,196,238,187,59,150,203,6,89,187,210,107,203,112,138,
    184,23,105,73,49,35,38,69,81,228,68,85,76,33,85,192,
    191,156,88,49,38,196,166,75,38,213,201,76,2,86,62,11,
    37,138,175,128,61,3,194,21,2,74,19,127,5,69,22,225,
    82,163,62,131,251,126,77,190,208,220,102,142,194,175,153,7,
    12,46,68,25,142,124,72,241,246,129,17,82,128,102,17,52,
    114,16,112,26,74,97,151,90,28,78,98,12,20,158,135,232,
    239,128,190,69,204,28,64,140,167,163,28,8,127,6,84,153,
    82,24,114,151,112,193,63,51,36,107,85,82,127,147,241,160,
    118,221,40,216,247,217,235,68,243,38,170,161,103,158,117,191,
    222,110,162,239,162,85,100,124,19,116,42,117,219,247,3,85,
    177,29,167,98,43,21,186,219,29,37,163,138,10,42,107,81,
    149,2,105,206,38,144,74,229,117,219,9,132,40,220,8,33,
    253,193,113,235,10,63,204,243,7,142,66,36,21,194,97,55,
    112,34,228,147,136,29,169,76,82,82,145,147,3,86,132,209,
    98,209,80,90,30,199,157,195,207,143,19,77,24,146,213,98,
    2,160,72,122,13,85,102,44,218,81,100,177,38,196,103,216,
    145,224,87,182,215,145,44,61,66,121,168,16,145,90,135,145,
    2,239,60,25,145,216,204,134,248,129,239,116,81,47,183,126,
    147,150,60,207,240,155,100,0,46,34,248,198,176,45,226,255,
    69,177,100,212,243,49,228,138,9,236,40,3,42,224,160,139,
    56,238,8,193,35,204,54,85,131,211,5,219,194,187,240,26,
    81,52,217,92,161,230,50,53,87,168,89,77,204,29,149,205,
    83,131,54,223,167,117,12,54,148,77,162,128,228,18,147,156,
    190,157,116,161,183,147,48,27,214,104,71,24,180,111,122,59,
    34,79,153,51,124,68,45,14,229,189,150,131,232,57,229,105,
    218,57,44,140,54,9,194,157,168,222,38,96,7,153,51,100,
    248,120,130,95,147,64,153,69,230,78,6,153,38,197,134,97,
    105,94,72,114,159,69,35,52,32,77,74,194,188,181,6,61,
    92,161,230,234,168,221,220,131,214,206,49,104,61,160,37,103,
    98,104,77,49,164,202,248,55,99,212,115,177,239,211,67,113,
    126,0,82,132,167,252,16,60,221,32,42,119,220,218,247,4,
    165,216,198,47,51,80,34,181,140,172,41,155,72,116,151,201,
    130,44,136,150,241,100,127,225,47,227,97,109,240,97,125,135,
    15,107,62,240,185,204,211,137,56,199,185,88,19,5,114,69,
    35,7,75,241,33,28,149,176,109,135,193,235,110,37,104,84,
    20,219,74,121,243,225,90,180,190,22,61,192,140,88,121,196,
    185,72,231,68,157,245,66,217,166,172,69,83,191,120,93,151,
    124,226,241,39,203,210,73,202,226,132,101,197,39,41,226,105,
    145,28,105,36,30,230,116,29,169,144,178,244,72,125,92,78,
    125,76,42,127,69,139,148,217,193,57,177,140,216,41,11,214,
    196,210,89,153,139,42,238,197,191,207,200,233,100,173,4,42,
    249,205,154,214,147,77,32,99,204,143,251,240,49,34,3,204,
    13,148,248,155,4,23,197,30,46,232,47,151,64,252,175,192,
    101,166,128,191,0,69,30,3,28,67,60,221,17,20,234,121,
    26,254,91,224,189,48,228,108,231,124,82,163,243,156,71,96,
    154,137,238,243,80,125,212,127,5,63,100,54,82,114,32,231,
    226,66,50,123,32,231,211,92,196,144,121,167,67,55,223,159,
    180,40,40,187,118,68,195,116,38,234,237,205,94,154,79,203,
    62,204,196,163,194,207,184,22,111,145,38,223,245,208,67,71,
    218,37,49,111,100,48,113,151,154,79,82,56,136,132,55,2,
    165,86,225,228,115,215,210,25,254,91,90,57,207,186,78,143,
    169,5,252,127,152,176,20,240,133,4,240,159,164,128,151,124,
    40,189,225,75,5,181,6,69,250,200,16,120,155,197,26,140,
    46,143,121,144,5,216,42,210,214,224,74,89,196,59,71,36,
    41,139,18,92,223,137,199,94,217,212,254,74,131,173,227,72,
    205,235,145,166,2,10,229,67,207,110,109,59,246,163,63,210,
    18,180,78,61,217,75,70,162,244,76,86,105,218,7,226,36,
    189,249,227,189,68,249,87,35,77,3,63,69,137,169,210,12,
    122,39,168,243,222,127,190,43,43,45,217,218,198,187,226,174,
    219,174,52,60,123,135,35,145,139,141,250,58,49,74,113,40,
    7,107,134,232,22,181,65,165,30,248,152,143,59,180,118,197,
    145,120,111,146,78,229,118,133,147,121,197,141,42,246,54,246,
    218,117,165,113,221,191,37,185,24,181,195,157,136,235,206,189,
    125,34,71,30,73,11,111,197,46,86,222,127,130,244,204,212,
    183,180,52,55,115,77,173,183,9,30,111,120,35,82,93,157,
    148,168,126,48,215,169,249,16,222,71,10,255,20,37,254,129,
    68,147,123,138,226,146,81,50,212,197,19,118,228,51,146,20,
    29,223,151,101,241,14,251,82,191,47,197,187,179,72,35,229,
    24,93,203,169,45,81,66,223,42,39,204,9,110,39,153,57,
    149,48,207,113,59,205,204,153,132,57,203,237,28,51,231,19,
    230,2,183,139,204,92,74,152,203,220,158,103,230,133,132,121,
    145,219,75,204,92,73,152,151,185,189,194,204,213,132,89,225,
    246,42,51,175,37,175,106,215,153,249,1,108,173,209,147,12,
    113,110,80,190,25,251,177,249,134,247,237,200,119,236,15,255,
    215,52,99,222,127,175,58,155,63,131,184,188,56,41,197,136,
    172,65,83,58,197,52,69,114,115,201,90,195,143,33,87,79,
    197,188,85,15,165,173,164,142,206,202,136,45,229,76,165,23,
    252,91,47,129,28,47,186,31,167,70,29,113,101,213,93,224,
    160,233,91,27,7,77,188,240,47,98,245,157,231,234,251,33,
    85,223,7,236,1,203,208,5,120,15,133,133,212,17,84,194,
    248,114,127,168,114,218,25,186,214,38,37,237,118,91,250,142,
    121,11,178,229,51,119,143,20,9,148,35,255,1,153,122,39,
    39,22,176,94,62,190,231,40,247,103,140,228,232,21,210,93,
    54,234,56,50,98,255,153,32,182,74,143,14,189,3,192,124,
    72,13,167,252,52,219,155,191,72,163,80,61,29,142,78,218,
    133,183,179,119,31,140,21,25,95,132,82,142,186,243,174,83,
    61,68,163,95,215,235,157,121,18,173,59,155,93,55,233,81,
    235,111,17,213,178,77,249,251,142,140,212,243,0,135,241,234,
    103,156,66,107,79,211,218,253,124,117,247,29,196,68,109,44,
    60,228,151,97,208,74,22,63,251,44,90,127,46,89,191,175,
    75,221,62,93,88,35,8,177,92,113,178,203,159,109,6,45,
    77,117,70,63,91,125,116,186,144,112,208,225,103,25,79,75,
    210,5,61,203,124,91,196,194,33,126,62,227,148,36,200,3,
    252,183,133,43,59,252,169,108,37,251,233,236,179,146,32,31,
    239,82,15,78,23,166,2,188,20,177,140,122,218,213,183,217,
    126,204,124,82,139,139,224,83,6,113,54,229,227,207,145,158,
    84,242,148,196,175,40,93,197,207,117,14,70,55,12,186,150,
    165,223,40,240,179,103,89,163,47,87,127,14,252,160,0,17,
    29,83,88,174,138,34,22,172,139,98,224,199,40,21,75,130,
    239,0,3,223,76,105,221,232,30,169,239,230,221,200,228,106,
    98,58,77,188,252,181,73,82,145,83,142,230,132,185,105,183,
    244,195,55,63,238,154,215,33,126,150,51,111,166,9,156,30,
    42,249,65,68,63,53,225,17,202,247,19,190,142,152,63,33,
    254,26,54,173,123,235,137,165,235,218,82,179,179,221,77,173,
    141,49,99,240,72,126,103,60,62,161,214,141,148,108,241,23,
    81,217,78,233,119,90,150,158,255,52,112,36,199,61,219,255,
    216,113,66,211,246,119,164,245,138,215,226,144,247,13,136,111,
    81,49,164,227,81,149,161,58,244,143,61,166,139,30,132,157,
    250,155,13,126,19,56,222,255,196,11,234,123,210,137,199,92,
    62,121,204,231,65,203,70,254,240,85,106,110,178,202,236,64,
    191,19,210,172,197,1,110,36,67,215,246,220,239,165,186,48,
    204,131,207,246,195,154,194,157,113,204,127,122,181,103,193,190,
    12,201,191,158,186,54,48,160,215,197,2,78,114,243,160,28,
    189,218,9,182,117,182,227,104,15,247,32,214,190,97,203,246,
    98,255,12,106,156,122,38,81,229,202,105,66,180,81,195,215,
    121,42,163,200,222,145,159,117,26,13,121,18,36,8,199,189,
    189,122,130,251,104,80,108,209,112,101,80,231,182,39,99,88,
    209,94,76,250,249,153,104,232,74,148,119,19,60,246,216,124,
    177,61,177,170,231,28,22,202,29,23,85,9,89,116,191,208,
    184,208,165,108,163,110,158,158,128,179,146,70,158,255,244,59,
    145,126,183,126,68,223,138,68,187,216,208,55,88,165,233,18,
    230,66,42,133,115,162,140,197,112,62,55,57,83,202,79,78,
    148,242,165,177,28,127,9,49,37,230,141,114,190,52,49,41,
    206,246,179,138,185,180,108,172,158,47,137,255,1,210,125,135,
    144,
};

EmbeddedPython embedded_m5_internal_param_Directory_Controller(
    "m5/internal/param_Directory_Controller.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_Directory_Controller.py",
    "m5.internal.param_Directory_Controller",
    data_m5_internal_param_Directory_Controller,
    2689,
    8831);

} // anonymous namespace