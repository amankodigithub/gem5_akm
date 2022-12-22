#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_MathExprPowerModel[] = {
    120,156,189,88,253,114,219,198,17,223,3,64,74,164,40,75,
    178,44,201,178,228,8,109,198,13,235,105,165,36,141,235,206,
    88,117,227,118,220,153,36,99,197,5,211,177,195,100,138,66,
    192,145,4,69,2,28,224,100,153,25,233,159,210,211,246,5,
    250,8,253,163,111,211,55,106,119,247,0,16,250,114,50,147,
    48,50,121,62,30,22,123,251,241,219,143,59,31,178,191,10,
    126,63,182,1,210,68,0,4,248,17,48,0,24,10,104,11,
    16,82,64,112,11,142,42,144,124,4,65,5,222,0,180,13,
    144,6,76,112,98,194,87,6,68,13,126,167,10,3,147,87,
    4,140,235,32,45,104,87,224,69,180,2,150,172,194,81,29,
    146,191,130,16,34,18,240,50,152,131,96,30,222,32,119,156,
    212,152,225,60,208,98,157,23,107,16,44,240,98,29,130,6,
    79,22,96,188,12,178,1,237,69,34,107,223,64,182,247,145,
    237,18,179,253,47,177,13,240,201,26,4,55,136,28,229,250,
    146,40,45,162,228,253,150,152,203,114,46,229,10,180,111,230,
    243,213,210,252,86,105,190,198,115,220,245,38,244,215,161,191,
    1,253,219,208,65,67,172,20,59,108,130,52,161,127,7,218,
    119,64,226,103,19,38,104,171,224,102,233,141,45,126,99,181,
    120,99,155,223,184,11,237,187,32,241,179,173,223,168,66,171,
    185,142,246,15,255,135,127,77,180,63,168,6,14,175,100,146,
    134,113,228,134,81,39,14,13,122,94,165,129,188,229,211,48,
    151,185,237,15,228,182,255,0,251,44,48,50,183,157,1,50,
    22,164,203,192,128,51,158,156,25,48,110,194,169,128,190,5,
    129,9,167,184,77,133,4,232,10,152,24,240,181,73,4,103,
    56,90,104,220,119,192,82,218,103,125,54,174,230,52,7,103,
    21,56,173,64,235,229,169,65,11,71,53,72,254,13,223,108,
    51,211,121,102,106,192,41,142,22,76,44,56,171,194,11,36,
    194,165,126,141,212,23,47,79,81,83,92,105,53,45,148,246,
    160,164,46,169,18,132,73,228,13,165,218,196,185,59,242,18,
    111,232,62,243,84,239,233,235,81,242,60,62,145,201,179,56,
    144,131,102,61,39,143,211,221,17,62,118,248,125,147,12,51,
    28,41,230,27,71,82,45,224,164,19,70,129,59,140,131,227,
    129,84,243,196,212,237,132,3,233,186,252,240,147,225,40,78,
    212,211,36,137,19,135,108,203,139,131,216,43,222,32,203,250,
    131,56,149,77,218,141,183,113,136,189,34,234,206,136,57,146,
    0,44,51,189,28,200,212,79,194,145,66,151,105,142,68,77,
    220,154,228,44,30,210,207,112,216,235,197,67,185,215,241,252,
    227,129,26,239,117,229,240,193,222,225,113,56,8,246,158,56,
    207,246,70,99,213,139,163,61,92,11,35,37,209,32,131,189,
    235,76,177,139,180,55,137,233,73,216,117,67,86,199,237,201,
    193,72,38,139,180,122,135,54,20,203,162,33,170,194,20,77,
    177,136,179,10,126,77,177,109,44,136,131,144,20,242,73,73,
    2,149,85,134,17,249,86,192,145,1,201,54,129,164,143,31,
    65,94,69,168,180,232,153,193,207,254,68,150,208,171,125,147,
    92,175,23,79,25,88,136,48,164,220,39,95,71,192,232,168,
    64,191,10,26,53,8,54,13,163,100,76,35,146,19,27,3,
    153,91,144,254,11,208,178,136,151,83,200,176,52,49,65,68,
    203,160,234,20,206,184,186,142,27,254,141,225,216,106,146,248,
    7,140,6,213,11,211,248,36,98,155,211,156,3,168,133,150,
    121,62,254,252,176,47,125,149,238,224,194,151,241,177,237,123,
    81,20,43,219,11,2,219,83,42,9,15,143,149,76,109,21,
    219,247,210,38,185,209,89,201,1,85,240,27,143,114,0,145,
    179,17,64,250,71,16,250,10,127,172,242,15,246,66,42,21,
    130,161,23,7,41,174,19,139,174,84,14,9,169,200,200,49,
    11,194,88,113,137,148,182,71,186,27,248,251,73,46,9,3,
    178,89,205,225,147,202,65,71,213,25,137,94,154,186,44,9,
    173,51,232,136,241,43,111,112,44,153,123,138,252,80,32,154,
    106,25,102,8,187,219,164,66,174,49,171,17,197,81,48,70,
    169,66,255,61,218,240,54,131,175,193,240,91,67,232,205,225,
    88,197,255,171,98,221,240,173,12,112,213,28,116,148,251,20,
    176,203,69,230,117,4,224,4,243,76,211,224,68,193,154,112,
    4,254,148,102,244,178,179,77,195,93,26,222,161,97,39,87,
    118,54,26,47,94,212,248,33,237,98,176,154,172,16,57,195,
    204,21,10,206,69,209,230,52,138,48,11,182,40,26,12,138,
    153,105,52,88,148,49,147,199,52,34,41,199,153,9,233,23,
    148,159,41,106,152,25,5,8,66,157,102,211,0,96,243,56,
    203,164,246,124,142,93,135,0,89,70,101,183,132,74,135,60,
    195,144,116,54,243,172,231,18,133,6,163,179,69,172,42,87,
    216,215,166,225,39,179,53,242,20,86,221,75,176,122,68,27,
    46,103,176,90,100,56,213,241,187,108,248,102,102,249,162,20,
    174,94,128,19,97,201,186,2,75,63,163,153,121,89,215,31,
    5,70,153,134,127,44,193,136,132,50,202,138,28,224,100,188,
    65,242,151,1,180,129,213,252,69,180,129,5,218,224,2,253,
    62,23,104,46,242,220,234,232,4,108,114,14,214,147,10,25,
    162,99,194,122,86,120,211,26,142,163,36,126,61,182,227,142,
    173,88,83,202,151,251,247,210,221,123,233,35,204,132,246,99,
    206,65,58,23,234,108,151,200,17,101,43,122,245,233,107,95,
    114,157,227,95,174,171,147,147,203,137,202,205,234,39,98,105,
    141,204,104,228,246,229,52,157,170,132,178,243,12,45,92,47,
    44,76,2,127,74,91,212,217,188,166,216,64,220,212,5,203,
    225,234,92,204,109,20,63,197,239,239,201,228,164,171,4,106,
    122,157,150,150,146,21,32,85,156,95,156,195,198,76,196,119,
    246,144,223,159,115,76,84,167,152,160,175,153,131,251,31,192,
    109,165,128,191,3,121,29,157,155,129,187,136,5,114,243,42,
    145,255,5,56,10,174,168,231,156,71,90,84,195,153,2,211,
    75,250,144,73,117,121,255,20,254,89,10,161,188,8,155,89,
    227,88,46,194,86,145,131,24,46,223,169,208,90,231,147,21,
    185,164,231,165,68,166,51,208,52,42,167,201,189,104,244,48,
    3,207,6,59,243,154,185,75,114,124,61,69,14,149,177,45,
    177,106,148,240,240,1,13,31,22,80,16,249,218,15,46,210,
    14,92,95,105,93,157,213,191,162,125,45,150,116,105,142,59,
    194,203,172,10,160,87,114,160,127,88,0,93,114,25,122,195,
    199,7,26,13,242,241,196,16,120,142,195,142,139,142,77,22,
    200,10,180,171,20,18,220,21,139,44,98,68,158,168,40,173,
    157,171,113,108,145,3,109,171,194,205,218,131,52,188,158,97,
    2,32,39,238,15,188,225,97,224,61,62,162,13,104,23,63,
    143,33,35,23,121,185,44,50,225,95,92,39,53,255,124,144,
    139,254,106,134,193,255,107,228,87,136,204,80,15,98,159,35,
    254,139,158,180,135,114,120,136,39,194,94,56,178,59,3,175,
    203,94,48,51,149,62,207,85,82,236,198,139,29,66,122,159,
    198,216,246,227,8,51,240,177,175,226,196,14,36,158,143,100,
    96,255,210,230,244,109,135,169,237,29,226,83,207,87,26,207,
    231,3,145,219,78,47,233,166,220,97,30,157,208,116,198,94,
    116,241,228,27,98,135,61,132,162,70,234,179,88,145,141,185,
    119,214,225,129,229,12,79,62,106,172,19,17,117,11,206,46,
    13,63,135,217,39,237,143,128,129,4,41,153,166,42,182,140,
    154,193,189,204,101,234,231,196,37,189,28,141,39,223,37,26,
    245,125,74,22,147,85,162,148,115,116,236,166,177,70,9,188,
    93,207,23,23,120,108,240,226,98,126,101,115,131,23,151,248,
    26,164,202,43,43,20,210,115,223,55,164,57,56,102,28,22,
    234,7,141,100,231,225,143,40,177,243,27,200,234,246,117,81,
    44,202,234,44,234,119,251,34,63,10,148,117,225,123,133,157,
    183,64,203,245,19,233,41,169,253,178,61,83,45,57,17,232,
    237,78,166,17,122,185,139,125,82,40,52,225,118,101,124,139,
    221,165,143,64,236,46,241,34,186,131,237,172,197,237,236,62,
    181,179,167,172,189,107,232,142,118,138,190,74,97,4,210,45,
    146,39,87,136,166,13,161,91,87,18,209,27,141,100,20,56,
    247,161,220,141,242,227,25,34,224,145,6,229,180,133,48,197,
    45,108,63,47,199,25,165,213,146,130,236,183,74,17,89,179,
    245,32,227,116,146,227,180,73,173,195,52,183,58,251,52,112,
    54,45,18,169,243,187,194,254,246,219,64,136,13,10,29,112,
    190,157,8,155,26,93,231,198,209,219,97,157,42,102,248,109,
    52,196,143,196,75,21,123,128,233,145,64,42,121,45,80,20,
    169,152,157,148,3,137,5,48,30,227,81,134,15,9,248,123,
    224,186,179,174,30,191,205,28,192,137,12,171,135,168,98,253,
    88,19,107,70,173,90,19,92,128,47,92,254,106,89,168,49,
    214,237,240,56,117,56,207,44,21,206,225,187,201,188,32,146,
    31,249,160,118,224,13,245,253,18,223,162,56,239,66,118,6,
    118,222,43,156,76,119,2,124,6,209,39,59,12,48,110,14,
    184,23,112,126,69,235,116,5,48,124,176,155,107,182,171,53,
    155,106,212,194,46,85,178,15,134,15,212,214,149,196,173,112,
    168,239,228,212,202,133,231,65,226,225,124,237,194,106,42,147,
    208,27,132,223,232,75,184,124,153,201,174,222,157,12,113,97,
    141,107,244,53,240,97,223,39,178,27,166,200,153,217,94,120,
    57,203,40,228,40,117,239,173,8,44,49,154,49,108,116,159,
    171,207,218,143,233,22,39,253,24,7,186,111,171,45,213,16,
    66,148,113,76,60,238,46,10,203,108,44,215,172,198,66,205,
    170,205,153,124,109,178,136,135,153,186,85,91,104,8,253,111,
    7,129,86,55,118,86,106,226,255,103,39,202,6,
};

EmbeddedPython embedded_m5_internal_param_MathExprPowerModel(
    "m5/internal/param_MathExprPowerModel.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_MathExprPowerModel.py",
    "m5.internal.param_MathExprPowerModel",
    data_m5_internal_param_MathExprPowerModel,
    2221,
    6671);

} // anonymous namespace