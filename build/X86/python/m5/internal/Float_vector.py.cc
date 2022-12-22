#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_Float_vector[] = {
    120,156,189,91,107,136,36,87,21,62,85,253,152,237,222,153,
    157,153,157,217,153,125,101,183,243,216,164,19,117,39,106,94,
    154,176,26,99,18,18,113,99,106,34,187,153,68,43,61,93,
    119,102,106,166,167,170,83,85,51,187,29,103,149,56,171,241,
    137,138,15,84,68,196,7,18,16,4,65,16,4,65,16,4,
    65,8,8,130,32,8,138,32,8,254,19,4,65,61,223,185,
    85,221,213,143,85,55,93,181,59,51,103,111,87,223,62,175,
    251,221,115,239,57,247,118,147,226,127,37,254,123,103,141,40,
    188,219,32,114,248,215,160,22,209,182,65,43,6,25,202,32,
    103,158,182,74,20,220,67,78,137,174,18,173,152,164,76,218,
    231,70,129,158,51,201,155,148,207,148,169,85,144,39,6,117,
    170,164,138,180,82,162,11,222,44,21,85,153,182,170,20,188,
    64,134,97,120,6,93,116,38,200,57,64,87,153,59,55,42,
    194,240,0,225,97,85,30,86,200,57,40,15,171,228,76,74,
    227,32,117,102,72,77,210,202,20,186,173,28,98,182,119,49,
    219,105,97,251,26,216,58,252,206,17,114,14,161,59,235,245,
    44,122,22,209,83,228,77,11,151,25,114,132,203,26,219,51,
    219,237,56,75,170,64,155,135,105,229,48,41,254,157,165,125,
    54,217,57,156,116,156,235,118,156,147,142,243,180,50,79,138,
    127,231,116,199,50,45,215,23,216,123,238,191,249,95,157,189,
    71,209,36,147,93,21,132,174,239,217,174,183,230,187,38,222,
    47,131,192,215,77,144,137,216,233,143,192,233,175,146,120,220,
    49,99,167,95,33,102,108,192,167,45,147,174,72,227,138,73,
    157,58,237,25,180,89,36,167,64,123,44,166,4,5,214,13,
    218,55,233,249,2,58,92,97,90,100,215,156,162,98,164,61,
    190,41,174,209,156,38,232,74,137,246,74,180,124,113,207,196,
    131,173,10,5,223,163,151,78,10,211,3,194,212,164,61,166,
    69,218,47,210,149,50,93,224,78,252,104,179,2,243,141,139,
    123,108,41,63,89,174,23,89,219,243,41,115,97,138,227,6,
    94,99,91,69,83,220,182,31,107,249,141,200,222,85,205,200,
    15,234,213,164,139,31,158,109,55,162,13,75,62,83,128,51,
    182,219,145,240,242,61,21,29,228,198,154,235,57,246,182,239,
    236,180,84,116,0,140,236,53,183,165,108,91,222,124,98,187,
    237,7,209,163,65,224,7,22,252,41,15,89,80,247,19,240,
    102,179,229,135,170,14,105,34,198,2,251,8,189,215,218,194,
    17,10,136,158,248,176,163,194,102,224,182,35,30,38,205,17,
    189,193,173,142,1,18,18,190,131,201,210,134,191,173,150,214,
    26,205,157,86,212,89,90,87,219,247,46,173,238,184,45,103,
    233,226,3,247,45,181,59,209,134,239,45,241,51,215,139,20,
    59,161,181,148,54,255,44,191,127,24,140,46,185,235,182,43,
    38,216,27,170,213,86,1,60,21,30,135,16,99,198,152,52,
    202,70,193,168,27,83,220,42,241,95,193,56,105,30,52,206,
    187,48,162,9,195,0,158,98,26,46,24,67,131,182,76,10,
    78,2,12,155,252,107,96,244,24,18,203,120,207,148,247,158,
    134,245,250,233,102,1,67,172,31,238,9,128,24,73,220,243,
    33,140,169,71,130,130,18,109,150,73,163,131,65,165,225,18,
    116,64,185,59,216,152,204,188,72,225,151,137,189,201,184,216,
    163,24,51,251,5,50,188,25,138,170,152,116,252,116,129,5,
    126,84,96,183,92,135,250,231,5,1,209,134,27,250,151,60,
    241,51,218,50,81,150,217,51,239,235,60,181,186,201,254,10,
    79,243,131,103,253,157,90,179,225,121,126,84,107,56,78,173,
    17,69,129,187,186,19,169,176,22,249,181,51,97,29,67,103,
    205,38,32,234,242,235,180,19,208,96,128,25,52,250,133,227,
    54,35,126,49,39,47,100,20,66,21,49,0,54,124,39,228,
    231,96,177,174,34,11,74,70,112,178,47,138,8,62,108,116,
    133,120,238,119,136,95,63,156,104,34,32,172,151,19,200,132,
    170,181,22,85,5,125,141,48,180,69,19,60,23,160,129,241,
    110,163,181,163,132,123,200,252,88,33,52,181,14,25,67,237,
    40,212,78,172,20,213,61,223,115,58,172,137,219,188,3,66,
    142,10,224,38,5,114,71,24,110,19,76,203,252,127,217,88,
    48,155,197,24,100,229,4,104,136,107,17,201,48,27,241,72,
    51,232,246,57,134,212,77,9,2,162,189,204,180,91,208,194,
    135,173,147,32,55,129,156,2,57,157,24,152,157,149,83,131,
    86,222,15,206,166,152,38,70,192,233,133,196,8,167,111,182,
    28,235,205,22,142,106,203,64,189,137,185,209,67,125,17,17,
    48,56,7,202,93,101,62,21,40,124,6,241,22,179,67,152,
    97,34,48,164,209,234,1,93,92,98,205,192,212,3,9,70,
    45,0,47,141,190,245,20,250,44,140,134,64,207,58,150,68,
    52,27,61,52,232,172,19,96,85,26,225,211,26,200,205,217,
    59,182,7,159,245,33,248,60,8,33,51,49,124,166,4,54,
    85,254,155,49,155,133,216,219,221,229,108,110,0,54,192,76,
    113,4,102,110,71,171,48,108,95,110,112,137,173,122,44,5,
    23,40,98,166,149,63,207,141,206,34,116,78,3,101,145,87,
    225,11,222,34,47,172,166,44,172,119,203,194,42,139,179,108,
    48,116,64,45,72,76,213,141,18,140,95,43,208,66,188,96,
    134,21,166,237,192,191,220,169,249,107,181,72,172,67,252,123,
    232,76,120,246,76,248,32,71,182,218,57,137,41,58,182,233,
    232,21,168,54,162,15,62,250,232,229,166,146,181,74,94,217,
    182,14,54,182,4,30,59,94,3,25,51,71,224,58,51,241,
    169,132,221,48,10,16,109,51,246,106,181,235,85,40,249,36,
    216,86,197,165,5,99,145,241,81,53,68,182,173,227,169,108,
    121,228,93,254,123,23,220,12,251,20,97,123,105,45,107,205,
    68,105,168,111,189,177,15,3,153,169,108,45,49,143,247,39,
    99,95,238,141,61,254,10,9,112,95,33,217,246,25,244,113,
    194,232,242,32,198,192,237,226,28,195,57,135,238,31,36,65,
    248,136,117,88,226,194,50,214,94,233,193,225,34,188,95,186,
    234,101,249,73,250,68,106,122,36,139,103,33,222,216,165,23,
    207,98,55,166,8,44,254,175,5,178,216,31,124,48,12,27,
    141,16,221,116,68,233,205,184,94,128,238,110,202,56,162,102,
    135,145,3,154,161,13,217,207,247,16,130,229,231,132,49,103,
    166,198,253,205,32,111,233,14,185,145,60,203,68,141,211,116,
    237,85,209,214,209,248,57,200,42,138,118,211,19,178,218,235,
    125,201,19,204,178,193,108,186,0,46,37,0,254,83,23,192,
    74,150,142,171,178,133,7,53,49,142,251,166,193,153,16,239,
    134,144,120,20,73,149,104,165,76,106,2,59,109,228,55,165,
    36,191,41,199,249,77,47,37,154,148,118,69,218,83,146,18,
    17,242,152,56,37,154,78,82,34,78,102,166,164,49,27,103,
    61,156,191,196,121,206,28,242,28,52,230,227,60,103,133,51,
    163,195,210,88,136,19,154,149,69,164,116,104,28,69,222,132,
    198,49,114,22,164,113,156,156,69,105,156,192,220,196,154,32,
    51,37,249,147,40,137,152,218,183,144,202,144,157,215,131,217,
    197,158,134,21,200,229,140,163,15,144,245,80,171,177,189,234,
    52,206,173,131,41,56,55,147,201,108,38,106,206,164,213,196,
    68,52,174,165,169,188,188,55,81,119,55,227,200,115,31,243,
    232,170,41,243,204,241,155,18,110,158,217,80,181,109,181,189,
    202,233,226,134,219,174,173,181,26,235,226,237,66,108,198,83,
    137,25,145,224,107,112,187,17,222,5,234,215,154,190,199,97,
    126,7,242,106,142,226,68,74,57,181,55,213,100,141,168,185,
    97,173,177,202,239,54,154,145,158,88,253,81,64,246,170,141,
    96,61,148,109,233,214,37,52,115,24,45,155,83,97,151,183,
    226,46,245,47,190,125,176,130,42,78,15,77,162,109,169,27,
    16,78,82,230,75,2,6,102,187,139,159,68,151,46,126,166,
    180,227,55,141,100,43,152,6,143,228,140,243,67,161,194,150,
    237,126,110,26,35,152,249,61,31,234,20,177,187,138,165,129,
    223,85,92,175,64,195,186,207,13,235,238,122,205,32,181,125,
    192,39,188,140,193,128,49,134,152,32,5,132,204,244,119,84,
    90,127,235,92,230,254,23,245,33,101,103,108,245,23,71,168,
    207,73,113,195,107,170,148,9,247,102,111,2,166,99,34,233,
    242,216,102,140,152,1,234,197,157,70,43,95,27,16,21,68,
    204,135,70,196,147,235,152,191,35,48,212,244,219,157,188,166,
    175,192,7,2,62,156,185,218,158,186,28,229,170,54,4,188,
    60,158,218,35,32,111,139,226,182,157,155,234,113,81,72,132,
    92,205,92,253,118,160,118,93,127,39,204,85,253,68,200,43,
    99,79,214,133,97,11,26,206,238,64,200,201,33,106,34,9,
    137,5,125,106,108,35,142,140,66,145,122,145,49,148,107,200,
    41,11,144,32,231,179,249,152,224,169,27,99,2,228,124,126,
    108,19,70,206,101,151,51,210,62,35,114,192,82,188,155,20,
    73,95,204,201,140,112,103,245,6,153,33,146,190,146,199,196,
    182,237,27,48,24,82,228,209,130,190,70,52,84,86,131,17,
    143,143,50,226,51,163,226,235,72,35,6,135,226,109,121,25,
    33,130,190,65,195,43,68,95,122,178,215,75,79,68,137,124,
    151,45,151,223,181,237,111,246,148,170,139,15,186,101,50,41,
    85,232,218,70,59,240,219,42,136,58,186,90,132,114,173,117,
    22,228,206,190,160,227,168,150,138,148,221,239,229,104,134,186,
    5,106,71,113,170,232,119,108,59,246,10,127,192,182,37,235,
    176,96,150,245,48,200,35,32,143,130,60,14,242,4,200,123,
    64,222,11,242,20,200,211,32,203,32,40,185,89,23,64,158,
    5,65,169,197,122,190,207,97,217,101,71,247,48,143,53,48,
    131,115,202,198,9,179,98,150,141,138,81,49,43,133,73,254,
    169,92,235,199,140,15,109,193,71,159,95,14,87,124,56,253,
    254,223,21,31,125,234,29,215,125,202,73,161,103,34,41,244,
    200,49,55,26,21,41,247,232,26,80,37,169,1,233,90,207,
    100,82,235,153,74,106,61,135,146,90,207,116,82,235,153,73,
    106,61,179,73,173,231,112,82,235,153,75,106,61,243,73,173,
    231,72,82,235,89,72,106,61,139,73,173,231,104,82,235,57,
    70,206,209,164,250,115,44,174,254,56,199,165,113,146,156,19,
    210,184,137,156,147,210,56,69,206,77,210,56,77,206,41,105,
    212,200,57,45,141,155,201,169,73,227,22,114,110,150,198,173,
    228,220,34,141,219,200,185,85,26,103,200,185,77,26,183,147,
    186,131,54,235,180,114,39,57,103,228,201,93,40,57,225,92,
    96,172,146,83,14,75,167,84,10,190,75,89,86,154,172,251,
    115,214,210,122,128,226,162,246,181,170,76,215,185,255,61,50,
    48,71,36,60,33,128,228,26,5,19,33,223,167,255,18,154,
    171,93,255,239,15,212,143,154,148,95,148,150,56,246,234,8,
    189,174,195,169,71,7,157,106,163,60,253,146,10,252,28,147,
    34,125,212,216,149,243,131,241,76,24,194,133,109,175,250,126,
    43,247,164,78,11,249,225,120,202,207,15,43,223,82,94,142,
    186,235,117,85,100,252,40,165,122,250,120,73,84,159,163,254,
    45,147,62,42,26,54,224,216,176,1,235,42,10,91,110,19,
    249,68,175,206,107,200,92,2,221,204,216,162,73,138,15,174,
    99,161,63,30,24,145,235,223,9,142,176,41,236,217,148,235,
    102,80,27,211,147,246,147,156,198,136,55,86,67,99,100,109,
    129,180,242,50,170,39,242,167,99,143,208,136,176,197,236,57,
    86,111,231,61,64,7,19,91,180,176,159,229,97,10,99,249,
    198,153,210,21,246,243,60,76,9,111,164,41,93,97,191,160,
    177,130,242,204,160,29,109,191,157,91,64,134,139,153,255,47,
    83,42,191,190,36,124,110,80,235,70,187,173,60,39,255,154,
    142,150,243,171,241,124,126,120,80,123,181,221,142,242,171,132,
    75,5,31,18,126,61,158,218,179,131,106,135,238,75,185,29,
    191,233,11,127,44,224,181,177,193,50,172,247,165,70,59,5,
    149,236,179,3,173,60,75,249,77,198,64,89,85,235,174,151,
    43,80,68,194,111,51,142,41,152,154,121,198,20,230,255,187,
    241,84,30,10,40,65,190,174,70,44,209,34,126,159,241,164,
    12,242,116,54,112,13,1,127,200,24,215,205,150,106,228,151,
    219,234,11,235,44,225,143,227,169,125,124,80,237,117,92,185,
    106,181,252,102,174,169,57,20,235,147,244,231,241,204,24,74,
    34,121,73,182,87,27,205,173,124,143,214,98,33,127,25,80,
    254,250,183,94,195,203,103,208,8,85,190,155,46,89,67,33,
    230,175,3,234,39,247,113,69,253,119,247,212,103,221,245,119,
    73,230,165,90,146,92,125,198,55,89,46,120,199,169,200,83,
    9,215,91,223,129,235,173,123,114,125,209,54,245,13,215,94,
    85,165,68,233,136,234,169,75,118,218,108,93,233,194,169,188,
    133,187,73,169,220,6,246,203,187,25,215,96,80,234,254,27,
    81,114,187,112,218,40,24,243,198,212,56,7,41,253,48,220,
    9,55,52,14,115,221,198,201,245,224,68,212,223,51,14,100,
    107,129,239,229,119,57,0,128,16,9,255,24,79,237,161,69,
    35,215,217,143,69,3,2,254,153,82,250,117,231,247,195,59,
    255,48,116,215,189,20,250,207,229,132,27,217,254,139,176,127,
    209,184,33,108,120,187,161,100,51,157,107,12,147,61,135,200,
    49,140,204,13,112,189,80,5,81,254,6,104,57,197,148,1,
    175,47,250,12,21,35,217,51,42,216,189,1,183,51,98,65,
    19,70,182,139,120,179,209,110,52,221,28,211,72,44,226,137,
    144,234,8,229,251,14,111,111,248,221,210,41,35,62,139,169,
    191,129,210,231,182,214,7,64,228,164,182,119,72,139,147,10,
    57,81,176,20,8,46,12,91,184,46,107,225,134,170,133,75,
    159,214,139,32,96,104,225,254,161,117,9,164,67,201,130,123,
    5,228,35,32,47,131,236,131,124,12,4,23,135,172,79,130,
    124,26,4,247,87,172,207,129,124,1,68,206,138,191,4,130,
    123,8,214,87,65,190,14,130,195,112,11,135,207,214,183,64,
    190,221,55,207,226,147,228,190,181,223,70,143,23,250,92,153,
    157,63,27,204,227,59,96,134,47,155,148,141,19,70,217,196,
    185,238,117,253,76,12,158,251,86,12,137,209,3,95,209,213,
    154,99,180,244,151,34,58,161,133,39,214,116,215,3,250,90,
    86,124,226,142,193,148,5,252,124,99,91,127,59,80,190,15,
    103,221,10,130,211,76,235,142,238,72,163,18,44,223,68,209,
    223,227,225,237,147,220,210,150,75,217,214,91,65,112,134,29,
    225,229,192,85,8,28,207,7,156,155,133,252,64,156,49,92,
    85,78,119,201,97,8,244,181,123,253,93,163,115,40,248,133,
    56,97,196,119,9,43,211,21,30,14,124,113,181,96,84,121,
    243,85,44,76,206,84,138,147,7,43,197,202,68,65,190,42,
    54,101,204,153,213,98,229,224,194,219,43,70,213,92,216,170,
    24,255,1,182,231,86,34,
};

EmbeddedPython embedded_m5_internal_Float_vector(
    "m5/internal/Float_vector.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/Float_vector.py",
    "m5.internal.Float_vector",
    data_m5_internal_Float_vector,
    3383,
    15997);

} // anonymous namespace
