#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86IntelMPExtConfigEntry[] = {
    120,156,189,88,253,114,219,198,17,223,3,64,74,164,40,139,
    178,44,201,182,84,11,109,199,13,227,180,98,155,198,113,102,
    162,106,234,58,238,76,50,173,236,128,201,216,97,50,65,33,
    226,72,130,2,1,14,112,178,205,140,244,79,229,105,251,2,
    125,132,254,209,183,233,27,181,187,123,0,72,202,86,155,78,
    75,82,228,233,112,184,219,219,143,223,126,220,117,32,251,148,
    240,247,107,27,32,237,10,0,31,191,2,66,128,161,128,182,
    0,33,5,248,55,224,164,4,201,7,224,151,224,53,64,219,
    0,105,192,5,118,76,248,218,128,168,198,107,202,16,154,60,
    34,96,92,5,105,65,187,4,207,162,117,176,100,25,78,170,
    144,252,1,132,16,145,128,231,254,18,248,203,240,26,169,99,
    167,194,4,151,129,6,171,60,88,1,127,133,7,171,224,215,
    184,179,2,227,58,200,26,180,87,105,90,251,26,146,189,135,
    100,215,152,236,63,136,172,143,111,54,193,191,70,211,145,175,
    175,104,166,69,51,121,191,53,166,82,207,185,92,135,246,245,
    188,191,49,213,191,193,125,220,233,58,12,54,97,176,5,131,
    109,64,133,248,235,5,213,155,32,77,24,220,130,246,45,144,
    248,189,9,23,168,31,255,250,212,138,219,188,98,163,88,177,
    195,43,118,161,189,11,18,191,59,122,69,25,90,141,45,212,
    121,240,79,252,52,80,231,160,106,216,188,144,73,26,196,145,
    27,68,221,56,48,232,125,153,26,178,80,135,154,165,204,84,
    143,200,84,127,7,182,147,111,100,166,58,7,36,44,72,150,
    208,128,115,238,156,27,48,110,192,153,128,129,5,190,9,103,
    184,77,137,24,232,9,184,48,224,27,147,38,156,99,107,161,
    66,239,128,165,180,157,6,172,80,77,105,9,206,75,112,86,
    130,214,243,51,131,6,78,42,144,252,13,190,219,101,162,203,
    76,212,128,51,108,45,184,176,224,188,12,207,112,18,14,13,
    42,36,190,120,126,134,146,226,72,171,97,33,183,71,83,226,
    146,40,126,144,68,222,80,170,61,236,187,35,47,241,134,238,
    243,143,62,252,52,82,50,252,253,211,199,175,212,163,56,234,
    6,189,199,145,74,198,141,106,190,40,78,247,71,158,234,59,
    76,197,36,245,12,71,138,169,199,145,84,43,216,233,6,145,
    239,14,99,255,52,148,106,153,72,187,221,32,148,174,203,47,
    63,29,142,226,68,61,78,146,56,113,72,195,60,24,198,94,
    177,130,244,219,9,227,84,54,104,55,222,198,33,242,138,102,
    119,71,76,145,24,96,206,105,177,47,211,78,18,140,20,26,
    78,83,164,217,68,173,65,38,227,38,253,28,155,102,63,30,
    202,102,215,235,156,134,106,220,236,201,225,253,230,241,105,16,
    250,77,148,185,57,26,171,126,28,53,113,44,64,241,81,45,
    97,243,223,43,100,31,87,92,39,210,47,131,158,27,176,80,
    110,95,134,35,153,172,210,232,109,218,86,212,69,77,148,133,
    41,26,98,21,123,37,252,153,98,215,88,17,71,1,137,213,
    33,81,9,96,214,52,164,200,206,2,78,12,72,118,9,48,
    3,252,10,178,48,194,166,69,239,12,126,247,57,233,67,143,
    14,76,130,129,30,60,99,144,33,218,112,230,1,217,61,2,
    70,74,9,6,101,208,8,66,224,105,72,37,99,106,113,58,
    145,49,144,184,5,233,95,1,245,139,216,57,131,12,87,23,
    38,136,168,14,170,74,238,140,163,91,184,225,31,25,154,173,
    6,177,127,196,152,80,253,32,141,95,70,172,121,234,179,51,
    181,80,51,79,199,79,142,7,178,163,82,130,216,87,241,169,
    221,241,162,40,86,182,231,251,182,167,84,18,28,159,42,153,
    218,42,182,239,166,13,50,166,179,158,195,170,160,55,30,229,
    48,34,147,35,140,244,131,31,116,20,62,108,240,3,91,33,
    149,10,33,209,143,253,20,199,137,68,79,42,135,152,84,164,
    228,152,25,97,196,184,52,149,182,199,121,215,240,249,97,206,
    9,195,178,81,206,65,148,202,176,171,170,140,71,47,77,93,
    230,132,198,25,122,68,248,133,23,158,74,166,158,34,61,100,
    136,186,154,135,185,131,239,38,9,146,203,205,194,68,113,228,
    143,145,183,160,243,14,109,123,147,33,88,99,16,110,34,0,
    151,176,45,227,255,178,216,50,58,86,6,187,114,14,61,138,
    134,10,216,240,34,179,61,194,240,2,35,79,195,224,208,193,
    242,176,55,254,136,122,180,216,217,165,230,7,212,220,161,102,
    47,23,121,158,114,175,94,150,251,1,237,101,176,176,44,22,
    25,198,204,197,242,103,60,234,214,196,163,48,58,182,200,51,
    12,242,159,137,103,88,20,73,147,67,106,113,42,251,156,9,
    233,23,20,183,201,131,152,24,57,11,194,158,122,19,103,96,
    37,57,117,18,126,57,199,177,67,224,156,70,104,111,10,161,
    14,217,135,225,233,220,202,227,160,75,51,52,48,157,29,34,
    85,122,139,150,109,106,126,184,8,85,79,32,214,123,3,98,
    31,211,182,245,12,98,171,12,173,42,254,234,70,199,204,244,
    95,36,202,141,75,208,34,92,89,111,193,213,79,168,103,190,
    41,241,2,33,149,201,249,219,41,72,17,107,198,180,56,71,
    216,25,111,147,20,211,96,218,198,140,255,44,218,198,36,110,
    112,18,255,57,39,113,46,4,184,4,210,129,217,228,216,172,
    59,37,82,71,215,132,173,44,57,167,21,108,71,73,252,106,
    108,199,93,91,177,188,20,71,15,238,166,251,119,211,143,49,
    66,218,135,28,155,116,140,212,81,48,145,35,138,98,180,244,
    241,171,142,228,44,200,79,174,171,131,150,203,1,204,205,178,
    43,226,106,147,148,105,228,90,230,240,157,170,132,162,246,220,
    245,92,45,244,76,108,127,70,27,85,89,201,166,216,70,12,
    85,5,115,227,234,72,205,5,23,191,197,223,111,72,241,36,
    177,4,42,137,157,150,230,149,197,32,129,156,159,206,224,100,
    142,66,56,77,164,250,101,142,143,242,4,31,244,51,115,184,
    255,25,184,12,21,240,39,32,4,160,161,51,184,23,222,65,
    38,223,160,233,223,2,251,197,91,114,62,199,151,22,229,121,
    158,129,97,39,125,192,83,117,9,240,25,252,101,202,169,242,
    68,109,102,133,230,116,162,182,138,216,196,208,249,94,201,216,
    154,13,98,100,152,190,151,210,52,29,153,38,126,58,9,253,
    69,73,136,145,121,158,56,90,214,91,184,196,205,55,19,20,
    81,170,219,17,27,198,20,54,126,65,205,251,5,44,68,62,
    54,39,198,246,224,234,156,236,234,200,255,53,237,110,49,191,
    107,75,234,61,252,79,4,91,15,221,71,79,126,247,228,168,
    229,102,180,243,199,217,61,10,159,40,229,62,241,126,225,19,
    146,115,216,107,62,147,80,107,16,16,46,12,129,7,66,44,
    221,232,252,101,129,44,65,187,76,222,195,69,182,200,156,75,
    228,145,141,226,224,76,130,100,133,29,105,85,22,88,208,102,
    166,230,213,220,35,6,89,250,32,244,134,199,190,119,56,160,
    109,104,175,78,238,110,70,206,120,125,154,113,114,21,113,21,
    239,252,120,63,23,224,197,220,163,197,135,192,108,105,198,217,
    55,252,184,195,33,226,139,190,180,135,114,120,140,71,206,126,
    48,178,187,161,215,99,139,152,153,96,79,114,193,20,155,244,
    114,169,145,222,163,54,182,59,113,132,225,251,180,163,226,196,
    246,37,30,189,164,111,255,204,230,216,111,7,169,237,29,227,
    91,175,163,52,244,103,61,151,107,89,47,233,165,92,182,158,
    188,164,238,66,44,234,226,1,59,192,226,61,132,34,205,234,
    195,94,17,202,185,44,215,158,132,25,17,15,85,106,172,227,
    23,149,29,206,62,53,239,194,162,34,254,7,160,239,0,82,
    82,83,89,236,24,21,67,221,201,28,247,109,107,158,18,197,
    244,77,95,253,228,251,248,170,190,182,201,60,182,12,114,137,
    142,249,116,37,83,202,174,100,208,123,203,255,171,247,178,7,
    44,4,251,233,255,213,105,157,7,11,231,219,249,8,178,156,
    126,149,195,206,20,135,15,181,195,106,11,96,230,31,223,96,
    25,245,41,131,101,20,207,162,219,88,37,90,92,37,30,80,
    149,120,198,149,164,107,232,66,113,98,56,46,254,249,70,131,
    78,92,145,124,121,37,215,26,113,186,46,36,112,120,163,145,
    140,124,231,30,76,151,122,252,122,238,202,35,7,125,1,83,
    57,217,20,55,176,182,123,19,174,20,124,166,132,101,88,150,
    10,128,238,46,202,208,231,185,161,245,245,67,17,129,156,3,
    106,234,51,225,70,71,31,182,200,93,226,94,134,82,201,255,
    96,20,69,36,178,227,159,47,49,24,199,99,172,201,185,206,
    197,231,208,117,23,19,195,126,133,84,147,220,44,24,195,68,
    217,168,148,43,130,147,193,165,155,78,205,11,157,190,116,45,
    55,78,29,118,132,181,66,120,190,130,203,195,50,233,137,79,
    28,71,222,80,95,160,240,5,129,243,99,200,142,116,206,59,
    133,18,233,160,203,5,180,62,162,32,164,57,81,113,94,114,
    126,73,227,212,27,222,223,207,37,219,215,146,181,130,161,190,
    71,226,75,192,225,125,181,126,105,154,159,120,216,223,188,52,
    154,202,36,240,194,224,59,125,127,148,15,43,18,228,50,93,
    226,167,120,226,136,175,200,241,255,139,218,140,77,156,200,94,
    144,226,54,188,71,65,47,115,79,178,65,81,241,93,141,152,
    25,66,11,65,135,46,179,244,9,241,144,220,32,61,196,134,
    238,141,42,107,21,68,10,57,177,137,199,179,85,97,153,181,
    122,197,170,173,84,172,202,146,201,71,254,85,44,184,171,86,
    101,165,38,232,111,15,49,85,53,246,106,21,241,47,45,36,
    121,149,
};

EmbeddedPython embedded_m5_internal_param_X86IntelMPExtConfigEntry(
    "m5/internal/param_X86IntelMPExtConfigEntry.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_X86IntelMPExtConfigEntry.py",
    "m5.internal.param_X86IntelMPExtConfigEntry",
    data_m5_internal_param_X86IntelMPExtConfigEntry,
    2146,
    6363);

} // anonymous namespace