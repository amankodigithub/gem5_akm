#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86LocalApic[] = {
    120,156,189,88,91,115,219,198,21,62,11,128,148,72,73,214,
    221,87,197,162,157,58,102,156,88,106,211,216,206,76,92,183,
    142,227,206,56,147,200,46,152,142,29,38,83,20,2,86,18,
    40,16,224,0,75,201,76,165,62,84,110,155,135,78,223,242,
    19,250,208,127,211,127,212,158,115,22,0,33,137,106,60,169,
    89,153,92,31,46,118,207,158,203,119,46,11,15,178,191,10,
    126,127,213,0,72,31,24,0,62,126,4,132,0,93,1,109,
    1,66,10,240,151,96,183,2,201,135,224,87,224,21,64,219,
    0,105,192,17,18,38,124,109,64,52,205,123,170,16,154,60,
    35,96,80,7,105,65,187,2,207,163,121,176,100,21,118,235,
    144,252,30,132,16,145,128,23,254,4,248,147,240,10,185,35,
    81,99,134,147,64,147,117,158,172,129,63,197,147,117,240,167,
    153,152,130,193,28,200,105,104,207,208,178,246,57,100,123,11,
    217,206,50,219,127,17,91,31,159,44,131,127,142,150,163,92,
    95,209,74,139,86,242,121,179,204,101,46,151,114,30,218,11,
    57,189,88,162,151,74,244,114,137,62,95,162,47,148,232,139,
    37,250,82,137,190,92,162,175,148,232,149,18,253,86,137,190,
    90,162,87,75,116,163,68,95,43,209,215,75,244,219,37,250,
    39,37,250,70,137,126,135,105,180,224,2,116,110,66,167,9,
    157,119,97,11,157,58,95,88,235,22,72,19,58,239,65,251,
    61,144,248,185,5,71,232,119,127,161,180,227,125,222,177,88,
    236,184,205,59,214,160,189,6,18,63,183,245,142,42,180,154,
    231,17,75,193,191,241,175,41,144,82,211,56,236,201,36,13,
    226,200,9,162,173,56,48,232,121,149,6,66,158,71,195,68,
    6,193,71,4,193,127,2,227,207,55,50,8,30,2,50,22,
    164,75,104,192,33,19,135,6,12,154,112,32,160,99,129,111,
    194,1,30,83,33,1,182,5,28,25,240,141,73,11,14,113,
    180,16,40,87,193,82,26,127,29,6,138,230,52,1,135,21,
    56,168,64,235,197,129,65,19,187,53,72,254,1,223,174,48,
    211,73,102,106,192,1,142,22,28,89,112,88,133,231,184,8,
    167,58,53,82,95,188,56,64,77,113,166,213,180,80,218,141,
    146,186,164,138,31,36,145,219,149,106,17,105,167,231,38,110,
    215,121,241,209,221,207,99,207,13,31,246,2,175,89,207,23,
    198,233,90,207,85,59,54,239,52,201,36,221,158,98,142,113,
    36,213,20,18,91,65,228,59,221,216,239,135,82,77,18,59,
    103,43,8,165,227,240,195,39,221,94,156,168,199,73,18,39,
    54,89,149,39,195,216,45,118,144,77,189,48,78,101,147,78,
    227,99,108,98,175,104,245,86,143,57,146,0,44,45,109,246,
    101,234,37,65,79,161,179,52,71,90,77,220,154,228,38,30,
    210,199,56,172,239,196,93,185,190,229,122,253,80,13,214,183,
    101,247,206,250,102,63,8,253,117,212,115,189,55,80,59,113,
    180,142,115,65,164,36,154,34,92,63,109,132,53,92,181,64,
    236,246,131,109,39,96,69,156,29,25,246,100,50,67,179,151,
    233,40,49,39,166,69,85,152,162,41,102,144,170,224,215,20,
    43,198,148,216,8,72,21,143,212,35,32,89,101,232,144,63,
    5,236,26,144,172,16,48,58,248,17,228,73,132,71,139,158,
    25,252,236,55,100,3,61,219,49,201,221,122,242,128,193,132,
    168,194,149,247,201,191,17,48,34,42,208,169,130,70,10,2,
    76,67,39,25,208,136,203,137,141,129,204,45,72,191,7,180,
    41,98,228,0,50,252,28,153,32,162,57,80,117,74,71,56,
    123,30,15,252,19,67,176,213,36,241,55,24,7,106,39,72,
    227,253,136,173,77,52,7,77,11,45,243,108,240,116,179,35,
    61,149,174,226,196,87,113,191,225,185,81,20,171,134,235,251,
    13,87,169,36,216,236,43,153,54,84,220,184,145,54,201,129,
    246,124,14,165,130,223,160,151,67,135,220,140,208,209,63,252,
    192,83,248,131,49,234,176,23,82,169,16,6,59,177,159,226,
    60,177,216,150,202,38,33,21,25,57,102,65,24,37,14,45,
    165,227,113,221,57,252,253,48,151,132,161,216,172,230,192,73,
    101,184,165,234,140,65,55,77,29,150,132,230,25,110,196,120,
    207,13,251,146,185,167,200,15,5,34,82,203,48,22,192,93,
    36,225,115,93,89,129,40,142,252,1,202,19,120,55,233,168,
    139,12,187,105,6,222,50,130,110,2,199,42,254,95,21,231,
    13,207,202,160,86,205,225,70,153,78,1,59,91,100,254,70,
    232,29,97,86,105,26,156,22,88,7,142,186,235,68,209,102,
    123,133,134,183,104,184,74,195,106,174,230,155,214,117,230,164,
    174,247,136,191,193,10,178,42,228,0,51,87,197,63,22,57,
    151,134,145,131,217,174,69,17,96,80,156,12,35,192,162,204,
    152,60,160,17,151,114,108,153,144,126,73,121,152,34,133,153,
    81,80,32,188,137,26,130,158,13,99,207,145,194,147,57,94,
    109,2,97,25,137,219,37,36,218,228,19,134,161,125,41,207,
    113,14,173,208,0,180,175,16,171,202,8,203,54,104,184,54,
    46,243,14,161,180,125,10,74,31,211,81,115,25,148,102,24,
    66,117,252,206,25,158,153,217,188,40,118,139,39,32,68,248,
    177,70,224,231,29,162,204,211,90,142,25,58,153,110,191,46,
    65,135,196,49,202,42,108,32,49,184,64,146,151,65,115,1,
    43,245,243,232,2,22,95,131,139,239,79,185,248,114,1,231,
    150,76,39,90,147,115,173,38,42,100,130,45,19,206,103,69,
    53,173,225,216,75,226,151,131,70,188,213,80,172,35,229,197,
    251,55,210,181,27,233,199,152,241,26,15,56,215,232,156,167,
    179,90,34,123,148,149,104,235,227,151,158,228,74,198,191,28,
    71,39,33,135,19,146,147,85,72,196,207,50,25,208,200,45,
    203,233,56,85,9,101,225,177,216,182,94,216,150,68,253,140,
    152,215,217,176,166,184,128,88,169,11,150,192,209,217,150,155,
    35,126,138,223,79,200,216,164,165,4,106,203,237,150,150,143,
    69,39,37,236,247,143,225,225,13,11,110,175,35,167,223,230,
    56,168,14,113,64,95,51,135,242,95,129,219,68,1,127,1,
    242,52,58,52,131,114,129,124,114,237,34,45,255,29,48,230,
    71,212,106,206,23,45,170,207,188,2,211,72,122,143,151,234,
    210,253,25,124,87,10,152,188,192,154,89,35,88,46,176,86,
    145,107,24,34,175,85,68,173,227,73,137,156,177,227,166,180,
    76,103,154,97,12,14,211,119,209,190,97,166,125,211,120,153,
    212,108,29,146,224,155,33,90,168,68,93,17,139,70,9,3,
    63,163,225,131,194,253,34,159,123,131,194,172,194,217,245,211,
    209,25,251,107,58,209,98,25,103,39,56,75,34,147,39,173,
    135,206,163,167,159,63,221,104,57,79,232,132,164,223,83,105,
    1,238,74,14,238,15,10,112,75,46,52,175,248,34,64,163,
    65,222,61,50,4,222,46,177,143,162,203,156,5,178,2,237,
    42,133,1,119,185,34,139,18,145,167,37,74,98,199,170,24,
    91,100,67,219,170,112,176,246,29,13,47,199,18,238,228,190,
    251,161,219,221,244,221,7,7,196,154,248,123,121,220,24,185,
    176,115,101,97,9,243,226,44,121,249,231,157,92,232,189,177,
    132,250,93,45,141,22,150,129,237,199,30,199,247,151,59,178,
    209,149,221,77,188,207,237,4,189,198,86,232,110,179,229,205,
    76,153,167,185,50,138,93,119,178,238,167,183,104,140,27,94,
    28,97,142,237,123,42,78,26,190,196,59,142,244,27,183,27,
    156,160,27,65,218,112,55,241,169,235,41,141,225,227,97,199,
    13,164,155,108,167,220,43,238,238,19,57,54,207,57,120,99,
    13,176,75,254,35,20,245,79,223,164,138,124,203,253,175,14,
    9,44,85,120,123,81,3,157,112,168,7,176,215,104,120,23,
    198,153,150,63,68,78,127,32,150,100,142,170,184,98,212,12,
    190,87,149,215,61,163,157,35,226,237,111,175,19,111,250,61,
    78,22,117,85,90,41,39,232,138,76,99,141,146,115,187,158,
    79,78,241,56,205,147,51,249,228,57,30,103,121,114,46,127,
    127,52,207,147,11,208,94,164,23,20,52,179,68,145,60,241,
    191,70,50,71,198,216,98,226,207,111,52,128,237,123,255,23,
    89,237,143,32,43,206,103,5,175,40,43,50,163,131,183,35,
    242,190,190,172,5,191,18,184,52,18,93,142,151,72,87,73,
    237,133,149,49,105,198,49,175,15,250,110,24,146,167,91,210,
    135,133,18,71,220,135,12,150,216,57,250,14,195,206,17,207,
    163,203,216,155,90,220,155,222,167,222,244,128,53,118,12,221,
    158,14,81,86,41,20,167,235,94,36,247,157,211,202,235,14,
    148,132,115,123,61,25,249,246,45,40,55,149,252,120,44,158,
    166,44,243,119,40,117,5,166,88,194,46,242,116,12,81,214,
    44,41,197,94,170,20,81,51,46,127,49,18,191,207,145,216,
    228,172,89,164,78,251,62,13,156,44,139,60,105,255,178,176,
    246,245,209,48,195,3,157,16,253,31,121,3,186,157,188,206,
    50,236,85,248,214,88,154,83,119,71,111,227,215,80,180,46,
    13,221,61,233,96,157,138,176,13,167,87,151,94,220,199,105,
    58,241,71,110,37,41,168,127,250,129,117,234,222,15,176,239,
    186,41,154,124,180,104,63,118,47,201,214,40,203,118,198,66,
    198,27,39,0,95,134,82,201,17,161,160,200,161,217,53,222,
    151,88,199,227,1,222,185,248,78,131,191,67,199,25,95,41,
    252,5,112,9,131,148,234,31,150,66,81,197,98,184,140,215,
    239,101,163,86,173,9,238,33,78,188,125,214,114,208,213,70,
    247,239,131,212,230,156,57,91,192,144,95,145,230,149,157,16,
    203,183,201,13,183,171,95,118,241,139,29,251,109,200,174,232,
    246,205,2,206,100,37,190,52,233,235,39,38,14,238,111,184,
    157,177,127,78,243,100,241,238,157,181,92,171,53,173,213,39,
    110,138,182,12,226,79,229,94,224,73,126,83,219,189,163,174,
    140,92,59,92,118,113,228,243,214,0,221,216,61,181,89,70,
    253,174,243,133,236,198,201,224,139,216,151,106,229,196,243,135,
    190,159,216,110,180,45,157,61,73,61,154,186,118,114,65,214,
    160,105,30,249,170,209,250,28,95,123,134,34,248,80,191,232,
    228,16,57,253,252,81,24,123,187,210,207,214,188,117,246,154,
    79,227,174,139,243,163,79,105,5,249,41,243,39,158,251,9,
    237,90,62,49,155,202,36,112,195,224,91,201,144,63,101,193,
    103,251,73,11,111,65,167,237,151,57,39,222,151,9,217,55,
    228,36,85,94,48,124,196,12,206,50,243,73,62,250,180,51,
    116,235,111,102,222,30,109,65,44,254,73,215,13,51,251,156,
    148,184,176,76,46,202,213,255,198,68,43,53,169,83,42,63,
    87,75,20,38,163,240,75,253,241,241,41,110,89,213,13,56,
    251,102,200,217,35,145,219,1,37,33,102,125,156,67,86,116,
    41,222,89,219,17,41,175,204,97,108,25,71,223,238,244,155,
    164,7,84,97,210,77,28,232,221,113,109,182,134,217,135,202,
    177,41,234,88,144,45,115,122,174,102,77,79,213,172,218,132,
    201,175,3,103,240,242,94,183,106,83,211,226,117,255,173,98,
    14,171,27,171,11,53,241,31,106,253,196,112,
};

EmbeddedPython embedded_m5_internal_param_X86LocalApic(
    "m5/internal/param_X86LocalApic.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_X86LocalApic.py",
    "m5.internal.param_X86LocalApic",
    data_m5_internal_param_X86LocalApic,
    2508,
    7607);

} // anonymous namespace
