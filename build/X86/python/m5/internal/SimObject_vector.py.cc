#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_SimObject_vector[] = {
    120,156,197,91,123,104,37,87,25,255,102,238,35,123,239,38,
    155,100,243,220,221,236,238,237,99,219,180,234,198,71,183,173,
    182,172,214,90,75,43,110,237,164,178,219,180,58,157,220,57,
    73,38,185,119,230,118,102,178,187,183,102,149,154,213,250,68,
    197,7,42,34,34,168,40,130,32,8,130,32,8,130,32,8,
    5,65,16,4,65,17,4,65,240,63,65,80,191,223,55,51,
    247,149,89,117,247,230,196,102,243,245,100,238,185,223,243,119,
    190,115,206,119,206,212,41,253,175,196,191,111,171,17,69,207,
    24,68,46,255,51,168,65,212,52,104,197,32,67,25,228,78,
    211,86,137,194,251,200,45,209,117,162,21,147,148,73,187,220,
    40,208,115,38,249,163,242,157,50,53,10,242,196,160,118,149,
    84,145,86,74,116,209,159,164,162,42,211,86,149,194,23,200,
    48,12,223,160,75,238,8,185,135,232,58,115,231,70,69,24,
    30,34,60,172,202,195,10,185,135,229,97,149,220,81,105,28,
    166,246,4,169,81,90,25,67,183,149,35,204,246,94,102,59,
    46,108,95,5,91,151,63,153,33,247,8,186,179,94,207,162,
    103,17,61,69,222,184,112,153,32,87,184,172,177,61,147,157,
    142,147,164,10,180,121,148,86,142,146,226,127,147,180,203,38,
    167,230,76,209,202,116,102,218,76,79,123,86,218,71,51,102,
    83,29,102,115,194,108,158,86,230,73,241,191,185,132,89,153,
    150,23,103,217,195,222,191,248,191,69,246,48,197,163,76,46,
    171,48,242,2,223,246,252,181,192,51,241,121,25,4,241,168,
    131,140,164,129,121,20,129,249,46,73,84,92,51,13,204,53,
    98,198,6,20,106,152,116,77,26,215,76,106,47,210,142,65,
    155,69,114,11,180,195,98,74,80,96,221,160,93,147,158,47,
    160,195,53,166,69,118,223,41,42,198,73,84,54,197,125,9,
    167,17,186,86,162,157,18,45,95,218,49,241,96,171,66,225,
    183,232,165,5,97,122,72,152,154,180,195,180,72,187,69,186,
    86,166,139,220,137,31,109,86,96,190,113,105,135,45,229,39,
    203,139,69,214,246,66,143,185,48,197,245,66,223,105,170,120,
    146,219,246,178,215,124,106,117,83,213,99,251,50,147,32,92,
    172,102,221,130,232,108,203,137,55,44,249,94,1,14,105,182,
    98,225,23,248,42,62,204,141,53,207,119,237,102,224,110,55,
    84,124,8,204,236,53,175,161,108,91,62,124,162,217,10,194,
    248,177,48,12,66,11,62,149,135,141,192,233,124,3,30,173,
    55,130,72,45,66,154,136,177,192,62,70,239,181,150,112,132,
    2,162,43,190,236,170,168,30,122,173,152,67,149,112,68,111,
    112,91,68,144,132,68,143,50,89,218,8,154,106,105,205,169,
    111,55,226,246,210,186,106,158,91,90,221,246,26,238,210,165,
    7,239,95,106,181,227,141,192,95,226,103,158,31,43,118,68,
    99,105,208,5,103,185,207,81,48,187,226,173,219,158,152,97,
    111,168,70,75,133,99,120,122,28,130,140,9,99,212,40,27,
    5,99,209,24,227,86,137,127,11,198,130,121,216,184,224,193,
    144,58,140,3,136,138,189,176,65,44,13,218,50,41,92,0,
    40,54,249,159,129,40,50,52,150,241,153,41,159,61,13,15,
    36,79,55,11,8,117,242,112,71,128,196,136,226,158,15,35,
    182,62,9,26,74,180,89,166,4,37,12,174,4,54,97,27,
    148,187,131,141,201,204,139,20,125,145,216,163,140,143,29,74,
    177,179,91,32,195,159,160,184,138,1,202,79,103,89,224,135,
    5,126,203,139,80,255,130,160,32,222,240,162,224,138,47,190,
    70,91,6,204,50,123,230,61,237,196,105,209,105,126,240,108,
    176,93,171,59,190,31,196,53,199,117,107,78,28,135,222,234,
    118,172,162,90,28,212,206,68,139,8,159,53,153,1,169,195,
    175,221,202,128,131,32,51,112,146,63,92,143,99,97,199,83,
    242,135,68,33,82,49,131,96,35,112,35,126,14,22,235,42,
    182,160,100,12,39,7,162,136,96,196,70,87,136,231,126,71,
    248,239,71,50,77,4,136,139,229,12,54,145,106,172,197,85,
    65,160,19,69,182,104,130,231,2,54,48,190,236,52,182,149,
    112,143,152,31,43,132,102,162,131,6,184,205,67,245,204,82,
    81,223,15,124,183,205,218,120,245,187,33,104,94,64,55,42,
    176,155,97,200,141,48,45,243,255,203,198,172,89,47,166,64,
    43,103,96,67,142,139,73,66,109,164,209,102,224,237,114,62,
    89,52,37,33,136,5,50,226,110,71,11,95,182,22,64,78,
    130,156,2,57,157,25,185,191,150,142,13,90,250,0,184,155,
    98,158,24,2,231,23,50,67,220,190,81,115,172,59,106,56,
    203,45,3,253,38,198,72,23,253,69,100,196,240,60,40,119,
    149,113,85,224,185,20,249,23,163,68,152,97,64,48,180,209,
    234,2,94,220,98,77,192,220,67,25,86,45,0,176,23,133,
    235,61,40,180,16,17,129,160,117,44,203,110,54,122,36,224,
    179,78,128,85,41,199,175,53,144,219,244,56,183,11,163,245,
    61,48,122,8,130,38,82,24,141,9,124,170,252,59,97,214,
    11,169,199,59,83,220,212,0,124,128,157,98,14,118,238,66,
    171,176,215,70,173,176,73,45,123,103,15,108,160,140,217,107,
    192,5,110,180,231,160,119,47,96,230,120,118,190,232,207,241,
    132,107,202,132,251,122,153,112,101,210,150,197,73,146,96,11,
    146,99,147,70,9,14,88,43,208,108,58,145,70,21,166,173,
    48,184,218,174,5,107,181,88,44,68,62,124,248,76,116,246,
    76,244,16,103,186,218,121,201,49,73,174,75,178,89,168,90,
    200,70,248,234,99,87,235,74,230,47,249,203,182,147,228,99,
    75,34,178,211,121,145,177,51,3,247,153,153,95,37,13,71,
    113,136,236,171,193,179,213,142,103,161,232,147,96,93,21,183,
    22,140,57,198,73,213,16,249,118,146,99,101,57,36,159,242,
    239,219,225,106,216,168,8,203,83,107,57,209,78,20,135,9,
    214,107,251,176,176,175,106,91,75,204,231,189,25,6,202,93,
    12,224,183,144,129,248,21,146,101,161,65,31,37,68,153,131,
    153,130,184,131,121,132,117,10,221,223,79,130,246,156,249,89,
    242,196,50,230,100,233,193,233,35,122,64,186,38,211,245,147,
    244,177,158,161,146,77,170,133,116,225,215,59,169,22,59,57,
    70,224,241,63,77,156,197,254,100,132,80,108,56,17,186,37,
    25,166,59,250,186,73,187,179,96,227,12,187,191,88,57,148,
    48,181,33,255,249,46,82,48,45,157,48,166,204,158,248,191,
    1,228,141,157,208,27,217,179,125,83,229,52,221,120,198,180,
    147,44,253,28,228,21,69,195,241,17,89,13,36,235,150,39,
    152,173,195,108,58,96,46,101,96,254,99,7,204,74,166,148,
    235,178,212,7,53,17,207,93,211,224,93,21,175,150,176,137,
    41,146,42,209,74,153,212,8,86,228,216,43,149,178,189,82,
    57,221,43,117,183,87,163,210,174,72,123,76,182,87,132,61,
    81,186,189,26,207,182,87,188,49,26,147,198,100,186,131,226,
    189,80,186,103,154,194,158,9,141,233,116,207,180,50,131,141,
    15,26,179,233,198,135,55,61,188,61,68,99,30,123,48,52,
    142,145,59,43,141,227,228,206,73,227,4,198,41,230,9,25,
    49,217,175,100,77,228,216,190,9,86,194,118,33,9,104,7,
    131,9,188,64,174,106,200,70,64,216,195,13,167,185,234,58,
    231,215,193,24,220,235,217,192,54,51,85,39,122,85,197,160,
    52,110,164,173,252,121,46,83,249,178,134,76,116,63,243,233,
    168,42,227,206,13,234,146,126,158,217,80,181,166,106,174,242,
    246,114,195,107,213,214,26,206,186,120,189,144,154,242,84,102,
    74,44,56,27,92,142,68,247,130,6,181,122,224,115,250,223,
    134,188,154,171,120,211,165,220,218,235,106,50,119,212,188,168,
    230,172,242,167,78,61,78,6,89,127,86,144,53,173,19,174,
    71,178,124,221,186,130,166,166,168,217,188,125,246,120,217,238,
    81,255,196,220,7,49,168,227,118,145,37,26,151,58,9,98,
    129,180,76,21,8,80,179,131,165,76,159,14,150,198,146,0,
    108,26,217,146,177,23,72,178,207,156,222,147,58,108,217,30,
    104,213,26,9,46,232,250,50,217,86,118,102,184,222,129,208,
    81,62,153,157,246,234,63,181,87,127,207,175,135,61,75,12,
    124,195,215,0,12,196,27,162,194,30,80,236,155,13,174,234,
    181,193,58,175,37,14,98,2,36,109,15,109,194,92,142,9,
    188,161,118,252,186,234,49,227,156,30,51,48,68,51,105,87,
    135,54,37,103,68,168,23,183,157,134,126,59,144,45,68,212,
    7,114,242,204,77,140,233,28,60,213,131,86,91,231,144,22,
    40,65,200,7,247,93,117,95,93,141,181,171,14,33,47,15,
    167,122,206,16,176,69,121,219,214,170,126,90,100,18,65,215,
    247,221,132,86,168,46,123,193,118,164,221,132,76,208,43,67,
    15,224,217,189,86,56,238,229,129,84,164,41,163,98,19,147,
    10,251,196,208,134,204,228,33,74,189,200,120,210,158,138,202,
    2,42,200,250,180,30,51,124,117,112,102,64,214,103,135,54,
    35,119,124,123,188,179,237,51,68,19,174,210,85,168,72,251,
    188,38,83,162,237,213,3,52,69,164,125,73,199,96,183,237,
    3,10,138,20,143,18,97,95,33,218,83,178,131,33,143,231,
    25,242,169,188,220,155,107,200,96,72,222,172,211,16,17,246,
    53,218,59,131,244,109,113,118,186,91,28,81,68,255,212,230,
    113,15,219,254,122,87,177,69,241,69,167,12,39,229,143,164,
    94,210,10,131,150,10,227,118,82,137,66,89,216,58,11,114,
    79,95,50,114,85,67,197,202,238,247,118,60,65,157,98,184,
    171,120,219,25,180,109,59,245,12,127,193,182,101,215,98,189,
    21,228,17,16,24,105,61,6,242,56,200,19,32,239,2,121,
    55,200,83,32,79,131,44,131,160,156,103,93,4,121,22,4,
    229,27,235,249,62,167,237,239,14,235,62,230,179,6,134,112,
    80,217,56,97,86,204,178,81,49,42,102,165,48,202,63,149,
    27,253,152,226,134,132,79,247,252,116,111,53,137,183,244,255,
    189,154,148,156,206,167,53,165,114,86,68,26,201,138,72,114,
    28,143,70,69,74,73,73,125,169,146,213,151,146,58,210,104,
    86,71,26,203,234,72,71,178,58,210,120,86,71,154,200,234,
    72,147,89,29,233,104,86,71,154,202,234,72,211,89,29,105,
    38,171,35,205,102,117,164,185,172,142,52,159,213,145,142,145,
    59,159,85,150,142,165,149,37,247,184,52,22,200,61,33,141,
    147,228,46,72,227,20,185,39,165,113,154,220,83,210,168,145,
    123,90,26,183,145,91,147,198,237,228,222,38,141,59,200,189,
    93,26,119,146,123,135,52,206,144,123,167,52,238,34,117,55,
    109,46,210,202,61,228,158,145,39,247,162,156,133,115,136,161,
    202,89,154,166,86,169,60,124,135,246,179,138,101,61,112,0,
    154,90,15,82,90,64,191,81,5,235,38,215,204,199,114,198,
    139,164,44,36,21,237,217,49,19,244,61,250,15,105,187,218,
    137,197,238,64,125,170,78,122,51,184,228,184,239,231,232,118,
    19,14,94,200,115,176,141,146,248,75,42,12,52,111,174,146,
    163,207,142,172,31,12,103,74,46,86,108,123,53,8,26,7,
    178,73,76,4,253,112,56,35,230,243,141,104,40,95,179,13,
    201,92,44,114,126,212,99,66,239,113,151,152,48,69,253,203,
    173,228,232,106,175,33,39,243,13,89,87,113,212,240,234,216,
    159,116,107,205,134,140,53,208,77,13,150,141,82,122,192,158,
    10,254,241,64,132,110,126,53,121,3,219,162,174,109,218,23,
    149,137,81,93,137,63,209,24,51,94,160,237,137,153,181,5,
    210,208,105,92,87,236,79,135,142,216,13,210,28,139,224,28,
    223,60,136,128,29,206,108,74,4,254,76,151,73,140,243,131,
    53,169,35,240,231,186,76,138,14,218,164,142,192,95,208,80,
    201,124,58,207,158,86,208,210,154,200,225,114,150,241,203,30,
    213,111,189,142,177,71,123,167,213,82,190,123,48,181,165,68,
    214,175,134,139,193,108,158,21,170,217,138,245,86,236,229,180,
    1,82,94,29,78,253,153,60,245,35,239,37,173,71,136,201,
    69,71,22,242,235,161,65,148,175,255,21,167,213,3,33,61,
    59,147,196,8,150,244,27,13,0,90,85,235,158,175,29,64,
    34,229,183,26,114,16,134,176,238,28,196,50,126,55,156,234,
    185,9,40,212,239,122,228,158,68,204,239,53,12,222,80,183,
    243,129,123,8,249,131,6,220,215,27,202,209,187,239,78,46,
    247,179,148,63,13,167,254,169,60,245,215,113,5,173,209,8,
    234,218,203,7,80,176,79,218,159,135,51,39,119,115,203,211,
    188,189,234,212,183,244,31,31,166,130,254,50,96,196,205,47,
    241,242,167,227,208,137,148,254,197,157,204,201,16,245,215,1,
    51,178,59,204,98,198,59,186,102,176,13,201,59,57,211,82,
    225,201,174,140,227,141,160,139,254,113,42,242,80,195,117,224,
    183,226,58,240,142,92,243,180,205,228,70,112,183,18,84,162,
    222,76,236,171,43,246,160,249,73,181,14,183,18,44,220,219,
    234,217,99,193,15,242,169,134,218,17,202,247,127,35,202,110,
    98,142,27,5,99,218,24,187,213,105,254,120,46,60,183,163,
    141,4,159,218,151,139,114,189,58,19,247,119,13,137,111,45,
    12,124,189,23,37,0,20,145,242,143,225,212,207,157,116,180,
    103,9,76,58,16,242,207,30,229,111,185,14,145,191,243,136,
    34,111,221,239,25,29,231,53,226,73,182,31,34,208,48,134,
    77,121,249,203,24,37,139,120,237,57,79,214,50,34,171,168,
    199,16,207,143,84,24,31,140,33,137,172,145,30,67,110,45,
    91,229,22,89,217,75,42,188,124,64,183,88,82,97,85,99,
    255,23,5,117,167,229,212,61,205,219,91,44,10,50,65,99,
    57,70,244,29,106,255,95,238,237,78,24,233,153,212,226,107,
    168,247,60,219,122,31,136,156,96,119,15,175,113,82,35,167,
    41,150,2,193,165,108,11,215,145,45,220,254,181,112,153,214,
    122,17,4,12,45,220,231,180,174,128,180,41,155,184,175,129,
    124,8,228,101,144,93,144,143,128,224,194,149,245,113,144,79,
    130,224,190,143,245,25,144,207,129,200,25,250,23,64,112,87,
    195,250,50,200,87,65,112,81,192,194,161,188,245,13,144,111,
    246,141,193,244,132,125,207,58,194,70,175,23,250,92,186,191,
    126,117,152,207,183,193,16,47,251,148,141,19,70,217,196,153,
    247,77,253,140,12,158,137,87,12,201,233,3,175,79,39,218,
    203,11,114,242,66,74,59,178,240,196,26,239,120,34,185,214,
    150,222,72,64,80,101,17,112,193,105,38,111,108,202,251,137,
    214,29,32,56,229,181,238,238,68,28,76,229,45,160,228,93,
    42,94,146,201,141,120,185,0,111,189,9,4,231,251,49,254,
    28,184,50,130,235,11,33,239,11,35,126,32,159,55,207,157,
    205,28,118,182,229,132,78,179,27,13,121,25,185,121,78,222,
    149,238,237,230,134,14,183,103,6,158,114,54,240,156,6,103,
    105,241,113,126,33,190,87,186,166,8,39,111,81,36,175,147,
    157,71,45,52,58,47,67,105,212,168,140,87,56,218,120,87,
    185,96,84,121,157,88,44,140,78,84,138,163,135,43,197,202,
    72,65,222,8,28,51,166,204,106,177,114,120,246,45,21,163,
    202,61,241,51,187,85,49,254,13,42,24,26,10,
};

EmbeddedPython embedded_m5_internal_SimObject_vector(
    "m5/internal/SimObject_vector.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/SimObject_vector.py",
    "m5.internal.SimObject_vector",
    data_m5_internal_SimObject_vector,
    3437,
    16546);

} // anonymous namespace
