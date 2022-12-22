#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_System[] = {
    120,156,181,90,123,83,28,199,17,239,221,123,192,29,32,64,
    8,208,3,137,179,158,39,217,6,191,244,72,44,203,146,45,
    59,177,18,33,121,79,142,100,236,202,102,217,29,96,225,118,
    247,106,119,16,58,7,42,85,70,229,184,42,127,231,35,164,
    42,249,43,95,37,223,40,233,238,185,217,219,123,33,156,58,
    4,215,154,235,233,233,233,158,254,77,247,204,46,46,180,254,
    21,240,115,191,2,144,156,53,1,60,252,53,160,14,16,24,
    176,106,128,33,12,240,78,193,118,1,226,143,192,43,192,107,
    128,85,19,132,9,7,216,200,193,119,38,132,227,60,166,8,
    245,28,115,12,104,150,65,228,97,181,0,207,195,105,200,139,
    34,108,151,33,254,19,24,134,17,26,240,194,27,1,111,20,
    94,163,118,108,148,88,225,40,16,179,204,204,18,120,99,204,
    44,131,55,206,141,49,104,78,129,24,135,213,9,18,91,61,
    129,106,111,160,218,73,86,251,31,82,235,97,207,44,120,39,
    72,28,237,250,150,36,243,36,201,243,77,178,150,41,109,229,
    52,172,158,212,237,153,76,251,84,166,61,155,105,207,101,218,
    243,153,246,233,76,251,76,166,125,54,211,62,151,105,47,100,
    218,231,51,237,11,153,246,98,166,93,201,180,223,202,180,47,
    102,218,151,184,141,171,115,18,182,46,195,214,21,216,186,10,
    235,24,176,233,116,37,174,129,200,193,86,21,86,171,32,240,
    247,26,28,96,76,189,147,153,17,215,121,196,76,58,226,6,
    143,120,27,86,223,6,129,191,55,212,136,34,212,170,115,136,
    19,255,191,248,175,106,96,75,142,35,121,41,226,196,143,66,
    219,15,215,35,223,164,254,34,17,66,149,75,100,164,5,175,
    207,9,94,255,2,198,150,103,182,224,181,15,168,216,32,95,
    234,38,236,115,99,223,132,102,21,246,12,216,202,131,151,131,
    61,156,166,64,6,108,24,112,96,194,247,57,18,216,71,154,
    71,16,92,128,188,84,216,218,98,16,40,77,35,176,95,128,
    189,2,212,94,236,153,196,216,46,65,252,15,248,97,129,149,
    142,178,82,19,246,144,230,225,32,15,251,69,120,142,66,200,
    218,42,145,251,198,139,61,244,20,57,181,106,30,173,93,201,
    184,75,174,120,126,28,58,129,144,19,216,182,27,78,236,4,
    118,173,153,72,17,84,203,90,36,74,150,26,142,220,180,120,
    76,142,22,35,104,72,214,21,133,66,142,97,99,221,15,61,
    59,136,188,157,186,144,163,164,200,94,247,235,194,182,185,243,
    171,160,17,197,242,139,56,142,98,139,214,147,153,245,200,73,
    71,208,106,186,245,40,17,85,154,141,167,177,72,189,36,233,
    245,6,107,36,3,216,78,26,236,137,196,141,253,134,196,48,
    41,141,36,77,218,170,20,32,38,201,167,72,150,55,163,64,
    44,175,59,238,78,93,54,151,55,68,112,115,121,109,199,175,
    123,203,47,238,220,90,110,52,229,102,20,46,35,207,15,165,
    192,69,168,47,103,221,95,194,254,147,164,104,215,223,176,125,
    118,193,222,20,245,134,136,105,165,146,179,52,137,49,101,140,
    27,69,35,103,84,141,9,108,21,240,147,51,22,204,49,99,
    197,39,39,92,114,140,192,147,207,194,133,98,104,192,182,9,
    241,2,129,97,11,127,13,138,30,66,162,70,125,38,247,125,
    77,222,43,238,86,142,66,172,152,123,12,32,68,18,74,222,
    165,152,134,192,40,40,192,86,17,20,58,16,84,10,46,113,
    147,40,138,147,26,19,149,231,33,249,59,224,106,34,46,246,
    160,133,153,131,28,24,225,20,200,50,165,23,228,206,225,132,
    63,50,236,106,85,50,127,133,17,32,55,253,36,218,13,121,
    157,169,205,27,165,134,43,243,180,249,100,109,75,184,50,89,
    68,198,183,209,78,197,117,194,48,146,21,199,243,42,142,148,
    177,191,182,35,69,82,145,81,229,74,82,165,208,89,211,26,
    68,169,190,102,67,131,134,2,140,160,81,95,60,223,149,248,
    101,134,191,112,20,18,33,17,0,155,145,151,32,159,84,108,
    8,105,145,145,146,22,57,98,67,24,31,54,137,210,244,40,
    119,2,191,63,208,150,48,8,171,69,13,153,68,212,215,101,
    153,209,231,36,137,205,150,16,159,129,70,138,95,58,245,29,
    193,218,19,212,135,6,81,83,217,48,100,168,157,38,179,181,
    151,108,122,24,133,94,19,45,241,221,107,52,201,105,6,220,
    56,67,110,22,225,54,130,180,136,255,23,141,57,211,205,183,
    64,86,212,64,163,188,38,129,195,108,180,34,141,160,59,192,
    28,82,53,57,9,176,245,188,211,46,82,139,6,91,11,68,
    206,19,185,64,100,81,59,56,60,47,39,186,189,188,77,154,
    77,118,141,157,160,69,207,105,39,188,142,221,114,166,189,91,
    48,171,213,8,245,38,237,141,54,234,243,148,1,227,123,68,
    81,148,247,83,14,146,103,148,111,105,119,176,50,218,8,8,
    105,106,181,129,206,75,98,77,145,171,163,26,163,22,1,47,
    139,190,141,12,250,44,138,6,67,207,58,163,51,154,77,18,
    10,116,214,57,82,85,232,179,166,21,34,111,13,127,97,219,
    240,217,232,129,207,199,52,201,84,11,62,19,12,155,50,126,
    166,76,55,215,90,237,180,156,205,116,193,134,48,147,239,131,
    153,171,212,202,245,250,119,108,112,105,121,245,101,6,46,100,
    136,153,53,126,5,27,205,121,178,57,11,148,121,172,194,207,
    195,121,44,172,38,23,214,247,184,176,114,113,230,163,148,74,
    168,57,206,169,170,81,32,231,215,115,48,215,42,152,73,9,
    105,35,142,94,53,43,209,122,69,178,119,148,255,238,94,73,
    150,174,36,31,99,102,171,220,227,156,162,114,155,202,94,177,
    104,80,246,161,161,95,188,114,5,215,42,254,102,219,42,217,
    216,156,120,236,86,13,68,204,204,210,210,153,122,77,57,237,
    38,50,166,108,59,228,85,45,167,171,74,70,62,34,181,101,
    94,210,156,49,143,248,40,27,60,183,173,242,41,31,121,184,
    23,63,159,209,50,147,127,2,232,32,109,213,148,101,108,52,
    153,111,189,211,129,129,161,153,108,45,163,142,111,116,236,139,
    237,216,211,39,167,129,251,87,224,99,159,1,63,1,69,23,
    131,216,2,110,138,115,10,231,12,137,255,17,24,225,125,234,
    48,231,133,26,213,94,150,192,116,145,220,102,81,85,150,31,
    193,207,153,237,161,139,103,174,117,176,203,22,207,124,154,83,
    24,22,71,42,144,249,206,228,67,97,216,116,18,18,83,25,
    165,189,227,218,9,58,61,148,97,70,29,30,70,70,149,66,
    155,230,254,190,141,16,42,63,231,140,25,51,19,247,247,137,
    124,144,134,220,208,188,161,152,177,8,131,171,162,173,178,241,
    119,52,87,158,173,155,28,225,250,172,134,167,192,45,104,224,
    62,76,129,43,184,100,188,230,163,59,81,147,226,119,96,26,
    120,215,195,83,16,93,173,242,32,10,176,90,212,215,195,17,
    186,154,168,107,29,130,158,226,194,16,212,31,78,63,148,172,
    58,42,20,175,197,138,90,165,52,168,42,94,68,94,13,121,
    91,83,200,238,214,157,96,205,115,238,53,73,41,105,118,245,
    46,49,181,153,83,89,51,9,225,198,32,75,249,235,77,109,
    238,203,33,111,233,91,168,35,53,147,1,236,69,46,239,227,
    103,155,162,18,136,96,13,239,97,155,126,163,178,94,119,54,
    120,181,115,45,55,158,104,55,36,7,176,187,142,39,55,136,
    70,21,55,10,49,127,238,184,50,138,43,158,192,27,138,240,
    42,239,86,56,249,86,252,164,226,172,97,175,227,74,133,216,
    206,237,197,135,64,39,222,72,24,79,219,187,212,60,134,104,
    217,120,199,244,241,140,251,103,232,172,106,58,187,165,176,146,
    42,88,208,19,44,190,252,156,74,49,79,101,242,177,8,162,
    184,249,56,242,132,242,108,1,142,165,44,119,204,244,151,140,
    3,105,90,206,2,46,117,64,165,212,67,125,72,58,124,104,
    23,68,138,73,64,172,225,59,211,49,229,143,109,103,170,84,
    176,219,149,141,239,18,42,29,225,113,0,111,130,178,169,18,
    60,157,176,172,37,34,215,137,124,66,228,62,28,79,41,252,
    136,82,7,180,50,114,209,56,103,150,204,162,89,202,169,27,
    25,75,61,165,17,73,111,254,139,204,35,228,63,245,148,171,
    149,5,139,36,41,70,232,33,3,209,18,197,110,181,172,153,
    99,76,199,153,57,161,153,39,152,78,50,115,74,51,167,153,
    158,100,230,140,102,158,98,58,203,204,57,205,156,103,122,154,
    153,103,52,243,44,211,115,204,92,208,204,243,76,47,48,115,
    81,51,43,76,223,98,230,69,205,188,196,244,50,51,175,104,
    230,85,166,215,152,89,213,204,235,76,111,48,243,109,205,124,
    135,233,187,204,92,210,204,101,166,239,49,243,125,205,252,128,
    233,135,204,252,72,51,111,50,189,197,204,219,154,121,135,233,
    175,152,249,107,205,252,152,233,93,102,126,162,153,247,152,126,
    202,204,251,154,249,128,233,103,204,252,92,51,31,50,253,130,
    153,95,106,230,111,152,254,150,153,95,105,230,35,166,191,99,
    230,239,53,243,49,211,21,102,62,209,204,167,76,191,102,166,
    165,153,53,166,207,152,249,141,174,144,127,96,230,115,88,125,
    161,75,229,183,67,41,149,92,128,142,161,244,252,12,195,172,
    144,214,237,99,182,210,186,3,173,83,238,160,234,248,11,139,
    198,76,87,186,176,221,88,56,242,248,106,6,21,82,53,197,
    223,0,6,223,225,30,164,134,31,240,33,190,121,138,67,161,
    46,250,28,10,227,121,120,22,47,115,121,190,204,221,165,203,
    220,30,123,105,155,234,62,215,70,83,33,117,150,34,26,138,
    93,59,235,176,186,172,145,89,78,163,33,66,207,186,1,217,
    251,23,119,15,57,162,84,38,254,169,83,55,240,195,194,83,
    120,225,234,221,31,84,234,50,142,112,76,10,233,142,24,126,
    116,24,107,255,214,88,171,174,66,182,234,89,20,19,85,231,
    218,37,238,97,186,182,231,187,129,180,22,69,210,142,18,2,
    102,66,7,146,55,72,96,237,229,218,149,101,202,74,15,58,
    29,119,83,216,117,60,196,217,137,255,131,96,189,111,20,34,
    213,147,132,187,78,190,188,212,61,80,188,194,99,88,20,218,
    187,81,188,109,251,200,87,134,31,69,142,230,160,199,196,189,
    93,242,92,247,112,62,237,169,165,39,245,135,245,147,90,66,
    73,155,37,231,187,197,183,49,150,162,206,170,6,245,145,26,
    62,194,242,87,121,113,128,24,94,70,99,27,215,200,221,102,
    109,71,16,35,197,211,169,226,76,15,95,217,58,6,243,147,
    126,22,8,156,68,77,240,38,25,210,78,103,173,78,182,92,
    232,59,44,90,95,167,155,42,233,61,84,128,148,166,111,30,
    20,79,158,233,30,128,153,149,158,200,40,128,13,238,165,177,
    116,130,215,140,222,88,82,79,236,132,27,34,233,31,235,76,
    191,142,117,155,213,119,230,40,246,91,202,6,247,102,236,98,
    134,188,210,35,26,56,13,123,39,241,195,13,188,74,199,34,
    17,241,75,229,236,209,36,105,2,58,171,247,235,236,221,232,
    1,166,35,223,150,155,152,247,189,254,169,160,67,66,167,130,
    44,179,119,72,184,19,180,118,153,55,32,191,116,72,104,165,
    89,102,239,10,210,84,252,202,170,239,250,166,189,122,125,53,
    163,55,174,73,51,88,139,234,169,170,195,250,117,220,219,172,
    222,140,35,55,69,28,56,117,219,141,130,70,20,138,80,14,
    200,76,125,228,116,102,234,237,146,23,6,13,39,44,171,140,
    242,6,17,82,62,145,81,206,92,121,181,123,16,47,248,154,
    216,240,67,219,221,110,72,180,97,39,84,91,245,136,162,52,
    15,85,162,190,189,242,218,97,74,26,59,24,106,149,178,105,
    194,163,202,210,140,115,93,51,182,187,15,181,155,199,31,205,
    197,140,104,31,23,219,189,189,219,146,197,208,162,164,123,69,
    143,38,169,55,112,191,78,121,185,175,10,60,28,117,207,117,
    36,65,154,106,70,79,213,217,119,136,130,174,69,60,146,96,
    207,76,153,5,236,201,14,105,133,166,152,246,205,31,29,18,
    58,127,100,153,242,131,238,33,252,122,56,81,15,48,184,237,
    70,97,40,92,122,234,159,113,230,255,24,70,211,211,251,162,
    55,74,242,233,146,87,1,119,162,144,162,227,176,203,39,224,
    214,123,44,15,203,66,28,53,109,91,61,230,183,105,59,219,
    199,241,164,226,51,224,103,242,144,220,7,126,82,97,20,205,
    146,57,107,252,226,31,179,84,44,25,252,112,174,235,207,49,
    148,189,252,100,134,31,128,55,19,139,56,214,100,122,56,229,
    191,28,208,143,106,248,110,65,79,116,86,156,64,189,9,230,
    119,159,22,37,83,126,163,101,93,75,15,185,84,2,248,173,
    131,122,103,131,151,7,126,112,200,207,9,173,15,137,79,173,
    224,230,146,246,126,73,80,129,105,63,69,226,191,93,8,110,
    242,145,36,43,246,0,79,51,22,21,121,251,165,160,71,147,
    28,220,14,129,214,115,73,165,74,75,85,186,164,212,90,119,
    202,246,152,164,132,176,83,189,163,231,99,87,111,255,231,245,
    200,221,22,94,75,230,252,96,153,135,81,224,32,191,255,44,
    53,95,207,50,221,213,239,197,52,106,182,139,139,39,6,223,
    169,211,105,252,76,191,133,124,186,27,215,36,94,22,123,214,
    79,205,246,52,218,21,241,99,174,57,23,187,4,218,93,172,
    96,208,50,119,235,81,179,13,240,109,103,77,161,122,192,10,
    62,83,69,176,181,62,221,22,167,43,163,77,185,112,152,18,
    229,212,40,31,253,85,63,95,97,186,67,73,168,76,191,241,
    51,193,204,141,158,247,121,140,149,4,191,196,60,60,21,109,
    221,125,105,107,246,30,115,178,195,142,33,33,168,55,20,234,
    125,231,61,58,137,39,244,102,137,254,158,161,52,89,194,228,
    64,247,225,156,81,198,27,113,62,55,62,85,202,143,143,149,
    242,165,145,28,191,174,158,48,102,204,114,190,52,54,110,188,
    249,103,113,188,100,148,205,197,235,37,227,127,61,75,248,75,
};

EmbeddedPython embedded_m5_internal_param_System(
    "m5/internal/param_System.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_System.py",
    "m5.internal.param_System",
    data_m5_internal_param_System,
    3120,
    10255);

} // anonymous namespace