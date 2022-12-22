#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_IntelTrace[] = {
    120,156,189,88,235,114,219,198,21,62,11,128,148,72,73,150,
    100,221,108,75,142,208,180,78,24,79,43,181,105,92,119,38,
    170,27,215,147,206,36,211,200,41,232,140,29,37,19,20,2,
    150,36,40,16,224,0,43,203,244,80,63,90,121,218,190,64,
    31,161,63,250,54,125,163,230,156,179,0,8,93,60,147,153,
    136,165,200,213,98,177,123,246,92,190,115,217,245,33,255,212,
    240,247,137,13,144,165,2,32,192,175,128,8,96,32,224,64,
    128,144,2,130,85,56,170,65,250,17,4,53,120,3,112,96,
    128,52,224,12,59,38,124,99,64,60,207,107,234,16,153,60,
    34,96,212,4,105,193,65,13,158,199,203,96,201,58,28,53,
    33,253,11,8,33,98,1,47,130,25,8,102,225,13,82,199,
    78,131,9,206,2,13,54,121,176,1,193,28,15,54,33,152,
    231,206,28,140,150,64,206,195,193,2,77,59,184,129,100,239,
    35,217,69,38,251,95,34,27,224,155,53,8,110,208,116,228,
    235,107,154,105,209,76,222,111,145,169,44,21,92,46,195,193,
    205,162,191,82,233,175,86,250,107,220,199,93,111,66,127,29,
    250,27,208,191,5,29,84,196,114,185,195,109,144,38,244,239,
    192,193,29,144,248,189,13,103,168,171,224,102,101,197,38,175,
    88,41,87,108,241,138,187,112,112,23,36,126,183,244,138,58,
    180,91,235,168,255,240,127,248,105,161,254,65,205,99,243,82,
    166,89,152,196,110,24,119,146,208,160,247,117,106,200,90,62,
    53,51,185,217,158,144,217,254,3,108,179,192,200,205,118,10,
    72,88,144,44,145,1,167,220,57,53,96,212,130,177,128,190,
    5,129,9,99,220,166,70,12,116,5,156,25,240,173,73,19,
    78,177,181,80,185,239,128,165,180,205,250,172,92,77,105,6,
    78,107,48,174,65,251,197,216,160,129,163,6,164,255,134,215,
    91,76,116,150,137,26,48,198,214,130,51,11,78,235,240,28,
    39,225,80,191,65,226,139,23,99,148,20,71,218,45,11,185,
    221,175,136,75,162,4,97,26,123,3,169,150,177,239,14,189,
    212,27,184,159,197,74,70,207,82,207,151,173,102,49,45,201,
    118,134,158,234,57,188,206,36,133,12,134,138,233,37,177,84,
    115,216,233,132,113,224,14,146,224,56,146,106,150,136,185,157,
    48,146,174,203,47,63,27,12,147,84,125,154,166,73,234,144,
    78,121,48,74,188,114,5,105,212,143,146,76,182,104,55,222,
    198,33,242,138,102,119,134,76,145,24,96,94,105,113,32,51,
    63,13,135,10,77,165,41,210,108,162,214,34,35,113,147,61,
    193,102,183,151,12,228,110,199,243,143,35,53,218,237,202,193,
    131,221,195,227,48,10,118,31,59,95,236,14,71,170,151,196,
    187,56,22,162,204,168,136,104,247,162,10,118,112,206,77,34,
    118,18,118,221,144,197,112,123,50,26,202,116,129,70,239,208,
    70,98,73,204,139,186,48,69,75,44,96,175,134,63,83,108,
    25,115,98,63,36,65,124,18,142,64,100,85,97,67,182,20,
    112,100,64,186,69,160,232,227,87,144,21,17,26,109,122,103,
    240,187,63,147,6,244,104,223,36,83,235,193,49,3,9,17,
    133,51,247,200,182,49,48,26,106,208,175,131,70,9,130,75,
    195,38,29,81,139,211,137,140,129,196,45,200,254,5,168,81,
    196,199,24,114,236,156,153,32,226,37,80,77,114,95,28,93,
    199,13,255,198,240,107,183,136,253,125,70,129,234,133,89,114,
    18,179,174,169,207,14,211,70,205,124,57,122,122,216,151,190,
    202,182,113,224,235,228,216,246,189,56,78,148,237,5,129,237,
    41,149,134,135,199,74,102,182,74,236,123,89,139,204,231,44,
    23,64,42,233,141,134,5,112,200,200,8,28,253,16,132,190,
    194,135,21,126,96,43,100,82,33,8,122,73,144,225,56,145,
    232,74,229,16,147,138,148,156,48,35,140,17,151,166,210,246,
    56,239,6,62,63,46,56,97,32,182,234,5,108,50,25,117,
    84,147,17,232,101,153,203,156,208,56,131,141,8,191,244,162,
    99,201,212,51,164,135,12,81,87,243,48,5,184,221,34,214,
    11,73,153,253,56,137,131,17,114,19,250,239,211,70,183,24,
    116,243,12,187,53,132,220,12,182,117,252,95,23,235,134,111,
    229,64,171,23,96,163,24,167,128,77,45,114,107,35,240,206,
    48,158,180,12,14,8,44,1,123,220,187,212,163,197,206,22,
    53,119,169,121,135,154,237,66,200,235,149,116,225,162,164,15,
    137,186,193,226,177,32,164,124,179,16,36,56,231,53,183,39,
    94,131,81,174,77,232,55,200,71,38,232,183,40,34,166,143,
    168,197,169,236,87,38,100,207,40,254,146,151,48,49,114,8,
    132,54,245,38,128,103,181,56,75,36,238,108,129,85,135,0,
    88,69,97,183,130,66,135,44,194,16,116,110,23,209,205,165,
    25,26,124,206,38,145,170,93,161,87,155,154,159,76,71,185,
    19,24,117,47,193,232,99,218,104,41,135,209,2,195,167,137,
    191,37,195,55,115,141,151,41,110,229,2,124,8,59,214,21,
    216,121,143,122,230,101,25,167,10,155,92,178,63,86,96,67,
    204,24,85,1,246,177,51,218,32,190,171,128,217,192,236,252,
    60,222,192,132,107,112,194,253,37,39,92,78,218,92,186,232,
    0,107,114,140,213,157,26,41,160,99,194,122,158,72,179,6,
    182,195,52,121,53,178,147,142,173,88,66,138,135,123,247,178,
    157,123,217,199,24,233,236,71,28,99,116,172,211,209,44,149,
    67,138,70,180,244,211,87,190,228,252,197,79,174,171,131,143,
    203,129,200,205,243,34,98,103,141,212,103,20,122,229,48,156,
    169,148,162,239,20,52,219,44,53,75,140,126,78,164,155,172,
    86,83,108,32,78,154,130,247,119,117,140,229,114,136,223,226,
    239,15,164,106,146,81,2,21,175,78,91,115,199,140,147,8,
    206,207,207,97,225,90,217,118,118,145,206,87,5,6,234,19,
    12,208,207,44,64,252,15,224,178,80,192,223,129,172,140,198,
    204,65,92,98,158,204,186,66,211,191,3,70,251,21,249,153,
    227,68,155,114,50,207,192,240,145,61,228,169,58,93,127,14,
    255,172,184,74,145,84,205,188,240,171,38,85,171,140,49,12,
    143,31,148,56,173,243,193,136,76,209,243,50,154,166,35,204,
    196,251,38,65,187,44,216,48,194,94,47,86,102,53,81,151,
    246,255,118,130,20,74,75,155,98,197,168,216,255,87,212,124,
    88,154,94,20,99,215,198,202,54,188,61,99,186,58,74,127,
    67,251,89,204,225,226,140,218,192,255,188,218,125,242,244,79,
    79,247,219,21,122,37,170,107,5,170,63,44,81,45,57,183,
    188,225,154,159,90,131,12,123,102,8,60,124,97,217,68,103,
    29,11,100,13,14,234,132,127,46,105,69,238,30,162,136,70,
    20,187,206,37,46,86,199,190,86,84,105,91,109,54,106,94,
    77,193,203,201,114,123,145,55,56,12,188,71,71,68,152,168,
    251,133,195,24,5,171,75,85,86,9,236,226,109,220,242,227,
    131,130,229,151,83,240,240,223,32,157,146,85,198,115,144,248,
    236,214,207,122,210,30,200,193,33,30,219,122,225,208,238,68,
    94,151,181,110,230,162,60,45,68,81,108,182,139,105,62,187,
    79,109,98,251,73,140,97,245,216,87,73,106,7,18,15,51,
    50,176,127,97,115,76,182,195,204,246,14,241,173,231,43,13,
    222,243,222,198,181,162,151,118,51,46,11,143,78,168,59,37,
    171,185,120,44,13,177,28,30,64,153,240,244,129,169,12,177,
    92,232,106,95,192,220,132,199,20,53,210,81,134,82,190,179,
    67,205,7,48,189,72,252,17,48,96,32,35,85,212,197,166,
    209,48,20,109,63,153,245,37,173,202,46,123,217,23,63,196,
    203,244,229,70,238,107,245,226,86,100,6,36,159,102,232,226,
    162,158,95,92,160,3,206,252,88,7,100,72,79,9,204,234,
    90,253,206,121,248,127,224,212,249,45,228,169,244,109,62,39,
    170,98,44,232,181,125,81,84,223,85,25,248,200,190,113,5,
    48,92,63,149,158,146,90,255,91,83,145,138,221,84,111,115,
    50,241,163,203,133,227,227,82,128,51,174,24,70,171,108,22,
    125,202,96,179,136,231,241,29,172,32,45,174,32,247,168,130,
    28,179,180,174,161,139,200,9,186,106,165,208,171,216,196,242,
    196,189,40,184,174,18,137,53,111,56,148,113,224,220,135,106,
    225,199,175,167,96,97,10,11,175,161,146,189,77,177,138,149,
    222,101,191,161,32,87,17,136,237,83,43,61,101,58,150,98,
    252,253,181,192,95,139,170,235,73,164,115,246,168,225,216,86,
    134,53,231,247,80,132,186,18,97,129,140,164,146,151,244,205,
    97,41,63,203,5,18,163,123,50,194,226,155,203,91,124,142,
    92,119,90,33,242,119,185,60,124,88,192,16,41,234,70,195,
    108,212,27,130,51,202,133,43,71,189,63,149,115,186,136,27,
    101,14,187,226,98,41,34,223,140,21,145,158,84,194,199,137,
    125,111,160,111,57,248,76,239,252,20,242,19,154,243,126,169,
    47,58,169,114,229,172,207,31,136,73,206,118,156,220,156,95,
    211,56,25,117,240,96,167,144,102,167,144,38,83,44,76,202,
    151,115,131,7,106,243,202,121,237,112,160,47,133,248,110,177,
    250,62,72,61,236,175,93,24,205,100,26,122,81,248,90,223,
    2,21,195,108,166,75,27,95,81,191,21,239,56,5,169,159,
    93,158,80,216,128,77,158,202,110,152,225,14,121,114,42,22,
    231,174,72,38,82,119,175,138,78,213,181,83,2,136,46,207,
    244,249,239,17,221,36,100,159,96,67,119,61,141,197,6,130,
    133,92,212,196,163,216,130,176,204,249,165,134,53,63,215,176,
    26,51,38,31,225,23,176,240,110,90,141,185,121,161,255,182,
    17,86,77,99,27,215,125,15,133,7,53,108,
};

EmbeddedPython embedded_m5_internal_param_IntelTrace(
    "m5/internal/param_IntelTrace.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_IntelTrace.py",
    "m5.internal.param_IntelTrace",
    data_m5_internal_param_IntelTrace,
    2172,
    6259);

} // anonymous namespace