#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RandomRepl[] = {
    120,156,189,88,253,110,219,200,17,159,37,41,217,146,237,88,
    142,191,146,216,137,149,164,206,169,65,107,183,215,75,83,224,
    220,180,185,244,10,244,128,248,82,42,69,114,190,67,89,154,
    92,217,148,41,82,32,215,118,116,176,129,162,14,218,162,255,
    247,17,250,71,223,166,79,112,175,210,206,204,146,20,45,219,
    232,1,103,157,35,109,70,203,221,217,249,248,205,199,210,131,
    236,175,130,223,95,55,1,210,111,4,128,143,31,1,33,64,
    79,192,142,0,33,5,248,11,112,80,129,228,35,240,43,240,
    30,96,199,0,105,192,25,18,38,124,105,64,52,205,123,170,
    16,154,60,35,96,80,7,105,193,78,5,222,68,115,96,201,
    42,28,212,33,249,19,8,33,34,1,111,253,9,240,39,225,
    61,114,71,162,198,12,39,129,38,235,60,89,3,127,138,39,
    235,224,79,51,49,5,131,6,200,105,216,153,161,101,59,55,
    144,237,99,100,59,203,108,255,67,108,125,124,178,8,254,13,
    90,142,114,125,65,43,45,90,201,231,205,50,151,70,46,229,
    28,236,220,204,233,249,18,189,80,162,23,75,244,82,137,94,
    46,209,183,74,244,237,18,125,167,68,175,148,232,213,18,125,
    183,68,223,99,26,53,188,9,221,53,232,54,161,123,31,58,
    104,244,185,66,155,7,32,77,232,62,132,157,135,32,241,243,
    0,206,208,47,254,205,210,142,31,240,142,249,98,199,58,239,
    120,4,59,143,64,226,103,93,239,168,66,187,181,132,190,14,
    254,139,127,45,244,53,168,105,28,142,100,146,6,113,228,4,
    81,39,14,12,122,94,165,129,144,225,209,48,145,65,228,5,
    65,228,223,192,248,240,141,12,34,167,128,140,5,233,18,26,
    112,202,196,169,1,131,22,156,8,232,90,224,155,112,130,199,
    84,72,128,61,1,103,6,124,101,210,130,83,28,45,116,228,
    61,176,148,198,71,151,29,169,57,77,192,105,5,78,42,208,
    126,123,98,208,196,65,13,146,127,193,215,171,204,116,146,153,
    26,112,130,163,5,103,22,156,86,225,13,46,194,169,110,141,
    212,23,111,79,80,83,156,105,183,44,148,118,187,164,46,169,
    226,7,73,228,246,164,154,67,218,233,187,137,219,115,108,55,
    242,227,158,45,251,97,171,158,47,139,211,141,190,171,246,109,
    222,103,146,65,122,125,197,252,226,72,170,41,36,58,65,228,
    59,189,216,63,12,165,154,36,102,78,39,8,165,227,240,195,
    223,245,250,113,162,62,77,146,56,177,201,166,60,25,198,110,
    177,131,44,234,133,113,42,91,116,26,31,99,19,123,69,171,
    59,125,230,72,2,176,172,180,217,151,169,151,4,125,133,174,
    210,28,105,53,113,107,145,147,120,72,95,224,176,185,31,247,
    228,102,199,245,14,67,53,216,220,147,189,39,155,187,135,65,
    232,111,62,183,95,110,246,7,106,63,142,54,113,46,136,148,
    68,67,132,155,163,38,216,192,53,55,137,217,113,176,231,4,
    172,134,179,47,195,190,76,102,104,246,14,29,36,26,98,90,
    84,133,41,90,98,6,169,10,126,77,177,106,76,137,237,128,
    20,241,72,57,2,145,85,134,13,249,82,192,129,1,201,42,
    129,162,139,31,65,94,68,104,180,233,153,193,207,126,79,22,
    208,179,93,147,92,173,39,79,24,72,136,40,92,185,69,190,
    141,128,209,80,129,110,21,52,74,16,92,26,54,201,128,70,
    92,78,108,12,100,110,65,250,79,64,139,34,62,78,32,195,
    206,153,9,34,106,128,170,83,170,192,217,37,60,240,47,12,
    191,118,139,196,223,102,20,168,253,32,141,143,35,182,53,209,
    28,48,109,180,204,171,193,231,187,93,233,169,116,13,39,190,
    136,15,155,158,27,69,177,106,186,190,223,116,149,74,130,221,
    67,37,211,166,138,155,235,105,139,220,103,207,229,64,42,248,
    13,250,57,112,200,201,8,28,253,195,15,60,133,63,230,249,
    7,123,33,149,10,65,176,31,251,41,206,19,139,61,169,108,
    18,82,145,145,99,22,132,49,226,208,82,58,30,215,221,192,
    223,207,115,73,24,136,173,106,14,155,84,134,29,85,103,4,
    186,105,234,176,36,52,207,96,35,198,71,110,120,40,153,123,
    138,252,80,32,34,181,12,99,128,219,45,18,61,215,148,197,
    143,226,200,31,160,52,129,247,1,29,116,139,65,55,205,176,
    91,68,200,77,224,88,197,255,171,98,201,240,172,12,104,213,
    28,108,148,227,20,176,171,69,230,109,4,222,25,230,147,150,
    193,9,129,53,224,136,123,64,20,109,182,87,105,184,75,195,
    61,26,214,114,37,175,87,211,153,81,77,159,18,119,131,213,
    99,69,200,248,102,174,136,127,46,106,110,15,163,6,179,92,
    155,208,111,80,140,12,209,111,81,70,76,158,209,136,75,57,
    174,76,72,95,83,254,165,40,97,102,20,16,8,109,162,134,
    128,103,179,216,13,82,119,50,199,170,77,0,44,163,112,175,
    132,66,155,60,194,16,180,111,231,217,205,161,21,26,124,246,
    10,177,170,92,98,215,38,13,247,199,99,220,33,140,246,46,
    192,232,99,58,168,145,193,104,134,225,83,199,111,195,240,204,
    204,226,69,137,155,31,129,15,97,199,186,4,59,143,136,50,
    47,234,56,86,216,100,154,253,182,4,27,18,198,40,43,176,
    141,196,96,153,228,46,3,102,25,171,243,155,104,25,11,174,
    193,5,247,39,92,112,185,104,115,155,164,19,172,201,57,86,
    19,21,50,64,199,132,165,172,144,166,53,28,251,73,252,110,
    208,140,59,77,197,26,82,62,220,90,79,55,214,211,143,49,
    211,53,159,113,142,209,185,78,103,179,68,246,41,27,209,214,
    79,223,121,146,235,23,255,114,28,157,124,28,78,68,78,86,
    23,17,59,139,100,62,35,183,43,167,225,84,37,148,125,199,
    96,217,122,97,89,18,244,51,98,93,103,179,154,98,25,113,
    82,23,124,190,163,115,44,183,67,252,20,191,159,144,169,73,
    71,9,212,40,219,109,45,29,11,78,42,216,63,58,135,133,
    107,21,219,222,68,62,127,200,49,80,29,98,128,190,102,14,
    226,191,1,183,133,2,254,10,228,101,116,102,6,226,2,243,
    228,214,121,90,254,71,96,180,95,82,159,57,79,180,169,38,
    243,10,76,31,233,83,94,170,203,245,103,240,247,82,168,228,
    69,213,204,26,191,114,81,181,138,28,195,240,248,86,133,211,
    58,159,140,200,21,251,110,74,203,116,134,25,70,223,48,105,
    23,13,27,102,216,235,197,202,164,102,234,208,249,95,13,145,
    66,101,105,69,204,27,37,255,255,148,134,15,11,215,139,124,
    238,218,68,89,131,171,43,166,163,179,244,151,116,158,197,18,
    206,78,48,206,135,44,10,32,87,114,32,127,88,0,89,114,
    57,121,207,109,62,141,6,249,242,204,16,120,183,195,78,137,
    174,82,22,200,10,236,84,9,242,220,197,138,44,34,68,158,
    128,40,93,157,171,85,108,129,109,109,155,194,157,218,83,52,
    188,27,67,96,147,179,182,66,183,183,235,187,207,40,85,165,
    196,221,203,99,196,200,69,109,148,69,37,124,139,171,164,229,
    159,79,114,145,143,198,16,212,63,7,46,60,90,84,134,176,
    31,123,28,201,175,247,101,179,39,123,187,120,83,219,15,250,
    205,78,232,238,177,213,205,76,149,207,115,85,20,187,109,180,
    178,167,143,105,140,155,94,28,97,38,61,244,84,156,52,125,
    137,247,23,233,55,127,220,228,52,220,12,210,166,187,139,79,
    93,79,105,188,158,15,48,110,15,221,100,47,229,78,240,224,
    152,200,49,121,205,193,155,104,128,29,240,17,20,53,78,223,
    145,138,172,202,189,173,134,63,150,35,188,153,168,129,78,44,
    84,229,237,13,26,126,8,227,75,190,31,101,62,74,201,20,
    85,177,98,212,12,213,56,23,95,175,104,87,122,49,202,94,
    126,155,40,211,239,78,178,88,171,230,47,93,38,64,242,5,
    134,222,139,84,179,247,34,24,128,19,223,53,0,25,210,99,
    2,243,233,181,198,157,253,244,123,144,212,254,5,100,213,243,
    170,152,19,101,53,102,116,204,117,69,222,112,151,117,224,91,
    250,242,37,192,112,188,68,186,74,106,251,175,142,69,43,14,
    83,125,204,159,135,113,116,177,87,124,94,40,112,198,77,194,
    96,129,221,162,47,22,236,22,241,38,186,131,77,163,197,77,
    227,22,53,141,39,172,173,99,232,190,113,136,174,74,161,244,
    2,14,145,60,118,70,21,215,141,33,137,230,246,251,50,242,
    237,199,80,238,245,248,241,24,60,76,105,225,12,74,5,219,
    20,11,216,220,93,140,27,74,114,37,133,216,63,149,34,82,
    198,227,41,198,223,63,114,252,181,168,161,30,102,58,123,139,
    6,78,46,69,90,179,127,5,121,170,43,16,230,203,80,42,
    121,193,222,156,150,178,235,155,47,49,187,199,3,236,183,185,
    163,197,223,161,227,140,43,69,254,82,135,183,190,31,96,138,
    20,85,163,102,214,170,53,193,21,101,228,45,163,62,159,46,
    250,186,111,27,164,54,135,226,108,161,34,191,12,203,51,61,
    153,132,111,16,219,110,79,191,216,224,107,188,253,16,178,75,
    153,253,65,97,47,186,156,114,179,172,175,28,136,73,174,118,
    92,220,236,159,209,60,53,142,189,39,27,185,54,27,90,155,
    79,220,84,182,165,122,158,166,177,199,111,228,122,79,212,157,
    43,87,190,118,177,46,174,93,250,248,69,24,123,7,210,215,
    47,139,212,221,171,215,252,38,238,185,56,191,114,233,138,118,
    208,203,56,204,141,60,247,19,218,181,56,50,155,202,36,112,
    195,224,107,169,110,143,60,145,209,97,207,121,117,156,180,177,
    107,148,106,245,210,211,94,197,199,50,121,25,35,64,212,131,
    145,5,195,71,204,192,57,146,212,76,168,251,255,135,143,62,
    237,10,221,14,119,219,131,84,201,222,21,22,196,60,156,244,
    220,48,179,15,33,33,95,192,175,41,47,241,23,97,174,60,
    193,5,123,36,17,115,76,36,114,47,192,147,19,102,84,222,
    145,101,43,66,49,251,236,66,2,47,239,30,83,12,233,14,
    86,223,138,159,209,251,21,142,10,122,3,86,155,173,97,60,
    81,22,51,241,130,58,35,44,115,186,81,179,166,167,106,86,
    109,194,228,23,27,51,120,29,169,91,181,169,105,113,213,191,
    53,140,197,186,177,134,156,254,7,78,160,167,203,
};

EmbeddedPython embedded_m5_internal_param_RandomRepl(
    "m5/internal/param_RandomRepl.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_RandomRepl.py",
    "m5.internal.param_RandomRepl",
    data_m5_internal_param_RandomRepl,
    2285,
    6663);

} // anonymous namespace
