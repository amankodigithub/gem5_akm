#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_OpClass[] = {
    120,156,205,88,91,119,219,198,17,30,92,120,21,105,201,150,
    45,249,34,219,140,19,59,172,235,74,142,227,196,105,172,42,
    150,111,141,220,88,118,64,39,146,215,174,17,154,0,37,200,
    36,192,2,43,57,236,145,94,170,156,180,127,160,63,161,15,
    253,43,125,234,63,106,103,6,4,177,4,169,115,250,160,156,
    83,29,113,181,248,102,48,59,151,111,103,151,106,193,224,39,
    135,159,123,53,128,104,213,4,112,240,87,131,14,64,87,3,
    161,129,230,106,224,204,192,187,28,132,183,193,201,193,79,0,
    66,7,87,135,67,156,24,240,74,7,191,194,239,228,161,99,
    48,162,65,191,12,174,9,34,7,27,254,73,48,221,60,188,
    43,67,248,3,104,154,230,107,176,233,20,192,41,194,79,104,
    29,39,37,54,88,4,2,203,12,150,192,153,98,176,12,78,
    133,39,83,208,159,1,183,2,162,74,106,226,4,154,189,142,
    102,167,217,236,191,201,172,131,146,147,224,156,32,117,244,235,
    37,105,154,164,201,235,77,179,21,52,97,192,206,73,26,15,
    41,44,124,56,5,226,20,163,179,42,122,26,196,105,70,207,
    168,232,28,136,57,70,231,85,244,44,136,179,140,158,83,209,
    243,32,206,51,122,65,69,23,64,44,48,122,81,69,47,129,
    184,196,232,101,21,173,129,168,49,250,129,138,94,1,113,133,
    209,15,85,244,35,16,31,49,122,85,69,175,129,184,198,232,
    199,42,90,7,81,103,244,87,42,122,29,196,117,70,127,173,
    162,55,64,220,96,244,55,42,186,8,98,145,209,37,21,189,
    9,226,38,163,159,168,232,45,16,183,24,253,84,69,111,131,
    184,205,232,103,42,250,57,136,207,25,189,163,162,95,128,248,
    130,209,223,170,232,151,32,190,100,244,174,138,46,131,88,102,
    244,119,42,186,2,98,133,209,175,84,244,30,136,123,140,174,
    170,232,125,16,247,25,125,160,162,15,65,60,100,244,145,138,
    62,6,241,152,209,223,171,232,215,32,190,102,116,77,69,159,
    128,120,194,232,31,84,244,27,16,223,48,250,84,69,215,65,
    172,51,250,76,69,159,131,120,206,232,183,42,106,129,176,24,
    109,168,232,11,16,47,24,253,78,69,191,7,241,61,163,27,
    42,186,9,98,147,209,151,42,42,64,8,70,95,169,232,107,
    16,175,25,253,163,138,190,1,241,134,81,27,132,77,93,160,
    81,63,133,237,196,251,15,254,212,53,156,201,10,14,123,110,
    24,121,129,111,123,126,59,240,116,146,231,105,160,230,211,162,
    161,48,232,66,15,168,11,253,19,184,5,57,250,160,11,29,
    0,104,244,12,208,209,225,128,39,7,58,244,235,176,175,193,
    142,9,142,1,251,184,76,142,92,218,210,224,80,135,215,6,
    41,28,224,104,98,175,184,4,166,140,91,208,14,247,138,216,
    82,1,14,114,176,159,131,198,230,190,78,192,187,18,132,255,
    128,63,47,176,209,34,27,213,97,31,71,19,14,77,56,200,
    195,6,42,33,180,83,162,14,163,109,238,99,164,136,52,234,
    216,50,97,93,9,151,66,113,188,208,111,118,93,89,197,185,
    237,250,187,93,251,89,239,65,167,25,69,245,114,162,18,68,
    139,189,166,220,182,248,29,131,146,209,237,73,182,21,248,174,
    156,194,73,219,243,29,187,27,56,187,29,87,22,201,144,221,
    246,58,174,109,179,112,173,219,11,66,249,40,12,131,208,162,
    124,50,216,9,154,195,55,40,155,173,78,16,185,117,90,141,
    151,177,200,188,36,237,118,143,45,146,3,236,39,189,236,184,
    81,43,244,122,18,203,20,91,36,109,178,86,167,2,241,16,
    125,133,195,210,118,208,117,151,218,205,214,110,71,246,151,182,
    220,238,103,75,111,119,189,142,179,180,106,61,93,234,245,229,
    118,224,47,33,230,249,210,197,36,116,150,212,240,23,81,78,
    236,136,222,123,91,182,199,33,216,219,110,167,231,134,148,169,
    232,60,45,162,205,104,21,45,175,25,90,93,171,226,44,135,
    31,67,91,208,167,180,117,143,130,104,81,96,68,30,83,165,
    11,213,80,131,119,58,132,11,68,134,29,252,213,168,122,72,
    137,6,201,116,150,125,75,209,199,232,142,65,37,142,193,125,
    38,16,50,9,53,151,169,166,62,48,11,114,176,147,135,152,
    29,72,170,152,46,97,159,70,84,39,51,58,26,55,33,250,
    59,96,54,145,23,251,48,224,204,161,1,154,63,3,178,76,
    167,16,162,115,184,224,95,152,118,141,58,185,191,206,12,144,
    219,94,20,188,247,57,207,52,231,141,210,192,204,60,239,63,
    123,187,227,182,100,116,25,129,151,193,110,173,213,244,253,64,
    214,154,142,83,107,74,25,122,111,119,165,27,213,100,80,187,
    26,213,169,116,214,201,132,68,67,123,253,94,66,26,42,48,
    146,38,126,112,188,150,196,135,89,126,224,42,68,174,68,2,
    108,7,78,132,56,153,216,114,165,69,78,74,74,114,192,142,
    48,63,108,82,165,229,81,239,4,62,175,38,158,48,9,235,
    249,132,50,145,219,105,203,50,179,15,43,110,179,39,132,51,
    209,200,240,94,179,179,235,178,245,8,237,161,67,52,141,125,
    56,102,170,157,37,183,147,40,217,117,63,240,157,62,122,226,
    181,62,166,69,206,50,225,42,76,185,51,72,183,2,142,121,
    252,155,215,230,244,150,57,32,89,62,33,218,28,133,8,92,
    102,109,80,105,36,221,33,246,144,186,206,77,128,189,231,157,
    118,133,102,244,178,181,64,195,69,26,46,209,112,57,9,240,
    248,162,172,102,163,188,67,150,117,14,141,131,160,164,27,73,
    16,206,200,110,57,151,238,22,236,106,13,98,189,78,123,35,
    101,189,73,29,48,92,161,17,85,121,63,25,16,189,160,126,
    75,187,131,141,209,70,64,74,211,44,37,58,167,196,154,161,
    80,139,9,71,45,34,158,202,190,45,133,125,22,85,131,169,
    103,157,75,58,154,77,26,49,233,172,11,100,42,55,33,167,
    53,26,62,56,254,196,166,244,217,26,163,207,93,90,100,102,
    64,159,42,211,166,140,159,25,189,101,12,178,61,60,206,102,
    51,180,33,206,152,19,56,115,141,102,198,120,124,191,24,93,
    6,81,61,86,232,66,142,232,170,243,235,56,233,207,147,207,
    42,81,230,241,20,222,240,231,241,96,213,249,96,189,201,7,
    43,31,206,124,227,142,27,170,193,61,53,158,228,40,248,182,
    1,115,131,3,51,42,225,216,11,131,31,251,181,160,93,147,
    28,29,245,191,229,171,209,226,213,232,46,118,182,218,10,247,
    148,184,183,197,221,43,116,123,212,125,232,213,71,63,182,92,
    62,171,248,201,182,227,102,99,115,227,177,7,103,32,114,230,
    12,165,78,79,114,202,109,55,146,33,117,219,99,206,106,121,
    152,85,114,242,9,153,45,115,74,13,109,30,249,81,214,120,
    109,59,238,167,124,229,97,41,126,238,83,154,41,62,23,232,
    251,150,213,136,61,99,167,201,125,235,198,8,7,142,205,101,
    107,9,109,124,151,212,62,159,214,158,62,70,66,220,191,226,
    101,65,163,242,255,12,84,93,44,226,128,184,67,158,83,57,
    103,73,253,13,48,195,39,156,195,220,23,26,116,246,178,6,
    182,139,232,14,171,198,199,242,19,248,155,178,61,146,195,211,
    24,92,236,212,195,211,28,246,20,166,197,255,116,64,154,163,
    205,135,202,176,221,140,72,45,238,40,233,142,75,27,244,240,
    82,134,29,245,248,56,82,140,13,218,180,246,235,148,33,116,
    252,92,208,102,117,165,238,159,208,112,107,88,114,45,193,142,
    197,141,203,112,244,169,104,199,221,248,21,173,101,178,119,211,
    5,206,80,230,210,30,251,245,195,48,77,253,200,34,196,154,
    166,65,79,118,44,238,111,188,218,201,62,223,23,226,37,135,
    16,109,219,117,188,18,196,87,88,58,47,173,15,97,208,5,
    45,58,156,173,69,24,156,4,204,212,120,159,251,238,123,222,
    233,92,58,235,83,194,231,201,80,144,4,200,171,180,2,31,
    175,22,190,228,93,153,202,248,224,89,243,229,106,103,119,84,
    45,63,196,229,233,120,250,20,115,59,170,83,72,5,137,157,
    135,222,222,68,59,136,75,218,185,143,241,62,46,87,29,103,
    84,169,168,72,82,181,7,221,222,17,106,40,81,212,246,228,
    81,106,123,82,206,37,15,227,238,151,84,145,60,167,62,173,
    182,90,163,186,149,140,52,93,126,44,226,162,34,81,150,247,
    162,214,81,203,163,40,85,108,252,41,60,202,79,18,113,53,
    26,94,215,25,75,98,33,21,48,1,6,243,177,80,202,35,
    178,212,94,150,1,133,84,48,84,26,43,73,33,21,164,74,
    217,130,20,82,1,231,141,230,227,249,40,42,146,84,109,172,
    106,69,69,194,215,145,228,97,44,208,169,81,33,167,152,158,
    27,219,94,123,66,138,135,34,166,194,240,105,34,21,84,233,
    208,215,241,202,21,21,201,208,234,228,45,80,201,72,51,234,
    217,226,84,50,210,81,245,177,50,85,50,210,140,122,182,96,
    149,140,116,84,125,140,241,149,140,84,158,87,129,241,74,87,
    179,226,204,11,99,53,175,102,197,242,98,22,25,43,211,204,
    4,141,209,117,198,235,85,205,138,153,211,79,221,174,229,54,
    39,236,182,129,128,9,128,243,141,208,147,238,56,1,18,137,
    210,97,38,25,172,100,164,236,107,2,76,48,93,205,138,153,
    223,107,189,16,227,116,179,77,191,164,138,216,145,53,148,60,
    15,221,182,43,91,219,227,142,168,82,222,100,235,233,121,57,
    190,201,20,33,127,173,109,237,53,195,95,224,118,198,217,92,
    142,239,177,43,180,110,244,47,28,232,123,106,105,186,164,229,
    117,250,167,136,129,215,202,170,102,26,149,153,146,89,153,42,
    153,165,130,193,95,67,170,120,153,40,155,165,74,85,43,233,
    255,175,159,255,2,232,73,156,144,
};

EmbeddedPython embedded_m5_internal_enum_OpClass(
    "m5/internal/enum_OpClass.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/enum_OpClass.py",
    "m5.internal.enum_OpClass",
    data_m5_internal_enum_OpClass,
    2169,
    6268);

} // anonymous namespace