#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_EmulatedDriver[] = {
    120,156,189,88,235,114,219,198,21,62,11,128,148,72,145,22,
    101,221,108,75,141,144,116,220,176,158,86,108,211,56,206,76,
    20,77,211,198,237,52,63,148,20,76,199,54,147,41,10,17,
    75,17,20,8,112,128,149,101,102,168,254,168,60,109,95,160,
    143,208,31,125,155,190,81,123,206,89,0,36,37,185,227,153,
    136,149,137,245,98,177,123,246,92,190,115,217,237,66,246,87,
    194,231,151,54,64,218,19,0,62,254,4,132,0,67,1,29,
    1,66,10,240,55,224,180,4,201,135,224,151,224,53,64,199,
    0,105,192,37,118,76,248,198,128,168,198,107,202,16,154,60,
    34,96,92,5,105,65,167,4,207,162,53,176,100,25,78,171,
    144,252,9,132,16,145,128,231,254,18,248,203,240,26,169,99,
    167,194,4,151,129,6,171,60,88,1,127,133,7,171,224,215,
    184,179,2,227,6,200,26,116,234,52,173,115,7,201,62,66,
    178,171,76,246,223,68,214,199,47,155,224,223,161,233,200,215,
    11,154,105,209,76,222,111,149,169,52,114,46,215,160,115,55,
    239,175,207,244,55,184,143,59,221,133,193,38,12,182,96,176,
    13,168,16,127,173,160,122,15,164,9,131,251,208,185,15,18,
    127,247,224,18,245,227,223,157,89,241,128,87,172,23,43,118,
    120,197,46,116,118,65,226,111,71,175,40,67,187,185,133,58,
    15,254,131,127,77,212,57,168,26,54,47,101,146,6,113,228,
    6,81,47,14,12,250,94,166,134,44,212,165,102,41,51,213,
    175,201,84,255,2,182,147,111,100,166,186,0,36,44,72,150,
    208,128,11,238,92,24,48,110,194,68,192,192,2,223,132,9,
    110,83,34,6,78,4,92,26,240,173,73,19,46,176,181,80,
    161,239,128,165,180,157,6,172,80,77,105,9,46,74,48,41,
    65,251,249,196,160,129,211,10,36,255,132,239,118,153,232,50,
    19,53,96,130,173,5,151,22,92,148,225,25,78,194,161,65,
    133,196,23,207,39,40,41,142,180,155,22,114,123,52,35,46,
    137,226,7,73,228,13,165,218,196,190,59,242,18,111,232,62,
    29,158,133,158,146,254,231,73,128,202,104,86,243,169,113,186,
    63,242,84,223,225,181,38,41,101,56,82,76,51,142,164,90,
    193,78,47,136,124,119,24,251,103,161,84,203,68,208,237,5,
    161,116,93,254,248,187,225,40,78,212,211,36,137,19,135,244,
    202,131,97,236,21,43,72,171,221,48,78,101,147,118,227,109,
    28,34,175,104,118,111,196,20,137,1,230,151,22,251,50,237,
    38,193,72,161,185,52,69,154,77,212,154,100,40,110,210,223,
    98,211,234,199,67,217,234,121,221,179,80,141,91,39,114,248,
    184,117,124,22,132,126,235,249,199,31,181,70,99,213,143,163,
    22,142,5,145,146,168,140,176,117,147,26,246,113,222,93,34,
    120,30,156,184,1,139,226,246,101,56,146,73,157,70,31,208,
    102,162,33,106,162,44,76,209,20,117,236,149,240,49,197,174,
    177,34,142,2,18,166,75,2,18,152,172,89,248,144,77,5,
    156,26,144,236,18,56,6,248,19,100,77,132,72,155,190,25,
    252,237,247,164,5,61,58,48,201,228,122,112,194,128,66,100,
    225,204,3,178,113,4,140,138,18,12,202,160,209,130,32,211,
    240,73,198,212,226,116,34,99,32,113,11,210,127,0,106,21,
    113,50,129,12,67,151,38,136,168,1,170,74,174,139,163,91,
    184,225,95,24,134,237,38,177,127,196,72,80,253,32,141,207,
    35,214,55,245,217,113,218,168,153,175,198,95,30,15,100,87,
    165,123,56,240,34,62,179,187,94,20,197,202,246,124,223,246,
    148,74,130,227,51,37,83,91,197,246,195,180,73,38,116,214,
    114,48,21,244,198,163,28,60,100,104,4,143,126,241,131,174,
    194,151,117,126,97,43,164,82,33,16,250,177,159,226,56,145,
    56,145,202,33,38,21,41,57,102,70,24,39,46,77,165,237,
    113,222,29,124,255,44,231,132,193,216,44,231,208,73,101,216,
    83,85,70,161,151,166,46,115,66,227,12,56,34,252,210,11,
    207,36,83,79,145,30,50,68,93,205,195,130,32,119,143,216,
    207,165,101,17,162,56,242,199,200,81,208,125,159,54,187,199,
    192,171,49,244,54,17,118,75,216,150,241,255,178,216,50,186,
    86,6,182,114,14,56,138,119,10,216,220,34,179,56,130,239,
    18,99,75,211,224,224,192,82,176,231,189,71,61,90,236,236,
    82,243,3,106,222,161,102,47,23,244,246,165,173,95,149,246,
    9,237,96,176,136,44,12,25,193,204,133,241,231,188,231,254,
    212,123,48,234,181,201,11,12,242,149,169,23,88,20,33,147,
    67,106,113,42,251,151,9,233,215,20,143,201,91,152,24,57,
    6,66,156,122,83,224,179,106,156,6,137,188,156,99,214,33,
    32,206,162,241,100,6,141,14,89,133,161,232,220,207,35,157,
    75,51,52,8,157,29,34,85,186,65,183,54,53,239,46,78,
    193,83,56,157,92,131,211,39,180,89,35,131,83,157,97,84,
    197,167,97,116,205,76,235,69,218,91,191,2,35,194,144,117,
    3,134,126,68,61,243,186,156,11,135,79,38,221,111,102,224,
    67,12,25,179,66,28,97,103,188,77,188,207,2,103,27,179,
    246,179,104,27,19,177,193,137,248,103,156,136,57,153,115,25,
    163,3,174,201,49,87,119,74,164,132,158,9,91,89,130,77,
    43,216,142,146,248,213,216,142,123,182,98,41,41,62,30,60,
    76,247,31,166,159,96,228,179,15,57,230,232,216,167,163,91,
    34,71,20,157,104,233,211,87,93,201,57,141,223,92,87,7,
    35,151,3,147,155,229,74,196,16,37,108,86,56,235,150,195,
    114,170,18,138,198,11,210,110,181,208,46,49,251,5,145,175,
    178,106,77,177,141,120,169,10,230,193,213,113,151,75,37,254,
    138,207,175,72,221,36,167,4,42,102,157,182,230,144,153,39,
    49,156,159,204,97,226,214,89,119,90,72,235,15,57,22,202,
    83,44,208,99,230,128,254,27,112,217,40,224,175,64,214,70,
    163,102,128,46,240,79,230,93,167,233,127,4,70,254,13,121,
    155,227,70,155,114,53,207,192,112,146,62,225,169,58,141,127,
    1,127,159,113,155,60,217,154,89,97,56,155,108,173,34,230,
    48,76,222,42,161,90,243,193,137,204,209,247,82,154,166,35,
    206,212,19,167,129,188,40,230,48,226,222,62,102,150,53,97,
    151,120,248,118,138,24,74,87,59,98,221,152,193,193,207,169,
    249,160,128,128,200,199,110,149,157,61,120,115,54,117,117,244,
    254,134,246,180,152,203,213,37,174,22,230,201,20,192,46,229,
    192,254,160,0,182,228,84,243,154,143,4,212,26,100,215,75,
    67,224,121,12,171,41,58,254,88,32,75,208,41,147,11,112,
    181,43,50,15,17,121,80,162,16,54,151,199,88,19,71,90,
    71,133,105,181,213,168,121,181,32,103,39,195,29,132,222,240,
    216,247,14,7,68,156,118,232,230,62,99,228,236,54,102,217,
    37,188,139,55,113,204,175,143,115,182,95,46,200,209,63,2,
    102,70,179,203,176,246,227,46,123,247,215,125,105,15,229,240,
    24,79,119,253,96,100,247,66,239,132,181,111,102,226,124,153,
    139,163,216,124,87,179,127,250,136,218,216,238,198,17,70,217,
    179,174,138,19,219,151,120,222,145,190,253,83,155,67,180,29,
    164,182,119,140,95,189,174,210,248,157,119,58,46,37,189,228,
    36,229,170,241,244,156,186,11,180,158,139,39,216,0,43,230,
    16,138,28,168,207,85,69,196,101,116,107,119,192,116,133,39,
    25,53,214,1,135,42,1,103,159,154,31,195,98,3,243,135,
    160,143,214,41,169,164,44,118,140,138,161,54,174,249,220,87,
    180,58,189,238,121,47,222,198,243,244,29,8,78,144,101,24,
    44,113,187,76,113,153,174,56,172,236,138,131,6,87,160,83,
    203,175,86,234,228,160,229,239,235,160,12,247,5,2,61,189,
    85,191,116,158,252,159,184,117,62,134,44,227,190,201,39,231,
    202,180,207,180,79,106,109,99,94,30,111,176,100,186,182,103,
    201,196,179,232,1,214,107,22,215,107,7,84,175,77,184,166,
    115,13,93,178,77,141,196,37,55,223,20,80,33,28,201,115,
    247,38,160,233,186,140,204,239,141,70,50,242,157,71,48,91,
    106,241,231,5,41,138,60,239,28,102,242,164,41,54,176,182,
    186,14,67,138,37,51,130,49,220,74,5,240,118,23,107,202,
    63,231,166,108,222,153,11,40,206,1,53,141,185,232,161,213,
    253,238,27,124,154,239,135,248,152,143,21,251,91,204,194,180,
    205,193,45,31,96,133,41,138,179,190,12,165,146,55,218,83,
    17,71,217,41,205,151,24,160,227,49,150,211,92,172,226,123,
    232,186,139,140,112,159,34,173,4,178,35,0,70,56,60,81,
    109,26,149,114,69,112,98,184,114,193,168,121,160,99,146,46,
    201,198,169,195,30,179,90,40,146,239,192,242,96,77,234,230,
    67,194,17,170,66,95,172,209,169,221,249,33,100,103,47,231,
    253,194,22,116,14,229,58,88,159,42,16,251,156,180,56,71,
    57,191,200,181,56,124,188,159,75,180,175,37,106,7,67,125,
    165,195,183,112,195,199,106,237,202,52,63,241,176,191,121,101,
    52,149,73,224,133,193,119,250,42,39,31,86,36,200,85,186,
    196,79,241,198,25,129,89,153,87,37,91,47,145,39,65,138,
    148,152,76,177,36,115,218,79,255,39,206,102,151,47,208,220,
    186,110,210,103,180,67,58,245,167,135,216,208,221,76,101,181,
    34,202,6,57,180,137,71,165,186,176,204,90,163,98,213,86,
    42,86,101,201,228,163,118,29,11,226,170,85,89,169,9,250,
    183,135,16,169,26,123,245,138,248,47,208,71,55,253,
};

EmbeddedPython embedded_m5_internal_param_EmulatedDriver(
    "m5/internal/param_EmulatedDriver.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_EmulatedDriver.py",
    "m5.internal.param_EmulatedDriver",
    data_m5_internal_param_EmulatedDriver,
    2142,
    6177);

} // anonymous namespace
