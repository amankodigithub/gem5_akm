#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyNetwork[] = {
    120,156,189,89,221,115,219,198,17,223,3,72,74,164,36,75,
    178,190,108,75,182,104,59,182,105,55,145,252,237,204,196,245,
    212,113,220,153,100,26,197,5,211,177,163,100,138,66,196,81,
    2,5,2,28,224,40,153,25,249,165,114,155,190,180,111,125,
    234,91,103,250,208,254,53,253,143,218,221,61,128,4,69,210,
    118,82,179,18,121,90,44,246,246,118,247,126,183,183,119,170,
    65,242,147,199,239,47,202,0,241,191,12,0,23,63,2,124,
    128,166,128,109,1,66,10,112,23,97,63,15,209,93,112,243,
    240,26,96,219,0,105,192,49,18,38,124,107,64,48,205,125,
    10,224,155,204,17,208,41,129,204,193,118,30,158,7,243,144,
    147,5,216,47,65,244,59,16,66,4,2,94,184,19,224,78,
    194,107,212,142,68,145,21,78,2,49,75,204,44,130,59,197,
    204,18,184,211,76,76,65,103,14,228,52,108,207,144,216,246,
    41,84,123,3,213,206,178,218,127,147,90,23,223,44,129,123,
    138,196,209,174,111,72,50,71,146,60,222,44,107,153,75,173,
    156,135,237,211,41,189,144,161,23,51,244,82,134,94,206,208,
    43,25,250,76,134,62,155,161,207,101,232,213,12,189,150,161,
    207,103,232,11,25,122,61,67,151,51,244,197,12,125,41,67,
    95,206,208,31,100,232,43,25,250,106,134,190,150,161,43,25,
    250,122,134,190,145,161,127,150,161,63,204,208,31,101,232,141,
    12,189,201,52,206,214,105,104,220,132,198,45,104,220,134,58,
    2,104,190,59,51,119,64,154,208,184,11,219,119,65,226,231,
    14,28,35,198,220,211,153,30,247,184,199,66,183,199,125,238,
    241,0,182,31,128,196,207,125,221,163,0,213,202,50,226,214,
    251,15,254,84,4,82,106,26,155,3,25,197,94,24,216,94,
    80,15,61,131,222,23,168,33,148,215,168,153,72,224,254,132,
    224,254,79,96,172,187,70,2,247,87,128,138,5,249,226,27,
    240,138,137,87,6,116,42,112,36,160,145,3,215,132,35,28,
    38,79,6,236,10,56,54,224,59,147,4,94,97,155,67,80,
    94,128,156,210,88,111,48,40,181,166,9,120,149,135,163,60,
    84,95,28,25,196,216,47,66,244,15,248,126,141,149,78,178,
    82,3,142,176,205,193,113,14,94,21,224,57,10,33,171,81,
    36,247,197,139,35,244,20,57,213,74,14,173,221,202,184,75,
    174,184,94,20,56,77,169,78,35,109,183,156,200,105,218,86,
    123,167,179,37,213,97,24,237,87,74,169,92,24,111,180,28,
    181,103,113,71,147,34,210,108,41,86,24,6,82,77,33,81,
    247,2,215,110,134,110,219,151,106,146,180,217,117,207,151,182,
    205,47,63,111,182,194,72,61,141,162,48,178,40,168,204,244,
    67,167,219,131,66,90,243,195,88,86,104,52,30,198,34,245,
    138,164,235,45,214,72,6,176,177,212,217,149,113,45,242,90,
    10,231,74,107,36,105,210,86,161,89,226,38,254,12,155,205,
    189,176,41,55,235,78,173,237,171,206,230,174,108,222,219,220,
    105,123,190,187,249,226,227,251,155,173,142,218,11,131,77,228,
    121,129,146,24,9,127,115,32,6,27,40,68,209,137,15,189,
    93,219,99,63,236,61,233,183,100,52,67,220,115,52,146,152,
    19,211,162,32,76,81,17,51,72,229,241,107,138,53,99,74,
    108,121,228,73,141,188,35,24,229,178,192,161,217,20,176,111,
    64,180,70,176,104,224,71,208,60,34,56,170,244,206,224,119,
    191,166,16,104,110,195,164,201,214,204,35,134,18,98,10,37,
    31,210,236,6,192,120,200,67,163,0,26,39,8,47,13,156,
    168,67,45,138,147,26,3,149,231,32,254,43,96,72,17,33,
    71,144,160,231,216,4,17,204,129,42,81,226,67,238,50,14,
    248,123,6,96,181,66,230,111,49,12,212,158,23,135,135,1,
    7,155,104,94,50,85,140,204,179,206,87,59,13,89,83,241,
    58,50,190,9,219,229,154,19,4,161,42,59,174,91,118,148,
    138,188,157,182,146,113,89,133,229,43,113,133,230,207,154,79,
    145,212,213,215,105,165,200,161,89,70,228,232,7,215,171,41,
    124,88,224,7,158,133,88,42,68,193,94,232,198,200,39,21,
    187,82,89,100,164,162,32,135,108,8,131,196,38,81,26,30,
    229,78,225,243,227,212,18,70,98,165,144,226,38,150,126,93,
    149,24,130,78,28,219,108,9,241,25,109,164,248,192,241,219,
    146,181,199,168,15,13,34,82,219,48,14,188,157,33,219,83,
    87,217,254,32,12,220,14,154,227,213,174,209,72,103,24,117,
    211,140,187,37,196,220,4,182,5,252,91,16,203,70,45,151,
    32,173,144,162,141,210,156,2,158,107,145,76,55,34,239,24,
    83,74,197,224,156,192,46,240,154,187,68,20,117,182,214,168,
    57,79,205,5,106,214,83,47,223,179,171,51,39,93,125,64,
    234,13,246,143,61,161,240,155,169,39,110,223,186,57,219,91,
    55,152,233,170,132,127,131,86,73,15,255,57,202,138,209,35,
    106,81,148,87,150,9,241,215,148,131,105,157,176,50,90,18,
    8,110,162,122,144,231,184,88,115,228,239,100,138,86,139,32,
    152,197,225,110,6,135,22,77,9,131,208,58,155,38,56,155,
    36,52,252,172,85,82,149,31,18,216,50,53,23,199,20,221,
    30,144,118,7,128,244,9,141,52,151,0,105,134,1,84,194,
    239,156,81,51,147,144,119,247,185,133,19,0,34,244,228,134,
    160,231,42,81,230,160,147,227,5,78,226,218,47,51,192,33,
    107,140,172,7,91,72,116,86,200,240,44,100,86,112,143,126,
    30,172,224,182,107,240,182,123,147,183,93,222,186,185,240,211,
    73,214,228,60,171,137,60,69,160,110,194,114,178,157,198,69,
    108,91,81,248,178,83,14,235,101,197,46,82,78,124,120,37,
    222,184,18,127,130,217,174,252,136,243,140,206,119,58,163,69,
    178,69,25,137,186,62,125,89,147,188,137,241,147,109,235,4,
    100,115,50,178,147,205,17,209,179,68,241,51,210,192,114,42,
    142,85,68,25,120,28,161,45,117,67,75,150,126,65,186,75,
    28,87,83,172,32,82,74,130,13,176,117,162,229,170,136,223,
    226,247,83,138,53,57,41,129,106,127,171,170,205,99,203,201,
    7,235,195,62,52,188,95,187,173,77,84,244,155,20,5,133,
    30,10,232,107,166,56,254,1,184,60,20,240,71,160,121,198,
    233,76,112,220,133,61,77,236,2,137,255,22,24,240,67,118,
    105,206,21,85,218,153,89,2,83,72,252,128,69,245,166,253,
    5,252,41,179,90,210,173,213,76,10,192,236,214,154,235,230,
    25,6,200,59,109,159,185,254,132,68,115,177,231,196,36,166,
    179,76,111,1,246,50,119,183,110,195,44,251,158,209,50,169,
    181,218,100,192,119,61,172,208,230,180,42,22,140,12,2,110,
    81,115,187,59,249,34,229,189,63,91,214,97,244,198,105,235,
    92,253,45,13,152,99,19,103,39,56,120,73,255,46,144,243,
    41,144,111,119,129,44,121,71,121,205,213,62,181,6,77,229,
    177,33,240,184,138,229,18,157,14,115,32,243,176,93,32,200,
    115,45,43,146,21,33,210,12,68,249,170,111,187,98,255,183,
    116,100,186,179,169,39,138,154,151,227,88,217,52,87,15,125,
    167,185,227,58,143,254,64,154,73,125,45,93,35,70,106,235,
    92,214,86,194,183,24,101,46,63,222,75,109,62,24,199,170,
    190,143,138,186,182,50,134,221,176,198,75,249,235,61,89,110,
    202,230,14,30,217,246,188,86,185,238,59,187,28,119,51,241,
    229,171,212,23,197,19,119,114,123,143,111,80,27,150,107,97,
    128,201,180,93,83,97,84,118,37,158,99,164,91,254,168,204,
    153,184,236,197,101,103,7,223,58,53,165,241,218,191,194,184,
    74,116,162,221,152,11,194,253,67,34,199,53,111,54,158,73,
    61,172,132,127,128,238,62,167,15,75,221,196,202,53,174,134,
    63,110,73,120,66,81,29,157,90,104,171,183,54,168,185,14,
    99,204,191,119,129,215,8,196,20,140,130,88,53,138,134,98,
    168,244,196,158,81,191,120,112,169,45,139,119,88,106,250,78,
    8,5,100,1,26,19,220,78,82,238,221,46,166,204,18,183,
    83,204,156,78,153,51,220,158,98,230,108,202,156,227,118,158,
    153,167,83,230,2,183,139,204,92,74,153,203,220,174,48,243,
    76,202,60,203,237,57,102,174,166,204,53,110,207,51,243,66,
    202,92,231,182,204,204,139,41,243,18,183,151,153,249,65,154,
    66,174,48,243,42,108,95,75,239,201,42,148,78,10,255,107,
    58,225,245,57,174,149,249,151,247,154,69,172,7,255,15,83,
    173,143,33,41,6,70,101,144,190,218,241,177,206,32,58,206,
    88,50,116,22,217,45,125,212,96,183,196,243,224,28,22,145,
    57,46,34,31,82,17,121,196,133,166,109,232,58,178,55,61,
    124,2,224,251,10,90,181,129,60,180,7,22,135,174,20,105,
    214,157,86,75,6,174,117,3,178,197,31,191,30,71,136,40,
    73,252,13,50,251,183,41,22,177,218,27,132,30,229,188,140,
    75,12,177,124,23,108,107,99,156,193,191,167,51,88,185,222,
    151,248,172,135,212,204,245,101,57,29,229,171,195,210,143,141,
    25,95,69,161,111,55,99,44,20,188,239,37,29,33,222,85,
    20,11,11,69,35,157,124,193,181,199,96,127,249,82,217,190,
    23,236,199,60,198,219,100,72,57,29,4,186,156,17,61,48,
    84,111,213,218,147,73,181,118,57,106,109,104,143,64,42,175,
    174,85,190,81,128,244,21,24,190,244,168,110,14,151,109,211,
    178,178,195,186,125,224,69,170,237,248,212,155,222,235,1,126,
    116,39,26,148,46,219,70,139,168,243,67,117,70,33,214,206,
    145,30,245,205,18,52,4,237,168,201,179,186,56,92,26,57,
    118,220,137,149,108,178,206,183,75,145,94,186,15,200,240,212,
    133,161,189,84,216,10,253,112,183,195,138,223,34,66,90,169,
    46,72,25,234,246,80,121,190,176,108,58,56,104,68,96,14,
    240,200,70,247,219,181,176,141,104,160,97,126,66,183,56,65,
    200,155,132,212,173,209,122,99,223,57,144,195,173,249,241,189,
    200,152,213,212,152,225,50,156,219,248,50,196,149,190,84,114,
    48,233,242,146,78,174,117,92,137,5,95,216,193,83,56,31,
    115,241,217,183,237,177,21,77,63,71,69,127,38,141,52,221,
    88,52,137,130,88,26,252,53,138,133,162,224,186,243,196,63,
    37,180,73,180,161,233,227,93,39,182,120,139,155,237,166,64,
    190,58,79,203,65,74,148,156,11,182,156,166,190,5,229,43,
    63,235,50,36,215,55,214,181,110,22,165,123,44,62,83,235,
    187,9,220,172,184,38,230,18,216,186,67,124,74,60,205,123,
    27,169,131,27,159,58,177,87,123,250,82,253,10,147,140,125,
    32,169,162,230,11,252,230,61,6,115,86,84,199,34,219,65,
    149,135,138,80,184,158,232,92,235,163,11,107,35,133,170,189,
    133,53,40,80,245,154,45,95,126,41,155,97,212,25,49,208,
    227,164,206,79,132,86,135,10,225,75,125,209,61,224,187,126,
    255,196,15,107,251,210,77,100,206,143,150,249,44,108,58,200,
    31,62,10,90,155,104,152,63,241,222,141,168,215,210,9,110,
    44,35,207,241,105,19,58,123,226,141,196,116,105,63,59,140,
    170,120,26,150,35,130,247,44,60,148,209,151,33,194,92,93,
    58,33,208,123,197,10,210,57,189,248,22,61,122,180,17,190,
    181,119,146,153,26,30,65,44,201,162,166,227,39,241,57,51,
    92,135,86,112,114,0,118,86,79,31,153,49,224,238,99,215,
    141,44,39,216,29,233,71,63,4,82,169,147,106,186,179,147,
    10,12,135,92,226,136,14,236,112,36,48,252,45,222,109,70,
    68,139,37,120,117,12,93,107,159,7,125,107,237,13,139,44,
    145,28,192,126,31,96,71,233,201,216,153,138,76,234,122,130,
    223,243,157,248,48,252,211,33,165,143,195,71,68,181,8,221,
    75,23,206,184,145,220,245,104,15,97,61,125,242,73,69,76,
    57,114,196,118,152,237,63,174,28,173,175,77,244,101,236,35,
    218,200,99,186,232,165,255,189,20,103,139,162,96,80,169,108,
    138,18,22,203,57,115,122,174,152,155,158,42,230,138,19,38,
    95,168,207,136,5,163,148,43,78,77,139,159,254,187,142,185,
    191,100,172,47,23,197,127,1,67,173,18,243,
};

EmbeddedPython embedded_m5_internal_param_RubyNetwork(
    "m5/internal/param_RubyNetwork.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_RubyNetwork.py",
    "m5.internal.param_RubyNetwork",
    data_m5_internal_param_RubyNetwork,
    2732,
    8562);

} // anonymous namespace