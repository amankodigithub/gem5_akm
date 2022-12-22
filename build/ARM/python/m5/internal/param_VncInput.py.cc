#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_VncInput[] = {
    120,156,181,88,125,115,220,70,25,127,86,210,157,125,103,59,
    62,199,177,157,196,166,62,202,132,30,25,176,161,52,132,153,
    186,134,208,41,51,237,12,110,145,11,73,221,14,66,150,246,
    108,157,239,164,27,73,78,114,25,251,15,112,6,248,2,124,
    4,254,224,219,240,141,224,249,61,43,233,206,118,50,116,166,
    62,231,180,89,173,118,159,125,94,126,207,203,110,64,197,95,
    141,159,95,183,137,178,174,34,10,249,167,168,79,52,80,116,
    160,72,105,69,225,29,58,169,81,250,1,133,53,122,77,116,
    96,145,182,232,130,59,54,125,109,81,60,47,107,234,212,183,
    101,68,209,168,73,218,161,131,26,61,141,151,200,209,117,58,
    105,82,250,103,82,74,197,138,158,133,51,20,206,210,107,166,
    206,157,134,16,156,37,12,54,101,176,65,225,156,12,54,41,
    156,151,206,28,141,90,164,231,233,96,1,211,14,110,49,217,
    135,76,118,81,200,254,7,100,67,254,178,66,225,45,76,103,
    190,190,194,76,7,51,101,191,69,161,210,42,185,92,162,131,
    219,101,127,121,162,127,71,250,188,211,109,234,173,80,111,149,
    122,107,196,10,9,151,42,170,119,73,219,212,187,71,7,247,
    72,243,239,46,93,176,126,194,219,19,43,238,203,138,229,106,
    197,186,172,216,160,131,13,210,252,91,55,43,234,180,223,89,
    101,157,71,255,229,191,14,235,156,242,121,110,158,235,52,139,
    146,216,139,226,110,18,89,248,94,71,3,11,5,104,102,10,
    83,125,12,83,253,155,196,78,161,85,152,234,156,152,176,130,
    44,125,139,206,165,115,110,209,168,67,103,138,122,14,133,54,
    157,241,54,53,48,112,164,232,194,162,111,108,76,56,231,214,
    97,133,190,67,78,110,236,212,19,133,26,74,51,116,94,163,
    179,26,237,63,59,179,48,112,210,160,244,95,244,106,67,136,
    206,10,81,139,206,184,117,232,194,161,243,58,61,229,73,60,
    212,107,64,124,245,236,140,37,229,145,253,142,195,220,238,77,
    136,11,81,194,40,141,253,129,206,23,185,239,13,253,212,31,
    120,127,140,131,79,227,225,105,222,105,150,147,146,108,107,232,
    231,199,174,172,178,161,142,193,48,23,106,73,172,243,57,238,
    116,163,56,244,6,73,120,218,215,249,44,72,121,221,168,175,
    61,79,62,126,58,24,38,105,254,73,154,38,169,11,141,202,
    96,63,241,171,21,208,103,208,79,50,221,193,110,178,141,11,
    242,57,102,119,135,66,17,12,8,167,88,28,234,44,72,163,
    97,206,134,50,20,49,27,212,58,48,145,52,217,19,110,182,
    143,147,129,222,238,250,193,105,63,31,109,31,233,193,163,237,
    195,211,168,31,110,63,113,127,183,61,28,229,199,73,188,205,
    99,81,156,107,86,67,127,251,178,2,182,120,198,109,144,122,
    17,29,121,145,8,225,29,235,254,80,167,11,24,189,143,109,
    84,75,205,171,186,178,85,71,45,112,175,198,143,173,54,172,
    57,181,23,65,140,0,162,1,64,206,36,100,96,71,69,39,
    22,165,27,0,68,143,127,10,22,100,88,236,227,155,37,223,
    126,15,249,205,104,207,134,153,205,224,153,128,136,209,196,51,
    119,96,215,152,4,9,53,234,213,201,32,132,129,101,32,147,
    142,208,242,116,144,177,152,184,67,217,63,137,245,201,216,56,
    163,2,55,23,54,169,184,69,121,19,238,202,163,171,188,225,
    95,5,122,251,29,176,191,39,24,200,143,163,44,121,17,139,
    166,209,23,103,217,103,205,124,49,250,252,176,167,131,60,219,
    228,129,175,146,211,118,224,199,113,146,183,253,48,108,251,121,
    158,70,135,167,185,206,218,121,210,126,144,117,96,60,119,169,
    132,81,69,111,52,44,97,3,19,51,108,204,75,24,5,57,
    191,44,203,139,88,33,211,57,67,224,56,9,51,30,7,137,
    35,157,187,96,50,135,146,19,97,68,16,226,97,42,182,231,
    121,183,248,253,73,201,137,192,176,83,47,65,147,233,126,55,
    111,10,254,252,44,243,132,19,140,11,212,64,248,185,223,63,
    213,66,61,99,122,204,16,186,134,135,27,7,219,93,48,94,
    202,41,204,199,73,28,142,152,151,40,120,15,219,220,21,200,
    205,11,232,86,24,112,51,220,214,249,255,186,90,181,2,167,
    128,89,189,132,26,162,91,78,98,104,85,216,154,97,119,193,
    145,164,99,73,40,16,254,197,219,222,69,15,139,221,13,52,
    223,67,243,14,154,205,82,196,155,148,115,225,170,156,143,65,
    219,18,225,68,12,40,222,46,197,8,47,121,204,189,177,199,
    112,116,219,7,242,45,248,199,24,249,14,34,97,186,139,150,
    167,138,79,217,148,125,137,184,11,15,17,98,112,6,134,53,
    122,99,176,139,82,220,22,132,157,45,113,234,2,124,147,8,
    60,154,64,160,11,123,8,252,220,123,101,92,243,48,195,0,
    207,93,7,169,218,27,180,218,70,243,253,105,168,118,12,161,
    163,107,16,250,16,219,180,10,8,45,8,116,154,252,180,172,
    192,46,244,93,37,182,229,43,208,1,110,156,55,224,230,135,
    232,217,215,37,156,34,100,10,185,126,59,1,25,176,98,77,
    178,191,199,157,209,26,184,158,4,203,26,103,228,167,241,26,
    39,89,75,146,236,79,37,201,74,162,150,18,197,4,86,91,
    98,171,233,212,32,126,215,166,213,34,121,102,13,110,135,105,
    242,114,212,78,186,237,92,228,67,28,220,121,144,109,61,200,
    62,228,8,215,222,149,216,98,98,156,137,98,169,30,34,10,
    97,233,39,47,3,45,89,75,222,60,207,4,29,79,2,144,
    87,100,67,198,205,10,148,103,149,90,149,240,155,229,41,162,
    238,141,235,181,89,233,21,108,126,6,194,77,81,170,173,214,
    24,35,77,37,187,123,38,178,74,1,36,95,249,249,13,20,
    13,9,53,161,68,117,247,13,111,194,54,4,112,127,124,9,
    7,55,200,180,187,205,84,254,80,218,191,62,182,63,30,187,
    132,239,223,73,202,64,69,127,35,88,152,13,89,192,183,66,
    59,76,186,140,233,127,34,193,249,27,114,178,196,135,125,228,
    97,153,193,97,35,123,44,83,77,138,254,140,254,49,225,36,
    101,34,181,139,66,111,50,145,58,85,108,17,104,124,171,100,
    233,92,14,66,48,196,177,159,97,154,137,44,99,191,27,135,
    234,170,68,227,200,122,147,56,153,53,36,61,236,254,205,24,
    37,72,69,235,106,217,154,176,253,207,208,188,95,153,93,149,
    99,55,196,200,38,189,61,71,122,38,50,127,141,221,28,225,
    111,113,70,56,47,9,84,0,174,149,0,126,191,2,176,150,
    4,242,90,10,122,180,22,172,120,97,41,62,77,113,93,132,
    195,139,67,186,70,7,117,64,93,42,86,85,120,130,42,195,
    14,130,212,165,236,36,210,239,25,189,84,134,52,54,66,243,
    242,198,221,25,194,238,244,253,193,97,232,239,246,64,22,180,
    131,210,55,172,146,209,214,36,163,192,181,122,27,175,242,250,
    168,100,248,249,141,187,242,47,72,216,48,140,10,112,195,36,
    16,255,253,242,88,183,7,122,112,200,231,177,227,104,216,238,
    246,253,35,209,184,93,8,242,121,41,72,46,38,187,154,199,
    179,135,104,147,118,144,196,28,59,79,131,60,73,219,161,230,
    115,138,14,219,63,105,75,224,109,71,89,219,63,228,175,126,
    144,27,156,94,118,43,41,4,253,244,40,147,154,239,228,5,
    186,83,177,152,199,167,205,136,43,221,62,85,57,205,156,132,
    170,56,42,53,172,129,61,167,31,62,129,228,35,19,76,144,
    211,221,45,52,63,162,105,133,219,15,200,28,128,51,168,161,
    174,214,173,134,37,252,148,115,190,192,138,236,186,111,29,126,
    27,223,50,119,20,133,135,213,49,83,207,224,88,139,182,129,
    128,139,43,136,90,113,5,129,65,115,5,81,151,145,91,240,
    197,153,239,234,139,130,239,169,32,59,187,81,23,116,31,79,
    157,79,247,151,84,164,207,183,185,159,154,20,98,193,184,95,
    79,149,149,246,164,4,114,48,95,185,134,19,47,72,181,159,
    107,163,249,141,41,72,36,222,106,54,121,62,118,168,235,69,
    226,147,138,249,11,169,16,70,119,196,32,230,52,33,6,81,
    79,227,251,92,45,58,82,45,238,160,90,60,19,73,61,203,
    20,140,99,84,213,42,129,113,97,16,235,23,222,101,161,77,
    61,8,198,252,225,80,199,161,251,144,38,75,60,249,124,227,
    150,69,108,120,69,19,185,218,86,119,184,166,187,238,43,136,
    115,19,194,136,101,106,149,119,76,195,70,130,186,191,148,168,
    235,224,246,105,28,236,220,29,52,18,222,170,200,230,254,170,
    210,112,251,58,164,186,41,174,13,2,127,152,159,166,26,39,
    132,255,63,137,171,7,57,84,92,26,21,149,9,102,67,221,
    215,185,190,98,197,28,60,21,231,192,80,115,226,72,70,92,
    188,75,129,204,239,125,207,155,78,252,253,136,169,164,32,135,
    160,203,241,87,213,57,2,175,88,141,122,67,73,178,186,114,
    77,105,246,199,81,204,20,130,163,204,21,215,94,172,52,40,
    247,105,101,26,129,178,229,56,178,199,138,48,151,116,184,13,
    112,127,64,197,249,206,125,175,178,4,78,185,82,125,155,243,
    11,227,92,18,169,228,77,247,231,24,71,111,240,104,171,148,
    102,203,72,179,31,13,204,37,145,220,232,13,30,229,75,87,
    166,133,169,207,253,149,43,163,153,78,35,191,31,189,50,151,
    67,229,176,220,85,94,165,11,126,170,55,201,88,151,66,143,
    216,44,213,71,81,198,52,132,64,53,185,112,208,143,74,238,
    175,160,102,114,225,84,204,107,106,54,115,246,219,197,13,66,
    182,203,13,110,120,26,139,13,54,53,220,214,230,131,216,130,
    114,236,249,86,195,153,159,107,56,141,25,91,14,239,11,92,
    122,55,157,198,220,188,194,191,77,6,68,211,218,108,53,212,
    255,0,177,66,41,110,
};

EmbeddedPython embedded_m5_internal_param_VncInput(
    "m5/internal/param_VncInput.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_VncInput.py",
    "m5.internal.param_VncInput",
    data_m5_internal_param_VncInput,
    2182,
    6229);

} // anonymous namespace
