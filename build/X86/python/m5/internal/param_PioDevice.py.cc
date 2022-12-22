#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_PioDevice[] = {
    120,156,181,88,91,115,219,198,21,62,11,128,148,72,221,40,
    203,146,108,75,182,104,167,182,105,199,145,218,52,142,51,19,
    215,83,231,210,153,102,38,138,11,166,99,135,201,20,133,128,
    165,4,10,4,56,192,74,50,61,210,75,228,105,243,214,167,
    254,132,62,244,223,244,31,53,231,156,5,32,136,146,50,238,
    148,114,196,205,193,238,226,236,185,124,231,178,240,32,251,87,
    193,223,239,155,0,233,61,3,192,199,63,1,33,64,95,64,
    71,128,144,2,252,171,176,91,129,228,35,240,43,240,22,160,
    99,128,52,224,24,9,19,190,55,32,154,230,119,170,16,154,
    60,35,96,88,7,105,65,167,2,47,163,121,176,100,21,118,
    235,144,252,21,132,16,145,128,87,254,4,248,147,240,22,185,
    35,81,99,134,147,64,147,117,158,172,129,63,197,147,117,240,
    167,153,152,130,97,3,228,52,116,102,104,91,103,22,217,62,
    68,182,115,204,246,63,196,214,199,149,69,240,103,105,59,202,
    245,29,237,180,104,39,159,55,199,92,26,185,148,243,208,185,
    146,211,11,37,250,106,137,94,44,209,75,37,122,185,68,95,
    43,209,215,75,244,141,18,189,82,162,87,75,244,205,18,125,
    171,68,175,149,232,102,137,190,93,162,239,148,232,247,74,244,
    175,152,70,75,93,129,222,93,232,221,131,222,125,232,162,243,
    230,11,171,180,64,154,208,123,0,157,7,32,241,175,5,199,
    232,95,255,74,233,141,135,252,198,66,241,198,251,252,198,35,
    232,60,2,137,127,239,235,55,170,208,110,45,33,102,130,255,
    226,191,150,64,74,77,227,176,47,147,52,136,35,39,136,186,
    113,96,208,122,149,6,66,152,71,195,68,6,181,207,9,106,
    255,6,198,153,111,100,80,59,2,100,44,72,151,208,128,35,
    38,142,12,24,182,224,80,64,207,2,223,132,67,60,166,66,
    2,108,11,56,54,224,7,147,54,28,225,104,33,32,110,129,
    165,52,206,122,12,8,205,105,2,142,42,112,88,129,246,171,
    67,131,38,118,107,144,252,11,222,172,50,211,73,102,106,192,
    33,142,22,28,91,112,84,133,151,184,9,167,122,53,82,95,
    188,58,68,77,113,166,221,178,80,218,205,146,186,164,138,31,
    36,145,219,151,170,129,180,51,112,19,183,239,188,8,226,47,
    228,126,224,201,86,61,223,21,167,235,3,87,237,216,252,154,
    73,246,232,15,20,179,139,35,169,166,144,232,6,145,239,244,
    99,127,47,148,106,146,120,57,221,32,148,142,195,139,127,236,
    15,226,68,125,153,36,113,98,147,73,121,50,140,221,226,13,
    50,168,23,198,169,108,209,105,124,140,77,236,21,237,238,14,
    152,35,9,192,162,210,203,190,76,189,36,24,40,244,148,230,
    72,187,137,91,139,124,196,67,250,25,14,27,59,113,95,110,
    116,93,111,47,84,195,141,109,217,127,188,177,181,23,132,254,
    198,171,79,62,222,24,12,213,78,28,109,224,92,16,41,137,
    118,8,55,70,44,176,142,91,174,16,175,131,96,219,9,88,
    11,103,71,134,3,153,204,208,236,13,58,71,52,196,180,168,
    10,83,180,196,12,82,21,252,153,98,213,152,18,155,1,233,
    225,145,110,4,33,171,12,26,242,164,128,93,3,146,85,130,
    68,15,255,4,249,16,129,209,166,53,131,215,254,68,6,208,
    179,61,147,28,173,39,15,25,70,136,39,220,249,148,60,27,
    1,99,161,2,189,42,104,140,32,180,52,104,146,33,141,184,
    157,216,24,200,220,130,244,159,128,6,69,116,28,66,134,156,
    99,19,68,212,0,85,167,132,131,179,75,120,224,143,12,190,
    118,139,196,223,100,16,168,157,32,141,15,34,54,53,209,28,
    46,109,180,204,139,225,55,91,61,233,169,116,13,39,190,139,
    247,154,158,27,69,177,106,186,190,223,116,149,74,130,173,61,
    37,211,166,138,155,119,211,22,121,207,158,207,113,84,240,27,
    14,114,220,144,143,17,55,250,193,15,60,133,15,11,252,192,
    94,72,165,66,12,236,196,126,138,243,196,98,91,42,155,132,
    84,100,228,152,5,97,136,56,180,149,142,199,125,179,248,252,
    60,151,132,113,216,170,230,168,73,101,216,85,117,6,160,155,
    166,14,75,66,243,140,53,98,188,239,134,123,146,185,167,200,
    15,5,34,82,203,48,126,180,93,35,201,115,69,89,250,40,
    142,252,33,10,19,120,247,233,156,107,140,185,105,70,221,34,
    34,110,2,199,42,254,191,42,150,12,207,202,112,86,205,177,
    70,9,78,1,123,90,100,206,70,220,29,99,50,105,25,156,
    13,88,1,142,183,59,68,209,203,246,42,13,55,105,184,69,
    195,90,174,227,88,21,157,25,85,244,9,49,55,88,59,214,
    131,76,111,230,122,248,167,98,230,250,73,204,96,134,107,19,
    246,13,138,144,19,236,91,148,13,147,103,52,226,86,142,42,
    19,210,111,41,247,82,140,48,51,10,7,4,54,81,39,112,
    103,171,216,148,13,91,147,57,82,109,130,95,25,131,219,37,
    12,218,228,16,6,160,125,61,79,109,14,237,208,208,179,87,
    136,85,229,28,179,54,105,184,125,41,182,61,1,209,246,25,
    16,125,74,231,52,50,16,205,48,120,234,248,107,24,158,153,
    25,188,168,110,11,35,224,33,228,88,231,32,231,30,81,230,
    89,21,47,19,52,153,98,127,40,129,134,100,49,202,242,111,
    34,49,92,38,177,203,112,89,198,186,252,50,90,198,82,107,
    112,169,253,53,151,90,46,215,220,104,233,228,106,114,126,213,
    68,133,244,239,154,176,148,149,208,180,134,227,32,137,95,15,
    155,113,183,169,88,65,202,133,79,239,166,235,119,211,79,49,
    203,53,159,113,126,209,121,78,103,178,68,14,40,19,209,171,
    95,190,246,36,151,46,126,114,28,157,120,28,78,66,78,86,
    18,17,57,139,100,61,35,55,43,167,224,84,37,148,121,199,
    111,216,122,97,88,146,243,43,226,92,103,171,154,98,25,81,
    82,23,124,188,163,211,43,247,65,188,138,191,207,200,210,164,
    162,4,234,180,237,182,22,142,229,38,13,236,71,167,144,48,
    78,169,237,13,100,243,231,28,1,213,19,4,208,207,204,17,
    252,119,224,118,80,192,223,128,124,140,174,204,16,92,0,158,
    156,186,64,219,255,2,12,245,115,42,51,231,136,54,85,99,
    222,129,169,35,125,194,91,117,161,254,10,126,42,197,73,94,
    78,205,172,225,43,151,83,171,200,47,12,142,119,42,153,214,
    233,68,68,158,216,113,83,218,166,179,203,73,232,157,228,235,
    162,83,195,236,58,86,164,76,106,158,14,29,255,195,9,78,
    168,32,173,136,5,163,228,253,223,208,240,97,225,120,145,207,
    141,75,146,53,184,184,84,58,58,63,127,79,199,89,44,224,
    220,4,71,91,193,161,0,113,37,7,241,135,5,136,37,215,
    145,183,220,219,211,104,144,35,143,13,129,23,67,108,144,232,
    30,102,129,172,64,167,74,112,231,222,85,100,209,32,242,220,
    67,153,234,84,145,98,253,55,181,101,10,95,106,55,209,240,
    122,252,49,77,158,122,26,186,253,45,223,125,246,134,248,18,
    115,47,143,15,35,151,180,81,150,148,176,45,46,18,150,31,
    31,231,18,239,143,63,158,63,70,54,133,164,140,94,63,246,
    56,136,191,221,145,205,190,236,111,225,229,108,39,24,52,187,
    161,187,205,54,55,51,77,190,201,53,81,236,180,209,130,158,
    62,164,49,110,122,113,132,41,116,207,83,113,210,244,37,222,
    89,164,223,252,160,201,249,183,25,164,77,119,11,87,93,79,
    105,172,158,142,45,238,9,221,100,59,229,246,111,247,128,200,
    203,241,153,131,119,207,0,187,222,67,40,106,155,190,22,21,
    233,148,251,89,13,125,44,67,120,27,81,67,157,82,168,184,
    219,235,52,60,128,75,203,186,31,33,155,33,241,35,67,84,
    197,138,81,51,212,92,57,180,94,208,59,233,217,0,139,222,
    37,192,244,55,23,220,32,171,208,155,224,113,146,242,109,167,
    150,79,214,121,156,226,201,233,60,32,103,120,114,22,58,115,
    249,247,157,6,5,103,245,255,13,78,198,251,229,32,253,120,
    172,49,105,63,185,124,65,237,79,32,43,170,23,197,227,169,
    254,235,185,142,71,109,99,44,189,195,171,172,148,110,213,89,
    41,241,50,186,129,141,152,197,141,216,83,106,196,14,185,89,
    115,12,221,139,157,184,134,59,104,190,233,211,241,145,60,112,
    70,224,166,123,45,242,183,59,24,200,200,183,31,66,185,125,
    226,229,241,155,135,2,238,39,40,85,65,83,92,197,126,233,
    44,228,40,123,148,212,97,104,85,10,144,173,94,154,239,254,
    145,251,174,53,127,42,133,216,79,105,104,156,202,23,218,190,
    55,206,134,178,147,14,83,37,251,212,116,255,210,50,150,97,
    125,77,230,71,245,193,57,59,249,11,202,32,136,29,204,196,
    17,182,146,244,165,205,139,247,34,197,188,255,183,55,232,56,
    186,114,93,184,131,189,163,232,10,236,203,80,42,57,10,25,
    253,209,75,231,81,95,98,234,143,135,216,133,115,163,139,207,
    161,227,92,82,2,253,29,178,249,145,248,205,234,4,138,215,
    175,69,177,104,212,170,53,193,245,102,228,179,163,22,128,108,
    163,27,186,97,106,115,48,206,21,46,227,207,99,121,33,32,
    199,114,171,179,233,246,245,183,14,190,218,219,239,65,118,85,
    179,239,23,94,39,243,113,23,173,111,34,24,86,92,11,185,
    244,217,191,165,121,186,74,246,31,175,231,234,172,107,117,218,
    218,195,6,47,170,149,145,61,50,218,235,59,95,203,126,156,
    12,191,142,125,169,86,71,214,159,251,126,98,187,209,182,116,
    246,37,149,98,117,123,116,67,86,135,53,143,124,87,243,92,
    81,78,239,61,35,139,222,132,139,250,19,21,55,141,103,215,
    63,15,99,111,87,250,217,158,155,23,239,249,34,238,187,56,
    127,254,41,237,32,63,101,126,100,221,79,232,173,197,145,217,
    84,38,129,27,6,111,36,195,248,140,5,95,28,36,109,236,
    107,207,218,47,131,84,124,32,19,178,111,168,238,140,108,56,
    89,98,6,23,153,121,148,143,62,237,2,221,246,182,50,167,
    159,111,65,44,8,73,223,13,51,251,140,74,92,88,38,23,
    229,214,47,49,209,74,17,168,243,117,238,47,70,93,73,144,
    45,158,184,43,225,88,47,66,141,3,59,145,219,1,138,157,
    48,135,98,119,86,50,40,16,89,214,51,9,173,244,230,229,
    36,1,221,157,235,187,254,51,250,102,196,151,79,250,168,87,
    155,171,137,170,65,149,196,196,123,247,140,176,204,233,70,205,
    154,158,170,89,181,9,147,191,214,204,224,61,171,110,213,166,
    166,197,187,252,183,134,105,165,110,172,205,214,196,207,53,215,
    9,195,
};

EmbeddedPython embedded_m5_internal_param_PioDevice(
    "m5/internal/param_PioDevice.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_PioDevice.py",
    "m5.internal.param_PioDevice",
    data_m5_internal_param_PioDevice,
    2370,
    6955);

} // anonymous namespace