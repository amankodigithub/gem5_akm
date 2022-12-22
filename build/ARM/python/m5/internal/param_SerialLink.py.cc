#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SerialLink[] = {
    120,156,189,89,239,114,219,198,17,223,3,64,74,164,36,139,
    178,254,217,150,44,209,118,236,176,158,86,74,210,184,238,76,
    92,183,174,155,204,52,83,43,46,152,142,29,38,83,20,34,
    78,18,40,16,96,129,147,100,102,164,153,78,229,105,59,211,
    111,157,233,35,244,67,223,166,79,208,183,232,231,102,119,15,
    0,33,138,146,147,169,89,137,60,29,22,123,123,183,187,191,
    221,219,59,181,33,253,41,225,247,103,117,128,228,223,2,192,
    195,143,128,0,160,43,160,37,64,72,1,222,2,236,151,32,
    254,16,188,18,188,6,104,25,32,13,56,197,142,9,95,26,
    16,78,243,152,50,4,38,83,4,244,171,32,45,104,149,224,
    69,56,7,150,44,195,126,21,226,223,129,16,34,20,240,210,
    155,0,111,18,94,163,116,236,84,88,224,36,16,177,202,196,
    10,120,83,76,172,130,55,205,157,41,232,215,64,78,67,107,
    134,216,90,87,80,236,125,20,59,203,98,255,69,98,61,124,
    179,8,222,21,98,199,117,125,65,156,22,113,242,124,179,44,
    165,150,173,114,14,90,87,179,254,124,161,191,80,232,47,22,
    250,75,133,254,114,161,127,173,208,191,94,232,223,40,244,87,
    10,253,213,66,255,102,161,191,198,125,212,240,42,116,214,161,
    83,135,206,45,216,65,163,207,229,218,220,6,105,66,231,14,
    180,238,128,196,207,109,56,69,191,120,87,11,35,222,225,17,
    243,249,136,187,60,226,30,180,238,129,196,207,93,61,162,12,
    205,198,18,250,218,255,47,254,52,208,215,160,166,177,57,148,
    113,226,71,161,227,135,59,145,111,208,251,50,53,132,140,54,
    53,19,41,68,158,18,68,254,9,140,15,207,72,33,114,2,
    40,88,144,46,129,1,39,220,57,49,160,223,128,99,1,29,
    11,60,19,142,113,154,18,45,96,87,192,169,1,95,153,196,
    112,130,173,133,142,92,3,75,105,124,116,216,145,90,210,4,
    156,148,224,184,4,205,151,199,6,17,246,43,16,255,3,190,
    94,101,161,147,44,212,128,99,108,45,56,181,224,164,12,47,
    144,9,73,157,10,169,47,94,30,163,166,72,105,54,44,92,
    237,86,65,93,82,197,243,227,208,237,74,53,135,125,167,231,
    198,110,215,105,202,216,119,131,95,249,225,126,163,154,177,69,
    201,70,207,85,123,54,143,51,201,32,221,158,98,121,81,40,
    213,20,118,118,252,208,115,186,145,119,16,72,53,73,194,156,
    29,63,144,142,195,47,127,217,237,69,177,250,56,142,163,216,
    38,155,50,49,136,220,124,4,89,180,29,68,137,108,208,108,
    60,141,77,226,21,113,239,244,88,34,45,128,215,74,131,61,
    153,180,99,191,167,208,85,90,34,113,147,180,6,57,137,155,
    228,41,54,155,123,81,87,110,238,184,237,131,64,245,55,119,
    101,247,193,230,246,129,31,120,155,79,236,103,155,189,190,218,
    139,194,77,164,249,161,146,104,136,96,115,216,4,27,200,115,
    149,132,29,249,187,142,207,106,56,123,50,232,201,120,134,168,
    55,104,34,81,19,211,162,44,76,209,16,51,216,43,225,215,
    20,171,198,148,216,242,73,145,54,41,71,32,178,138,176,33,
    95,10,216,55,32,94,37,80,116,240,35,200,139,8,141,38,
    189,51,248,221,175,201,2,154,218,49,201,213,154,120,204,64,
    66,68,33,231,35,242,109,8,140,134,18,116,202,160,81,130,
    224,210,176,137,251,212,34,59,137,49,80,184,5,201,223,1,
    45,138,248,56,134,20,59,167,38,136,176,6,170,74,169,2,
    169,75,56,225,31,25,126,205,6,45,127,139,81,160,246,252,
    36,58,10,217,214,212,231,128,105,162,101,158,247,63,219,238,
    200,182,74,214,145,240,69,116,80,111,187,97,24,169,186,235,
    121,117,87,169,216,223,62,80,50,169,171,168,126,55,105,144,
    251,236,185,12,72,185,188,126,47,3,14,57,25,129,163,31,
    60,191,173,240,97,158,31,216,11,137,84,8,130,189,200,75,
    144,78,34,118,165,178,105,145,138,140,28,241,66,24,35,14,
    177,210,244,200,119,5,159,159,100,43,97,32,54,202,25,108,
    18,25,236,168,42,35,208,77,18,135,87,66,116,6,27,9,
    62,116,131,3,201,210,19,148,135,11,162,174,94,195,24,224,
    118,141,150,158,105,202,203,15,163,208,235,227,106,252,246,187,
    52,209,53,6,221,52,195,110,17,33,55,129,109,25,255,150,
    197,146,209,182,82,160,149,51,176,81,142,83,192,174,22,169,
    183,17,120,167,152,79,26,6,39,4,214,128,35,238,54,245,
    104,176,189,74,205,77,106,214,168,89,207,148,124,187,154,206,
    12,107,250,144,164,27,172,30,43,66,198,55,51,69,188,51,
    81,115,125,16,53,152,229,154,132,126,131,98,100,128,126,139,
    50,98,252,152,90,100,229,184,50,33,249,156,242,47,69,9,
    11,163,128,64,104,83,111,0,120,54,139,93,35,117,39,51,
    172,218,4,192,34,10,119,11,40,180,201,35,12,65,251,122,
    150,221,28,226,208,224,179,87,72,84,105,132,93,235,212,220,
    26,143,113,7,48,218,61,7,163,143,104,162,90,10,163,25,
    134,79,21,191,53,163,109,166,22,207,183,184,249,33,248,16,
    118,172,17,216,185,71,61,243,188,142,99,133,77,170,217,39,
    5,216,208,98,140,162,2,91,216,233,47,211,186,139,128,89,
    198,221,249,69,184,140,27,174,193,27,238,123,188,225,242,166,
    205,101,146,78,176,38,231,88,221,41,145,1,118,76,88,74,
    55,210,164,130,109,47,142,94,245,235,209,78,93,177,134,148,
    15,31,221,77,54,238,38,31,97,166,171,63,230,28,163,115,
    157,206,102,177,236,81,54,162,161,31,191,106,75,222,191,248,
    201,113,116,242,113,56,17,57,233,190,136,216,89,36,243,25,
    153,93,57,13,39,42,166,236,59,6,203,86,115,203,210,66,
    63,37,209,85,54,171,41,150,17,39,85,193,243,59,58,199,
    114,57,196,111,241,251,115,50,53,233,40,129,10,101,187,169,
    87,199,11,39,21,236,239,159,193,194,91,93,182,189,137,114,
    126,147,97,160,60,192,0,125,205,12,196,127,6,46,11,5,
    252,9,200,203,232,204,20,196,57,230,201,173,243,196,254,91,
    96,180,143,216,159,57,79,52,105,79,102,14,76,31,201,67,
    102,213,219,245,167,240,151,66,168,100,155,170,153,22,126,197,
    77,213,202,115,12,195,227,91,109,156,214,217,100,68,174,216,
    115,19,98,211,25,102,16,125,131,164,157,23,108,152,97,223,
    46,86,38,181,80,135,230,255,106,128,20,218,150,86,196,188,
    81,240,255,251,212,124,144,187,94,100,180,183,182,148,117,184,
    120,199,116,116,150,254,146,230,179,120,133,179,19,140,243,129,
    136,28,200,165,12,200,31,228,64,150,188,157,188,230,50,159,
    90,131,124,121,106,8,60,219,97,165,68,71,41,11,100,9,
    90,101,130,60,87,177,34,141,8,145,37,32,74,87,103,246,
    42,182,192,150,182,77,238,78,237,41,106,94,141,33,176,201,
    89,143,2,183,187,237,185,143,41,85,37,36,189,157,197,136,
    145,45,181,86,92,42,225,91,92,180,90,126,124,144,45,249,
    112,12,65,253,35,224,141,71,47,149,33,236,69,109,142,228,
    207,247,100,189,43,187,219,120,82,219,243,123,245,157,192,221,
    101,171,155,169,42,159,101,170,40,118,219,240,206,158,220,167,
    54,170,183,163,16,51,233,65,91,69,113,221,147,120,126,145,
    94,253,7,117,78,195,117,63,169,187,219,248,214,109,43,141,
    215,179,1,198,229,161,27,239,38,92,9,238,31,81,119,76,
    94,115,240,36,234,99,5,124,8,249,30,167,207,72,121,86,
    229,218,86,195,31,183,35,60,153,168,190,78,44,180,203,219,
    27,212,124,15,198,151,124,63,76,125,148,144,41,202,98,197,
    168,24,170,118,38,190,158,211,168,228,124,148,253,231,219,68,
    153,190,59,73,99,173,76,156,114,130,142,189,212,86,40,1,
    183,170,25,113,138,219,105,38,206,100,196,43,220,206,50,177,
    150,17,231,184,189,202,196,249,140,184,192,237,34,19,151,50,
    226,50,183,215,152,120,61,35,222,224,118,133,137,171,25,241,
    38,183,107,76,92,207,46,135,234,76,188,5,173,219,116,187,
    65,148,59,148,40,38,254,215,68,193,161,55,166,160,59,121,
    171,249,193,126,248,127,88,169,253,99,72,119,249,139,114,131,
    40,170,49,163,115,67,71,100,7,131,162,14,124,155,176,60,
    2,192,78,59,150,174,146,218,254,171,99,209,138,211,137,158,
    230,15,131,120,63,95,211,62,201,21,56,229,98,166,191,192,
    110,209,7,32,118,139,120,17,222,192,226,214,226,226,246,17,
    21,183,199,172,173,99,232,250,118,128,174,82,174,244,2,54,
    161,60,114,134,21,215,5,44,45,205,237,245,100,232,217,247,
    161,88,147,242,235,49,120,152,210,215,95,161,80,88,152,98,
    1,139,208,243,113,67,201,184,160,16,251,167,148,71,202,120,
    60,197,248,251,91,134,191,198,59,80,204,200,246,35,106,56,
    7,231,233,215,254,105,110,231,27,163,192,229,201,192,237,211,
    129,230,178,215,88,222,240,133,4,63,113,217,115,142,49,192,
    174,147,244,164,244,88,216,155,120,72,34,217,119,64,82,107,
    163,134,132,7,93,39,112,67,153,176,212,55,176,144,80,58,
    212,228,20,181,50,106,64,236,134,187,169,192,203,222,147,52,
    2,159,126,84,55,71,178,202,223,59,137,255,181,100,97,151,
    115,144,56,218,88,51,194,104,101,98,153,244,6,18,223,192,
    146,233,155,83,212,251,163,6,240,229,97,215,77,16,85,14,
    22,31,33,158,161,232,166,185,29,29,132,138,167,249,238,163,
    104,102,2,248,101,76,234,189,11,197,38,129,123,40,71,175,
    229,59,15,74,82,55,94,194,195,33,205,185,21,1,44,149,
    60,151,105,184,112,72,47,88,60,244,117,28,245,241,68,204,
    103,78,138,0,199,25,87,17,243,19,189,177,65,66,198,196,
    34,70,148,177,140,89,20,103,126,141,74,185,34,184,6,28,
    250,191,128,94,15,93,205,233,147,86,63,177,121,83,154,205,
    35,158,175,175,179,218,140,146,3,195,101,203,237,234,171,72,
    190,120,179,239,64,122,141,98,191,155,103,14,186,78,226,227,
    173,190,36,192,236,204,245,41,151,163,246,15,137,78,11,238,
    62,216,200,180,219,120,226,121,177,77,145,226,28,74,42,109,
    249,6,189,251,128,93,83,228,211,86,120,38,187,250,230,150,
    19,197,249,247,79,131,168,189,47,189,148,231,230,197,60,191,
    136,186,46,210,71,207,210,244,179,89,230,134,222,123,49,141,
    90,28,162,38,236,27,138,163,235,67,111,36,165,148,231,71,
    113,19,143,121,242,156,238,122,182,231,209,145,140,159,69,136,
    23,117,123,136,97,240,138,5,100,38,186,245,6,57,122,182,
    11,116,59,216,110,246,49,238,186,23,88,16,11,146,184,235,
    6,169,125,8,8,25,131,34,124,12,187,129,220,156,63,113,
    109,61,84,139,112,112,196,114,215,167,88,103,17,57,123,186,
    91,19,150,71,231,192,226,208,49,69,146,62,105,234,219,171,
    199,116,15,202,177,64,55,213,149,217,10,70,21,237,226,166,
    168,226,62,110,153,211,181,138,53,61,85,177,42,19,38,95,
    64,206,136,121,163,106,85,166,166,197,69,191,235,24,129,85,
    99,125,185,34,190,1,54,126,209,196,
};

EmbeddedPython embedded_m5_internal_param_SerialLink(
    "m5/internal/param_SerialLink.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_SerialLink.py",
    "m5.internal.param_SerialLink",
    data_m5_internal_param_SerialLink,
    2522,
    7599);

} // anonymous namespace
