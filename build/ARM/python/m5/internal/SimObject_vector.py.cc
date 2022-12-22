#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_SimObject_vector[] = {
    120,156,197,91,123,104,37,87,25,255,102,238,35,123,239,38,
    155,100,243,220,221,236,238,237,99,219,180,234,198,71,215,170,
    45,91,215,90,75,43,221,218,73,101,219,180,58,157,220,57,
    73,38,185,119,230,118,102,178,187,183,102,149,154,213,250,68,
    197,7,42,34,34,168,40,130,32,8,130,32,8,130,32,8,
    5,65,16,4,65,17,4,65,240,63,65,80,191,223,55,51,
    247,149,89,117,247,230,196,102,243,245,100,238,185,223,243,119,
    190,115,206,119,206,212,41,253,175,196,191,111,175,17,69,79,
    27,68,46,255,51,168,65,212,52,104,197,32,67,25,228,78,
    211,86,137,194,251,200,45,209,117,162,21,147,148,73,187,220,
    40,208,115,38,249,163,242,157,50,53,10,242,196,160,118,149,
    84,145,86,74,116,201,159,164,162,42,211,86,149,194,23,200,
    48,12,223,160,103,220,17,114,15,209,117,230,206,141,138,48,
    60,68,120,88,149,135,21,114,15,203,195,42,185,163,210,56,
    76,237,9,82,163,180,50,134,110,43,71,152,237,189,204,118,
    92,216,190,10,182,46,127,50,67,238,17,116,103,189,158,69,
    207,34,122,138,188,113,225,50,65,174,112,89,99,123,38,59,
    29,39,73,21,104,243,40,173,28,37,197,255,38,105,151,77,
    78,205,153,162,149,233,204,180,153,158,246,172,180,143,102,204,
    166,58,204,230,132,217,60,173,204,147,226,127,115,9,179,50,
    45,47,206,178,135,189,127,241,127,139,236,97,138,71,153,92,
    86,97,228,5,190,237,249,107,129,103,226,243,50,8,226,81,
    7,25,73,3,243,48,2,243,93,146,168,184,102,26,152,107,
    196,140,13,40,212,48,233,154,52,174,153,212,94,164,29,131,
    54,139,228,22,104,135,197,148,160,192,186,65,187,38,61,95,
    64,135,107,76,139,236,190,83,84,140,147,168,108,138,251,18,
    78,35,116,173,68,59,37,90,126,102,199,196,131,173,10,133,
    223,162,151,22,132,233,33,97,106,210,14,211,34,237,22,233,
    90,153,46,113,39,126,180,89,129,249,198,51,59,108,41,63,
    89,94,44,178,182,23,123,204,133,41,174,23,250,78,83,197,
    147,220,182,151,189,230,147,171,155,170,30,219,151,153,4,225,
    98,53,235,22,68,103,91,78,188,97,201,247,10,112,72,179,
    21,11,191,192,87,241,97,110,172,121,190,107,55,3,119,187,
    161,226,67,96,102,175,121,13,101,219,242,225,99,205,86,16,
    198,143,132,97,16,90,240,169,60,108,4,78,231,27,240,104,
    189,17,68,106,17,210,68,140,5,246,49,122,175,181,132,35,
    20,16,93,241,101,87,69,245,208,107,197,28,170,132,35,122,
    131,219,34,130,36,36,122,152,201,210,70,208,84,75,107,78,
    125,187,17,183,151,214,85,243,220,210,234,182,215,112,151,46,
    88,79,44,181,218,241,70,224,47,241,51,207,143,21,59,162,
    177,52,232,130,179,220,231,40,152,93,241,214,109,79,204,176,
    55,84,163,165,194,49,60,61,14,65,198,132,49,106,148,141,
    130,177,104,140,113,171,196,191,5,99,193,60,108,92,244,96,
    72,29,198,1,68,197,94,216,32,150,6,109,153,20,46,0,
    20,155,252,207,64,20,25,26,203,248,204,148,207,158,130,7,
    146,167,155,5,132,58,121,184,35,64,98,68,113,207,7,17,
    91,159,4,13,37,218,44,83,130,18,6,87,2,155,176,13,
    202,221,193,198,100,230,69,138,190,72,236,81,198,199,14,165,
    216,217,45,144,225,79,80,92,197,0,229,167,179,44,240,195,
    2,191,229,69,168,127,81,80,16,111,120,81,112,197,23,95,
    163,45,3,102,153,61,243,158,118,226,180,232,52,63,120,54,
    216,174,213,29,223,15,226,154,227,186,53,39,142,67,111,117,
    59,86,81,45,14,106,103,162,69,132,207,154,204,128,212,225,
    215,110,101,192,65,144,25,56,201,31,174,199,177,176,227,41,
    249,67,162,16,169,152,65,176,17,184,17,63,7,139,117,21,
    91,80,50,134,147,3,81,68,48,98,163,43,196,115,191,35,
    252,247,133,76,19,1,226,98,57,131,77,164,26,107,113,85,
    16,232,68,145,45,154,224,185,128,13,140,47,59,141,109,37,
    220,35,230,199,10,161,153,232,160,1,110,243,80,61,179,84,
    212,247,3,223,109,179,54,94,253,110,8,154,23,208,141,10,
    236,102,24,114,35,76,203,252,255,178,49,107,214,139,41,208,
    202,25,216,144,227,98,146,80,27,105,180,25,120,187,156,79,
    22,77,73,8,98,129,140,184,219,209,194,151,173,5,144,147,
    32,167,64,78,103,70,238,175,165,99,131,150,222,15,238,166,
    152,39,134,192,249,133,204,16,183,111,212,28,235,142,26,206,
    114,203,64,191,137,49,210,69,127,17,25,49,60,15,202,93,
    101,92,21,120,46,69,254,197,40,17,102,24,16,12,109,180,
    186,128,23,183,88,19,48,247,80,134,85,11,0,236,69,225,
    122,15,10,45,68,68,32,104,29,203,178,155,141,30,9,248,
    172,19,96,85,202,241,107,13,228,54,61,206,237,194,104,125,
    15,140,30,128,160,137,20,70,99,2,159,42,255,78,152,245,
    66,234,241,206,20,55,53,0,31,96,167,152,131,157,187,208,
    42,236,181,81,43,108,82,203,222,213,3,27,40,99,246,26,
    112,145,27,237,57,232,221,11,152,57,158,157,47,249,115,60,
    225,154,50,225,190,94,38,92,153,180,101,113,146,36,216,130,
    228,216,164,81,130,3,214,10,52,155,78,164,81,133,105,43,
    12,174,182,107,193,90,45,22,11,145,15,31,60,19,157,61,
    19,61,192,153,174,118,94,114,76,146,235,146,108,22,170,22,
    178,17,190,250,200,213,186,146,249,75,254,178,237,36,249,216,
    146,136,236,116,94,100,236,204,192,125,102,230,87,73,195,81,
    28,34,251,106,240,108,181,227,89,40,250,56,88,87,197,173,
    5,99,142,113,82,53,68,190,157,228,88,89,14,201,167,252,
    251,14,184,26,54,42,194,242,212,90,78,180,19,197,97,130,
    245,218,62,44,236,171,218,214,18,243,121,111,134,129,114,23,
    3,248,45,100,32,126,133,100,89,104,208,71,9,81,230,96,
    166,32,238,96,30,97,157,66,247,247,147,160,61,103,126,150,
    60,177,140,57,89,122,112,250,136,238,151,174,201,116,253,56,
    125,172,103,168,100,147,106,33,93,248,245,78,170,197,78,142,
    17,120,252,79,19,103,177,63,25,33,20,27,78,132,110,73,
    134,233,142,190,110,210,238,44,216,56,195,238,47,86,14,37,
    76,109,200,127,190,139,20,76,75,39,140,41,179,39,254,111,
    0,121,99,39,244,70,246,108,223,84,57,77,55,158,49,237,
    36,75,63,7,121,69,209,112,124,68,86,3,201,186,229,49,
    102,235,48,155,14,152,75,25,152,255,216,1,179,146,41,229,
    186,44,245,65,77,196,115,215,52,120,87,197,171,37,108,98,
    138,164,74,180,82,38,53,130,21,57,246,74,165,108,175,84,
    78,247,74,221,237,213,168,180,43,210,30,147,237,21,97,79,
    148,110,175,198,179,237,21,111,140,198,164,49,153,238,160,120,
    47,148,238,153,166,176,103,66,99,58,221,51,173,204,96,227,
    131,198,108,186,241,225,77,15,111,15,209,152,199,30,12,141,
    99,228,206,74,227,56,185,115,210,56,129,113,138,121,66,70,
    76,246,43,89,19,57,182,111,130,149,176,93,76,2,218,193,
    96,2,47,144,171,26,178,17,16,246,96,195,105,174,186,206,
    249,117,48,6,247,122,54,176,205,76,213,137,94,85,49,40,
    141,27,105,43,127,158,203,84,190,172,33,19,189,153,249,116,
    84,149,113,231,6,117,73,63,79,111,168,90,83,53,87,121,
    123,185,225,181,106,107,13,103,93,188,94,72,77,121,50,51,
    37,22,156,13,46,71,162,123,65,131,90,61,240,57,253,111,
    67,94,205,85,188,233,82,110,237,117,53,153,59,106,94,84,
    115,86,249,83,167,30,39,131,172,63,43,200,154,214,9,215,
    35,89,190,110,93,65,83,83,212,108,222,62,123,188,108,247,
    168,127,98,238,131,24,212,113,187,200,18,141,75,157,4,177,
    64,90,166,10,4,168,217,193,82,166,79,7,75,99,73,0,
    54,141,108,201,216,11,36,217,103,78,239,73,29,182,108,15,
    180,106,141,4,23,116,125,153,108,43,59,51,92,239,64,232,
    40,159,204,78,123,245,159,218,171,191,231,215,195,158,37,6,
    190,225,107,0,6,226,13,81,97,15,40,246,205,6,87,245,
    218,96,157,215,18,7,49,1,146,182,135,54,97,46,199,4,
    222,80,59,126,93,245,152,113,78,143,25,24,162,153,180,171,
    67,155,146,51,34,212,139,219,78,67,191,29,200,22,34,234,
    3,57,121,230,38,198,116,14,158,234,65,171,173,115,72,11,
    148,32,228,131,251,174,186,175,174,198,218,85,135,144,151,135,
    83,61,103,8,216,162,188,109,107,85,63,45,50,137,160,235,
    251,110,66,43,84,151,189,96,59,210,110,66,38,232,149,161,
    7,240,236,94,43,28,247,242,64,42,210,148,81,177,137,73,
    133,125,98,104,67,102,242,16,165,94,100,60,105,79,69,101,
    1,21,100,125,90,143,25,190,58,56,51,32,235,179,67,155,
    145,59,190,61,222,217,246,25,162,9,87,233,42,84,164,125,
    94,147,41,209,246,234,1,154,34,210,190,164,99,176,219,246,
    1,5,69,138,71,137,176,175,16,237,41,217,193,144,71,243,
    12,249,84,94,238,205,53,100,48,36,111,213,105,136,8,251,
    26,237,157,65,250,182,56,59,221,45,142,40,162,127,106,243,
    184,135,109,127,189,171,216,162,248,162,83,134,147,242,71,82,
    47,105,133,65,75,133,113,59,169,68,161,44,108,157,5,185,
    167,47,25,185,170,161,98,101,247,123,59,158,160,78,49,220,
    85,188,237,12,218,182,157,122,134,191,96,219,178,107,177,30,
    2,185,0,2,35,173,71,64,30,5,121,12,228,221,32,79,
    128,60,9,242,20,200,50,8,202,121,214,37,144,103,65,80,
    190,177,158,239,115,218,254,238,176,238,99,62,107,96,8,7,
    149,141,19,102,197,44,27,21,163,98,86,10,163,252,83,185,
    209,143,41,110,72,248,116,207,79,247,86,147,120,75,255,223,
    171,73,201,233,124,90,83,42,103,69,164,145,172,136,36,199,
    241,104,84,164,148,148,212,151,42,89,125,41,169,35,141,102,
    117,164,177,172,142,116,36,171,35,141,103,117,164,137,172,142,
    52,153,213,145,142,102,117,164,169,172,142,52,157,213,145,102,
    178,58,210,108,86,71,154,203,234,72,243,89,29,233,24,185,
    243,89,101,233,88,90,89,114,143,75,99,129,220,19,210,56,
    73,238,130,52,78,145,123,82,26,167,201,61,37,141,26,185,
    167,165,113,27,185,53,105,220,78,238,109,210,184,131,220,219,
    165,113,39,185,119,72,227,12,185,119,74,227,46,82,119,211,
    230,34,173,220,67,238,25,121,114,47,202,89,56,135,24,170,
    156,165,105,106,149,202,195,119,104,63,171,88,214,253,7,160,
    169,245,22,74,11,232,55,170,96,221,228,154,249,88,206,120,
    145,148,133,164,162,61,59,102,130,190,71,255,33,109,87,59,
    177,216,29,168,79,213,73,111,6,151,28,247,253,28,221,110,
    194,193,11,121,14,182,81,18,127,73,133,129,230,205,85,114,
    244,217,145,245,131,225,76,201,197,138,109,175,6,65,227,64,
    54,137,137,160,31,14,103,196,124,190,17,13,229,107,182,33,
    153,139,69,206,143,122,76,232,61,238,18,19,166,168,127,185,
    149,28,93,237,53,228,100,190,33,235,42,142,26,94,29,251,
    147,110,173,217,144,177,6,186,169,193,178,81,74,15,216,83,
    193,63,30,136,208,205,175,38,111,96,91,212,181,77,251,162,
    50,49,170,43,241,39,26,99,198,11,180,61,49,179,182,64,
    26,58,141,235,138,253,233,208,17,187,65,154,99,17,156,227,
    155,7,17,176,195,153,77,137,192,159,233,50,137,113,126,176,
    38,117,4,254,92,151,73,209,65,155,212,17,248,11,26,42,
    153,79,231,217,211,10,90,90,19,57,92,206,50,126,217,163,
    250,173,215,49,246,104,239,180,90,202,119,15,166,182,148,200,
    250,213,112,49,152,205,179,66,53,91,177,222,138,189,156,54,
    64,202,171,195,169,63,147,167,126,228,189,164,245,8,49,185,
    232,200,66,126,61,52,136,242,245,191,226,180,122,32,164,103,
    103,146,24,193,146,126,163,1,64,171,106,221,243,181,3,72,
    164,252,86,67,14,194,16,214,157,131,88,198,239,134,83,61,
    55,1,133,250,93,143,220,147,136,249,189,134,193,27,234,118,
    62,112,15,33,127,208,128,251,122,67,57,122,247,221,201,229,
    126,150,242,167,225,212,63,149,167,254,58,174,160,53,26,65,
    93,123,249,0,10,246,73,251,243,112,230,228,110,110,121,154,
    183,87,157,250,150,254,227,195,84,208,95,6,140,184,249,37,
    94,254,116,28,58,145,210,191,184,147,57,25,162,254,58,96,
    70,118,135,89,204,120,103,215,12,182,33,121,39,103,90,42,
    60,217,149,113,188,17,116,201,63,78,69,30,106,184,14,252,
    16,174,3,239,200,53,79,219,76,110,4,119,43,65,37,234,
    205,196,190,186,98,15,154,159,84,235,112,43,193,194,189,173,
    158,61,22,252,32,159,106,168,29,161,124,255,55,162,236,38,
    230,184,81,48,166,141,177,91,157,230,143,231,194,115,59,218,
    72,240,169,125,185,40,215,171,51,113,127,215,144,248,214,194,
    192,215,123,81,2,64,17,41,255,24,78,253,220,73,71,123,
    150,192,164,3,33,255,236,81,254,150,235,16,249,59,143,40,
    242,214,253,158,209,113,94,35,158,100,251,33,2,13,99,216,
    148,151,191,140,81,178,136,215,158,243,100,45,35,178,138,122,
    12,241,252,72,133,241,193,24,146,200,26,233,49,228,214,178,
    85,110,145,149,189,164,194,203,7,116,139,37,21,86,53,246,
    127,81,80,119,90,78,221,211,188,189,197,162,32,19,52,150,
    99,68,223,161,246,255,229,222,238,132,145,158,73,45,190,134,
    122,207,179,173,247,129,200,9,118,247,240,26,39,53,114,154,
    98,41,16,92,202,182,112,29,217,194,237,95,11,151,105,173,
    23,65,192,208,194,125,78,235,10,72,155,178,137,251,26,200,
    135,64,94,6,217,5,249,8,8,46,92,89,31,7,249,36,
    8,238,251,88,159,1,249,28,136,156,161,127,1,4,119,53,
    172,47,131,124,21,4,23,5,44,28,202,91,223,0,249,102,
    223,24,76,79,216,247,172,35,108,244,122,161,207,165,251,235,
    87,135,249,124,27,12,241,178,79,217,56,97,148,77,156,121,
    223,212,207,200,224,153,120,197,144,156,62,240,250,116,162,189,
    188,32,39,47,164,180,35,11,79,172,241,142,39,146,107,109,
    233,141,4,4,85,22,1,23,157,102,242,198,166,188,159,104,
    221,1,130,83,94,235,238,78,196,193,84,222,2,74,222,165,
    226,37,153,220,136,151,11,240,214,155,64,112,190,31,227,207,
    129,43,35,184,190,16,242,190,48,226,7,242,121,243,220,217,
    204,97,103,91,78,232,52,187,209,144,151,145,155,231,228,93,
    233,222,110,110,232,112,123,102,224,41,103,3,207,105,112,150,
    22,31,231,23,226,123,165,107,138,112,242,22,69,242,58,217,
    121,212,66,163,243,50,148,70,141,202,120,133,163,141,119,149,
    11,70,149,215,137,197,194,232,68,165,56,122,184,82,172,140,
    20,228,141,192,49,99,202,172,22,43,135,103,223,86,49,170,
    220,19,63,179,91,21,227,223,7,90,33,12,
};

EmbeddedPython embedded_m5_internal_SimObject_vector(
    "m5/internal/SimObject_vector.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/SimObject_vector.py",
    "m5.internal.SimObject_vector",
    data_m5_internal_SimObject_vector,
    3436,
    16546);

} // anonymous namespace
