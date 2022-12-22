#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_FreebsdArmSystem[] = {
    120,156,189,88,109,115,219,198,17,222,3,64,74,164,36,75,
    178,44,201,182,100,139,142,235,152,113,109,209,77,227,186,51,
    81,221,186,105,210,73,102,164,184,160,91,59,74,166,40,4,
    28,41,80,32,192,1,32,203,204,72,157,78,229,73,58,157,
    201,183,246,39,244,67,255,77,255,81,187,187,7,128,16,95,
    58,233,52,140,76,158,151,135,195,222,190,60,251,114,231,64,
    250,87,194,239,47,106,0,241,239,52,0,23,63,2,124,128,
    174,128,125,1,66,10,112,175,192,81,9,162,247,192,45,193,
    27,128,125,13,164,6,231,72,232,240,185,6,193,60,191,83,
    6,95,231,25,1,253,42,72,3,246,75,240,34,88,6,67,
    150,225,168,10,209,31,64,8,17,8,120,233,206,128,59,11,
    111,144,59,18,21,102,56,11,52,89,229,201,10,184,115,60,
    89,5,119,158,137,57,232,47,129,156,135,253,5,90,182,127,
    9,217,222,67,182,139,204,246,95,196,214,197,39,171,224,94,
    162,229,40,215,103,180,210,160,149,188,223,34,115,89,202,164,
    92,134,253,203,25,189,82,160,175,20,232,213,2,189,86,160,
    215,11,244,213,2,125,173,64,95,47,208,27,5,122,179,64,
    223,40,208,55,11,244,86,129,174,21,232,91,5,250,173,2,
    125,187,64,255,160,64,223,41,208,111,23,232,187,5,186,206,
    52,90,246,50,116,222,129,206,61,232,252,16,90,232,236,229,
    220,138,247,65,234,208,121,0,251,15,64,226,231,62,156,35,
    30,220,203,133,55,182,249,141,149,252,141,6,191,241,16,246,
    31,130,196,79,67,189,81,134,102,125,13,49,230,253,27,255,
    234,2,169,100,30,135,87,50,138,189,48,176,188,160,21,122,
    26,61,47,211,64,136,116,104,152,73,161,249,1,65,243,159,
    192,184,116,181,20,154,103,128,140,5,233,226,107,112,198,196,
    153,6,253,58,156,10,232,24,224,234,112,138,219,148,72,128,
    182,128,115,13,190,208,105,193,25,142,6,2,232,38,24,137,
    194,101,135,1,164,56,205,192,89,9,78,75,208,124,121,170,
    209,196,81,5,162,127,192,151,155,204,116,150,153,106,112,138,
    163,1,231,6,156,149,225,5,46,194,169,78,133,212,23,47,
    79,81,83,156,105,214,13,148,118,175,160,46,169,226,122,81,
    96,119,101,178,142,180,213,179,35,187,107,125,20,73,121,16,
    187,79,163,110,179,31,39,178,91,175,102,139,195,120,187,103,
    39,135,38,191,173,147,89,186,189,132,185,134,129,76,230,144,
    104,121,129,107,117,67,247,216,151,201,44,177,180,90,158,47,
    45,139,31,126,220,237,133,81,242,97,20,133,145,73,150,229,
    73,63,180,243,55,200,174,142,31,198,178,78,187,241,54,38,
    177,79,104,117,171,199,28,73,0,150,152,94,118,101,236,68,
    94,47,65,135,41,142,180,154,184,213,201,85,60,196,31,227,
    208,56,12,187,178,209,178,157,99,63,233,55,218,178,251,168,
    113,112,236,249,110,227,169,185,219,232,245,147,195,48,104,224,
    156,23,36,18,205,225,55,198,27,98,27,87,94,38,150,39,
    94,219,242,88,25,235,80,250,61,25,45,208,236,117,218,78,
    44,137,121,81,22,186,168,139,5,164,74,248,213,197,166,54,
    39,246,60,82,199,33,21,9,80,70,17,66,228,87,1,71,
    26,68,155,4,144,14,126,4,121,20,97,210,164,103,26,63,
    251,13,217,65,205,118,116,114,187,154,60,101,80,33,186,112,
    229,14,249,57,0,70,70,9,58,101,80,136,65,160,41,8,
    69,125,26,113,57,177,209,144,185,1,241,223,1,237,138,88,
    57,133,20,71,231,58,136,96,9,146,42,165,43,156,93,195,
    13,255,204,80,108,214,73,252,61,198,66,114,232,197,225,73,
    192,22,39,154,131,167,137,150,121,214,255,244,160,35,157,36,
    222,194,137,207,194,227,154,99,7,65,152,212,108,215,173,217,
    73,18,121,7,199,137,140,107,73,88,187,19,215,201,137,230,
    114,6,167,156,95,191,151,193,135,92,141,240,81,63,92,207,
    73,240,199,10,255,96,47,196,50,65,40,28,134,110,140,243,
    196,162,45,19,147,132,76,200,200,33,11,194,72,177,104,41,
    109,143,235,46,225,239,167,153,36,12,199,122,57,3,79,44,
    253,86,82,101,28,218,113,108,177,36,52,207,144,35,198,175,
    108,255,88,50,247,24,249,161,64,68,42,25,166,6,186,171,
    164,64,166,47,43,17,132,129,219,71,153,60,231,46,109,119,
    149,161,55,207,224,91,69,224,205,224,88,198,255,203,98,77,
    115,140,20,110,229,12,114,148,245,18,96,135,139,212,231,8,
    191,115,204,48,117,141,83,4,235,193,209,247,22,81,244,178,
    185,73,195,13,26,110,210,176,149,169,58,13,125,23,134,245,
    125,76,123,104,172,36,171,67,142,208,51,117,220,11,17,116,
    109,16,65,152,253,154,20,9,26,197,203,32,18,12,202,148,
    209,19,26,113,41,199,152,14,241,115,202,203,20,49,204,140,
    130,3,97,78,212,0,252,108,28,115,137,148,158,205,112,107,
    18,24,139,136,108,23,16,105,146,95,24,142,230,181,44,223,
    89,180,66,1,209,220,32,86,165,49,214,173,209,112,107,154,
    38,30,64,170,61,2,169,247,105,187,165,20,82,11,12,165,
    42,126,151,52,71,79,237,158,23,192,149,33,40,17,142,140,
    49,56,122,155,40,125,84,211,239,1,66,169,126,31,21,32,
    68,34,105,69,53,246,144,232,175,147,244,69,240,172,99,5,
    127,17,172,99,81,214,184,40,63,228,162,204,133,157,91,56,
    149,120,117,206,189,138,40,145,25,90,58,172,165,197,54,174,
    224,216,139,194,215,253,90,216,170,37,172,39,229,201,157,59,
    241,246,157,248,125,204,128,181,39,156,123,84,14,84,89,46,
    146,61,202,82,244,234,135,175,29,201,213,141,127,89,150,74,
    74,22,39,40,43,173,154,136,163,85,50,162,150,89,151,211,
    115,156,68,148,149,167,102,223,106,110,95,18,247,19,218,160,
    202,198,213,197,58,98,166,42,88,10,75,101,96,110,156,248,
    41,126,127,73,6,39,77,37,80,43,111,54,149,140,44,62,
    41,98,222,191,128,139,41,8,111,54,144,219,111,51,60,148,
    7,120,160,175,158,193,250,107,224,54,82,192,87,64,30,71,
    199,166,176,206,163,128,92,188,66,203,127,15,140,255,49,53,
    156,243,71,147,234,54,175,192,180,18,63,230,165,170,164,127,
    2,127,41,4,79,86,120,245,180,81,44,22,94,35,207,61,
    12,149,111,85,92,141,139,73,138,28,114,104,199,180,76,101,
    158,65,60,14,82,122,222,218,97,230,157,6,110,102,21,107,
    139,164,248,98,128,26,42,93,27,98,69,43,96,225,71,52,
    188,155,195,64,100,115,223,177,64,91,48,185,182,90,42,147,
    127,78,187,26,44,231,226,76,66,62,24,102,148,3,188,148,
    1,252,221,28,224,146,11,207,27,62,40,208,168,145,119,207,
    53,129,167,82,236,175,232,16,104,128,44,193,126,153,66,129,
    59,96,145,70,138,200,210,19,37,179,11,85,141,173,177,167,
    236,148,59,88,249,142,134,215,83,11,123,114,223,142,111,119,
    15,92,251,201,31,137,61,237,225,100,177,163,101,2,47,21,
    5,38,220,139,73,50,243,207,71,153,224,175,166,22,242,63,
    65,110,185,192,12,112,55,116,56,206,159,31,202,90,87,118,
    15,240,220,119,232,245,106,45,223,110,179,7,244,84,161,79,
    51,133,18,118,225,112,63,16,223,163,49,172,57,97,128,57,
    247,216,73,194,168,230,74,60,7,73,183,246,160,198,9,187,
    230,197,53,251,0,159,218,78,162,112,124,49,252,184,193,180,
    163,118,204,189,228,209,9,145,83,245,160,133,167,91,15,59,
    233,63,65,94,19,213,137,43,207,191,220,35,171,176,192,242,
    133,39,156,164,175,146,15,245,6,230,54,13,239,192,180,211,
    244,123,200,237,140,216,146,89,202,98,67,171,104,201,218,152,
    232,123,70,28,226,209,24,220,253,54,49,168,238,132,210,72,
    44,103,151,73,51,32,249,80,68,247,61,229,244,190,7,195,
    115,230,255,13,79,134,250,84,65,254,245,119,26,149,230,227,
    239,77,94,243,167,144,86,222,73,17,41,138,202,44,168,136,
    236,136,172,137,47,106,194,119,1,55,38,66,197,114,34,105,
    39,82,121,100,115,138,26,114,64,171,205,254,58,136,181,209,
    254,243,105,174,204,57,55,27,253,43,236,40,117,112,97,71,
    137,23,193,117,108,68,13,110,68,119,168,17,61,101,205,45,
    77,245,162,3,212,149,114,3,208,133,68,32,79,70,4,83,
    70,80,45,39,9,104,247,122,50,112,205,123,80,236,34,249,
    241,212,60,79,105,228,27,40,148,127,93,92,193,182,113,52,
    182,40,53,22,148,99,143,149,242,104,154,166,239,24,157,127,
    203,208,89,167,182,125,144,31,205,29,26,56,35,230,201,208,
    252,57,100,9,50,199,159,43,125,153,200,9,30,224,86,34,
    61,54,186,18,235,67,216,199,222,158,251,102,252,237,91,214,
    116,211,235,207,144,219,87,144,158,72,48,189,138,178,86,209,
    43,229,138,224,202,52,116,247,169,164,160,254,75,117,135,253,
    216,228,160,93,204,213,229,203,185,172,86,144,121,248,204,178,
    103,119,213,21,11,95,37,152,183,33,61,12,154,119,115,219,
    209,209,152,91,114,117,200,65,196,114,213,228,34,105,254,152,
    230,233,213,238,163,237,76,167,109,165,211,175,101,32,35,207,
    201,117,226,91,194,238,35,238,232,138,171,101,112,220,181,112,
    213,174,237,28,98,89,126,78,87,58,27,99,57,14,88,93,
    27,122,222,196,214,58,104,91,175,36,213,119,62,60,143,190,
    157,190,58,204,154,183,223,149,221,48,234,239,134,174,76,54,
    135,158,63,117,221,200,180,131,182,204,184,223,26,94,144,182,
    14,138,71,182,170,54,94,131,11,107,39,168,137,15,213,21,
    221,136,169,212,243,15,252,208,57,146,110,186,230,198,228,53,
    191,10,187,54,206,143,223,165,233,101,187,44,15,61,119,35,
    122,107,117,104,54,70,103,218,190,247,165,28,49,62,91,240,
    217,73,212,196,254,124,212,126,106,183,103,225,137,140,200,190,
    254,8,90,6,143,152,193,36,51,15,243,81,187,77,208,237,
    248,32,245,246,120,11,98,5,139,186,182,159,218,103,88,226,
    220,50,153,40,55,255,27,19,165,20,69,87,246,156,155,160,
    9,49,64,41,101,120,146,27,169,177,229,144,115,79,36,219,
    30,254,136,152,237,240,187,105,173,160,92,145,220,30,195,33,
    45,168,69,62,83,205,90,234,4,162,110,62,158,208,125,90,
    220,194,129,238,61,43,139,21,204,96,84,73,116,81,197,90,
    98,232,243,75,21,99,126,174,98,84,102,116,190,194,90,192,
    3,102,213,168,204,205,139,255,229,223,22,102,196,170,182,133,
    220,255,3,181,85,122,204,
};

EmbeddedPython embedded_m5_internal_param_FreebsdArmSystem(
    "m5/internal/param_FreebsdArmSystem.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_FreebsdArmSystem.py",
    "m5.internal.param_FreebsdArmSystem",
    data_m5_internal_param_FreebsdArmSystem,
    2407,
    7323);

} // anonymous namespace