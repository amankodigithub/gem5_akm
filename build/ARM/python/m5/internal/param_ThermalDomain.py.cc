#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ThermalDomain[] = {
    120,156,189,88,235,114,219,198,21,62,11,128,148,72,73,150,
    100,221,108,75,141,216,118,220,176,110,43,245,18,215,157,177,
    199,141,147,38,51,205,76,149,20,74,199,142,146,41,10,17,
    43,9,20,9,112,128,149,109,102,164,63,149,167,237,11,244,
    17,250,163,111,211,55,106,207,119,150,0,161,219,76,50,49,
    43,147,235,229,98,113,246,92,190,243,157,221,237,208,232,175,
    198,223,247,91,68,249,129,34,138,248,163,168,71,212,87,180,
    167,72,105,69,209,50,29,215,40,123,143,162,26,189,33,218,
    115,72,59,116,206,29,151,190,116,40,153,149,119,234,212,115,
    101,68,209,176,73,218,163,189,26,61,79,22,201,211,117,58,
    110,82,246,23,82,74,37,138,94,68,83,20,77,211,27,150,
    206,157,134,8,156,38,12,54,101,176,65,209,140,12,54,41,
    154,149,206,12,13,23,72,207,210,222,28,166,237,221,98,177,
    15,88,236,188,136,253,15,196,70,252,100,133,162,91,152,206,
    122,125,129,153,30,102,202,122,243,34,101,161,208,114,145,246,
    110,23,253,165,74,127,89,250,188,210,109,234,174,80,119,149,
    186,107,196,14,137,22,75,169,119,72,187,212,189,75,123,119,
    73,243,231,14,157,179,127,162,219,149,55,238,201,27,75,229,
    27,235,242,198,6,237,109,144,230,207,186,125,163,78,187,237,
    85,246,121,252,95,254,107,179,207,201,204,114,243,82,103,121,
    156,38,65,156,28,164,177,131,231,117,52,136,80,7,205,212,
    40,84,31,34,84,255,38,137,83,228,140,66,117,70,44,88,
    193,150,158,67,103,210,57,115,104,216,166,83,69,93,143,34,
    151,78,121,153,26,20,56,84,116,238,208,87,46,38,156,113,
    235,177,67,223,33,207,216,56,117,197,161,86,210,20,157,213,
    232,180,70,187,47,78,29,12,28,55,40,251,23,125,189,33,
    66,167,69,168,67,167,220,122,116,238,209,89,157,158,243,36,
    30,234,54,96,190,122,113,202,150,242,200,110,219,99,109,119,
    42,230,194,148,40,206,146,176,175,205,50,247,131,65,152,133,
    253,224,243,35,157,245,195,222,239,210,126,24,39,237,102,49,
    51,205,183,6,161,57,242,229,85,23,62,233,15,140,136,76,
    19,109,102,184,115,16,39,81,208,79,163,147,158,54,211,144,
    23,28,196,61,29,4,242,240,247,253,65,154,153,143,178,44,
    205,124,184,85,6,123,105,88,190,1,167,118,122,105,174,219,
    88,77,150,241,33,222,96,246,193,64,36,66,1,81,23,47,
    71,58,239,100,241,192,112,180,172,68,204,134,180,54,226,36,
    77,254,49,55,219,71,105,95,111,31,132,157,147,158,25,110,
    31,234,254,195,237,253,147,184,23,109,63,243,255,176,61,24,
    154,163,52,217,230,177,56,49,154,125,209,219,190,198,11,91,
    60,237,54,228,189,138,15,131,88,44,9,142,116,111,160,179,
    57,140,222,195,90,106,65,205,170,186,114,85,91,205,113,175,
    198,95,87,109,56,51,106,39,134,45,29,216,7,40,121,85,
    240,32,162,138,142,29,202,54,0,141,46,127,20,98,201,0,
    217,197,51,71,158,253,17,78,176,163,93,23,1,183,131,167,
    2,39,198,21,207,124,130,8,39,36,152,168,81,183,78,22,
    43,12,49,11,158,108,136,150,167,67,140,195,194,61,202,255,
    73,236,84,70,201,41,141,16,116,238,146,74,22,200,52,145,
    184,60,186,202,11,254,85,64,184,219,134,250,59,2,4,115,
    20,231,233,171,68,220,141,190,164,205,46,123,230,179,225,167,
    251,93,221,49,249,38,15,124,145,158,180,58,97,146,164,166,
    21,70,81,43,52,38,139,247,79,140,206,91,38,109,221,207,
    219,136,160,191,88,96,169,148,55,28,20,216,65,156,25,59,
    246,71,20,119,12,255,88,146,31,18,133,92,27,198,193,81,
    26,229,60,14,17,135,218,248,80,210,192,201,169,40,34,48,
    9,48,21,203,243,188,91,252,251,89,161,137,96,177,93,47,
    144,147,235,222,129,105,10,8,195,60,15,68,19,140,11,222,
    32,248,101,216,59,209,34,61,103,121,172,16,186,86,135,201,
    32,238,14,180,47,140,21,11,146,52,137,134,172,80,220,121,
    23,107,221,17,220,205,10,242,86,24,117,83,220,214,249,255,
    186,90,117,58,222,8,107,245,2,111,32,59,67,18,109,53,
    10,56,99,239,156,137,165,237,8,51,136,17,146,119,63,64,
    15,47,251,27,104,190,135,230,29,52,155,133,157,111,221,216,
    185,203,198,62,194,2,142,88,40,182,32,4,110,97,75,116,
    33,119,238,142,115,135,25,111,23,57,224,32,83,198,57,224,
    129,29,179,167,104,121,170,100,151,75,249,231,224,98,228,138,
    8,67,90,48,192,209,27,195,94,60,227,47,192,226,233,2,
    177,62,96,88,197,226,97,5,139,62,130,34,64,244,239,22,
    52,23,96,134,133,160,191,14,81,181,107,92,219,66,243,253,
    137,249,119,12,166,195,43,96,122,140,181,22,70,96,154,19,
    16,53,249,187,224,116,220,145,211,203,138,183,116,9,68,64,
    144,119,13,130,126,132,158,123,213,204,73,131,103,100,220,199,
    21,240,64,31,167,106,195,14,119,134,107,80,189,10,155,53,
    174,215,207,147,53,46,193,142,148,224,159,75,9,150,50,46,
    27,24,75,182,174,240,173,237,212,224,131,3,151,86,71,165,
    53,111,112,59,200,210,215,195,86,122,208,50,98,36,184,241,
    201,253,124,235,126,254,152,89,175,245,84,248,198,242,158,101,
    182,76,15,192,76,120,245,163,215,29,45,229,76,126,5,129,
    37,162,64,72,41,24,149,73,70,208,10,60,232,20,174,21,
    74,206,77,6,38,158,140,115,155,165,115,161,235,39,144,222,
    20,207,186,106,141,209,210,84,162,66,96,41,87,246,72,242,
    148,191,31,192,219,48,83,19,118,177,254,174,85,80,116,135,
    21,254,79,47,32,226,109,107,238,111,179,168,63,21,72,168,
    143,145,128,175,91,160,249,239,36,219,69,69,127,35,196,154,
    67,58,66,115,9,126,4,119,9,211,255,76,2,251,107,42,
    182,112,198,46,170,180,204,96,42,201,31,201,84,91,192,63,
    161,127,84,114,166,40,179,238,104,67,88,45,179,94,201,55,
    2,146,111,84,74,189,139,196,132,104,28,133,57,166,89,182,
    25,167,225,152,195,203,93,28,179,237,91,71,204,180,149,27,
    64,133,175,198,120,65,161,90,87,75,78,5,5,191,64,243,
    203,18,0,170,24,123,155,218,108,210,205,101,52,176,188,253,
    37,150,244,68,201,249,41,97,147,11,82,74,80,215,10,80,
    63,46,65,173,165,198,188,145,115,0,90,7,65,61,119,20,
    31,194,120,19,133,51,143,71,186,70,123,245,226,220,54,133,
    60,0,11,8,28,139,175,16,19,22,190,80,201,196,33,59,
    214,85,101,128,109,236,208,188,158,76,194,35,124,79,122,97,
    127,63,10,159,118,33,27,11,116,138,196,113,10,109,23,170,
    218,2,244,234,38,133,229,231,195,66,235,151,147,73,246,95,
    147,232,98,181,21,104,71,105,71,50,156,167,182,250,186,191,
    207,39,187,163,120,208,58,232,133,135,226,123,119,100,205,167,
    133,53,70,162,120,185,250,231,15,208,166,173,78,154,48,207,
    158,116,76,154,181,34,205,135,29,29,181,126,214,18,146,110,
    197,121,43,220,231,167,97,199,88,16,95,76,60,217,72,134,
    217,97,46,123,198,227,87,232,78,46,118,1,31,94,99,222,
    46,247,104,92,4,75,218,171,70,207,216,208,21,148,117,33,
    122,114,162,90,185,156,9,72,161,157,52,210,149,250,35,123,
    100,12,77,196,158,41,75,37,88,115,48,54,199,238,197,202,
    18,34,251,122,155,226,92,126,249,84,102,134,150,66,145,166,
    254,22,154,31,163,121,74,19,45,55,239,145,189,40,144,146,
    87,87,235,78,195,169,59,102,233,178,15,63,195,219,249,85,
    78,217,255,38,156,98,175,116,70,204,82,199,76,61,133,91,
    0,180,13,4,17,55,54,181,209,141,13,6,237,141,77,93,
    70,110,129,122,166,190,43,245,72,38,79,46,135,95,190,85,
    198,241,31,253,127,148,245,127,67,163,253,196,77,108,163,170,
    150,204,85,179,239,178,25,146,122,247,174,135,77,208,201,116,
    104,180,13,196,198,164,108,19,154,178,43,13,43,36,114,101,
    39,253,172,52,227,92,54,79,195,101,137,143,61,124,73,124,
    212,243,228,30,111,169,61,217,82,63,193,150,250,84,108,14,
    28,187,171,30,35,173,86,154,190,6,70,209,175,130,107,204,
    183,59,103,104,23,14,6,58,137,252,7,84,221,12,203,227,
    201,68,27,84,114,70,149,189,140,171,150,121,247,123,53,147,
    192,135,21,179,36,80,181,50,119,38,22,50,129,227,155,2,
    142,237,121,170,18,164,255,91,52,66,137,99,54,252,160,116,
    248,79,110,192,26,202,72,28,246,2,163,251,76,170,161,57,
    201,52,14,88,223,106,62,147,183,80,224,53,207,196,167,2,
    244,72,247,180,209,215,5,220,64,233,209,49,59,210,92,97,
    211,33,159,136,228,192,193,191,123,65,48,65,62,127,159,69,
    157,64,38,202,11,243,185,170,51,163,175,56,141,122,67,73,
    105,191,116,61,108,149,192,73,215,110,172,135,185,47,204,48,
    95,250,89,174,48,139,2,133,144,200,65,111,39,236,219,187,
    40,185,118,241,127,72,163,227,179,255,110,25,47,220,36,200,
    105,198,158,12,57,57,100,219,33,187,12,255,87,24,71,175,
    255,112,171,48,105,203,154,180,27,247,237,149,156,92,162,246,
    31,154,197,75,211,162,140,109,149,50,95,29,205,117,198,161,
    138,191,182,87,113,197,176,129,33,151,229,66,159,242,151,84,
    192,171,204,37,209,203,244,97,156,179,32,145,82,190,49,202,
    106,120,218,180,110,64,85,245,237,201,69,219,238,122,237,33,
    251,41,46,109,114,236,22,112,179,214,152,111,112,228,145,240,
    46,31,118,231,148,231,206,46,52,188,217,153,134,215,152,114,
    229,170,100,142,15,53,77,175,49,51,171,240,111,179,209,80,
    77,103,115,161,161,254,7,141,153,157,149,
};

EmbeddedPython embedded_m5_internal_param_ThermalDomain(
    "m5/internal/param_ThermalDomain.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_ThermalDomain.py",
    "m5.internal.param_ThermalDomain",
    data_m5_internal_param_ThermalDomain,
    2235,
    6620);

} // anonymous namespace