#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86E820Table[] = {
    120,156,189,88,253,114,219,198,17,223,3,64,74,164,36,139,
    178,44,201,182,100,137,77,235,132,241,180,98,234,198,177,103,
    172,184,117,50,234,76,50,29,57,5,157,177,163,100,130,66,
    192,145,4,5,2,28,224,100,155,25,169,127,84,158,182,47,
    208,71,232,31,125,155,190,81,187,187,7,128,208,135,167,153,
    137,88,138,60,29,14,119,123,251,241,219,143,59,15,178,79,
    5,127,191,107,2,164,127,22,0,62,126,5,132,0,67,1,
    251,2,132,20,224,223,128,195,10,36,31,131,95,129,183,0,
    251,6,72,3,78,177,99,194,183,6,68,243,188,166,10,161,
    201,35,2,198,117,144,22,236,87,224,69,180,4,150,172,194,
    97,29,146,63,129,16,34,18,240,210,159,1,127,22,222,34,
    117,236,212,152,224,44,208,96,157,7,107,224,207,241,96,29,
    252,121,238,204,193,184,1,114,30,246,23,104,218,254,53,36,
    123,15,201,46,50,217,127,19,89,31,223,172,128,127,141,166,
    35,95,223,208,76,139,102,242,126,139,76,165,145,115,185,4,
    251,215,243,254,114,169,127,163,212,95,41,245,87,185,143,28,
    92,135,193,26,12,110,194,224,22,116,81,41,75,197,110,183,
    65,154,48,88,135,253,117,144,248,189,13,167,168,55,255,122,
    105,197,6,175,88,46,86,220,225,21,155,176,191,9,18,191,
    119,244,138,42,116,90,171,104,139,224,63,248,105,161,45,64,
    205,99,243,74,38,105,16,71,78,16,117,227,192,160,247,85,
    106,200,114,30,53,51,153,9,63,39,19,254,11,216,126,190,
    145,153,240,4,144,176,32,89,66,3,78,184,115,98,192,184,
    5,199,2,6,22,248,38,28,227,54,21,98,160,39,224,212,
    128,239,76,154,112,130,173,133,138,222,4,75,105,251,13,88,
    209,154,210,12,156,84,224,184,2,157,151,199,6,13,28,214,
    32,249,39,252,176,193,68,103,153,168,1,199,216,90,112,106,
    193,73,21,94,224,36,28,26,212,72,124,241,242,24,37,197,
    145,78,203,66,110,247,74,226,146,40,126,144,68,238,80,170,
    101,236,59,35,55,113,135,206,203,71,159,236,62,186,255,209,
    115,247,32,148,173,122,62,49,78,183,71,174,234,219,188,210,
    36,149,12,71,138,41,198,145,84,115,216,233,6,145,239,12,
    99,255,40,148,106,150,200,57,221,32,148,142,195,47,191,24,
    142,226,68,237,38,73,156,216,164,85,30,12,99,183,88,65,
    58,245,194,56,149,45,218,141,183,177,137,188,162,217,221,17,
    83,36,6,152,91,90,236,203,212,75,130,145,66,99,105,138,
    52,155,168,181,200,76,220,164,187,216,180,251,241,80,182,187,
    174,119,20,170,113,187,39,135,15,218,7,71,65,232,183,81,
    206,246,104,172,250,113,212,198,177,32,82,18,85,17,182,47,
    42,97,27,103,93,39,114,175,131,158,19,176,32,78,95,134,
    35,153,44,208,232,109,218,74,52,196,188,168,10,83,180,196,
    2,246,42,248,51,197,134,49,39,246,2,18,197,35,241,8,
    72,86,25,58,100,79,1,135,6,36,27,4,140,1,126,5,
    89,18,225,209,161,119,6,191,251,35,233,64,143,14,76,50,
    183,30,60,102,48,33,170,112,230,14,217,55,2,70,68,5,
    6,85,208,72,65,128,105,232,36,99,106,113,58,145,49,144,
    184,5,233,63,0,117,138,24,57,134,12,63,167,38,136,168,
    1,170,78,238,140,163,171,184,225,95,24,130,157,22,177,191,
    199,56,80,253,32,141,95,71,172,109,234,179,211,116,80,51,
    95,141,159,29,12,164,167,210,45,28,248,38,62,106,122,110,
    20,197,170,233,250,126,211,85,42,9,14,142,148,76,155,42,
    110,222,77,91,100,64,123,41,135,82,65,111,60,202,161,67,
    102,70,232,232,7,63,240,20,62,48,70,29,182,66,42,21,
    194,160,31,251,41,142,19,137,158,84,54,49,169,72,201,49,
    51,194,40,113,104,42,109,143,243,174,225,243,211,156,19,134,
    98,171,154,3,39,149,97,87,213,25,131,110,154,58,204,9,
    141,51,220,136,240,43,55,60,146,76,61,69,122,200,16,117,
    53,15,83,1,220,77,98,62,151,149,5,136,226,200,31,35,
    63,129,247,1,109,117,147,97,55,207,192,91,65,208,205,96,
    91,197,255,85,177,106,120,86,6,181,106,14,55,138,116,10,
    216,216,34,179,55,66,239,20,163,74,203,224,176,192,50,176,
    215,189,71,61,90,108,111,80,115,135,154,77,106,182,114,49,
    175,90,214,133,243,178,62,36,250,6,11,200,162,144,1,204,
    92,20,255,140,231,220,154,120,14,70,187,14,121,128,65,126,
    50,241,0,139,34,99,242,132,90,156,202,190,101,66,250,156,
    226,48,121,10,19,35,167,64,120,83,111,2,122,86,140,221,
    32,129,103,115,188,218,4,194,50,18,123,37,36,218,100,19,
    134,161,125,43,143,113,14,205,208,0,180,215,137,84,229,18,
    205,54,169,249,217,180,212,59,129,82,239,2,148,30,211,86,
    141,12,74,11,12,161,58,254,26,134,103,102,58,47,146,221,
    242,57,8,17,126,172,75,240,243,62,245,204,139,82,78,25,
    58,153,108,191,47,65,135,216,49,202,34,236,97,103,188,70,
    156,151,65,179,134,153,250,69,180,134,201,215,224,228,251,17,
    39,95,78,224,92,210,232,64,107,114,172,213,157,10,169,160,
    107,194,106,150,84,211,26,182,163,36,126,51,110,198,221,166,
    98,25,41,46,238,220,77,183,239,166,143,49,226,53,159,112,
    172,209,49,79,71,181,68,142,40,42,209,210,221,55,158,228,
    76,198,79,142,163,131,144,195,1,201,201,50,36,226,103,133,
    20,104,228,154,229,112,156,170,132,162,240,84,116,91,47,116,
    75,172,126,73,196,235,172,88,83,172,33,86,234,130,57,112,
    116,180,229,226,136,223,226,239,51,82,54,73,41,129,202,90,
    187,163,249,99,214,73,8,251,151,103,240,112,197,140,219,109,
    164,244,117,142,131,234,4,7,244,51,115,40,255,13,184,76,
    20,240,87,32,75,163,65,51,40,23,200,39,211,46,211,244,
    239,129,49,127,73,174,230,120,209,161,252,204,51,48,140,164,
    15,121,170,78,221,95,194,223,75,14,147,39,88,51,43,4,
    203,9,214,42,98,13,67,228,71,37,81,235,108,80,34,99,
    244,221,148,166,233,72,51,241,193,73,248,46,202,55,140,180,
    87,141,151,89,77,214,33,14,190,155,160,133,82,212,186,88,
    54,74,24,248,53,53,247,11,243,139,124,236,10,153,217,130,
    119,231,79,71,71,236,111,105,71,139,121,92,156,81,107,248,
    31,137,124,209,121,234,124,254,236,15,207,246,58,78,65,175,
    192,118,37,199,246,253,2,219,146,243,204,91,62,7,80,107,
    144,113,79,13,129,135,51,44,163,232,44,100,129,172,192,126,
    149,188,128,139,92,145,57,137,200,163,18,197,176,51,73,140,
    21,178,167,85,85,216,87,155,142,154,55,83,241,118,178,222,
    78,232,14,15,124,247,73,72,164,137,190,151,187,141,145,51,
    219,40,51,75,144,23,239,226,151,31,31,228,76,191,154,138,
    167,127,130,148,10,102,25,215,126,236,177,123,63,239,203,230,
    80,14,15,240,56,215,15,70,205,110,232,246,88,243,102,38,
    204,179,92,24,197,166,59,159,246,211,123,212,198,77,47,142,
    48,196,30,121,42,78,154,190,196,35,142,244,155,191,106,114,
    124,110,6,105,211,61,192,183,174,167,52,132,207,122,29,215,
    143,110,210,75,185,84,60,124,77,221,169,89,206,193,3,107,
    128,69,114,4,69,250,211,7,169,34,220,114,249,171,61,2,
    51,21,30,94,212,88,199,27,42,1,236,109,106,62,132,105,
    70,229,143,73,11,68,146,212,81,21,235,70,205,224,99,85,
    121,222,87,180,50,189,232,111,7,63,198,223,244,53,72,230,
    117,85,154,41,103,232,132,76,109,141,98,51,221,114,84,178,
    91,14,26,212,183,28,85,30,185,70,254,57,243,83,253,147,
    241,62,53,164,31,93,169,91,218,15,255,47,188,218,143,32,
    203,184,239,114,73,81,22,100,65,187,228,64,228,197,122,89,
    10,62,231,223,186,20,51,142,151,72,87,73,109,133,141,41,
    73,198,158,172,55,122,51,113,180,139,117,230,211,66,136,83,
    46,46,198,55,216,56,250,96,194,198,17,47,162,219,88,112,
    90,92,112,238,80,193,121,204,18,59,134,174,57,39,40,171,
    20,130,211,25,46,146,175,157,139,194,235,178,146,152,115,71,
    35,25,249,246,61,40,87,138,252,122,42,150,126,172,97,55,
    73,245,166,184,129,165,225,69,31,162,88,88,18,138,173,84,
    41,188,102,90,246,98,36,158,230,72,108,45,66,57,32,218,
    59,212,112,8,44,162,159,253,219,66,219,155,151,195,76,70,
    88,133,201,148,142,27,255,107,10,22,30,92,148,101,207,172,
    44,70,175,47,67,169,228,37,118,84,196,77,118,176,244,37,
    166,150,120,140,167,0,174,178,241,57,116,156,233,69,231,79,
    53,100,33,165,52,129,209,89,84,49,62,175,24,181,106,77,
    112,74,59,119,23,170,121,160,34,75,87,147,227,212,102,103,
    95,44,244,199,23,118,121,162,33,85,243,217,102,207,29,234,
    171,23,190,102,176,127,14,217,129,209,254,160,176,3,105,136,
    75,120,125,24,66,196,115,186,229,236,106,255,134,198,105,219,
    225,131,237,92,162,237,76,150,93,212,243,216,121,37,41,89,
    243,181,225,240,1,155,168,60,245,140,240,188,64,173,95,58,
    165,19,12,245,125,150,90,58,247,222,79,92,236,175,156,27,
    77,101,18,184,97,240,131,190,192,202,135,21,233,227,60,65,
    18,171,120,226,180,168,126,1,239,44,62,25,13,137,236,5,
    41,146,100,122,197,218,204,249,63,205,117,114,9,22,203,139,
    167,6,30,93,59,234,99,234,19,186,244,72,63,195,134,46,
    166,106,139,53,4,18,133,5,19,207,139,11,194,50,231,27,
    53,107,126,174,102,213,102,76,190,107,88,192,147,65,221,170,
    205,205,139,252,111,11,33,87,55,182,26,53,241,95,121,95,
    76,42,
};

EmbeddedPython embedded_m5_internal_param_X86E820Table(
    "m5/internal/param_X86E820Table.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_X86E820Table.py",
    "m5.internal.param_X86E820Table",
    data_m5_internal_param_X86E820Table,
    2226,
    6452);

} // anonymous namespace