#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseSetAssoc[] = {
    120,156,189,88,253,110,219,214,21,63,151,164,100,75,150,99,
    57,142,237,36,118,98,37,173,87,45,216,236,173,107,150,1,
    245,130,165,93,6,172,64,93,151,202,144,68,45,198,209,228,
    149,77,153,34,5,242,42,142,58,25,24,230,96,221,11,236,
    17,246,199,222,102,216,11,109,231,156,75,74,244,215,86,160,
    214,28,233,230,232,242,240,240,124,252,206,199,165,7,217,95,
    9,191,191,106,0,164,255,18,0,62,126,4,132,0,61,1,
    109,1,66,10,240,111,193,81,9,146,143,192,47,193,59,128,
    182,1,210,128,83,36,76,248,202,128,168,198,247,148,33,52,
    121,71,192,176,10,210,130,118,9,94,70,139,96,201,50,28,
    85,33,249,3,8,33,34,1,175,252,25,240,103,225,29,74,
    71,162,194,2,103,129,54,171,188,89,1,127,142,55,171,224,
    215,152,152,131,97,29,100,13,218,243,196,214,190,129,98,31,
    161,216,5,22,251,79,18,235,227,149,101,240,111,16,59,234,
    245,154,56,45,226,228,231,45,176,148,122,174,229,34,180,111,
    230,244,82,129,190,85,160,151,11,244,74,129,94,45,208,183,
    11,244,157,2,125,183,64,175,21,232,245,2,125,143,105,180,
    234,38,116,239,67,119,3,186,13,232,160,163,23,199,22,60,
    0,105,66,247,33,180,31,130,196,207,3,56,197,88,248,55,
    11,119,188,199,119,44,141,239,120,159,239,216,132,246,38,72,
    252,188,175,239,40,67,171,185,130,241,13,254,141,127,77,140,
    47,168,26,46,111,100,146,6,113,228,4,81,39,14,12,186,
    94,166,133,208,224,209,50,147,193,226,83,130,197,63,128,49,
    225,27,25,44,78,0,5,11,178,37,52,224,132,137,19,3,
    134,77,24,9,232,90,224,155,48,194,199,148,72,129,3,1,
    167,6,124,109,18,195,9,174,22,6,239,62,88,74,99,162,
    203,193,211,146,102,224,164,4,163,18,180,94,141,12,218,56,
    170,64,242,119,248,102,157,133,206,178,80,3,70,184,90,112,
    106,193,73,25,94,34,19,110,117,43,100,190,120,53,66,75,
    113,167,213,180,80,219,221,130,185,100,138,31,36,145,219,147,
    106,9,105,167,239,38,110,207,249,196,77,101,75,170,103,105,
    26,123,205,106,206,24,167,91,125,87,29,218,124,167,73,46,
    233,245,21,75,140,35,169,230,144,232,4,145,239,244,98,127,
    16,74,53,75,226,156,78,16,74,199,225,139,191,237,245,227,
    68,61,79,146,56,177,201,171,188,25,198,238,248,14,242,169,
    23,198,169,108,210,211,248,49,54,137,87,196,221,233,179,68,
    82,128,181,165,155,125,153,122,73,208,87,24,44,45,145,184,
    73,90,147,194,196,75,250,28,151,237,195,184,39,183,59,174,
    55,8,213,112,251,64,246,30,111,239,15,130,208,223,126,102,
    127,190,221,31,170,195,56,218,198,189,32,82,18,93,17,110,
    95,116,194,22,114,221,36,113,199,193,129,19,176,33,206,161,
    12,251,50,153,167,221,187,244,40,81,23,53,81,22,166,104,
    138,121,164,74,248,53,197,186,49,39,118,3,50,197,35,243,
    8,72,86,17,58,20,79,1,71,6,36,235,4,140,46,126,
    4,69,18,225,209,162,107,6,95,251,146,124,160,119,187,38,
    133,91,111,142,24,76,136,42,228,220,161,248,70,192,136,40,
    65,183,12,26,41,8,48,13,157,100,72,43,178,147,24,3,
    133,91,144,254,13,208,167,136,145,17,100,248,57,53,65,68,
    117,80,85,42,17,184,187,130,15,252,51,67,176,213,36,245,
    119,25,7,234,48,72,227,227,136,189,77,52,39,77,11,61,
    179,55,252,98,191,43,61,149,110,224,198,235,120,208,240,220,
    40,138,85,195,245,253,134,171,84,18,236,15,148,76,27,42,
    110,108,166,77,10,160,189,152,67,105,44,111,216,207,161,67,
    97,70,232,232,31,126,224,41,252,193,24,117,56,10,169,84,
    8,131,195,216,79,113,159,68,28,72,101,147,146,138,156,28,
    179,34,140,18,135,88,233,241,200,119,3,127,63,203,53,97,
    40,54,203,57,112,82,25,118,84,149,49,232,166,169,195,154,
    208,62,195,141,4,191,113,195,129,100,233,41,202,67,133,136,
    212,58,76,5,112,183,73,249,220,86,54,32,138,35,127,136,
    250,4,222,7,244,168,219,12,187,26,3,111,25,65,55,131,
    107,25,255,47,139,21,195,179,50,168,149,115,184,81,165,83,
    192,193,22,89,188,17,122,167,88,85,154,6,151,5,182,129,
    179,238,33,81,116,179,189,78,203,61,90,238,211,178,145,155,
    121,221,182,206,159,183,245,9,201,55,216,64,54,133,2,96,
    230,166,248,103,50,231,206,36,115,176,218,181,40,3,12,202,
    147,73,6,88,84,25,147,167,180,34,43,231,150,9,233,11,
    170,195,148,41,44,140,146,2,225,77,212,4,244,236,24,187,
    78,6,207,230,120,181,9,132,69,36,30,20,144,104,83,76,
    24,134,246,157,188,198,57,196,161,1,104,175,145,168,210,37,
    158,109,208,242,96,90,238,157,64,233,224,2,148,62,166,71,
    213,51,40,205,51,132,170,248,173,27,158,153,249,124,220,236,
    150,206,65,136,240,99,93,130,159,31,16,101,94,180,114,202,
    208,201,108,251,77,1,58,164,142,81,52,97,23,137,225,42,
    105,94,4,205,42,118,234,151,209,42,54,95,131,155,239,79,
    184,249,114,3,231,49,73,23,90,147,107,173,38,74,228,130,
    142,9,43,89,83,77,43,184,246,147,248,237,176,17,119,26,
    138,109,164,186,184,179,153,110,109,166,31,99,197,107,60,229,
    90,163,107,158,174,106,137,236,83,85,162,91,159,191,245,36,
    119,50,254,229,56,186,8,57,92,144,156,172,67,34,126,150,
    201,129,70,238,89,46,199,169,74,168,10,79,197,183,213,177,
    111,73,213,207,72,120,149,29,107,138,85,196,74,85,176,6,
    142,174,182,60,28,241,85,252,126,66,206,38,43,37,208,168,
    108,183,180,126,172,58,25,97,255,232,12,30,174,89,113,123,
    27,37,253,46,199,65,121,130,3,250,154,57,148,191,5,30,
    19,5,252,5,40,210,24,208,12,202,99,228,83,104,151,136,
    253,247,192,152,191,164,87,115,189,104,81,127,102,14,44,35,
    233,19,102,213,173,251,51,248,107,33,97,242,6,107,102,131,
    96,177,193,90,227,90,195,16,249,78,77,212,58,91,148,40,
    24,135,110,74,108,186,210,76,114,112,82,190,199,227,27,86,
    218,235,198,203,172,22,235,144,6,95,79,208,66,45,106,77,
    44,25,5,12,252,148,150,15,199,225,23,249,222,53,42,179,
    1,87,247,79,71,87,236,175,232,137,22,235,184,48,195,115,
    76,81,200,24,208,165,28,208,31,142,1,45,185,185,188,227,
    225,159,86,131,34,122,106,8,60,229,225,236,68,135,42,11,
    100,9,218,101,130,62,79,182,34,203,12,145,151,34,42,92,
    103,58,23,123,97,87,251,103,28,84,29,47,90,222,78,37,
    197,41,100,59,161,219,219,247,221,167,41,137,38,249,94,158,
    43,70,174,108,189,168,44,225,92,92,165,47,255,124,156,43,
    253,102,42,233,253,243,76,81,86,150,193,236,199,30,231,244,
    139,67,217,232,201,222,62,158,225,14,131,126,163,19,186,7,
    236,121,51,51,230,139,220,24,197,161,59,223,235,211,71,180,
    198,13,47,142,176,174,14,60,21,39,13,95,226,185,70,250,
    141,31,55,184,40,55,130,180,225,238,227,85,215,83,26,183,
    103,83,141,135,70,55,57,72,121,62,60,58,38,114,106,145,
    115,240,148,26,224,100,60,128,113,207,211,167,167,113,141,229,
    153,87,167,1,182,39,60,177,168,161,46,50,212,247,237,45,
    90,126,8,211,44,197,31,161,164,132,68,146,59,202,98,205,
    168,24,124,150,42,242,237,209,157,233,197,124,123,253,93,242,
    77,191,79,65,6,89,134,238,12,175,179,84,135,233,117,137,
    149,189,46,161,205,57,104,215,242,215,52,243,148,150,229,239,
    155,150,12,243,169,1,124,116,173,217,104,63,249,191,232,106,
    255,2,178,238,122,85,38,158,25,199,158,233,76,212,158,198,
    30,60,188,197,118,233,249,157,237,18,47,163,187,56,151,89,
    60,151,237,208,92,54,226,217,205,49,244,104,54,9,16,143,
    213,252,30,128,142,58,145,60,118,46,66,76,79,95,20,120,
    183,223,151,145,111,63,130,226,64,197,151,167,226,36,202,182,
    63,65,161,35,154,226,22,78,80,23,225,71,213,163,96,20,
    195,172,52,6,220,250,52,131,248,109,30,196,230,141,51,37,
    196,222,161,165,126,166,94,104,71,175,95,154,199,142,75,52,
    141,227,255,157,1,219,50,31,172,249,23,123,72,209,161,201,
    151,161,84,242,146,224,41,82,33,59,116,249,18,43,112,60,
    196,9,153,39,80,252,29,58,206,244,138,216,47,81,210,31,
    33,155,233,177,136,225,1,105,217,168,148,43,130,235,254,185,
    183,132,90,3,58,4,233,57,107,152,218,156,26,11,99,191,
    241,171,172,188,26,147,119,121,234,223,117,123,250,165,4,31,
    192,237,247,32,59,74,217,31,140,93,79,254,225,225,86,31,
    19,16,228,220,147,184,5,217,63,163,125,122,23,213,123,188,
    149,219,179,53,177,231,133,139,61,201,224,203,60,27,93,228,
    250,52,140,189,35,233,235,183,56,234,222,213,60,191,142,123,
    46,238,175,93,202,209,10,122,153,132,197,115,215,253,132,238,
    90,62,183,155,202,36,112,195,224,27,201,209,47,94,145,209,
    160,231,236,29,39,45,28,223,36,99,233,226,211,246,226,99,
    153,124,30,99,252,213,195,115,12,147,75,44,192,121,35,169,
    159,171,7,255,67,142,126,218,21,182,13,246,91,195,84,201,
    222,21,30,196,162,151,244,220,48,243,15,133,57,103,224,62,
    124,46,24,179,89,118,208,15,238,147,236,129,34,246,24,236,
    137,60,8,240,153,9,139,200,249,179,122,70,192,100,93,46,
    201,178,226,189,83,75,13,61,64,234,3,234,83,122,221,145,
    238,225,66,175,164,42,11,21,81,54,168,210,153,120,82,156,
    23,150,89,171,87,172,218,92,197,170,204,152,252,150,97,30,
    207,4,85,171,50,87,19,151,255,219,192,4,171,26,27,243,
    21,241,31,237,49,149,126,
};

EmbeddedPython embedded_m5_internal_param_BaseSetAssoc(
    "m5/internal/param_BaseSetAssoc.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_BaseSetAssoc.py",
    "m5.internal.param_BaseSetAssoc",
    data_m5_internal_param_BaseSetAssoc,
    2263,
    6544);

} // anonymous namespace