#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_MessageBuffer[] = {
    120,156,189,88,253,114,27,73,17,239,217,93,201,150,108,199,
    118,252,149,196,230,44,160,194,137,20,216,112,36,132,170,11,
    129,28,117,87,197,85,157,239,88,31,149,156,239,138,101,173,
    29,217,43,75,187,170,221,113,18,165,108,254,192,225,227,5,
    120,4,254,224,5,120,14,222,8,250,215,163,93,201,95,71,
    234,136,176,164,241,108,239,76,79,127,252,186,167,103,90,52,
    252,171,240,239,151,13,162,188,173,136,34,254,42,234,18,245,
    20,237,41,82,90,81,180,76,71,21,202,238,83,84,161,215,
    68,123,14,105,135,206,184,227,210,151,14,37,179,50,167,74,
    93,87,40,138,6,117,210,30,237,85,232,105,178,72,158,174,
    210,81,157,178,223,147,82,42,81,244,44,154,162,104,154,94,
    51,119,238,212,132,225,52,129,88,23,98,141,162,25,33,214,
    41,154,149,206,12,13,22,72,207,210,222,28,134,237,221,96,
    182,247,152,237,188,176,253,23,216,70,252,102,133,162,27,24,
    206,114,125,129,145,30,70,202,122,243,194,101,161,144,114,145,
    246,110,22,253,165,177,254,178,244,121,165,155,212,89,161,206,
    42,117,214,136,13,18,45,150,92,111,145,118,169,115,155,246,
    110,147,230,239,45,58,99,251,68,55,199,102,220,145,25,75,
    229,140,117,153,177,65,123,27,164,249,187,110,103,84,105,183,
    185,202,54,143,255,205,127,77,182,57,153,89,110,158,235,44,
    143,211,36,136,147,118,26,59,120,95,69,3,15,181,208,76,
    13,93,245,43,184,234,31,36,126,138,156,161,171,78,137,25,
    43,232,210,117,232,84,58,167,14,13,154,116,162,168,227,81,
    228,210,9,47,83,129,0,7,138,206,28,250,202,197,128,83,
    110,61,54,232,59,228,25,235,167,142,24,212,114,154,162,211,
    10,157,84,104,247,217,137,3,194,81,141,178,191,211,171,13,
    97,58,45,76,29,58,225,214,163,51,143,78,171,244,148,7,
    49,169,83,131,250,234,217,9,107,202,148,221,166,199,210,238,
    140,169,11,85,162,56,75,194,158,54,203,220,15,250,97,22,
    246,130,79,116,158,135,7,250,131,227,118,91,103,205,122,49,
    50,205,183,250,161,57,244,101,170,11,155,244,250,70,88,166,
    137,54,51,220,105,199,73,20,244,210,232,184,171,205,52,248,
    5,237,184,171,131,64,94,254,186,215,79,51,243,97,150,165,
    153,15,179,10,177,155,134,229,12,24,181,213,77,115,221,196,
    106,178,140,15,246,6,163,219,125,225,8,1,68,92,76,142,
    116,222,202,226,190,97,111,89,142,24,13,110,77,248,73,154,
    252,35,110,182,15,211,158,222,110,135,173,227,174,25,108,31,
    232,222,131,237,253,227,184,27,109,63,241,63,217,238,15,204,
    97,154,108,51,45,78,140,102,91,116,183,175,176,194,22,15,
    187,9,126,47,226,131,32,22,77,130,67,221,237,235,108,14,
    212,59,88,75,45,168,89,85,85,174,106,170,57,238,85,248,
    231,170,13,103,70,237,196,208,165,5,253,0,37,111,28,60,
    240,168,162,35,135,178,13,64,163,195,95,5,95,50,64,118,
    241,206,145,119,191,129,17,44,181,227,194,225,150,120,34,112,
    98,92,241,200,71,240,112,66,130,137,10,117,170,100,177,194,
    16,179,224,201,6,104,121,56,216,56,204,220,163,252,111,196,
    70,101,148,156,208,16,65,103,46,169,100,129,76,29,129,203,
    212,85,94,240,143,2,194,221,38,196,223,17,32,152,195,56,
    79,95,36,98,110,244,37,108,118,217,50,159,13,62,221,239,
    232,150,201,55,153,240,69,122,220,104,133,73,146,154,70,24,
    69,141,208,152,44,222,63,54,58,111,152,180,113,55,111,194,
    131,254,98,129,165,146,223,160,95,96,7,126,102,236,216,135,
    40,110,25,126,88,146,7,241,66,174,13,227,224,48,141,114,
    166,131,197,129,54,62,132,52,48,114,42,130,8,76,2,12,
    197,242,60,238,6,63,63,41,36,17,44,54,171,5,114,114,
    221,109,155,186,128,48,204,243,64,36,1,93,240,6,198,207,
    195,238,177,22,238,57,243,99,129,208,181,50,76,6,113,183,
    32,125,161,172,104,144,164,73,52,96,129,226,214,187,88,235,
    150,224,110,86,144,183,194,168,155,226,182,202,255,171,106,213,
    105,121,67,172,85,11,188,33,217,25,18,111,171,161,195,25,
    123,103,156,88,154,142,100,6,81,66,226,238,59,232,97,178,
    191,129,230,91,104,222,65,179,89,232,249,214,149,157,187,168,
    236,67,44,224,136,134,162,11,92,224,22,186,68,231,98,231,
    246,40,118,56,227,237,34,6,28,68,202,40,6,60,100,199,
    236,49,90,30,42,209,229,82,254,57,114,49,98,69,152,33,
    44,24,224,232,141,96,47,150,241,23,160,241,116,129,88,31,
    48,28,199,226,193,24,22,125,56,69,128,232,223,46,210,92,
    128,17,22,130,254,58,88,85,174,48,109,3,205,183,39,102,
    223,17,152,14,46,129,233,125,172,181,48,4,211,156,128,168,
    206,191,5,167,229,14,141,94,238,120,75,23,64,4,4,121,
    87,32,232,123,232,185,151,213,156,52,120,134,202,125,52,6,
    30,200,227,140,235,176,195,157,193,26,68,31,135,205,26,239,
    215,79,147,53,222,130,29,217,130,127,36,91,176,108,227,82,
    192,216,100,235,74,190,181,157,10,108,208,118,105,117,184,181,
    230,53,110,251,89,250,114,208,72,219,13,35,74,34,55,62,
    186,155,111,221,205,223,231,172,215,120,44,249,198,230,61,155,
    217,50,221,71,102,194,212,15,95,182,180,108,103,242,20,4,
    54,17,5,146,148,130,225,54,201,8,90,129,5,157,194,180,
    146,146,115,147,33,19,79,198,184,245,210,184,144,245,99,112,
    175,139,101,93,181,198,104,169,43,17,33,176,41,87,106,36,
    121,203,191,15,96,109,168,169,9,85,172,191,107,5,20,217,
    161,133,255,131,115,136,120,219,146,251,219,204,234,183,5,18,
    170,35,36,224,231,22,104,254,11,73,185,168,232,207,4,95,
    179,75,135,104,46,193,15,231,46,97,248,239,72,96,127,197,
    142,45,57,99,23,187,180,140,224,84,146,63,148,161,118,3,
    255,152,254,58,22,51,197,54,235,14,11,194,241,109,214,43,
    243,141,128,228,141,182,82,239,124,98,130,55,14,195,28,195,
    108,182,25,133,225,40,135,151,85,28,103,219,183,142,152,105,
    203,55,128,8,95,141,240,130,141,106,93,45,57,99,40,248,
    49,154,247,74,0,168,130,246,54,165,217,164,235,183,209,192,
    230,237,47,177,164,39,66,206,79,73,54,57,199,165,4,117,
    165,0,245,123,37,168,181,236,49,175,229,28,128,214,129,83,
    207,28,197,135,48,46,162,112,230,241,72,87,104,175,10,248,
    75,141,171,134,209,161,138,124,132,245,206,109,96,98,135,29,
    107,161,210,175,214,101,104,94,78,38,206,225,181,71,221,176,
    183,31,133,143,59,224,141,5,90,69,188,56,133,180,11,227,
    210,2,235,234,58,129,229,241,65,33,245,243,201,196,248,79,
    73,100,177,210,10,162,163,180,37,129,253,249,161,110,244,116,
    111,159,15,116,135,113,191,209,238,134,7,98,123,119,168,205,
    167,133,54,70,156,119,113,211,207,239,161,77,27,173,52,225,
    244,122,220,50,105,214,136,52,159,113,116,212,248,97,67,114,
    115,35,206,27,225,62,191,13,91,198,98,247,124,188,73,253,
    24,102,7,185,148,138,71,47,208,157,156,239,2,62,179,198,
    92,37,119,169,220,251,236,81,170,76,181,82,255,218,80,224,
    109,138,79,47,102,96,83,13,10,0,127,11,205,247,105,162,
    25,249,62,217,179,116,14,131,84,213,186,83,115,164,144,58,
    55,240,51,204,205,47,7,221,63,223,36,232,236,157,199,48,
    244,170,24,169,167,112,76,70,91,67,98,222,171,23,196,25,
    105,103,133,56,87,16,111,72,59,47,196,133,130,184,40,237,
    77,33,46,21,196,101,105,87,132,184,90,220,202,172,9,241,
    22,110,39,162,170,80,238,32,240,167,254,215,192,151,56,154,
    92,4,229,111,53,222,253,135,255,31,97,253,159,209,112,19,
    191,46,214,213,184,38,115,54,214,59,170,56,3,140,171,33,
    55,8,119,174,134,98,208,202,116,104,180,117,196,198,164,116,
    147,36,97,87,122,62,10,225,203,229,235,147,82,141,51,169,
    88,6,203,226,31,123,226,17,255,168,167,201,29,174,99,61,
    169,99,31,161,142,61,17,157,3,199,150,178,35,164,85,74,
    213,215,184,73,244,139,224,10,245,109,185,10,233,194,126,95,
    39,145,127,143,198,43,80,121,61,25,111,35,47,253,129,198,
    10,8,87,45,115,201,121,57,146,144,104,199,212,18,71,85,
    202,216,153,152,203,4,142,127,42,224,216,68,246,31,101,91,
    255,17,26,201,175,101,106,245,127,81,26,252,187,215,96,109,
    95,30,130,60,126,165,113,154,121,163,113,92,216,200,65,115,
    140,38,101,207,85,243,210,44,210,153,142,132,247,127,27,3,
    190,114,247,103,159,205,221,107,198,103,97,18,165,189,248,85,
    136,211,139,112,126,179,145,224,143,168,60,71,53,247,175,153,
    43,215,110,189,48,103,151,4,188,43,39,124,220,0,147,86,
    122,156,24,89,244,27,77,132,12,0,200,215,13,50,63,249,
    58,206,121,55,124,174,175,150,232,155,204,131,64,235,133,64,
    87,143,145,192,144,108,21,233,174,54,250,170,168,53,64,222,
    240,130,34,210,92,164,164,3,62,75,202,81,141,159,187,65,
    48,193,109,254,231,240,41,13,239,156,120,155,87,85,222,232,
    87,212,240,227,212,170,53,37,85,210,133,11,118,43,12,238,
    10,236,209,100,144,251,146,230,231,203,160,145,75,224,162,116,
    65,124,201,81,121,39,236,217,219,60,185,184,242,17,49,114,
    1,225,191,91,6,31,238,98,228,60,104,207,214,156,233,164,
    130,147,130,205,135,151,196,228,189,7,91,133,106,91,86,181,
    221,184,103,47,53,229,26,186,247,192,44,94,24,22,101,33,
    247,87,46,80,115,157,197,97,23,97,8,137,11,178,129,34,
    23,249,66,158,242,73,10,164,203,219,144,120,49,211,7,49,
    208,41,92,202,25,195,20,13,139,155,198,53,104,27,159,61,
    57,175,219,3,132,189,166,120,140,108,148,63,230,6,119,147,
    181,249,26,35,0,217,219,85,117,206,223,158,59,187,80,243,
    102,103,106,94,109,202,149,203,166,57,62,22,214,189,218,204,
    172,194,103,147,241,81,119,54,151,107,234,63,212,193,32,53,
};

EmbeddedPython embedded_m5_internal_param_MessageBuffer(
    "m5/internal/param_MessageBuffer.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_MessageBuffer.py",
    "m5.internal.param_MessageBuffer",
    data_m5_internal_param_MessageBuffer,
    2320,
    6942);

} // anonymous namespace
