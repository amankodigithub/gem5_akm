#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ThermalReference[] = {
    120,156,189,88,235,110,27,199,21,62,179,187,164,68,74,178,
    100,203,186,216,86,34,54,129,19,214,104,165,94,226,186,128,
    13,55,78,145,2,9,80,37,89,165,176,163,4,221,174,184,
    67,105,41,114,151,216,29,217,102,32,253,169,140,182,47,208,
    71,232,143,190,77,223,168,61,223,25,238,114,117,3,12,52,
    140,76,142,103,135,179,103,206,229,59,223,153,153,14,141,255,
    106,252,253,184,69,148,119,21,81,196,31,69,125,162,129,162,
    61,69,74,43,138,110,211,81,141,178,143,40,170,209,27,162,
    61,135,180,67,103,220,113,233,91,135,146,121,121,167,78,125,
    87,70,20,141,154,164,61,218,171,209,243,228,38,121,186,78,
    71,77,202,254,66,74,169,68,209,139,104,134,162,89,122,195,
    210,185,211,16,129,179,132,193,166,12,54,40,154,147,193,38,
    69,243,210,153,163,209,18,233,121,218,91,192,180,189,27,44,
    246,1,139,93,20,177,255,129,216,136,127,89,161,232,6,166,
    179,94,223,96,166,135,153,178,222,162,72,89,42,180,188,73,
    123,183,138,254,114,165,127,91,250,188,210,45,234,173,80,111,
    149,122,107,196,14,137,110,150,82,215,73,187,212,187,67,123,
    119,72,243,103,157,206,216,63,209,173,202,27,119,229,141,229,
    242,141,123,242,198,6,237,109,144,230,207,61,251,70,157,118,
    219,171,236,243,248,191,252,215,102,159,147,153,231,230,165,206,
    242,56,77,130,56,233,166,177,131,223,235,104,16,161,14,154,
    153,113,168,126,143,80,253,155,36,78,145,51,14,213,41,177,
    96,5,91,250,14,157,74,231,212,161,81,155,78,20,245,60,
    138,92,58,225,101,106,80,224,64,209,153,67,223,185,152,112,
    202,173,199,14,125,151,60,99,227,212,19,135,90,73,51,116,
    90,163,147,26,237,190,56,113,48,112,212,160,236,95,244,253,
    134,8,157,21,161,14,157,112,235,209,153,71,167,117,122,206,
    147,120,168,215,128,249,234,197,9,91,202,35,187,109,143,181,
    221,169,152,11,83,162,56,75,194,129,54,107,220,15,134,97,
    22,14,130,175,15,117,54,8,251,190,238,234,76,39,29,221,
    110,22,147,211,124,107,24,154,67,95,222,118,225,150,193,208,
    136,212,52,209,102,142,59,221,56,137,130,65,26,29,247,181,
    153,133,200,160,27,247,117,16,200,143,159,13,134,105,102,62,
    205,178,52,243,225,89,25,236,167,97,249,6,252,218,233,167,
    185,110,99,53,89,198,135,120,131,217,221,161,72,132,2,162,
    49,94,142,116,222,201,226,161,225,128,89,137,152,13,105,109,
    132,74,154,252,51,110,182,15,211,129,222,238,134,157,227,190,
    25,109,31,232,193,195,237,253,227,184,31,109,63,243,255,184,
    61,28,153,195,52,217,230,177,56,49,154,221,209,223,190,218,
    17,91,60,243,22,68,190,138,15,130,88,140,9,14,117,127,
    168,179,5,140,222,197,114,106,73,205,171,186,114,85,91,45,
    112,175,198,95,87,109,56,115,106,39,134,57,29,152,8,64,
    121,85,8,33,174,138,142,28,202,54,0,144,30,127,20,34,
    202,48,217,197,111,142,252,246,21,252,96,71,123,46,194,110,
    7,79,4,84,140,46,158,249,4,113,78,72,144,81,163,94,
    157,44,98,24,104,22,66,217,8,45,79,135,24,135,133,123,
    148,255,147,216,175,140,149,19,26,227,232,204,37,149,44,145,
    105,34,125,121,116,149,23,252,171,64,113,183,13,245,119,4,
    11,230,48,206,211,87,137,120,28,125,73,158,93,246,204,151,
    163,47,246,123,186,99,242,77,30,248,38,61,110,117,194,36,
    73,77,43,140,162,86,104,76,22,239,31,27,157,183,76,218,
    186,159,183,17,68,255,102,1,167,82,222,104,88,192,7,161,
    102,248,216,135,40,238,24,126,88,150,7,137,66,174,13,67,
    225,48,141,114,30,135,136,3,109,124,40,105,224,228,84,20,
    17,164,4,152,138,229,121,222,13,126,126,86,104,34,112,108,
    215,11,240,228,186,223,53,77,193,97,152,231,129,104,130,113,
    129,28,4,191,12,251,199,90,164,231,44,143,21,66,215,234,
    48,53,208,173,195,128,194,94,49,34,73,147,104,196,58,197,
    157,15,177,220,186,64,111,94,192,183,194,192,155,225,182,206,
    255,215,213,170,211,241,198,112,171,23,144,3,235,25,146,128,
    171,113,204,25,126,103,204,48,109,71,40,66,236,144,236,123,
    15,61,188,236,111,160,121,7,205,187,104,54,11,83,167,97,
    239,194,69,123,31,97,13,71,140,20,115,16,8,183,48,39,
    58,151,65,119,38,25,196,236,183,139,76,112,144,47,147,76,
    240,192,148,217,83,180,60,85,114,204,165,252,107,240,50,50,
    70,132,33,57,24,230,232,77,192,47,206,241,151,96,244,108,
    129,91,31,96,172,34,242,160,130,72,31,113,17,56,250,119,
    10,190,11,48,195,2,209,191,7,81,181,43,188,219,66,243,
    147,105,186,120,2,169,131,75,144,122,140,229,150,198,144,90,
    16,40,53,249,187,228,116,220,177,223,203,2,184,124,1,74,
    192,145,119,5,142,62,64,207,189,108,233,143,0,161,177,125,
    127,168,64,8,42,57,85,51,118,184,51,90,131,246,85,240,
    172,113,5,127,158,172,113,81,118,164,40,255,66,138,178,20,
    118,217,210,88,226,117,133,123,109,167,6,55,116,93,90,29,
    23,219,188,193,237,48,75,95,143,90,105,183,101,196,78,240,
    228,147,251,249,214,253,252,49,51,96,235,169,112,143,229,64,
    203,114,153,30,130,165,240,234,167,175,59,90,170,155,60,5,
    129,37,165,64,8,42,24,87,77,198,209,10,156,232,20,222,
    21,122,206,77,6,86,158,154,127,155,165,127,161,238,231,88,
    160,41,206,117,213,26,99,166,169,68,139,192,50,176,108,156,
    228,87,254,126,2,135,195,82,77,216,218,250,187,86,71,81,
    31,134,248,63,59,135,139,41,40,239,111,179,180,63,21,120,
    168,79,240,128,175,91,192,250,239,36,219,72,69,127,35,68,
    156,3,59,134,117,153,5,8,241,50,166,255,153,4,255,87,
    212,112,225,143,93,212,109,153,193,180,146,63,146,169,182,164,
    127,78,255,168,36,79,81,120,221,241,70,177,90,120,189,146,
    123,4,42,111,85,92,189,243,36,133,128,28,134,57,166,89,
    230,153,228,227,132,210,203,173,29,51,239,52,112,51,107,69,
    7,208,226,187,9,106,80,186,238,169,101,167,130,133,95,162,
    249,85,9,3,85,140,253,192,10,109,210,245,181,53,176,76,
    254,45,86,245,68,207,197,25,131,24,92,20,84,2,188,86,
    0,252,113,9,112,45,133,231,141,28,20,208,58,136,238,153,
    163,248,148,198,251,43,28,138,60,210,53,218,171,23,7,187,
    25,228,4,72,65,112,89,124,133,167,192,106,231,202,155,184,
    101,199,58,172,140,180,13,34,154,215,83,203,127,196,241,73,
    63,28,236,71,225,211,30,196,99,141,78,145,68,78,161,240,
    82,85,97,36,128,186,78,103,121,124,88,40,254,114,106,185,
    255,27,18,117,172,194,130,244,40,237,72,194,243,236,214,64,
    15,246,249,0,120,24,15,91,221,126,120,32,17,112,199,6,
    125,81,24,100,36,150,23,55,6,249,3,180,105,171,147,38,
    76,190,199,29,147,102,173,72,243,129,72,71,173,159,183,132,
    185,91,113,222,10,247,249,215,176,99,44,160,207,231,161,236,
    52,195,236,32,151,77,229,209,43,116,167,26,193,128,143,185,
    49,111,169,251,52,41,142,37,17,86,99,104,108,0,11,18,
    59,23,67,57,120,173,95,145,21,200,168,157,52,210,149,210,
    36,91,105,12,77,203,170,25,203,47,88,118,56,49,202,238,
    215,202,234,34,39,0,155,244,92,156,249,252,102,70,150,90,
    145,181,254,22,154,159,162,121,74,211,174,68,31,145,189,91,
    144,130,88,87,247,156,134,83,119,204,234,21,206,252,18,50,
    242,203,68,179,255,54,68,99,47,130,198,116,83,199,76,61,
    131,187,3,180,13,4,20,247,60,181,241,61,15,6,237,61,
    79,93,70,110,128,143,102,254,95,62,146,220,158,106,86,191,
    252,65,105,200,127,244,163,233,235,255,150,198,123,142,235,40,
    72,85,141,89,168,230,227,69,75,36,25,223,185,22,63,65,
    39,211,161,209,54,34,27,83,180,80,24,204,46,54,170,144,
    203,165,157,247,179,210,152,51,217,102,141,110,75,160,236,145,
    77,2,165,158,39,119,121,11,238,201,22,252,9,182,224,39,
    98,121,224,216,93,248,4,117,181,210,1,184,138,73,244,171,
    75,138,89,39,216,205,54,20,12,135,67,157,68,254,3,170,
    238,159,229,231,169,69,30,20,115,74,149,141,143,171,110,243,
    134,249,114,110,129,42,43,198,73,196,106,101,54,77,51,118,
    130,206,55,5,58,219,139,84,229,78,255,119,104,132,45,39,
    68,249,73,233,249,15,174,135,158,209,3,166,218,208,28,103,
    26,135,178,183,157,202,108,46,7,231,202,152,56,81,80,30,
    233,190,54,250,154,56,203,86,109,124,44,143,52,151,221,116,
    196,103,39,57,151,240,115,63,8,166,203,237,31,179,180,99,
    136,69,181,97,110,87,117,102,247,21,167,81,111,40,41,249,
    23,110,151,173,30,48,202,238,191,71,185,47,228,176,88,250,
    86,174,63,139,122,133,48,200,169,112,39,28,216,75,44,185,
    172,241,223,167,241,113,219,255,176,140,17,46,31,228,208,99,
    143,145,156,25,178,29,145,221,135,255,107,140,163,55,120,184,
    85,88,181,101,173,218,141,7,246,46,79,46,96,7,15,205,
    205,11,211,162,44,228,254,202,133,209,92,103,113,216,143,191,
    183,119,120,197,176,129,33,23,229,66,159,242,73,170,225,149,
    228,37,49,204,244,65,156,179,44,17,84,190,52,78,105,56,
    219,188,127,61,162,170,2,166,26,118,187,51,182,71,243,167,
    192,109,142,93,4,46,230,26,139,13,134,0,18,222,229,243,
    241,130,242,220,249,165,134,55,63,215,240,26,51,174,220,177,
    44,240,9,168,233,53,230,230,21,254,109,54,26,170,233,108,
    46,53,212,255,0,233,72,186,226,
};

EmbeddedPython embedded_m5_internal_param_ThermalReference(
    "m5/internal/param_ThermalReference.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_ThermalReference.py",
    "m5.internal.param_ThermalReference",
    data_m5_internal_param_ThermalReference,
    2233,
    6692);

} // anonymous namespace
