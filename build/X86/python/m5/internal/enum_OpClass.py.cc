#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_OpClass[] = {
    120,156,205,88,91,119,19,215,21,222,115,209,213,18,54,24,
    108,46,6,20,18,136,74,169,77,8,1,26,92,130,185,53,
    166,193,144,17,137,205,129,50,17,154,145,61,70,154,81,103,
    142,77,212,101,191,212,89,105,255,64,127,66,31,250,87,250,
    212,127,212,238,189,71,163,57,26,201,107,245,193,89,171,94,
    214,241,153,111,239,217,103,95,190,179,207,145,91,48,248,201,
    225,231,126,13,32,90,49,1,28,252,213,160,3,208,213,64,
    104,160,185,26,56,51,240,62,7,225,77,112,114,240,19,128,
    208,193,213,225,0,39,6,188,214,193,175,240,59,121,232,24,
    140,104,208,47,131,107,130,200,193,186,127,28,76,55,15,239,
    203,16,254,0,154,166,249,26,108,56,5,112,138,240,19,90,
    199,73,137,13,22,129,192,50,131,37,112,166,24,44,131,83,
    225,201,20,244,103,192,173,128,168,146,154,56,134,102,175,162,
    217,105,54,251,111,50,235,160,228,56,56,199,72,29,253,122,
    69,154,38,105,242,122,211,108,5,77,24,176,125,156,198,3,
    10,11,31,78,128,56,193,232,172,138,158,4,113,146,209,83,
    42,58,7,98,142,209,121,21,61,13,226,52,163,103,84,244,
    44,136,179,140,158,83,209,5,16,11,140,158,87,209,11,32,
    46,48,122,81,69,107,32,106,140,126,164,162,151,64,92,98,
    244,99,21,253,4,196,39,140,94,86,209,43,32,174,48,250,
    169,138,214,65,212,25,253,149,138,94,5,113,149,209,95,171,
    232,53,16,215,24,253,141,138,46,130,88,100,116,73,69,175,
    131,184,206,232,103,42,122,3,196,13,70,63,87,209,155,32,
    110,50,250,133,138,222,2,113,139,209,219,42,122,7,196,29,
    70,127,171,162,95,130,248,146,209,187,42,186,12,98,153,209,
    223,169,232,61,16,247,24,253,74,69,239,131,184,207,232,138,
    138,62,0,241,128,209,135,42,250,8,196,35,70,31,171,232,
    19,16,79,24,253,189,138,126,13,226,107,70,87,85,244,41,
    136,167,140,254,65,69,191,1,241,13,163,207,84,116,13,196,
    26,163,207,85,244,5,136,23,140,126,171,162,22,8,139,209,
    134,138,190,4,241,146,209,239,84,244,123,16,223,51,186,174,
    162,27,32,54,24,125,165,162,2,132,96,244,181,138,190,1,
    241,134,209,63,170,232,91,16,111,25,181,65,216,212,5,26,
    245,19,216,78,188,255,224,79,93,195,153,172,224,176,235,134,
    145,23,248,182,231,183,3,79,39,121,158,6,106,62,45,26,
    10,131,46,244,144,186,208,63,129,91,144,163,15,186,208,62,
    128,70,207,0,29,29,246,121,178,175,67,191,14,123,26,108,
    155,224,24,176,135,203,228,200,165,77,13,14,116,120,99,144,
    194,62,142,38,246,138,11,96,202,184,5,109,115,175,136,45,
    21,96,63,7,123,57,104,108,236,233,4,188,47,65,248,15,
    248,243,2,27,45,178,81,29,246,112,52,225,192,132,253,60,
    172,163,18,66,219,37,234,48,218,198,30,70,138,72,163,142,
    45,19,214,148,112,41,20,199,11,253,102,215,149,85,156,219,
    174,191,211,181,159,247,30,118,154,81,84,47,39,42,65,180,
    216,107,202,45,139,223,49,40,25,221,158,100,91,129,239,202,
    41,156,180,61,223,177,187,129,179,211,113,101,145,12,217,109,
    175,227,218,54,11,87,187,189,32,148,143,195,48,8,45,202,
    39,131,157,160,57,124,131,178,217,234,4,145,91,167,213,120,
    25,139,204,75,210,110,247,216,34,57,192,126,210,203,142,27,
    181,66,175,39,177,76,177,69,210,38,107,117,42,16,15,209,
    87,56,44,109,5,93,119,169,221,108,237,116,100,127,105,211,
    237,126,177,244,110,199,235,56,75,27,119,110,45,245,250,114,
    43,240,151,16,243,124,233,98,18,58,75,106,248,139,40,39,
    118,68,31,188,77,219,227,16,236,45,183,211,115,67,202,84,
    116,150,22,209,102,180,138,150,215,12,173,174,85,113,150,195,
    143,161,45,232,83,218,154,71,65,180,40,48,34,143,169,210,
    133,106,168,193,123,29,194,5,34,195,54,254,106,84,61,164,
    68,131,100,58,203,190,165,232,99,116,219,160,18,199,224,30,
    19,8,153,132,154,203,84,83,31,152,5,57,216,206,67,204,
    14,36,85,76,151,176,79,35,170,147,25,29,141,155,16,253,
    29,48,155,200,139,61,24,112,230,192,0,205,159,1,89,166,
    83,8,209,57,92,240,47,76,187,70,157,220,95,99,6,200,
    45,47,10,62,248,156,103,154,243,70,105,96,102,94,244,159,
    191,219,118,91,50,186,136,192,171,96,167,214,106,250,126,32,
    107,77,199,169,53,165,12,189,119,59,210,141,106,50,168,93,
    142,234,84,58,235,120,66,162,161,189,126,47,33,13,21,24,
    73,19,63,56,94,75,226,195,44,63,112,21,34,87,34,1,
    182,2,39,66,156,76,108,186,210,34,39,37,37,57,96,71,
    152,31,54,169,210,242,168,119,12,159,87,18,79,152,132,245,
    124,66,153,200,237,180,101,153,217,135,21,183,217,19,194,153,
    104,100,120,183,217,217,113,217,122,132,246,208,33,154,198,62,
    28,49,213,78,147,219,73,148,236,186,31,248,78,31,61,241,
    90,159,210,34,167,153,112,21,166,220,41,164,91,1,199,60,
    254,205,107,115,122,203,28,144,44,159,16,109,142,66,4,46,
    179,54,168,52,146,238,0,123,72,93,231,38,192,222,243,78,
    187,68,51,122,217,90,160,225,60,13,23,104,184,152,4,120,
    116,81,86,179,81,222,38,203,58,135,198,65,80,210,141,36,
    8,103,100,183,156,73,119,11,118,181,6,177,94,167,189,145,
    178,222,164,14,24,222,163,17,85,121,63,25,16,189,164,126,
    75,187,131,141,209,70,64,74,211,44,37,58,167,196,154,161,
    80,139,9,71,45,34,158,202,190,77,133,125,22,85,131,169,
    103,157,73,58,154,77,26,49,233,172,115,100,42,55,33,167,
    53,26,62,58,250,196,166,244,217,28,163,207,93,90,100,102,
    64,159,42,211,166,140,159,25,189,101,12,178,61,60,206,102,
    51,180,33,206,152,19,56,115,133,102,198,120,124,191,24,93,
    6,81,61,81,232,66,142,232,170,243,107,56,233,207,147,207,
    42,81,230,241,20,94,247,231,241,96,213,249,96,189,206,7,
    43,31,206,124,227,142,27,170,193,61,53,158,228,40,248,182,
    1,115,131,3,51,42,225,216,11,131,31,251,181,160,93,147,
    28,29,245,191,229,203,209,226,229,232,46,118,182,218,61,238,
    41,113,111,139,187,87,232,246,168,251,208,171,143,127,108,185,
    124,86,241,147,109,199,205,198,230,198,99,15,206,64,228,204,
    41,74,157,158,228,148,219,110,36,67,234,182,71,156,213,242,
    48,171,228,228,83,50,91,230,148,26,218,60,242,163,172,241,
    218,118,220,79,249,202,195,82,252,60,160,52,83,124,46,208,
    247,45,171,17,123,198,78,147,251,214,181,17,14,28,153,203,
    214,18,218,248,46,169,125,62,173,61,125,140,132,184,127,197,
    203,130,70,229,255,25,168,186,88,196,1,113,135,60,167,114,
    206,146,250,91,96,134,79,56,135,185,47,52,232,236,101,13,
    108,23,209,109,86,141,143,229,167,240,55,101,123,36,135,167,
    49,184,216,169,135,167,57,236,41,76,139,255,233,128,52,71,
    155,15,149,97,171,25,145,90,220,81,210,29,151,54,232,225,
    165,12,59,234,209,113,164,24,27,180,105,237,55,41,67,232,
    248,57,167,205,234,74,221,63,163,225,198,176,228,90,130,29,
    137,27,23,225,240,83,209,142,187,241,107,90,203,100,239,166,
    11,156,161,204,165,61,246,235,135,97,154,250,145,69,136,53,
    77,131,158,236,88,220,223,120,181,147,125,190,47,196,75,14,
    33,218,182,107,120,37,136,175,176,116,94,90,31,195,160,11,
    90,116,56,91,139,48,56,9,152,169,241,62,247,221,15,188,
    211,185,116,214,231,132,207,147,161,32,9,144,87,105,5,62,
    94,45,124,201,187,50,149,241,193,179,234,203,149,206,206,168,
    90,126,136,203,147,241,244,25,230,118,84,167,144,10,18,59,
    143,188,221,137,118,16,151,180,115,159,224,125,92,174,56,206,
    168,82,81,145,164,106,15,187,189,67,212,80,162,168,237,202,
    195,212,118,165,156,75,30,198,221,47,169,34,121,70,125,90,
    105,181,70,117,43,25,105,186,252,88,196,69,69,162,44,239,
    69,173,195,150,71,81,170,216,248,83,120,152,159,36,226,106,
    52,188,174,51,150,196,66,42,96,2,12,230,99,161,148,71,
    100,169,189,44,3,10,169,96,168,52,86,146,66,42,72,149,
    178,5,41,164,2,206,27,205,199,243,81,84,36,169,218,88,
    213,138,138,132,175,35,201,195,88,160,83,163,66,78,49,61,
    55,182,188,246,132,20,15,69,76,133,225,211,68,42,168,210,
    161,175,227,149,43,42,146,161,213,201,91,160,146,145,102,212,
    179,197,169,100,164,163,234,99,101,170,100,164,25,245,108,193,
    42,25,233,168,250,24,227,43,25,169,60,171,2,227,149,174,
    102,197,153,23,198,106,94,205,138,229,249,44,50,86,166,153,
    9,26,163,235,140,215,171,154,21,51,167,159,185,93,203,109,
    78,216,109,3,1,19,0,231,235,161,39,221,113,2,36,18,
    165,195,76,50,88,201,72,217,215,4,152,96,186,154,21,51,
    191,87,123,33,198,233,102,155,126,73,21,177,35,171,40,121,
    17,186,109,87,182,182,198,29,81,165,188,201,214,210,243,114,
    124,147,41,66,254,90,219,218,109,134,191,192,237,140,179,185,
    28,223,99,239,209,186,209,191,112,160,239,169,165,233,146,150,
    215,233,159,34,6,94,43,171,154,105,84,102,74,102,101,170,
    100,150,10,6,127,13,169,226,101,162,108,150,42,85,173,164,
    255,191,126,254,11,38,54,155,140,
};

EmbeddedPython embedded_m5_internal_enum_OpClass(
    "m5/internal/enum_OpClass.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/enum_OpClass.py",
    "m5.internal.enum_OpClass",
    data_m5_internal_enum_OpClass,
    2169,
    6268);

} // anonymous namespace