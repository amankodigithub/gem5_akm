#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BiModeBP[] = {
    120,156,181,88,235,114,219,198,21,62,11,128,148,72,81,22,
    117,247,69,142,216,118,156,176,158,86,106,211,56,206,76,84,
    55,86,38,157,105,102,170,184,96,50,118,152,76,81,8,88,
    146,160,72,128,3,172,44,51,35,245,71,229,94,94,160,15,
    208,31,253,209,183,233,27,53,231,156,5,64,80,162,39,158,
    169,104,145,235,229,193,226,236,185,124,231,178,235,65,250,175,
    132,223,79,26,0,73,44,0,124,252,8,24,0,12,5,180,
    5,8,41,192,223,128,147,18,196,31,128,95,130,215,0,109,
    3,164,1,151,56,49,225,27,3,194,26,191,83,134,129,201,
    20,1,227,42,72,11,218,37,120,30,174,130,37,203,112,82,
    133,248,79,32,132,8,5,188,240,23,192,95,132,215,200,29,
    39,21,102,184,8,68,172,50,177,2,254,18,19,171,224,215,
    120,178,4,227,58,200,26,180,151,105,89,251,22,178,125,136,
    108,87,152,237,127,137,173,143,79,54,193,191,69,203,81,174,
    175,105,165,69,43,121,191,21,230,82,207,164,92,133,246,90,
    54,95,47,204,55,10,243,77,158,227,174,107,208,223,130,254,
    54,244,111,67,7,13,177,154,239,112,7,164,9,253,187,208,
    190,11,18,63,119,224,18,109,229,175,21,222,184,199,111,172,
    231,111,236,240,27,247,161,125,31,36,126,118,244,27,101,104,
    53,183,208,254,193,255,240,95,19,237,15,170,134,195,75,25,
    39,65,20,58,65,216,137,2,131,158,151,105,32,111,121,52,
    44,164,110,251,148,220,246,31,96,159,249,70,234,182,11,64,
    198,130,116,25,24,112,193,147,11,3,198,77,56,23,208,183,
    192,55,225,28,183,41,145,0,93,1,151,6,124,107,210,130,
    11,28,45,52,238,59,96,41,237,179,62,27,87,115,90,128,
    139,18,156,151,160,245,226,220,32,194,73,5,226,127,195,119,
    59,204,116,145,153,26,112,142,163,5,151,22,92,148,225,57,
    46,66,82,191,66,234,139,23,231,168,41,82,90,77,11,165,
    61,42,168,75,170,248,65,28,186,67,169,86,112,238,140,220,
    216,29,58,135,193,239,35,95,30,62,107,86,179,69,81,178,
    55,114,85,207,230,183,76,50,199,112,164,152,91,20,74,181,
    132,147,78,16,250,206,48,242,79,7,82,45,18,43,167,19,
    12,164,227,240,195,223,13,71,81,172,62,139,227,40,182,201,
    162,76,28,68,110,254,6,217,211,27,68,137,108,210,110,188,
    141,77,236,21,173,238,140,152,35,9,192,146,210,203,190,76,
    188,56,24,41,116,148,230,72,171,137,91,147,92,196,67,242,
    20,135,253,94,52,148,251,29,215,59,29,168,241,126,87,14,
    31,237,31,159,6,3,127,255,197,71,31,238,143,198,170,23,
    133,251,72,11,66,37,209,12,131,253,105,3,236,225,138,53,
    98,117,22,116,157,128,149,112,122,114,48,146,241,50,81,239,
    210,54,162,46,106,162,44,76,209,20,203,56,43,225,215,20,
    59,198,146,56,10,72,13,143,84,35,0,89,69,200,144,31,
    5,156,24,16,239,16,32,250,248,17,228,65,132,69,139,158,
    25,252,236,15,164,191,166,246,77,114,179,38,158,51,136,16,
    77,184,242,128,252,26,2,35,161,4,253,50,104,132,32,176,
    52,100,226,49,141,184,156,216,24,200,220,130,228,159,128,246,
    68,108,156,67,138,155,75,19,68,88,7,85,165,208,69,234,
    22,110,248,23,134,94,171,73,226,31,49,6,84,47,72,162,
    179,144,45,77,115,14,150,22,90,230,217,248,139,227,190,244,
    84,178,139,132,175,163,211,134,231,134,97,164,26,174,239,55,
    92,165,226,224,248,84,201,164,161,162,198,131,164,73,206,179,
    87,51,24,229,252,198,163,12,54,228,98,132,141,254,225,7,
    158,194,31,235,252,131,189,144,72,133,16,232,69,126,130,116,
    98,209,149,202,38,33,21,25,57,98,65,24,33,14,45,165,
    237,113,221,45,252,253,52,147,132,97,216,44,103,160,73,228,
    160,163,170,140,63,55,73,28,150,132,232,12,53,98,252,210,
    29,156,74,230,158,32,63,20,136,166,90,134,27,7,219,109,
    18,60,211,147,133,15,163,208,31,163,44,129,247,30,109,115,
    155,33,87,99,208,109,34,224,22,112,44,227,255,101,177,101,
    120,86,10,179,114,6,53,202,110,10,216,209,34,245,53,194,
    238,18,51,73,211,224,84,192,242,115,180,253,152,102,244,178,
    189,67,195,125,26,222,161,97,55,83,241,38,245,92,190,170,
    231,99,226,109,176,114,172,6,25,222,204,212,240,167,34,230,
    206,36,98,48,187,181,8,249,6,197,199,4,249,22,101,194,
    248,9,141,184,148,99,202,132,228,75,202,187,20,33,204,140,
    130,1,97,77,179,9,216,217,40,118,157,148,93,204,112,106,
    19,248,138,8,236,22,16,104,147,63,24,126,246,157,44,175,
    57,180,66,3,207,190,71,172,74,51,172,218,160,225,71,243,
    48,237,4,66,221,107,16,250,152,182,169,167,16,90,102,232,
    84,241,91,55,60,51,181,119,94,216,214,175,64,135,112,99,
    205,192,205,187,52,51,175,107,56,71,200,164,122,253,182,0,
    25,18,197,40,138,127,132,147,241,54,73,93,4,203,54,86,
    228,231,225,54,22,89,131,139,236,47,184,200,114,161,230,118,
    69,39,86,147,115,171,158,148,72,253,142,9,91,105,241,76,
    42,56,142,226,232,213,184,17,117,26,138,245,163,60,120,240,
    32,217,123,144,124,140,25,174,241,132,115,139,206,113,58,139,
    197,114,68,89,136,94,253,236,149,39,185,106,241,47,199,209,
    73,199,225,4,228,164,213,16,113,179,73,198,51,50,171,114,
    250,77,84,76,89,247,198,237,90,205,237,74,98,126,78,140,
    171,108,84,83,108,35,70,170,130,119,119,116,102,229,6,136,
    159,226,247,144,12,77,26,74,160,118,213,110,105,217,88,108,
    82,192,254,217,20,14,110,80,104,123,31,185,124,149,249,191,
    60,241,63,125,205,12,190,127,7,110,3,5,252,13,200,195,
    232,200,20,190,57,218,201,165,235,180,252,143,192,56,159,81,
    147,57,63,180,168,14,243,10,76,27,201,99,94,170,75,244,
    231,240,143,66,144,100,133,212,76,27,189,98,33,181,242,220,
    194,208,120,171,98,105,77,39,33,114,68,207,77,104,153,206,
    44,147,184,155,164,234,188,69,195,204,122,147,56,89,212,44,
    29,218,253,219,9,74,168,20,221,19,235,70,193,247,191,164,
    225,253,220,237,34,163,221,144,32,187,240,230,26,233,232,204,
    252,13,237,102,177,124,43,11,44,121,198,32,7,112,41,3,
    240,251,57,128,37,23,144,215,220,208,211,104,144,23,47,13,
    129,39,43,236,139,232,32,99,129,44,65,187,76,80,231,142,
    85,164,145,32,178,180,67,73,106,170,58,177,246,71,218,46,
    185,35,181,143,104,120,117,227,225,76,202,30,12,220,225,177,
    239,62,57,33,182,196,219,203,98,195,200,4,173,23,5,37,
    92,139,55,201,202,63,31,101,2,191,188,241,80,254,16,185,
    228,130,50,112,253,200,227,248,253,178,39,27,67,57,60,198,
    243,88,47,24,53,58,3,183,203,22,55,83,69,190,200,20,
    81,236,178,171,117,60,121,72,99,212,240,162,16,115,231,169,
    167,162,184,225,75,60,167,72,191,241,243,6,39,222,70,144,
    52,220,99,124,234,122,74,227,116,58,172,184,17,116,227,110,
    194,61,223,201,25,77,231,226,49,7,79,155,1,118,186,67,
    200,107,154,62,9,229,121,148,123,88,13,123,44,63,120,2,
    81,99,157,76,168,166,219,123,52,252,20,230,149,110,63,0,
    134,10,36,100,134,178,184,103,84,12,150,39,91,243,140,222,
    72,174,199,214,191,222,38,182,244,125,69,26,97,101,90,41,
    23,232,88,75,99,133,18,110,187,154,17,151,120,172,49,113,
    57,35,222,226,113,133,137,245,140,184,202,227,26,19,215,179,
    203,147,13,38,110,66,123,139,110,26,136,178,77,161,188,240,
    255,134,50,135,199,92,2,67,221,104,4,219,143,231,46,167,
    253,17,164,213,247,77,209,43,138,74,44,235,119,251,34,107,
    212,139,26,240,185,126,243,26,204,28,47,150,174,146,218,242,
    59,115,208,136,131,93,111,114,54,137,199,235,61,230,211,92,
    248,75,110,48,198,27,236,16,125,24,97,135,136,231,225,93,
    108,54,45,110,54,15,168,217,60,103,77,29,67,247,155,19,
    84,149,114,133,233,190,33,148,103,206,180,210,186,157,36,193,
    220,209,72,134,190,253,16,138,29,34,63,190,113,207,82,106,
    249,51,20,74,189,41,54,176,37,188,30,43,148,38,11,202,
    176,103,74,121,116,204,195,71,140,186,191,102,168,107,242,49,
    44,207,149,246,1,13,156,29,243,196,104,255,38,183,112,99,
    6,164,122,81,224,201,79,85,124,24,168,132,14,24,63,188,
    8,155,15,62,147,76,81,213,187,111,122,237,89,44,233,50,
    35,138,91,193,119,146,119,120,203,165,180,207,122,190,207,212,
    179,89,66,118,7,209,177,59,248,1,77,166,23,101,154,76,
    81,103,137,167,23,188,149,38,179,150,102,154,204,120,198,80,
    227,88,247,229,64,42,121,5,253,138,124,153,30,191,125,137,
    245,58,26,227,153,137,207,37,248,123,224,56,243,41,123,191,
    78,241,149,108,0,151,61,81,198,194,183,41,248,207,168,148,
    43,130,59,133,43,119,196,90,10,234,199,117,23,62,78,108,
    78,140,43,57,254,248,50,51,171,225,4,85,62,11,30,185,
    67,125,53,197,87,49,246,79,32,61,92,219,239,229,56,166,
    43,6,62,250,232,195,35,102,9,238,98,184,105,177,127,69,
    116,186,81,24,62,218,203,116,218,75,117,138,221,208,235,229,
    6,231,75,213,225,35,117,111,230,226,86,48,212,215,121,106,
    245,202,115,63,118,113,190,121,133,154,200,56,112,7,132,70,
    210,43,35,243,178,217,187,147,236,135,244,243,43,108,121,184,
    181,152,74,242,236,229,88,118,131,4,57,233,39,211,12,210,
    132,72,206,97,21,174,32,175,248,250,92,96,161,91,108,125,
    84,127,66,23,62,201,39,56,208,133,92,101,165,130,16,161,
    52,105,226,185,121,89,88,102,173,94,177,106,75,21,171,178,
    96,242,93,203,50,158,148,170,86,101,169,38,244,223,46,130,
    168,106,236,174,87,196,247,243,193,165,55,
};

EmbeddedPython embedded_m5_internal_param_BiModeBP(
    "m5/internal/param_BiModeBP.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_BiModeBP.py",
    "m5.internal.param_BiModeBP",
    data_m5_internal_param_BiModeBP,
    2283,
    6674);

} // anonymous namespace