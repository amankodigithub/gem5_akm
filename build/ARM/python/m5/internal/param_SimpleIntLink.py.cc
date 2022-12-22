#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SimpleIntLink[] = {
    120,156,189,88,253,114,219,198,17,223,3,64,74,164,36,235,
    91,178,45,217,162,237,216,102,61,173,212,166,113,221,153,168,
    110,157,52,153,73,166,86,92,208,29,59,74,166,40,4,28,
    37,80,32,192,1,142,150,153,145,58,211,202,211,118,166,127,
    247,17,250,71,222,166,207,209,151,104,119,247,0,16,146,168,
    54,51,21,43,147,231,229,225,110,111,63,126,251,113,240,32,
    251,171,224,247,23,13,128,244,159,2,192,199,143,128,16,160,
    43,96,87,128,144,2,252,37,56,172,64,242,1,248,21,120,
    7,176,107,128,52,224,20,9,19,190,50,32,154,230,61,85,
    8,77,158,17,48,168,131,180,96,183,2,175,162,121,176,100,
    21,14,235,144,252,14,132,16,145,128,215,254,4,248,147,240,
    14,185,35,81,99,134,147,64,147,117,158,172,129,63,197,147,
    117,240,167,153,152,130,193,28,200,105,216,157,161,101,187,215,
    144,237,35,100,59,203,108,255,65,108,125,124,178,12,254,53,
    90,142,114,125,73,43,45,90,201,231,205,50,151,185,92,202,
    121,216,93,200,233,197,18,189,84,162,151,75,244,74,137,94,
    45,209,215,75,244,141,18,125,179,68,175,149,232,245,18,125,
    171,68,223,46,209,27,76,163,182,11,208,105,64,231,14,116,
    238,66,27,29,48,95,104,118,15,164,9,157,247,96,247,61,
    144,248,185,7,167,232,35,127,161,180,227,62,239,88,44,118,
    60,224,29,15,97,247,33,72,252,60,208,59,170,208,106,174,
    160,223,131,127,225,95,19,253,14,106,26,135,55,50,73,131,
    56,114,130,168,29,7,6,61,175,210,64,40,241,104,152,200,
    224,242,49,193,229,91,96,172,248,70,6,151,19,64,198,130,
    116,9,13,56,97,226,196,128,65,19,142,5,116,44,240,77,
    56,198,99,42,36,192,190,128,83,3,190,54,105,193,9,142,
    22,58,245,54,88,74,99,165,195,78,213,156,38,224,164,2,
    199,21,104,189,62,54,104,226,176,6,201,223,225,155,117,102,
    58,201,76,13,56,198,209,130,83,11,78,170,240,10,23,225,
    84,167,70,234,139,215,199,168,41,206,180,154,22,74,187,83,
    82,151,84,241,131,36,114,187,82,45,33,237,244,220,196,237,
    58,173,160,219,11,229,103,145,250,85,16,29,54,235,249,202,
    56,221,236,185,234,192,230,173,38,217,164,219,83,204,50,142,
    164,154,66,162,29,68,190,211,141,253,126,40,213,36,241,115,
    218,65,40,29,135,31,126,214,237,197,137,250,36,73,226,196,
    38,179,242,100,24,187,197,14,50,170,23,198,169,108,210,105,
    124,140,77,236,21,173,110,247,152,35,9,192,226,210,102,95,
    166,94,18,244,20,122,75,115,164,213,196,173,73,126,226,33,
    253,20,135,173,131,184,43,183,218,174,215,15,213,96,107,95,
    118,31,111,237,245,131,208,223,122,102,63,223,234,13,212,65,
    28,109,225,92,16,41,137,182,8,183,70,88,97,19,151,45,
    16,191,163,96,223,9,88,19,231,64,134,61,153,204,208,236,
    77,58,75,204,137,105,81,21,166,104,138,25,164,42,248,53,
    197,186,49,37,118,2,210,197,35,253,8,74,86,25,60,228,
    81,1,135,6,36,235,4,141,14,126,4,249,18,1,210,162,
    103,6,63,251,53,25,65,207,118,76,114,184,158,60,102,56,
    33,174,112,229,54,121,56,2,198,68,5,58,85,208,88,65,
    136,105,240,36,3,26,113,57,177,49,144,185,5,233,223,0,
    141,138,40,57,134,12,65,167,38,136,104,14,84,157,146,7,
    206,174,224,129,127,100,16,182,154,36,254,14,3,65,29,4,
    105,124,20,177,185,137,230,176,105,161,101,94,12,190,216,235,
    72,79,165,27,56,241,101,220,111,120,110,20,197,170,225,250,
    126,195,85,42,9,246,250,74,166,13,21,55,238,167,77,242,
    160,61,159,99,169,224,55,232,229,216,33,63,35,118,244,15,
    63,240,20,254,88,228,31,236,133,84,42,196,193,65,236,167,
    56,79,44,246,165,178,73,72,69,70,142,89,16,134,137,67,
    75,233,120,92,119,13,127,63,203,37,97,44,54,171,57,114,
    82,25,182,85,157,65,232,166,169,195,146,208,60,227,141,24,
    191,113,195,190,100,238,41,242,67,129,136,212,50,140,7,113,
    215,73,250,92,89,214,32,138,35,127,128,2,5,222,67,58,
    235,58,227,110,154,145,183,140,168,155,192,177,138,255,87,197,
    138,225,89,25,214,170,57,222,40,217,41,96,111,139,204,225,
    136,189,83,76,44,77,131,51,3,43,193,113,119,151,40,218,
    108,175,211,112,139,134,219,52,108,228,122,94,185,178,51,231,
    149,125,66,7,24,172,33,235,66,46,48,115,93,252,51,177,
    115,99,24,59,152,241,90,20,3,6,69,202,48,6,44,202,
    142,201,83,26,113,41,71,151,9,233,75,202,197,20,43,204,
    140,194,2,1,78,212,16,246,108,25,123,142,52,158,204,17,
    107,19,12,203,88,220,47,97,209,38,167,48,16,237,27,121,
    154,115,104,133,134,160,189,70,172,42,35,76,219,160,225,206,
    216,236,59,4,211,254,5,48,125,72,103,205,101,96,154,97,
    16,213,241,59,103,120,102,102,244,162,226,45,158,3,17,33,
    200,26,129,160,7,68,153,23,213,28,55,120,50,229,62,45,
    129,135,228,49,202,58,236,32,49,88,37,209,203,176,89,197,
    122,253,42,90,197,18,108,112,9,254,33,151,96,46,227,220,
    68,233,100,107,114,190,213,68,133,108,208,54,97,37,43,173,
    105,13,199,94,18,191,29,52,226,118,67,177,146,148,27,183,
    239,167,155,247,211,15,49,235,53,158,114,190,209,121,79,103,
    182,68,246,40,51,209,214,79,222,122,146,203,25,255,114,28,
    157,136,28,78,74,78,86,38,17,65,203,100,65,35,55,45,
    167,228,84,37,148,137,199,99,220,122,97,92,146,245,115,226,
    94,103,203,154,98,21,209,82,23,44,130,163,83,46,247,72,
    252,20,191,31,145,181,73,77,9,212,73,219,45,45,32,203,
    78,90,216,223,63,131,136,171,150,220,222,66,86,191,201,145,
    80,29,34,129,190,102,142,230,63,3,183,139,2,254,4,228,
    107,116,105,134,230,2,252,228,220,69,90,254,91,96,216,143,
    168,216,156,51,90,84,165,121,5,166,146,244,9,47,213,5,
    252,115,248,75,41,102,242,50,107,102,13,97,185,204,90,69,
    190,97,144,124,167,82,106,157,77,76,228,141,3,55,165,101,
    58,219,12,195,112,152,195,139,46,14,179,237,149,35,102,82,
    243,117,72,132,175,135,120,161,66,181,38,22,141,18,10,126,
    68,195,251,5,0,68,62,119,149,210,108,192,229,101,212,209,
    121,251,43,58,210,98,33,103,39,56,155,156,225,82,128,186,
    146,131,250,253,2,212,146,107,204,59,190,7,208,104,144,83,
    79,13,129,23,65,108,162,232,222,101,129,172,192,110,149,224,
    207,61,174,200,162,67,228,249,136,206,59,83,192,216,14,59,
    218,66,133,95,181,203,104,120,59,158,56,39,175,109,135,110,
    119,207,119,159,246,137,55,29,224,229,241,98,228,210,206,149,
    165,37,172,139,203,4,230,159,143,115,169,223,140,39,198,127,
    130,172,10,105,25,209,126,236,113,96,191,60,144,141,174,236,
    238,225,133,238,32,232,53,218,161,187,207,182,55,51,109,190,
    200,181,81,236,188,243,69,63,125,68,99,220,240,226,8,211,
    107,223,83,113,210,240,37,222,113,164,223,248,65,131,115,115,
    35,72,27,238,30,62,117,61,165,177,123,54,222,184,127,116,
    147,253,148,91,197,195,35,34,199,231,59,7,239,172,1,118,
    201,71,80,212,62,125,149,42,82,45,247,191,58,20,176,76,
    225,237,69,13,116,170,161,6,192,222,164,225,123,48,214,140,
    252,129,54,55,164,100,144,170,88,51,106,6,55,82,103,22,
    190,160,189,233,197,160,123,254,93,130,78,191,119,201,66,175,
    154,191,176,153,0,201,87,29,122,167,82,205,222,169,96,60,
    78,252,175,241,200,240,30,31,176,127,127,165,97,104,63,249,
    255,8,107,255,20,178,218,122,89,8,138,178,38,51,26,19,
    29,145,183,230,101,53,248,98,127,115,52,66,28,47,145,174,
    146,218,17,235,227,210,141,99,87,159,244,135,97,100,93,236,
    42,159,21,106,156,114,35,49,88,98,255,232,139,8,251,71,
    188,138,110,98,123,105,113,123,185,77,237,229,49,235,236,24,
    186,195,28,34,173,82,168,190,138,67,36,143,156,17,234,235,
    46,146,164,115,123,61,25,249,246,35,40,55,134,252,120,60,
    222,166,116,241,14,74,117,221,20,75,216,9,94,140,36,202,
    127,37,181,216,81,149,34,118,198,230,50,134,227,95,115,56,
    54,169,7,31,38,65,123,155,6,78,123,69,198,179,127,14,
    121,22,44,0,231,203,80,42,57,202,240,138,54,103,87,63,
    95,98,250,143,7,216,165,115,19,140,191,67,199,25,99,2,
    253,25,178,58,129,236,98,129,9,84,84,141,154,89,171,214,
    4,87,157,115,47,44,181,8,52,234,86,111,144,218,28,159,
    179,133,162,252,82,45,47,5,100,24,190,122,236,184,93,253,
    118,132,95,4,216,247,32,187,208,217,15,11,171,209,221,150,
    251,107,125,87,65,136,114,69,228,2,104,255,152,230,169,215,
    236,62,222,204,21,218,212,10,125,228,166,129,151,233,195,111,
    246,186,143,213,173,203,87,218,49,246,185,9,183,112,23,87,
    124,28,198,222,161,244,245,75,167,75,184,240,154,95,198,93,
    23,231,215,70,174,64,19,103,28,230,207,61,247,19,218,181,
    124,110,54,149,73,224,134,193,55,82,221,56,247,68,70,253,
    174,243,226,40,105,97,151,41,213,250,200,211,94,196,71,50,
    121,30,35,76,212,221,115,11,134,143,152,129,243,70,82,207,
    161,238,252,23,62,250,180,75,116,235,239,181,6,169,146,221,
    75,44,136,249,57,233,186,225,127,180,15,251,129,221,69,96,
    201,31,242,235,208,17,46,37,88,150,39,116,197,191,144,192,
    57,120,18,185,31,164,228,222,133,115,155,178,252,70,88,87,
    141,75,114,127,153,193,248,226,77,55,197,250,234,253,148,94,
    229,164,47,113,160,247,109,181,217,26,198,30,165,62,19,175,
    192,51,194,50,167,231,106,214,244,84,205,170,77,152,252,2,
    101,6,175,58,117,171,54,53,45,46,255,183,129,145,91,55,
    54,144,215,191,1,82,100,215,80,
};

EmbeddedPython embedded_m5_internal_param_SimpleIntLink(
    "m5/internal/param_SimpleIntLink.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_SimpleIntLink.py",
    "m5.internal.param_SimpleIntLink",
    data_m5_internal_param_SimpleIntLink,
    2297,
    6796);

} // anonymous namespace