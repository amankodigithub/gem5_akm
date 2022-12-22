#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_EtherSwitch[] = {
    120,156,189,88,253,114,219,198,17,223,3,64,74,164,36,139,
    250,150,37,89,98,211,113,195,122,90,169,77,227,186,51,81,
    221,58,141,59,211,204,84,73,161,116,236,48,153,162,16,112,
    20,65,145,0,7,56,74,102,70,234,31,145,167,31,15,208,
    71,232,31,125,155,62,66,223,36,221,221,3,64,72,148,28,
    79,43,86,36,79,135,197,221,222,126,252,118,111,239,60,72,
    255,74,248,251,101,29,32,249,147,0,240,241,43,160,11,208,
    19,208,20,32,164,0,127,25,78,74,16,191,15,126,9,94,
    3,52,13,144,6,92,98,199,132,47,12,8,103,121,78,25,
    186,38,83,4,12,171,32,45,104,150,224,69,184,0,150,44,
    195,73,21,226,63,130,16,34,20,240,210,159,2,127,26,94,
    35,119,236,84,152,225,52,16,177,202,196,10,248,51,76,172,
    130,63,203,157,25,24,214,64,206,66,115,142,134,53,239,33,
    219,71,200,118,158,217,254,139,216,250,248,102,5,252,123,52,
    28,229,250,156,70,90,52,146,215,155,103,46,181,76,202,5,
    104,46,102,253,165,66,127,185,208,95,41,244,87,185,143,18,
    44,66,103,13,58,235,208,185,15,45,52,202,66,190,218,6,
    72,19,58,155,208,220,4,137,223,13,184,68,187,249,139,133,
    25,91,60,99,41,159,241,128,103,108,67,115,27,36,126,31,
    232,25,101,56,108,172,162,47,130,111,240,175,129,190,0,53,
    139,205,169,140,147,32,10,157,32,108,69,129,65,239,203,212,
    144,231,60,106,166,82,23,254,138,92,248,79,96,255,249,70,
    234,194,11,64,198,130,116,233,26,112,193,157,11,3,134,13,
    56,23,208,177,192,55,225,28,151,41,145,0,199,2,46,13,
    248,210,164,1,23,216,90,104,232,109,176,148,246,95,135,13,
    173,57,77,193,69,9,206,75,112,248,242,220,32,194,73,5,
    226,127,192,87,91,204,116,154,153,26,112,142,173,5,151,22,
    92,148,225,5,14,66,82,167,66,234,139,151,231,168,41,82,
    14,27,22,74,123,80,80,151,84,241,131,56,116,123,82,45,
    98,223,233,187,177,219,115,158,171,182,140,15,207,2,229,181,
    27,213,108,92,148,236,246,93,213,182,121,162,73,22,233,245,
    21,51,140,66,169,102,176,211,10,66,223,233,69,254,160,43,
    213,52,113,115,90,65,87,58,14,191,252,77,175,31,197,234,
    121,28,71,177,77,70,101,98,55,114,243,25,100,82,175,27,
    37,178,65,171,241,50,54,177,87,52,186,213,103,142,36,0,
    11,75,147,125,153,120,113,208,87,232,43,205,145,70,19,183,
    6,121,137,155,228,35,108,246,218,81,79,238,181,92,111,208,
    85,195,189,99,217,123,188,119,52,8,186,254,222,51,251,183,
    123,253,161,106,71,225,30,210,130,80,73,180,68,119,111,204,
    6,187,56,136,172,147,156,5,199,78,192,122,56,109,217,237,
    203,120,142,168,27,180,146,168,137,89,81,22,166,104,136,57,
    236,149,240,103,138,45,99,70,28,4,164,137,71,218,17,140,
    172,34,112,200,155,2,78,12,136,183,8,22,29,252,10,242,
    35,130,227,144,222,25,252,238,119,100,2,77,237,152,228,108,
    77,60,103,40,33,166,112,228,62,121,55,4,198,67,9,58,
    101,208,56,65,120,105,224,196,67,106,113,56,177,49,144,185,
    5,201,223,1,77,138,8,57,135,20,61,151,38,136,176,6,
    170,74,193,140,212,85,92,240,107,6,224,97,131,196,63,96,
    24,168,118,144,68,103,33,27,155,250,28,50,104,167,227,79,
    135,159,28,117,164,167,146,29,36,124,30,13,234,158,27,134,
    145,170,187,190,95,119,149,138,131,163,129,146,73,93,69,245,
    135,73,131,252,103,47,100,72,202,249,13,251,25,114,200,203,
    136,28,253,224,7,158,194,135,37,126,96,47,36,82,33,10,
    218,145,159,32,157,88,28,75,101,147,144,138,140,28,177,32,
    12,18,135,134,210,242,56,238,30,62,63,203,36,97,36,54,
    202,25,110,18,217,109,169,42,67,208,77,18,135,37,33,58,
    163,141,24,159,186,221,129,100,238,9,242,67,129,168,171,101,
    152,4,222,214,73,246,76,85,150,63,140,66,127,136,226,4,
    222,187,180,210,58,163,110,150,113,183,130,152,155,194,182,140,
    255,203,98,213,240,172,20,105,229,12,109,148,230,20,176,175,
    69,234,110,68,222,37,166,148,134,193,57,129,85,224,152,123,
    135,122,52,217,222,162,230,1,53,219,212,236,100,90,222,177,
    170,115,215,85,125,66,236,13,214,143,53,33,243,155,153,38,
    254,149,184,185,63,138,27,204,116,135,132,127,131,162,100,132,
    127,139,178,98,252,148,90,28,202,145,101,66,242,25,229,96,
    138,19,102,70,33,129,224,166,222,8,242,108,23,187,70,250,
    78,103,104,181,9,130,69,28,30,23,112,104,147,75,24,132,
    246,253,44,193,57,52,66,195,207,222,36,86,165,27,12,91,
    167,230,59,19,178,238,8,72,199,99,64,250,128,86,170,165,
    64,154,99,0,85,241,87,51,60,51,53,121,190,207,45,93,
    3,16,161,199,186,1,61,223,163,158,57,174,228,100,129,147,
    170,246,235,2,112,72,26,163,168,193,1,118,134,107,36,120,
    17,50,107,184,71,191,8,215,112,219,53,120,219,253,17,111,
    187,188,117,115,49,163,147,172,201,121,86,119,74,100,129,150,
    9,171,233,118,154,84,176,237,199,209,171,97,61,106,213,21,
    171,72,57,113,255,97,178,251,48,249,0,179,93,253,41,231,
    25,157,239,116,70,139,101,159,50,18,77,125,254,202,147,188,
    137,241,147,227,232,4,228,112,50,114,210,205,17,209,179,66,
    246,51,50,195,114,42,78,84,76,25,120,18,166,173,230,166,
    37,73,63,38,222,85,182,171,41,214,16,41,85,193,2,56,
    58,209,114,85,196,111,241,247,33,217,154,148,148,64,245,172,
    125,168,197,99,201,73,7,251,7,87,208,112,183,114,219,123,
    200,232,247,25,10,202,35,20,208,207,204,112,252,23,224,242,
    80,192,159,129,252,140,238,76,113,156,195,158,28,187,68,195,
    255,0,12,248,27,118,105,206,21,135,180,51,243,8,76,33,
    201,19,30,170,55,237,143,225,175,133,104,201,182,86,51,45,
    0,139,91,171,149,231,25,6,200,91,109,159,214,213,132,68,
    190,104,187,9,13,211,89,102,20,128,163,204,157,215,109,152,
    101,239,24,45,211,154,171,67,2,124,57,194,10,109,78,155,
    98,201,40,32,224,199,212,188,151,59,95,100,180,187,147,101,
    7,110,223,56,29,157,171,191,160,5,45,22,113,126,138,211,
    116,129,71,14,230,82,6,230,247,114,48,75,222,85,94,115,
    197,79,173,65,238,188,52,4,30,195,176,100,162,83,143,5,
    178,4,205,50,193,158,235,89,145,70,133,200,178,16,229,172,
    43,91,22,219,224,64,91,39,247,168,118,22,53,175,38,17,
    221,228,175,253,174,219,59,242,221,167,93,226,76,236,189,44,
    78,140,76,214,90,81,86,194,184,184,77,92,126,124,156,201,
    124,58,137,200,254,41,50,202,101,101,28,251,145,199,225,252,
    89,91,214,123,178,119,132,199,182,118,208,175,183,186,238,49,
    219,221,76,117,249,36,211,69,177,227,174,111,241,201,35,106,
    163,186,23,133,152,80,7,158,138,226,186,47,241,44,35,253,
    250,15,235,156,141,235,65,82,119,143,240,173,235,41,141,217,
    171,81,198,149,162,27,31,39,92,20,158,156,81,119,82,126,
    115,240,92,26,96,53,28,66,190,215,233,3,83,158,92,185,
    206,213,33,128,219,18,158,82,212,80,167,23,218,238,237,93,
    106,190,15,19,204,193,239,147,13,136,35,25,163,44,54,141,
    138,161,22,174,6,217,167,52,47,25,15,181,127,191,77,168,
    233,187,142,52,224,202,52,82,78,209,49,152,218,10,37,226,
    102,53,35,206,112,59,203,196,185,140,120,143,219,121,38,214,
    50,226,2,183,139,76,92,202,136,203,220,174,48,113,53,35,
    174,113,187,206,196,251,25,113,131,219,77,38,110,101,247,54,
    15,152,184,13,205,29,186,216,32,74,157,18,195,212,255,154,
    24,56,210,38,21,99,131,59,205,7,246,147,255,135,168,246,
    207,32,221,218,111,203,5,162,168,199,156,206,5,29,145,157,
    8,138,74,240,77,194,250,77,112,117,188,88,186,74,106,23,
    108,77,70,47,78,32,122,157,87,163,0,31,47,102,159,229,
    42,92,114,13,51,92,102,207,232,179,15,123,70,188,8,55,
    176,170,181,184,170,221,167,170,246,156,245,117,12,93,216,142,
    16,86,202,213,166,20,18,202,51,103,76,117,93,186,146,108,
    110,191,47,67,223,126,4,197,106,148,95,79,194,203,148,177,
    190,134,66,65,97,138,101,44,63,199,163,135,18,112,65,37,
    118,81,41,143,151,9,57,139,65,248,183,12,132,13,58,193,
    141,178,176,189,79,13,231,221,60,229,218,191,200,77,189,121,
    35,194,124,217,117,135,116,154,121,227,123,44,108,248,74,130,
    159,184,224,185,109,228,169,27,51,183,111,27,67,28,43,25,
    71,162,168,141,155,103,12,122,125,102,248,134,215,196,139,221,
    129,15,234,157,27,199,181,220,163,24,171,177,164,47,165,207,
    236,222,98,24,177,165,99,85,145,200,117,236,248,188,104,160,
    250,3,229,28,13,90,45,137,186,5,95,73,94,228,173,7,
    211,82,116,223,55,254,234,22,65,85,208,147,142,138,156,110,
    112,42,223,160,207,149,97,153,62,69,162,122,124,227,60,190,
    112,100,36,34,94,165,131,133,74,136,167,46,186,162,246,162,
    65,168,120,197,255,110,102,146,98,227,91,198,113,28,114,82,
    68,128,72,37,199,19,132,34,160,167,119,34,190,196,74,41,
    26,226,17,150,207,136,4,51,199,153,88,181,241,115,157,9,
    245,53,44,86,27,162,140,245,198,138,40,124,140,74,185,34,
    184,88,187,118,155,175,197,33,253,245,185,104,152,216,188,155,
    204,231,81,202,119,206,89,13,69,1,205,81,114,224,246,244,
    245,33,223,149,217,223,133,244,222,195,126,55,143,118,186,0,
    226,195,168,62,212,99,82,229,66,146,235,70,251,39,89,2,
    232,61,222,205,148,219,45,40,247,17,69,142,193,239,111,25,
    118,24,244,244,101,43,23,86,197,247,126,236,98,127,229,26,
    53,145,113,224,118,9,192,15,110,95,54,229,72,58,103,175,
    153,253,248,144,252,200,164,159,185,226,187,190,103,50,22,98,
    121,28,36,200,106,84,255,233,25,233,174,194,190,219,190,17,
    185,197,217,147,194,142,62,7,233,27,150,167,164,83,242,33,
    54,116,161,90,153,175,32,142,104,187,49,69,21,55,28,203,
    156,173,85,172,217,153,138,85,153,50,249,150,108,14,207,181,
    85,171,50,51,43,178,207,14,162,172,106,236,172,86,196,127,
    0,155,65,84,192,
};

EmbeddedPython embedded_m5_internal_param_EtherSwitch(
    "m5/internal/param_EtherSwitch.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_EtherSwitch.py",
    "m5.internal.param_EtherSwitch",
    data_m5_internal_param_EtherSwitch,
    2389,
    7145);

} // anonymous namespace
