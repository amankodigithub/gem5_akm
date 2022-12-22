#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BasePrefetcher[] = {
    120,156,189,88,95,115,219,198,17,223,3,64,74,164,36,139,
    250,111,217,178,5,59,181,77,59,142,212,166,113,221,153,184,
    158,58,105,218,105,102,172,40,96,58,118,152,76,81,136,56,
    74,160,72,128,3,156,44,211,35,189,68,158,182,15,125,235,
    244,35,244,161,95,35,159,160,223,168,221,221,3,72,80,162,
    36,207,212,172,37,157,23,135,189,197,238,222,111,255,220,53,
    32,253,87,192,191,95,219,0,201,93,3,192,199,95,1,109,
    128,142,128,186,0,33,5,248,139,176,95,128,248,19,240,11,
    240,22,160,110,128,52,224,4,9,19,190,51,32,156,230,53,
    69,104,155,60,35,160,87,6,105,65,189,0,47,194,57,176,
    100,17,246,203,16,255,9,132,16,161,128,151,254,4,248,147,
    240,22,165,35,81,98,129,147,64,147,101,158,44,129,63,197,
    147,101,240,167,153,152,130,94,5,228,52,212,103,136,173,126,
    5,197,62,64,177,179,44,246,223,36,214,199,55,75,224,95,
    33,118,212,235,91,226,180,136,147,191,55,203,82,42,153,150,
    115,80,159,207,232,133,28,189,152,163,151,114,244,114,142,94,
    201,209,87,115,244,106,142,190,150,163,175,231,232,181,28,125,
    35,71,223,204,209,235,57,218,206,209,183,114,244,237,28,253,
    65,142,254,9,211,232,169,121,104,221,129,214,93,104,221,131,
    38,110,222,92,223,43,85,144,38,180,238,67,253,62,72,252,
    173,194,9,238,175,63,159,91,241,128,87,44,244,87,124,200,
    43,30,66,253,33,72,252,253,80,175,40,66,173,186,140,152,
    9,254,131,255,170,2,41,53,141,195,43,25,39,65,20,186,
    65,216,140,2,131,222,23,105,32,132,53,104,152,72,161,246,
    57,65,237,95,192,56,243,141,20,106,199,128,130,5,217,210,
    54,224,152,137,99,3,122,85,56,18,208,178,192,55,225,8,
    63,83,32,5,118,5,156,24,240,189,73,12,199,56,90,8,
    136,155,96,41,141,179,22,3,66,75,154,128,227,2,28,21,
    160,246,242,200,160,137,253,18,196,255,132,55,107,44,116,146,
    133,26,112,132,163,5,39,22,28,23,225,5,50,225,84,171,
    68,230,139,151,71,104,41,206,212,170,22,106,187,149,51,151,
    76,241,131,56,244,58,82,45,33,237,118,189,216,235,184,159,
    121,137,220,142,101,83,170,198,158,140,171,229,140,53,74,54,
    186,158,218,115,120,173,73,78,233,116,21,203,140,66,169,166,
    144,104,6,161,239,118,34,255,160,45,213,36,9,116,155,65,
    91,186,46,191,252,125,167,27,197,234,139,56,142,98,135,252,
    202,147,237,200,235,175,32,175,54,218,81,34,171,244,53,254,
    140,67,226,21,113,55,187,44,145,20,96,125,105,177,47,147,
    70,28,116,21,110,151,150,72,220,36,173,74,27,197,67,242,
    59,28,54,247,162,142,220,108,122,141,131,182,234,109,238,202,
    206,163,205,157,131,160,237,111,62,115,158,111,118,123,106,47,
    10,55,113,46,8,149,68,103,180,55,71,185,97,3,249,230,
    73,224,97,176,235,6,108,138,187,39,219,93,25,207,208,236,
    53,250,152,168,136,105,81,20,166,168,138,25,164,10,248,103,
    138,53,99,74,108,5,100,76,131,12,36,48,89,121,248,208,
    158,10,216,55,32,94,35,112,180,240,87,208,110,34,68,106,
    244,206,224,119,95,147,23,244,108,203,164,45,215,147,71,12,
    40,68,22,114,62,161,61,14,129,81,81,128,86,17,52,90,
    16,100,26,62,113,143,70,100,39,49,6,10,183,32,249,7,
    160,87,17,39,71,144,98,232,196,4,17,86,64,149,41,245,
    224,236,50,126,240,7,134,97,173,74,234,111,49,18,212,94,
    144,68,135,33,251,155,104,14,156,26,122,102,187,247,213,78,
    75,54,84,178,142,19,223,70,7,118,195,11,195,72,217,158,
    239,219,158,82,113,176,115,160,100,98,171,200,190,147,84,105,
    11,157,185,12,76,125,121,189,110,6,30,218,104,4,143,126,
    240,131,134,194,135,5,126,224,93,72,164,66,32,236,69,126,
    130,243,36,98,87,42,135,148,84,228,228,136,21,97,156,184,
    196,74,159,71,190,43,248,252,44,211,132,193,88,45,102,208,
    73,100,187,169,202,140,66,47,73,92,214,132,230,25,112,36,
    248,149,215,62,144,44,61,65,121,168,16,145,90,135,49,65,
    238,42,169,159,89,203,38,132,81,232,247,80,163,160,113,143,
    62,118,149,129,55,205,208,91,66,216,77,224,88,196,255,139,
    98,217,104,88,41,216,138,25,224,40,223,41,224,237,22,233,
    142,35,248,78,48,183,84,13,78,14,108,5,71,222,109,162,
    104,177,179,70,195,13,26,110,210,176,158,25,250,254,173,157,
    57,109,237,99,250,130,193,38,178,49,180,9,102,102,140,63,
    20,61,171,131,232,193,172,87,163,40,48,40,86,6,81,96,
    81,134,140,159,210,136,172,28,95,38,36,223,80,62,166,104,
    97,97,20,24,8,113,162,6,192,103,215,56,21,50,121,50,
    195,172,67,64,204,163,113,55,135,70,135,118,133,161,232,172,
    102,153,206,37,14,13,66,231,58,137,42,140,240,173,77,195,
    173,241,57,120,0,167,221,51,112,250,148,62,86,73,225,52,
    195,48,42,227,95,197,104,152,169,215,251,101,111,225,20,140,
    8,67,214,8,12,221,37,202,60,107,231,216,225,147,90,247,
    219,28,124,72,33,35,111,196,22,18,189,21,210,61,15,156,
    21,172,218,47,194,21,44,196,6,23,226,159,114,33,230,98,
    206,109,152,78,184,38,231,92,77,20,200,9,77,19,150,211,
    2,155,148,112,236,198,209,235,158,29,53,109,197,86,82,126,
    124,114,39,217,184,147,124,138,153,207,126,202,57,71,231,62,
    157,221,98,217,165,236,68,75,191,120,221,144,92,211,248,201,
    117,117,50,114,57,49,185,105,173,68,12,81,193,102,135,179,
    111,57,45,39,42,166,108,60,38,239,150,251,222,37,101,191,
    36,241,101,118,173,41,86,16,47,101,193,58,184,58,239,114,
    171,196,111,241,239,51,114,55,217,41,129,154,113,167,166,53,
    100,229,201,12,231,225,16,38,222,187,234,206,38,202,250,67,
    134,133,226,0,11,244,103,102,128,254,11,112,219,40,224,207,
    64,187,141,155,154,2,186,143,127,218,222,5,98,255,35,48,
    242,71,212,109,206,27,53,170,213,204,129,233,36,121,204,172,
    186,140,127,9,127,205,133,77,86,108,205,180,49,204,23,91,
    171,159,115,24,38,239,84,80,173,225,228,68,219,177,231,37,
    196,166,51,206,32,18,7,137,188,223,204,97,198,125,255,152,
    153,212,130,93,210,225,251,1,98,168,92,93,23,11,70,14,
    7,63,163,225,227,62,4,68,54,247,94,213,89,135,243,171,
    169,171,179,247,119,244,77,139,181,156,157,224,110,97,88,76,
    31,216,133,12,216,31,247,129,45,185,212,188,229,35,1,141,
    6,237,235,137,33,240,60,137,221,20,29,223,44,144,5,168,
    23,41,4,184,219,21,105,132,136,44,41,81,10,27,170,99,
    236,137,45,237,163,254,214,234,93,163,225,245,152,130,157,54,
    238,73,219,235,236,248,222,211,55,36,156,190,208,200,98,198,
    200,212,173,228,213,37,188,139,243,52,230,199,71,153,218,175,
    198,20,232,191,64,89,125,117,25,214,126,212,224,232,254,102,
    79,218,29,217,217,193,211,221,94,208,181,155,109,111,151,189,
    111,166,230,124,149,153,163,120,251,78,87,255,228,1,141,145,
    221,136,66,204,178,7,13,21,197,182,47,241,188,35,125,251,
    35,155,83,180,29,36,182,183,131,111,189,134,210,248,29,14,
    58,110,37,189,120,55,225,174,113,255,144,200,49,238,158,139,
    39,216,0,59,230,35,232,215,64,125,174,234,103,92,70,183,
    14,7,44,87,120,146,81,61,157,112,168,19,112,54,104,184,
    15,227,77,204,159,160,172,30,9,37,151,20,197,117,163,100,
    168,197,51,49,183,77,171,147,179,145,247,227,187,68,158,190,
    195,65,6,89,132,214,4,143,147,148,151,235,165,108,178,204,
    227,20,79,78,103,147,51,60,94,225,201,217,108,178,194,227,
    28,79,206,103,147,11,60,46,242,228,82,54,185,204,227,10,
    79,94,205,162,127,149,39,175,65,253,122,118,7,181,70,153,
    160,248,191,102,2,142,171,49,70,212,201,123,77,0,206,227,
    255,147,182,206,47,33,45,237,231,5,255,80,63,248,76,7,
    191,246,54,54,0,189,69,182,76,31,34,216,50,241,34,188,
    134,141,161,197,141,225,19,106,12,143,184,121,116,13,221,27,
    14,54,137,123,123,190,146,160,142,59,148,135,238,40,68,235,
    6,144,182,223,235,118,101,232,59,15,32,223,211,241,235,49,
    57,138,66,252,111,144,43,200,166,88,196,38,238,44,12,41,
    105,229,12,99,184,21,250,192,91,27,239,86,254,61,219,202,
    234,141,161,204,229,60,161,161,50,148,166,180,187,237,115,146,
    135,27,133,174,239,41,143,78,6,151,51,97,119,160,111,188,
    244,243,133,11,2,44,8,151,74,101,166,156,84,122,190,112,
    65,39,192,158,255,50,169,204,148,147,74,207,23,46,136,165,
    231,95,42,149,153,114,82,233,89,221,186,96,193,97,28,40,
    201,98,47,231,34,185,147,90,46,79,168,181,243,150,36,61,
    237,128,11,25,72,28,55,175,189,132,33,173,168,228,250,178,
    45,241,83,163,22,41,194,76,122,96,247,37,214,234,168,135,
    39,43,62,183,224,115,219,117,199,89,236,126,133,178,126,128,
    244,22,6,139,29,30,174,151,6,63,70,169,88,18,220,45,
    156,186,117,214,218,124,68,16,255,154,6,78,109,179,125,196,
    243,173,104,86,190,41,46,248,216,184,229,117,244,237,22,223,
    227,56,31,64,122,26,119,238,245,131,134,110,38,248,100,164,
    207,153,152,164,184,141,225,174,197,249,121,150,187,58,143,54,
    50,195,54,180,97,181,94,162,100,135,47,101,59,143,216,225,
    121,30,25,30,116,220,231,178,19,197,189,231,145,175,247,55,
    255,254,153,239,199,142,23,238,74,247,149,164,46,138,49,51,
    196,144,182,80,90,70,198,101,143,84,101,152,247,140,46,154,
    9,95,234,75,73,110,255,207,190,255,188,29,53,246,165,159,
    242,220,56,159,231,55,81,199,195,249,209,95,169,5,217,87,
    230,78,189,247,99,90,181,116,106,54,145,113,224,181,131,55,
    82,173,142,242,224,246,97,92,195,196,115,214,127,250,107,219,
    209,161,140,201,191,109,117,251,20,195,224,21,11,56,207,205,
    167,229,232,175,157,99,219,193,78,186,233,163,61,136,229,53,
    238,120,237,212,63,167,53,238,123,38,83,229,230,69,66,180,
    81,4,234,236,61,95,178,141,218,42,234,144,134,102,184,157,
    100,27,134,131,143,227,61,150,187,1,218,16,179,184,161,101,
    105,49,166,240,60,63,131,229,69,140,49,73,232,131,151,190,
    228,121,74,215,134,124,215,64,151,187,165,217,146,40,26,84,
    168,77,81,198,82,109,153,211,149,146,53,61,85,178,74,19,
    38,223,213,205,224,137,186,108,149,166,166,197,187,252,172,99,
    186,41,27,235,243,37,241,95,172,136,186,40,
};

EmbeddedPython embedded_m5_internal_param_BasePrefetcher(
    "m5/internal/param_BasePrefetcher.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_BasePrefetcher.py",
    "m5.internal.param_BasePrefetcher",
    data_m5_internal_param_BasePrefetcher,
    2460,
    7490);

} // anonymous namespace