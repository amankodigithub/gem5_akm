#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BasicExtLink[] = {
    120,156,189,88,109,115,219,198,17,222,3,64,74,164,36,75,
    178,44,249,77,182,104,167,142,25,55,150,236,52,174,59,19,
    199,173,227,186,51,205,212,138,11,166,99,71,201,20,133,136,
    147,4,10,4,56,192,201,50,51,82,59,173,60,109,102,250,
    165,95,58,253,5,253,208,127,211,127,148,236,238,1,224,73,
    34,235,116,106,86,38,207,203,195,98,177,47,207,190,28,218,
    144,255,85,240,251,179,6,64,182,105,1,4,248,17,16,1,
    116,5,108,8,16,82,64,112,14,118,43,144,126,8,65,5,
    94,3,108,88,32,45,56,66,194,134,47,45,136,167,249,158,
    42,68,54,239,8,232,215,65,58,176,81,129,231,241,60,56,
    178,10,187,117,72,127,7,66,136,88,192,139,96,2,130,73,
    120,141,210,145,168,177,192,73,160,205,58,111,214,32,152,226,
    205,58,4,211,76,76,65,127,14,228,52,108,204,16,219,198,
    25,20,123,11,197,206,178,216,127,147,216,0,175,44,66,112,
    134,216,81,175,47,136,211,33,78,126,222,44,75,153,43,180,
    156,135,141,179,5,189,96,208,231,12,122,209,160,151,12,250,
    188,65,95,48,232,139,6,125,201,160,47,27,244,178,65,95,
    49,232,171,6,189,98,208,13,131,190,102,208,215,13,250,29,
    131,254,129,65,223,48,232,119,13,250,166,65,55,13,250,61,
    166,209,203,103,161,115,11,58,63,132,206,251,176,133,129,159,
    47,61,122,27,164,13,157,85,216,88,5,137,159,219,112,132,
    216,8,206,26,119,172,241,29,11,229,29,119,248,142,187,176,
    113,23,36,126,238,232,59,170,208,106,46,33,222,194,111,241,
    175,41,144,82,211,184,188,148,105,22,38,177,23,198,91,73,
    104,209,245,42,45,132,206,54,45,19,57,76,31,19,76,255,
    5,140,209,192,202,97,122,8,40,88,144,45,145,5,135,76,
    28,90,208,111,194,129,128,142,3,129,13,7,248,152,10,41,
    176,45,224,200,130,175,108,98,56,196,213,65,48,93,5,71,
    105,140,118,24,76,90,210,4,28,86,224,160,2,173,23,7,
    22,109,236,214,32,253,39,124,189,204,66,39,89,168,5,7,
    184,58,112,228,192,97,21,158,35,19,110,117,106,100,190,120,
    113,128,150,226,78,171,233,160,182,235,134,185,100,74,16,166,
    177,223,149,106,1,105,175,231,167,126,215,251,196,207,194,246,
    147,87,234,87,97,188,219,172,23,140,73,182,218,243,213,142,
    203,119,218,228,146,110,79,177,196,36,150,106,10,137,173,48,
    14,188,110,18,236,69,82,77,146,56,111,43,140,164,231,241,
    197,95,118,123,73,170,158,164,105,146,186,228,85,222,140,18,
    191,188,131,124,218,142,146,76,54,233,105,252,24,151,196,43,
    226,222,234,177,68,82,128,181,165,155,3,153,181,211,176,167,
    48,88,90,34,113,147,180,38,133,137,151,236,9,46,107,59,
    73,87,174,109,249,237,189,72,245,215,182,101,247,222,218,230,
    94,24,5,107,143,220,167,107,189,190,218,73,226,53,220,11,
    99,37,209,21,209,218,105,39,172,34,215,89,18,183,31,110,
    123,33,27,226,237,200,168,39,211,25,218,189,68,143,18,115,
    98,90,84,133,45,154,98,6,169,10,126,109,177,108,77,137,
    245,144,76,105,147,121,4,36,199,132,14,197,83,192,174,5,
    233,50,1,163,131,31,65,145,68,120,180,232,154,197,215,126,
    77,62,208,187,29,155,194,173,55,15,24,76,136,42,228,124,
    64,241,141,129,17,81,129,78,21,52,82,16,96,26,58,105,
    159,86,100,39,49,22,10,119,32,251,59,160,79,17,35,7,
    144,227,231,200,6,17,207,129,170,83,201,194,221,37,124,224,
    159,24,130,173,38,169,191,206,56,80,59,97,150,236,199,236,
    109,162,57,105,90,232,153,103,253,207,54,59,178,173,178,21,
    220,248,34,217,107,180,253,56,78,84,195,15,130,134,175,84,
    26,110,238,41,153,53,84,210,184,145,53,41,128,238,124,1,
    165,82,94,191,87,64,135,194,140,208,209,63,130,176,173,240,
    7,99,212,227,40,100,82,33,12,118,146,32,195,125,18,177,
    45,149,75,74,42,114,114,194,138,48,74,60,98,165,199,35,
    223,25,252,253,168,208,132,161,216,172,22,192,201,100,180,165,
    234,140,65,63,203,60,214,132,246,25,110,36,248,165,31,237,
    73,150,158,161,60,84,136,72,173,195,88,0,119,129,148,47,
    108,101,3,226,36,14,250,168,79,216,190,73,143,186,192,176,
    155,102,224,45,34,232,38,112,173,226,255,85,177,100,181,157,
    28,106,213,2,110,84,233,20,112,176,69,30,111,132,222,17,
    86,149,166,197,101,129,109,224,172,187,78,20,221,236,46,211,
    114,133,150,171,180,172,20,102,190,109,91,103,78,218,122,159,
    228,91,108,32,155,66,1,176,11,83,130,99,153,115,113,144,
    57,88,237,90,148,1,22,229,201,32,3,28,170,140,233,67,
    90,145,149,115,203,134,236,115,170,195,148,41,44,140,146,2,
    225,77,212,0,244,236,24,119,142,12,158,44,240,234,18,8,
    77,36,110,27,72,116,41,38,12,67,247,98,81,227,60,226,
    208,0,116,47,147,168,202,16,207,54,104,185,54,46,247,14,
    160,180,125,10,74,31,209,163,230,114,40,205,48,132,234,248,
    157,179,218,118,238,243,178,217,45,156,128,16,225,199,25,130,
    159,119,137,178,79,91,57,102,232,228,182,253,194,128,14,169,
    99,153,38,172,35,209,63,79,154,155,160,57,143,157,250,121,
    124,30,155,175,197,205,247,14,55,95,110,224,60,182,233,66,
    107,115,173,213,68,133,92,176,101,195,82,222,84,179,26,174,
    189,52,121,213,111,36,91,13,197,54,82,93,124,112,35,91,
    189,145,125,132,21,175,241,144,107,141,174,121,186,170,165,178,
    71,85,137,110,125,242,170,45,185,147,241,47,207,211,69,200,
    227,130,228,229,29,18,241,179,72,14,180,10,207,114,57,206,
    84,74,85,120,44,190,173,151,190,37,85,63,37,225,117,118,
    172,45,206,35,86,234,130,53,240,116,181,229,225,136,175,226,
    247,19,114,54,89,41,129,70,119,183,165,245,99,213,201,8,
    247,253,99,120,120,203,138,187,107,40,233,55,5,14,170,3,
    28,208,215,46,160,252,23,224,49,81,192,159,129,34,141,1,
    205,161,92,34,159,66,187,64,236,191,5,198,252,144,94,205,
    245,162,69,253,153,57,176,140,100,247,153,85,183,238,79,225,
    27,35,97,138,6,107,231,131,160,217,96,157,178,214,48,68,
    190,87,19,117,142,23,37,10,198,142,159,17,155,174,52,131,
    28,28,148,239,114,124,195,74,251,182,241,50,169,197,122,164,
    193,87,3,180,80,139,186,44,22,44,3,3,119,105,249,160,
    12,191,40,246,222,162,50,43,48,186,127,122,186,98,127,73,
    79,116,88,199,217,9,158,99,76,33,37,160,43,5,160,63,
    40,1,45,185,185,188,230,225,159,86,139,34,122,100,9,60,
    117,226,236,68,135,60,7,100,5,54,170,4,125,158,108,69,
    158,25,162,40,69,84,184,142,117,46,246,194,186,246,79,25,
    84,29,47,90,94,141,37,197,41,100,15,34,191,187,25,248,
    15,255,64,162,73,126,187,200,21,171,80,118,206,84,150,112,
    46,70,233,203,63,239,21,74,191,28,75,122,255,24,37,149,
    202,50,152,131,164,205,57,253,249,142,108,116,101,119,19,207,
    112,59,97,175,177,21,249,219,236,121,59,55,230,179,194,24,
    197,161,59,217,235,179,91,180,38,141,118,18,99,93,221,107,
    171,36,109,4,18,207,53,50,104,220,110,112,81,110,132,89,
    195,223,196,171,126,91,105,220,30,79,53,30,26,253,116,59,
    227,249,112,119,159,200,177,69,206,195,83,106,136,147,241,31,
    161,236,121,250,244,84,214,88,158,121,117,26,96,123,194,19,
    139,234,235,34,67,125,223,93,165,229,61,24,103,41,254,16,
    37,253,158,68,146,59,170,226,178,85,179,248,44,101,242,61,
    163,59,179,211,249,182,255,125,242,77,191,223,201,179,174,74,
    156,114,130,142,197,180,214,168,32,111,212,139,205,41,94,167,
    121,115,166,120,133,116,134,55,103,249,181,76,149,119,230,41,
    105,39,254,215,164,229,36,24,27,252,191,121,171,185,234,222,
    255,191,232,234,254,4,242,222,59,42,79,133,105,200,140,206,
    211,142,40,198,118,211,10,62,241,95,28,10,36,175,157,74,
    95,73,29,133,229,49,89,198,233,173,31,244,215,65,246,157,
    158,56,31,149,70,28,241,152,209,63,199,193,209,71,20,14,
    142,120,30,95,194,209,211,225,209,243,1,141,158,7,108,177,
    103,233,233,115,128,178,74,105,56,157,230,98,185,239,157,54,
    94,15,152,164,156,223,235,201,56,112,111,129,57,51,242,229,
    177,68,154,10,202,223,192,104,250,182,56,135,67,226,233,28,
    162,2,105,24,197,81,170,148,89,51,174,120,49,18,255,81,
    32,177,73,37,104,80,37,221,7,180,112,93,44,75,162,251,
    211,210,219,43,195,97,38,95,41,156,41,2,73,39,143,55,
    242,224,16,194,37,187,216,24,117,3,90,241,70,161,37,79,
    33,180,216,224,32,112,86,4,50,146,74,14,193,135,34,43,
    243,163,107,32,177,143,37,125,60,103,240,28,143,191,35,207,
    27,95,43,248,24,120,232,214,21,10,91,129,168,98,51,88,
    20,139,86,173,90,19,220,65,79,188,111,213,90,208,212,165,
    39,214,126,230,114,25,153,45,35,195,47,5,139,190,70,65,
    228,243,211,186,223,213,175,119,248,85,134,251,14,228,135,82,
    247,102,25,97,242,17,31,19,244,129,11,115,137,187,59,55,
    115,247,71,180,143,80,133,238,189,213,194,166,85,109,147,187,
    183,217,127,140,199,180,52,137,34,124,168,197,76,106,121,36,
    111,171,159,41,217,85,87,135,50,180,194,110,47,146,79,101,
    55,73,251,35,158,247,40,31,53,114,166,203,67,153,240,162,
    126,245,198,128,57,125,253,113,148,180,119,101,144,243,92,25,
    205,243,243,164,235,227,254,240,167,160,182,185,132,249,19,215,
    131,148,238,90,60,177,155,201,52,244,163,240,107,201,128,52,
    175,200,120,175,235,61,219,79,91,56,151,203,17,206,123,150,
    236,203,244,41,98,58,82,215,79,48,12,46,177,0,239,165,
    164,65,77,93,123,131,28,253,180,17,182,237,109,230,145,26,
    238,65,236,87,105,215,143,114,255,92,24,46,67,11,56,249,
    0,54,86,135,143,212,56,101,238,163,32,72,93,63,222,30,
    105,199,113,8,20,92,39,197,148,209,41,24,134,67,46,55,
    68,59,118,56,18,56,109,221,4,207,153,233,8,111,49,7,
    101,117,81,124,248,162,162,180,60,201,80,43,42,24,253,226,
    97,240,84,211,230,90,148,202,237,48,163,39,206,154,55,228,
    45,237,227,255,80,132,205,155,199,86,186,244,49,73,191,134,
    121,72,47,245,178,29,92,232,197,107,109,182,134,101,140,154,
    157,45,234,216,238,28,123,122,174,230,76,79,213,156,218,132,
    205,239,210,102,240,228,91,119,106,83,211,226,191,251,183,130,
    69,177,110,173,204,215,196,119,212,142,144,113,
};

EmbeddedPython embedded_m5_internal_param_BasicExtLink(
    "m5/internal/param_BasicExtLink.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_BasicExtLink.py",
    "m5.internal.param_BasicExtLink",
    data_m5_internal_param_BasicExtLink,
    2460,
    7454);

} // anonymous namespace