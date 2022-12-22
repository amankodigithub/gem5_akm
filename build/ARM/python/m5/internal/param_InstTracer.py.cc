#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_InstTracer[] = {
    120,156,189,88,253,114,219,198,17,223,3,64,74,164,40,139,
    178,190,108,75,141,208,180,110,88,79,43,182,105,92,119,38,
    170,166,174,147,206,36,211,200,41,232,142,29,38,83,20,2,
    142,36,40,16,224,0,39,219,204,80,255,84,158,182,47,208,
    71,232,31,125,155,190,81,187,187,7,128,148,100,207,100,166,
    98,41,242,116,56,220,237,237,199,111,63,238,124,200,63,21,
    252,253,198,6,200,122,2,32,192,175,128,8,96,36,160,43,
    64,72,1,193,38,156,86,32,253,8,130,10,188,1,232,26,
    32,13,184,192,142,9,95,27,16,55,120,77,21,34,147,71,
    4,76,234,32,45,232,86,224,121,188,14,150,172,194,105,29,
    210,63,131,16,34,22,240,34,88,130,96,25,222,32,117,236,
    212,152,224,50,208,96,157,7,107,16,172,240,96,29,130,6,
    119,86,96,210,4,217,128,238,42,77,235,222,66,178,15,144,
    236,26,147,253,55,145,13,240,205,22,4,183,104,58,242,245,
    21,205,180,104,38,239,183,198,84,154,5,151,235,208,189,93,
    244,55,230,250,155,220,199,157,110,195,112,11,134,219,48,220,
    1,84,72,176,94,82,189,3,210,132,225,93,232,222,5,137,
    223,59,112,129,250,9,110,207,173,184,199,43,54,202,21,187,
    188,98,15,186,123,32,241,187,171,87,84,161,211,218,70,157,
    135,255,193,79,11,117,14,170,129,205,75,153,102,97,18,187,
    97,220,75,66,131,222,87,169,33,11,249,212,44,229,166,122,
    66,166,250,23,176,157,2,35,55,213,57,32,97,65,178,68,
    6,156,115,231,220,128,73,11,166,2,134,22,4,38,76,113,
    155,10,49,208,23,112,97,192,55,38,77,56,199,214,66,133,
    190,7,150,210,118,26,178,66,53,165,37,56,175,192,180,2,
    157,23,83,131,6,78,107,144,254,19,190,221,99,162,203,76,
    212,128,41,182,22,92,88,112,94,133,231,56,9,135,134,53,
    18,95,188,152,162,164,56,210,105,89,200,237,241,156,184,36,
    74,16,166,177,55,146,106,29,251,238,216,75,189,145,251,89,
    156,169,103,169,231,203,180,85,47,166,37,217,193,216,83,3,
    135,215,153,164,144,209,88,49,189,36,150,106,5,59,189,48,
    14,220,81,18,156,69,82,45,19,49,183,23,70,210,117,249,
    229,103,163,113,146,170,79,211,52,73,29,210,41,15,70,137,
    87,174,32,141,250,81,146,201,22,237,198,219,56,68,94,209,
    236,222,152,41,18,3,204,43,45,14,100,230,167,225,88,161,
    169,52,69,154,77,212,90,100,36,110,178,39,216,180,7,201,
    72,182,123,158,127,22,169,73,187,47,71,15,219,39,103,97,
    20,180,31,59,95,180,199,19,53,72,226,54,142,133,177,146,
    168,136,168,125,85,5,7,56,231,54,17,123,21,246,221,144,
    197,112,7,50,26,203,116,149,70,239,209,70,162,41,26,162,
    42,76,209,18,171,216,171,224,207,20,123,198,138,56,14,73,
    16,159,132,35,16,89,243,176,33,91,10,56,53,32,221,35,
    80,12,241,43,200,138,8,141,14,189,51,248,221,31,72,3,
    122,116,104,146,169,245,224,148,129,132,136,194,153,135,100,219,
    24,24,13,21,24,86,65,163,4,193,165,97,147,78,168,197,
    233,68,198,64,226,22,100,255,0,212,40,226,99,10,57,118,
    46,76,16,113,19,84,157,92,22,71,183,113,195,191,48,252,
    58,45,98,255,152,81,160,6,97,150,188,138,89,215,212,103,
    135,233,160,102,190,156,60,61,25,74,95,101,251,56,240,85,
    114,102,251,94,28,39,202,246,130,192,246,148,74,195,147,51,
    37,51,91,37,246,253,172,69,230,115,214,11,32,149,244,38,
    227,2,56,100,100,4,142,126,8,66,95,225,195,6,63,176,
    21,50,169,16,4,131,36,200,112,156,72,244,165,114,136,73,
    69,74,78,152,17,198,136,75,83,105,123,156,119,11,159,31,
    23,156,48,16,91,213,2,54,153,140,122,170,206,8,244,178,
    204,101,78,104,156,193,70,132,95,122,209,153,100,234,25,210,
    67,134,168,171,121,88,0,220,238,16,235,133,164,204,126,156,
    196,193,4,185,9,253,15,104,163,59,12,186,6,195,110,11,
    33,183,132,109,21,255,87,197,182,225,91,57,208,170,5,216,
    40,198,41,96,83,139,220,218,8,188,11,140,39,45,131,3,
    2,75,192,30,247,62,245,104,177,179,71,205,247,168,121,143,
    154,253,66,200,155,149,116,245,170,164,143,136,186,193,226,177,
    32,164,124,179,16,36,184,228,53,119,103,94,131,81,174,67,
    232,55,200,71,102,232,183,40,34,166,71,212,226,84,246,43,
    19,178,103,20,127,201,75,152,24,57,4,66,155,122,51,192,
    179,90,156,38,137,187,92,96,213,33,0,206,163,176,63,135,
    66,135,44,194,16,116,238,22,209,205,165,25,26,124,206,46,
    145,170,188,69,175,54,53,223,95,140,114,103,48,234,95,131,
    209,199,180,81,51,135,209,42,195,167,142,191,166,225,155,185,
    198,203,20,183,113,5,62,132,29,235,45,216,249,17,245,204,
    235,50,46,20,54,185,100,191,155,131,13,49,99,204,11,112,
    140,157,201,14,241,61,15,152,29,204,206,207,227,29,76,184,
    6,39,220,159,113,194,229,164,205,229,138,14,176,38,199,88,
    221,169,144,2,122,38,108,231,137,52,171,97,59,78,147,215,
    19,59,233,217,138,37,164,120,120,120,63,59,184,159,125,140,
    145,206,62,226,24,163,99,157,142,102,169,28,83,52,162,165,
    159,190,246,37,231,47,126,114,93,29,124,92,14,68,110,158,
    23,17,59,91,164,62,163,208,43,135,225,76,165,20,125,23,
    160,217,122,169,89,98,244,115,34,93,103,181,154,98,7,113,
    82,23,188,191,171,99,44,151,67,252,22,127,191,37,85,147,
    140,18,168,96,117,58,154,59,102,156,68,112,126,114,9,11,
    55,202,182,211,70,58,127,44,48,80,157,97,128,126,102,1,
    226,191,1,151,133,2,254,10,100,101,52,102,14,226,18,243,
    100,214,13,154,254,39,96,180,191,37,63,115,156,232,80,78,
    230,25,24,62,178,71,60,85,167,235,207,225,239,115,174,82,
    36,85,51,47,252,230,147,170,85,198,24,134,199,119,74,156,
    214,229,96,68,166,24,120,25,77,211,17,102,230,125,179,160,
    93,22,108,24,97,111,22,43,203,154,168,75,251,127,51,67,
    10,165,165,93,177,97,204,217,255,231,212,124,88,154,94,20,
    99,55,198,202,62,188,59,99,186,58,74,127,77,251,89,204,
    225,218,146,218,193,255,188,220,125,242,244,247,79,143,59,115,
    244,74,84,87,10,84,127,88,162,90,114,110,121,195,53,63,
    181,6,25,246,194,16,120,224,194,178,137,206,55,22,200,10,
    116,171,132,127,46,105,69,238,30,162,136,70,20,187,46,37,
    46,86,199,177,86,84,105,91,109,54,106,94,47,192,203,201,
    114,135,145,55,58,9,188,163,33,17,38,234,126,225,48,70,
    193,106,115,158,85,2,187,120,23,183,252,248,176,96,249,229,
    2,60,252,151,192,140,104,86,25,207,65,226,179,91,63,27,
    72,123,36,71,39,120,108,27,132,99,187,23,121,125,214,186,
    153,139,242,180,16,69,177,217,174,166,249,236,1,181,137,237,
    39,184,95,122,230,171,36,181,3,137,135,25,25,216,63,181,
    57,38,219,97,102,123,39,248,214,243,149,6,239,101,111,227,
    90,209,75,251,25,151,133,167,175,168,187,32,171,185,120,44,
    13,177,28,142,160,76,120,250,192,84,134,88,46,116,181,47,
    96,110,194,99,138,154,232,40,67,41,223,57,160,230,199,176,
    184,72,252,17,232,179,114,70,170,168,138,93,163,102,40,218,
    126,54,235,75,90,149,93,247,178,79,190,139,151,233,11,141,
    220,215,170,32,151,232,0,76,151,21,149,252,178,2,253,174,
    250,191,250,29,35,121,65,24,206,110,212,221,156,71,255,7,
    78,157,95,65,158,65,223,229,106,151,202,173,199,218,213,180,
    150,49,207,78,54,89,42,93,155,179,84,226,121,124,15,235,
    46,139,235,174,67,170,187,166,92,155,185,134,46,189,102,198,
    225,146,153,79,247,155,216,196,242,149,123,21,71,186,182,34,
    147,123,227,177,140,3,231,1,204,151,75,252,122,1,10,34,
    103,122,9,115,57,207,20,155,88,31,93,135,29,133,134,57,
    129,24,94,149,18,104,123,139,51,223,121,97,62,125,220,46,
    227,131,115,72,77,243,82,48,208,177,129,245,76,137,49,144,
    145,84,242,154,170,217,143,243,195,79,32,49,28,38,19,172,
    86,185,30,196,231,200,117,23,21,83,126,141,116,210,66,217,
    24,83,68,213,168,85,107,130,3,240,149,27,58,189,59,157,
    61,116,205,51,201,28,134,240,90,41,32,95,36,21,129,145,
    116,193,213,247,49,158,244,245,237,20,29,129,157,31,64,126,
    160,113,62,40,21,69,7,59,46,52,117,185,142,96,228,228,
    192,185,192,249,5,141,83,111,244,240,160,144,229,64,203,210,
    9,71,250,110,132,175,178,70,15,249,166,109,126,90,144,122,
    216,223,186,50,154,201,52,244,162,240,91,125,39,82,12,43,
    18,228,42,93,226,167,124,226,8,172,126,8,239,172,111,216,
    128,169,236,135,25,146,100,122,229,218,220,165,72,223,138,116,
    120,21,1,151,150,46,200,218,186,56,209,167,159,35,130,110,
    118,132,13,221,116,212,214,106,104,121,114,53,19,15,34,171,
    194,50,27,205,154,213,88,169,89,181,37,147,15,176,171,88,
    118,214,173,218,74,67,208,223,62,98,164,110,236,55,106,226,
    191,140,57,245,190,
};

EmbeddedPython embedded_m5_internal_param_InstTracer(
    "m5/internal/param_InstTracer.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_InstTracer.py",
    "m5.internal.param_InstTracer",
    data_m5_internal_param_InstTracer,
    2117,
    5987);

} // anonymous namespace
