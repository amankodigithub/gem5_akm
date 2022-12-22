#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Uart8250[] = {
    120,156,181,88,109,111,27,199,17,158,189,59,82,34,37,89,
    178,101,73,126,145,45,218,169,99,198,77,68,91,141,99,3,
    113,221,58,78,10,36,128,21,247,232,192,142,18,244,122,186,
    91,74,71,29,239,136,187,149,101,6,18,90,68,70,155,2,
    5,250,41,253,7,253,208,127,211,127,212,206,204,222,29,79,
    20,85,164,168,36,147,235,225,190,204,206,203,179,51,179,235,
    65,246,87,193,239,175,27,0,105,100,0,248,248,17,16,2,
    244,4,108,8,16,82,128,127,17,118,42,144,124,8,126,5,
    222,2,108,24,32,13,56,68,194,132,111,12,136,166,121,77,
    21,66,147,123,4,12,234,32,45,216,168,192,203,232,60,88,
    178,10,59,117,72,126,15,66,136,72,192,43,127,2,252,73,
    120,139,220,145,168,49,195,73,160,206,58,119,214,192,159,226,
    206,58,248,211,76,76,193,96,14,228,52,108,204,208,180,141,
    115,200,246,14,178,157,101,182,255,34,182,62,142,44,128,127,
    142,166,163,92,95,211,76,139,102,242,126,179,204,101,46,151,
    242,60,108,92,200,233,249,18,125,177,68,47,148,232,197,18,
    189,84,162,47,149,232,203,37,250,74,137,190,90,162,151,75,
    244,181,18,125,189,68,175,148,232,70,137,190,81,162,111,150,
    232,119,74,244,207,74,244,173,18,253,110,137,190,93,162,155,
    37,250,189,18,125,135,105,180,248,5,232,254,28,186,239,67,
    247,3,232,32,8,206,23,214,93,5,105,66,183,5,27,45,
    144,248,89,133,67,196,137,127,161,180,226,46,175,152,47,86,
    220,227,21,107,176,177,6,18,63,247,244,138,42,180,155,139,
    136,189,224,223,248,215,20,72,169,105,108,94,203,36,13,226,
    200,9,162,78,28,24,52,94,165,134,144,234,81,51,145,65,
    246,41,65,246,159,192,120,245,141,12,178,7,128,140,5,233,
    18,26,112,192,196,129,1,131,38,236,11,232,90,224,155,176,
    143,219,84,72,128,45,1,135,6,124,107,210,132,3,108,45,
    4,214,117,176,148,198,107,151,129,165,57,77,192,65,5,246,
    43,208,126,181,111,80,199,78,13,146,127,192,119,203,204,116,
    146,153,26,176,143,173,5,135,22,28,84,225,37,78,194,174,
    110,141,212,23,175,246,81,83,236,105,55,45,148,118,189,164,
    46,169,226,7,73,228,246,164,154,69,218,233,187,137,219,115,
    190,114,19,245,112,237,254,221,102,61,159,20,167,171,125,87,
    109,219,188,202,36,115,244,250,138,185,197,145,84,83,72,116,
    130,200,119,122,177,191,27,74,53,73,172,156,78,16,74,199,
    225,193,207,123,253,56,81,159,37,73,156,216,100,81,238,12,
    99,183,88,65,246,244,194,56,149,77,218,141,183,177,137,189,
    162,217,157,62,115,36,1,88,82,90,236,203,212,75,130,190,
    66,71,105,142,52,155,184,53,201,69,220,164,79,176,105,109,
    199,61,217,234,184,222,110,168,6,173,45,217,187,223,218,220,
    13,66,191,245,234,225,71,173,254,64,109,199,81,11,251,130,
    72,73,52,67,216,58,106,128,85,156,113,129,88,237,5,91,
    78,192,74,56,219,50,236,203,100,134,122,175,208,54,98,78,
    76,139,170,48,69,83,204,32,85,193,175,41,150,141,41,177,
    30,144,26,30,169,70,0,178,202,144,33,63,10,216,49,32,
    89,38,64,116,241,35,200,131,8,139,54,141,25,60,246,91,
    210,95,247,118,77,114,179,238,220,103,16,33,154,112,230,35,
    242,107,4,140,132,10,116,171,160,17,130,192,210,144,73,6,
    212,226,116,98,99,32,115,11,210,31,1,237,137,216,216,135,
    12,55,135,38,136,104,14,84,157,194,22,246,46,226,134,223,
    51,244,218,77,18,127,157,49,160,182,131,52,222,139,216,210,
    68,243,97,105,163,101,158,15,190,220,236,74,79,165,43,216,
    241,117,188,219,240,220,40,138,85,195,245,253,134,171,84,18,
    108,238,42,153,54,84,220,184,149,54,201,121,246,249,28,70,
    5,191,65,63,135,13,185,24,97,163,127,248,129,167,240,199,
    60,255,96,47,164,82,33,4,182,99,63,197,126,98,177,37,
    149,77,66,42,50,114,204,130,48,66,28,154,74,219,227,188,
    115,248,251,73,46,9,195,176,89,205,65,147,202,176,163,234,
    140,63,55,77,29,150,132,250,25,106,196,248,181,27,238,74,
    230,158,34,63,20,136,72,45,195,169,131,237,18,9,158,235,
    201,194,71,113,228,15,80,150,192,187,77,219,92,98,200,77,
    51,232,22,16,112,19,216,86,241,255,170,88,52,60,43,131,
    89,53,135,26,69,55,5,236,104,145,249,26,97,119,136,145,
    164,105,112,40,96,249,249,180,221,36,138,22,219,203,212,92,
    163,230,58,53,43,185,138,167,169,231,204,168,158,15,136,183,
    193,202,177,26,100,120,51,87,195,63,114,98,46,15,79,12,
    70,183,54,33,223,160,243,49,68,190,69,145,48,121,76,45,
    78,229,51,101,66,250,130,226,46,157,16,102,70,135,1,97,
    77,212,16,236,108,20,123,142,148,157,204,113,106,19,248,202,
    8,220,42,33,208,38,127,48,252,236,203,121,92,115,104,134,
    6,158,125,149,88,85,198,88,181,65,205,141,179,48,237,16,
    66,91,199,32,244,49,109,51,151,65,104,134,161,83,199,239,
    156,225,153,153,189,139,196,54,63,2,29,194,141,53,6,55,
    239,18,101,30,215,240,12,33,147,233,245,155,18,100,72,20,
    163,44,254,58,18,131,37,146,186,12,150,37,204,200,47,163,
    37,76,178,6,39,217,187,156,100,57,81,115,169,166,3,171,
    201,177,85,19,21,82,191,99,194,98,150,60,211,26,182,253,
    36,126,51,104,196,157,134,98,253,40,14,62,186,149,174,222,
    74,63,198,8,215,120,204,177,69,199,56,29,197,18,217,167,
    40,68,75,63,123,227,73,206,90,252,203,113,116,208,113,56,
    0,57,89,54,68,220,44,144,241,140,220,170,28,126,83,149,
    80,212,61,117,187,214,11,187,146,152,95,16,227,58,27,213,
    20,75,136,145,186,224,221,29,29,89,185,0,226,81,252,126,
    66,134,38,13,37,80,169,110,183,181,108,44,54,41,96,191,
    127,4,7,167,40,180,221,66,46,95,229,254,175,14,253,79,
    95,51,135,239,159,129,203,64,1,127,2,242,48,58,50,131,
    111,129,118,114,233,60,77,255,29,48,206,199,228,100,142,15,
    109,202,195,60,3,195,70,250,128,167,234,20,253,5,252,80,
    58,36,121,34,53,179,66,175,156,72,173,34,182,48,52,126,
    82,178,180,142,6,33,114,196,182,155,210,52,29,89,134,231,
    110,24,170,139,18,13,35,235,105,226,100,82,179,116,104,247,
    111,135,40,161,84,116,85,204,27,37,223,223,163,102,173,112,
    187,200,251,78,73,144,21,56,57,71,58,58,50,127,67,187,
    89,44,223,236,4,75,158,51,40,0,92,201,1,188,86,0,
    88,114,2,121,203,5,61,181,6,121,241,208,16,120,171,196,
    186,136,46,113,22,200,10,108,84,9,234,92,177,138,236,36,
    136,60,236,80,144,58,146,157,88,251,117,109,151,194,145,218,
    71,212,188,57,245,227,76,202,62,10,221,222,166,239,62,254,
    35,177,37,222,94,126,54,140,92,208,185,178,160,132,107,113,
    146,172,252,243,126,46,240,235,83,63,202,31,33,151,66,80,
    6,174,31,123,124,126,95,108,203,70,79,246,54,241,62,182,
    29,244,27,157,208,221,98,139,155,153,34,95,230,138,40,118,
    217,104,30,79,239,80,27,55,188,56,194,216,185,235,169,56,
    105,248,18,239,41,210,111,124,208,224,192,219,8,210,134,187,
    137,163,174,167,52,78,143,30,43,46,4,221,100,43,229,154,
    111,103,143,200,51,241,152,131,183,205,0,43,221,239,161,200,
    105,250,38,84,196,81,174,97,53,236,49,253,224,13,68,13,
    116,48,161,156,110,175,82,243,30,156,85,184,253,16,185,252,
    129,216,145,25,170,226,170,81,51,88,158,124,206,115,90,145,
    30,63,91,207,126,202,217,210,111,53,217,9,171,230,143,60,
    19,32,249,146,66,239,48,213,236,29,6,143,221,196,255,123,
    236,24,202,103,2,226,191,156,234,105,179,31,156,185,156,246,
    67,200,50,229,73,39,77,148,149,152,209,39,173,43,242,162,
    186,172,1,223,193,23,142,65,194,241,18,233,42,169,45,191,
    124,6,26,241,193,212,155,252,117,120,118,142,215,131,79,10,
    225,15,185,24,24,92,100,135,232,139,3,59,68,188,140,174,
    96,97,104,113,97,248,136,10,195,125,214,212,49,116,109,56,
    68,85,165,80,152,222,6,34,185,231,28,85,90,151,126,36,
    152,219,239,203,200,183,239,64,185,154,227,225,83,247,44,133,
    129,191,65,41,45,155,226,34,150,111,199,207,10,133,180,146,
    50,236,153,74,113,58,206,194,71,140,186,191,231,168,107,82,
    185,60,140,107,246,35,106,56,146,21,65,204,254,21,228,129,
    173,192,149,47,67,169,228,136,165,21,173,203,174,101,190,196,
    56,30,15,176,150,230,122,21,127,135,142,115,54,225,240,151,
    200,229,7,200,42,127,12,135,162,106,212,204,90,181,38,56,
    115,140,188,25,234,221,127,1,121,85,54,72,109,62,124,179,
    133,122,252,184,149,199,116,50,7,223,13,214,221,158,126,170,
    224,171,185,253,14,100,151,45,251,118,97,43,186,114,114,41,
    172,47,19,136,68,206,106,156,196,108,222,145,30,0,122,247,
    87,115,93,86,135,186,240,203,90,239,190,186,50,118,198,243,
    208,85,157,56,233,169,107,99,135,63,143,84,242,20,239,48,
    73,28,242,125,243,248,140,246,32,85,178,167,174,142,12,202,
    104,183,231,60,147,189,56,25,60,139,125,169,150,71,198,159,
    248,126,98,187,209,150,116,94,75,74,216,234,198,232,132,44,
    91,107,30,249,172,198,88,25,142,206,61,38,139,158,132,131,
    250,245,138,235,202,227,227,79,195,216,219,145,126,54,103,188,
    57,120,206,167,113,207,197,254,241,187,180,131,124,151,243,35,
    227,126,66,171,22,70,122,83,153,4,110,24,124,39,213,229,
    113,22,124,190,151,180,177,244,61,110,191,204,123,241,158,76,
    200,190,161,186,57,50,97,56,196,12,78,50,243,40,31,189,
    219,9,186,237,110,102,222,30,111,65,76,46,73,207,13,51,
    251,140,74,92,88,38,23,229,250,127,99,162,149,26,143,217,
    23,56,35,192,159,39,160,225,19,55,13,188,231,65,252,169,
    124,29,120,39,233,50,28,167,67,153,15,242,29,185,116,116,
    40,132,18,193,117,209,145,172,199,161,40,145,91,1,218,35,
    225,101,52,146,165,5,10,27,188,239,72,142,44,175,57,147,
    128,165,47,5,250,113,225,49,61,81,165,88,137,0,61,33,
    214,102,107,24,188,40,89,152,120,211,159,17,150,57,61,87,
    179,166,167,106,86,109,194,228,215,161,25,188,219,213,173,218,
    212,180,248,95,255,173,96,64,172,27,43,184,195,127,0,9,
    101,16,170,
};

EmbeddedPython embedded_m5_internal_param_Uart8250(
    "m5/internal/param_Uart8250.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_Uart8250.py",
    "m5.internal.param_Uart8250",
    data_m5_internal_param_Uart8250,
    2419,
    7146);

} // anonymous namespace
