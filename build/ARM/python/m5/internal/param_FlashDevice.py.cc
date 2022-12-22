#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_FlashDevice[] = {
    120,156,189,88,235,115,219,198,17,223,3,64,74,164,36,235,
    253,176,158,76,82,215,172,167,149,218,52,174,59,19,215,173,
    19,39,157,100,38,74,10,165,181,195,100,138,66,196,73,2,
    5,2,28,224,36,153,25,169,31,42,79,219,233,247,254,9,
    253,208,255,166,255,76,63,183,187,123,56,16,122,69,158,169,
    89,139,60,31,23,123,139,125,252,118,111,239,218,144,255,171,
    224,247,87,13,128,236,143,2,32,192,143,128,8,160,43,160,
    37,64,72,1,193,28,28,86,32,125,15,130,10,188,2,104,
    89,32,45,56,199,137,13,95,91,16,143,243,154,42,68,54,
    83,4,244,235,32,29,104,85,224,121,60,13,142,172,194,97,
    29,210,63,128,16,34,22,240,34,24,129,96,20,94,161,116,
    156,212,88,224,40,16,177,206,196,26,4,99,76,172,67,48,
    206,147,49,232,79,129,28,135,214,4,177,181,238,160,216,7,
    40,118,146,197,254,139,196,6,248,100,30,130,59,196,142,122,
    125,69,156,14,113,242,251,38,89,202,148,209,114,26,90,51,
    102,62,91,154,207,149,230,243,165,249,2,207,81,131,25,232,
    44,66,103,9,58,119,97,15,157,50,93,188,109,25,164,13,
    157,21,104,173,128,196,207,50,156,163,223,130,153,210,138,85,
    94,49,91,172,88,227,21,235,208,90,7,137,159,53,189,162,
    10,59,205,5,140,69,248,31,252,215,196,88,128,26,199,225,
    88,166,89,152,196,94,24,239,37,161,69,207,171,52,80,228,
    218,52,140,228,33,252,144,66,248,79,224,248,5,86,30,194,
    51,64,193,130,108,137,44,56,227,201,153,5,253,38,156,10,
    232,56,16,216,112,138,175,169,144,2,251,2,206,45,248,198,
    38,134,51,28,29,116,244,58,56,74,199,175,195,142,214,146,
    70,224,172,2,167,21,216,121,113,106,17,225,176,6,233,63,
    224,219,85,22,58,202,66,45,56,197,209,129,115,7,206,170,
    240,28,153,144,212,169,145,249,226,197,41,90,138,148,157,166,
    131,218,110,151,204,37,83,130,48,141,253,174,84,51,56,247,
    122,126,234,119,189,143,35,63,59,120,38,143,195,182,108,214,
    13,95,146,109,246,124,117,224,242,66,155,60,210,237,41,22,
    152,196,82,141,225,100,47,140,3,175,155,4,71,145,84,163,
    36,205,219,11,35,233,121,252,240,147,110,47,73,213,71,105,
    154,164,46,57,149,137,81,226,23,43,200,165,237,40,201,100,
    147,222,198,175,113,73,188,34,238,189,30,75,36,5,88,89,
    90,28,200,172,157,134,61,133,177,210,18,137,155,164,53,41,
    74,60,100,207,112,216,58,72,186,114,107,207,111,31,69,170,
    191,181,47,187,15,183,118,143,194,40,216,122,234,126,182,213,
    235,171,131,36,222,66,90,24,43,137,158,136,182,174,248,96,
    19,153,200,59,217,73,184,239,133,108,135,119,32,163,158,76,
    39,136,186,76,111,18,83,98,92,84,133,45,154,98,2,103,
    21,252,218,98,213,26,19,219,33,89,210,38,235,8,70,78,
    25,56,20,77,1,135,22,164,171,4,139,14,126,4,197,17,
    193,177,67,207,44,126,246,27,114,129,166,118,108,10,182,38,
    158,50,148,16,83,200,249,152,162,27,3,227,161,2,157,42,
    104,156,32,188,52,112,210,62,141,200,78,98,44,20,238,64,
    246,119,64,151,34,66,78,33,71,207,185,13,34,158,2,85,
    167,100,70,234,2,190,240,79,12,192,157,38,169,191,205,48,
    80,7,97,150,156,196,236,108,154,115,202,236,160,103,190,232,
    127,190,219,145,109,149,109,32,225,171,228,168,209,246,227,56,
    81,13,63,8,26,190,82,105,184,123,164,100,214,80,73,227,
    94,214,164,248,185,211,6,73,133,188,126,207,32,135,162,140,
    200,209,63,130,176,173,240,199,44,255,224,40,100,82,33,10,
    14,146,32,67,58,137,216,151,202,37,37,21,57,57,97,69,
    24,36,30,177,210,235,145,239,14,254,126,106,52,97,36,54,
    171,6,55,153,140,246,84,157,33,232,103,153,199,154,16,157,
    209,70,130,143,253,232,72,178,244,12,229,161,66,52,213,58,
    12,3,111,75,164,187,49,149,245,143,147,56,232,163,58,97,
    251,62,189,105,137,81,55,206,184,155,71,204,141,224,88,197,
    255,171,98,193,106,59,57,210,170,6,109,84,230,20,112,172,
    69,30,110,68,222,57,150,148,166,197,53,129,77,224,156,123,
    155,102,180,216,93,165,97,141,134,117,26,54,140,149,111,216,
    212,137,203,166,62,34,241,22,219,199,150,144,251,109,99,73,
    112,33,111,238,14,242,6,43,221,14,225,223,162,44,25,224,
    223,161,170,152,62,161,17,89,57,179,108,200,190,164,26,76,
    121,194,194,40,37,16,220,52,27,64,158,253,226,78,145,189,
    163,6,173,46,65,176,140,195,253,18,14,93,10,9,131,208,
    189,107,10,156,71,28,26,126,238,10,137,170,92,227,216,6,
    13,111,13,201,187,3,32,237,95,1,210,251,244,166,169,28,
    72,19,12,160,58,126,167,172,182,157,187,188,216,231,102,47,
    1,136,208,227,92,131,158,239,211,204,190,106,228,112,129,147,
    155,246,113,9,56,164,141,85,182,96,27,39,253,69,82,188,
    12,153,69,220,163,159,199,139,184,237,90,188,237,254,152,183,
    93,222,186,185,153,209,69,214,230,58,171,39,21,242,192,158,
    13,11,249,118,154,213,112,236,165,201,203,126,35,217,107,40,
    54,145,106,226,227,123,217,230,189,236,125,172,118,141,39,92,
    103,116,189,211,21,45,149,61,170,72,180,244,163,151,109,201,
    155,24,255,242,60,93,128,60,46,70,94,190,57,34,122,230,
    201,127,150,113,44,151,226,76,165,84,129,135,225,218,122,225,
    90,210,244,83,146,93,103,191,218,98,17,145,82,23,172,128,
    167,11,45,119,69,252,20,191,31,144,175,201,72,9,212,207,
    186,59,90,61,214,156,108,112,127,120,1,13,111,86,111,119,
    11,5,253,214,160,160,58,64,1,125,109,131,227,191,0,183,
    135,2,254,12,20,103,12,103,142,227,2,246,20,216,89,98,
    255,61,48,224,175,217,165,185,86,236,208,206,204,28,88,66,
    178,71,204,170,55,237,79,225,175,165,108,49,91,171,157,55,
    128,229,173,213,41,234,12,3,228,181,182,79,231,98,65,162,
    88,28,248,25,177,233,42,51,72,192,65,229,46,250,54,172,
    178,111,24,45,163,90,170,71,10,124,51,192,10,109,78,43,
    98,214,42,33,224,39,52,188,91,4,95,24,218,155,211,101,
    3,110,222,56,61,93,171,191,166,23,58,172,226,228,8,151,
    233,146,140,2,204,21,3,230,119,11,48,75,222,85,94,113,
    199,79,163,69,225,60,183,4,30,195,176,101,162,83,143,3,
    178,2,173,42,193,158,251,89,145,103,133,48,85,136,106,214,
    133,45,139,125,176,173,189,83,68,84,7,139,134,151,195,200,
    110,138,215,227,200,239,238,6,254,147,136,36,147,248,182,201,
    19,203,232,58,85,214,149,48,46,110,82,151,127,62,52,58,
    31,15,35,179,127,134,130,10,93,25,199,65,210,230,116,254,
    242,64,54,186,178,187,139,199,182,131,176,215,216,139,252,125,
    246,187,157,219,242,185,177,69,113,224,46,111,241,217,3,26,
    147,70,59,137,177,160,30,181,85,146,54,2,137,103,25,25,
    52,126,212,224,106,220,8,179,134,191,139,79,253,182,210,152,
    189,152,101,220,41,250,233,126,198,77,225,225,9,77,135,21,
    55,15,207,165,33,118,195,49,20,123,157,62,48,21,197,149,
    251,92,157,2,184,45,225,41,69,245,117,121,161,237,222,221,
    164,225,7,48,196,26,252,30,249,128,36,146,51,170,98,197,
    170,89,106,250,98,146,125,65,235,178,171,169,246,239,215,73,
    53,125,215,145,39,92,149,56,229,8,29,131,105,172,81,33,
    110,213,13,113,140,199,113,38,78,24,226,29,30,39,153,56,
    101,136,211,60,206,48,113,214,16,231,120,156,103,226,130,33,
    46,242,184,196,196,187,134,184,204,227,10,19,87,13,113,141,
    199,117,38,110,152,203,156,6,19,223,130,214,219,116,219,65,
    148,119,168,90,140,252,175,213,130,211,111,88,137,119,244,70,
    139,132,251,232,255,161,170,251,115,200,247,251,155,10,132,40,
    219,49,161,11,68,71,152,99,66,217,8,190,94,88,186,14,
    195,94,59,149,190,146,58,4,171,195,177,139,171,138,126,207,
    203,65,214,95,237,112,159,22,38,156,115,99,211,159,227,200,
    232,3,17,71,70,60,143,151,177,213,117,184,213,125,76,173,
    238,41,219,235,89,186,219,29,32,172,82,152,77,117,37,150,
    39,222,21,211,117,63,75,186,249,189,158,140,3,247,1,148,
    91,84,126,60,140,40,83,25,59,135,82,151,97,139,57,236,
    73,175,102,15,85,229,146,73,28,162,74,145,47,67,10,22,
    131,240,111,6,132,205,239,65,185,52,187,143,105,224,98,92,
    212,97,247,151,133,171,55,174,69,216,175,63,244,112,223,9,
    143,37,29,115,110,229,193,174,135,15,18,5,69,173,95,187,
    98,55,58,244,178,240,91,45,244,22,22,146,73,123,143,33,
    168,251,215,242,7,190,242,189,32,204,116,179,74,87,168,36,
    251,117,121,233,37,4,153,43,79,110,48,89,166,126,38,189,
    200,87,223,225,150,1,143,113,75,65,81,141,107,87,196,71,
    93,175,23,249,177,204,88,236,173,76,36,151,112,56,32,221,
    160,74,207,223,151,3,135,223,198,99,212,45,40,55,132,8,
    139,66,80,248,224,22,22,19,69,67,184,65,137,147,52,84,
    183,249,117,192,99,20,45,40,156,158,92,43,3,25,73,164,
    93,89,173,8,255,249,253,73,128,254,74,147,62,30,119,249,
    60,137,191,35,207,27,90,103,242,11,93,32,33,163,220,199,
    206,68,84,177,55,153,23,23,254,172,90,181,38,184,181,187,
    116,247,175,21,34,127,232,83,84,63,115,121,155,153,44,210,
    151,111,168,77,199,69,153,206,158,217,246,187,250,178,145,111,
    214,220,119,32,191,37,113,239,23,101,128,174,139,248,232,170,
    175,0,176,218,114,219,201,93,166,251,83,162,211,237,80,247,
    225,166,49,111,83,18,222,158,97,166,60,43,39,138,197,92,
    106,237,18,179,246,197,211,188,129,221,254,221,103,106,229,90,
    142,157,176,171,175,112,57,15,203,207,131,212,199,249,252,37,
    106,38,211,208,143,8,156,100,185,33,243,226,171,175,164,99,
    86,233,55,119,137,151,183,84,198,68,42,247,209,38,244,225,
    244,197,21,249,166,195,49,188,30,233,229,213,195,194,144,62,
    59,233,91,153,39,100,83,246,1,14,116,9,91,155,172,33,
    158,104,55,178,69,29,247,35,199,30,159,170,57,227,99,53,
    167,54,98,243,205,218,4,158,133,235,78,109,108,92,152,191,
    13,196,90,221,218,88,172,137,255,2,190,127,85,91,
};

EmbeddedPython embedded_m5_internal_param_FlashDevice(
    "m5/internal/param_FlashDevice.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_FlashDevice.py",
    "m5.internal.param_FlashDevice",
    data_m5_internal_param_FlashDevice,
    2398,
    7197);

} // anonymous namespace