#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseTags[] = {
    120,156,181,88,91,115,219,198,21,62,11,128,148,72,73,22,
    117,183,44,217,162,111,13,235,105,165,54,141,227,204,196,245,
    212,73,211,153,100,38,138,11,186,99,135,201,20,133,128,21,
    5,10,4,24,96,105,153,174,244,82,121,218,78,223,251,19,
    250,208,135,254,141,62,247,31,181,231,156,5,72,144,146,198,
    158,169,100,145,235,229,193,238,217,115,249,206,101,225,65,246,
    175,132,223,95,213,1,210,127,11,0,31,63,2,66,128,174,
    128,150,0,33,5,248,203,112,88,130,228,35,240,75,240,22,
    160,101,128,52,224,20,39,38,124,103,64,52,203,123,202,16,
    154,76,17,48,168,130,180,160,85,130,23,209,2,88,178,12,
    135,85,72,254,0,66,136,72,192,75,127,10,252,105,120,139,
    220,113,82,97,134,211,64,196,42,19,43,224,207,48,177,10,
    254,44,79,102,96,80,3,57,11,173,57,90,214,186,134,108,
    31,32,219,121,102,251,31,98,235,227,147,21,240,175,209,114,
    148,235,91,90,105,209,74,62,111,158,185,212,114,41,23,160,
    181,152,207,151,10,243,229,194,124,165,48,95,45,204,215,10,
    243,235,133,249,122,97,126,163,48,223,40,204,55,121,142,154,
    44,66,231,38,116,110,65,103,11,246,209,184,11,67,169,235,
    32,77,232,220,134,214,109,144,248,169,195,41,218,223,95,44,
    236,184,195,59,150,134,59,238,242,142,123,208,186,7,18,63,
    119,245,142,50,52,27,171,232,211,224,191,248,175,129,62,5,
    53,139,195,43,153,164,65,28,57,65,180,31,7,6,61,47,
    211,64,8,240,104,152,202,160,240,57,65,225,159,192,56,240,
    141,12,10,39,128,140,5,233,18,26,112,194,147,19,3,6,
    13,56,22,208,177,192,55,225,24,143,41,145,0,109,1,167,
    6,124,111,210,130,19,28,45,116,216,45,176,148,198,65,135,
    29,166,57,77,193,73,9,142,75,208,124,121,108,16,225,176,
    2,201,63,224,205,38,51,157,102,166,6,28,227,104,193,169,
    5,39,101,120,129,139,144,212,169,144,250,226,229,49,106,138,
    148,102,195,66,105,119,11,234,146,42,126,144,68,110,87,170,
    121,156,59,61,55,113,187,206,103,110,42,159,187,237,180,81,
    205,23,197,233,118,207,85,7,54,239,50,201,28,221,158,98,
    110,113,36,213,12,78,246,131,200,119,186,177,223,15,165,154,
    38,86,206,126,16,74,199,225,135,95,118,123,113,162,190,72,
    146,56,177,201,162,76,12,99,119,184,131,236,233,133,113,42,
    27,116,26,31,99,19,123,69,171,247,123,204,145,4,96,73,
    105,179,47,83,47,9,122,10,29,165,57,210,106,226,214,32,
    23,241,144,62,197,97,231,32,238,202,157,125,215,235,135,106,
    176,211,150,221,135,59,123,253,32,244,119,94,126,242,241,78,
    111,160,14,226,104,7,105,65,164,36,154,33,220,25,55,192,
    54,174,88,36,86,71,65,219,9,88,9,231,64,134,61,153,
    204,17,245,6,29,35,106,98,86,148,133,41,26,98,14,103,
    37,252,154,98,211,152,17,187,1,169,225,145,106,4,32,171,
    8,25,242,163,128,67,3,146,77,2,68,7,63,130,60,136,
    176,104,210,51,131,159,253,150,244,215,212,142,73,110,214,196,
    99,6,17,162,9,87,62,38,191,70,192,72,40,65,167,12,
    26,33,8,44,13,153,100,64,35,46,39,54,6,50,183,32,
    253,59,160,61,17,27,199,144,225,230,212,4,17,213,64,85,
    41,29,32,117,21,15,252,19,67,175,217,32,241,119,25,3,
    234,32,72,227,163,136,45,77,115,14,150,38,90,230,217,224,
    155,189,142,244,84,186,133,132,111,227,126,221,115,163,40,86,
    117,215,247,235,174,82,73,176,215,87,50,173,171,184,126,63,
    109,144,243,236,133,28,70,67,126,131,94,14,27,114,49,194,
    70,255,240,3,79,225,143,37,254,193,94,72,165,66,8,28,
    196,126,138,116,98,209,150,202,38,33,21,25,57,102,65,24,
    33,14,45,165,227,113,221,53,252,253,52,151,132,97,216,40,
    231,160,73,101,184,175,170,140,63,55,77,29,150,132,232,12,
    53,98,252,202,13,251,146,185,167,200,15,5,162,169,150,225,
    210,193,118,157,4,207,245,100,225,163,56,242,7,40,75,224,
    125,64,199,92,103,200,205,50,232,86,16,112,83,56,150,241,
    255,178,88,53,60,43,131,89,57,135,26,101,55,5,236,104,
    145,249,26,97,119,138,153,164,97,112,42,96,249,57,218,238,
    208,140,54,219,155,52,220,164,225,22,13,91,185,138,151,169,
    231,220,164,158,143,136,183,193,202,177,26,100,120,51,87,195,
    31,139,152,245,81,196,96,118,107,18,242,13,138,143,17,242,
    45,202,132,201,19,26,113,41,199,148,9,233,115,202,187,20,
    33,204,140,130,1,97,77,179,17,216,217,40,118,141,148,157,
    206,113,106,19,248,138,8,108,23,16,104,147,63,24,126,246,
    122,158,215,28,90,161,129,103,111,16,171,210,57,86,173,211,
    112,251,42,76,59,130,80,251,12,132,62,165,99,106,25,132,
    230,24,58,85,252,214,12,207,204,236,61,44,108,75,19,208,
    33,220,88,231,224,230,71,52,51,207,106,120,133,144,201,244,
    250,77,1,50,36,138,81,20,127,23,39,131,53,146,186,8,
    150,53,172,200,47,162,53,44,178,6,23,217,159,113,145,229,
    66,205,45,144,78,172,38,231,86,61,41,145,250,251,38,172,
    102,197,51,173,224,216,75,226,215,131,122,188,95,87,172,31,
    229,193,199,247,211,237,251,233,167,152,225,234,79,56,183,232,
    28,167,179,88,34,123,148,133,104,235,23,175,61,201,85,139,
    127,57,142,78,58,14,39,32,39,171,134,136,155,21,50,158,
    145,91,149,211,111,170,18,202,186,151,110,215,234,208,174,36,
    230,87,196,184,202,70,53,197,26,98,164,42,248,116,71,103,
    86,110,128,248,41,126,63,35,67,147,134,18,168,5,182,155,
    90,54,22,155,20,176,127,50,134,131,75,20,218,222,65,46,
    191,203,253,95,30,249,159,190,102,14,223,191,0,183,129,2,
    254,12,228,97,116,100,6,223,33,218,201,165,75,180,252,247,
    192,56,63,167,38,115,126,104,82,29,230,21,152,54,210,71,
    188,84,151,232,175,224,175,133,32,201,11,169,153,53,122,197,
    66,106,13,115,11,67,227,189,138,165,53,158,132,200,17,7,
    110,74,203,116,102,25,197,221,40,85,15,91,52,204,172,151,
    137,147,105,205,210,161,211,191,31,161,132,74,209,134,88,50,
    10,190,255,57,13,31,14,221,46,114,218,37,9,178,5,23,
    215,72,71,103,230,239,232,52,139,229,155,159,98,201,115,6,
    67,0,151,114,0,127,56,4,176,228,2,242,150,27,122,26,
    13,242,226,169,33,240,182,134,125,17,93,142,44,144,37,104,
    149,9,234,220,177,138,44,18,68,158,118,40,73,141,85,39,
    214,126,87,219,101,232,72,237,35,26,94,95,122,56,147,178,
    143,67,183,187,231,187,79,18,98,75,188,189,60,54,140,92,
    208,90,81,80,194,181,184,72,86,254,249,48,23,248,213,165,
    135,242,199,200,101,40,40,3,215,143,61,142,223,231,7,178,
    222,149,221,61,188,143,29,4,189,250,126,232,182,217,226,102,
    166,200,55,185,34,138,93,54,89,199,211,7,52,198,117,47,
    142,48,119,246,61,21,39,117,95,226,61,69,250,245,159,214,
    57,241,214,131,180,238,238,225,83,215,83,26,167,227,97,197,
    141,160,155,180,83,238,249,14,143,104,122,37,30,115,240,182,
    25,80,167,11,195,154,166,111,66,195,60,202,61,172,134,61,
    150,31,188,129,168,129,78,38,84,211,237,109,26,126,12,87,
    149,110,63,66,46,63,16,59,50,67,89,108,24,21,131,229,
    201,215,60,163,29,231,196,214,191,222,39,182,244,59,16,92,
    32,203,208,153,226,113,154,242,108,171,146,19,171,60,206,48,
    113,54,39,206,241,120,141,137,243,57,177,198,227,2,19,23,
    115,226,18,143,203,76,92,201,67,121,149,137,107,208,186,158,
    191,174,89,167,176,46,255,191,97,205,161,114,37,65,242,199,
    75,141,102,251,209,149,203,105,127,2,89,37,190,40,146,199,
    90,182,167,58,146,181,133,177,94,15,150,89,39,221,219,179,
    78,226,69,116,3,123,55,139,123,183,199,212,187,29,115,127,
    231,24,186,125,27,57,134,91,110,126,47,64,215,247,72,30,
    57,227,80,213,221,25,57,219,237,245,100,228,219,15,160,216,
    112,241,227,75,55,14,69,234,41,20,42,167,41,150,177,195,
    58,11,55,202,58,5,101,24,86,165,33,192,54,175,202,113,
    127,203,29,215,184,49,150,122,236,199,52,212,198,242,140,54,
    238,205,51,57,192,217,11,99,239,208,73,131,55,146,250,244,
    119,172,192,2,206,253,231,136,196,213,125,98,131,239,42,215,
    9,93,37,35,111,192,76,223,181,134,216,82,83,94,36,170,
    123,103,55,165,242,135,190,140,84,224,134,142,235,121,18,27,
    113,226,254,94,11,233,8,110,227,38,159,168,181,115,182,231,
    214,184,232,25,113,227,119,17,100,129,91,103,23,41,183,61,
    102,128,119,44,33,118,116,19,45,208,24,124,138,92,234,203,
    80,42,57,17,15,138,188,155,221,111,125,137,5,49,30,96,
    49,226,198,31,127,135,142,115,53,117,229,151,200,229,13,177,
    91,6,174,43,120,23,93,201,255,140,74,185,34,184,20,79,
    188,132,213,82,220,135,188,205,29,164,54,103,155,249,33,44,
    249,109,97,94,36,9,188,124,217,218,117,187,250,221,15,191,
    235,176,239,66,118,123,181,63,24,34,155,238,240,124,183,208,
    183,51,204,27,220,38,112,87,96,255,130,232,4,189,238,195,
    237,92,167,109,173,211,231,132,95,233,235,215,96,252,206,178,
    251,144,161,127,193,210,95,199,93,23,233,27,231,174,104,6,
    221,140,209,194,196,115,63,161,93,43,19,212,84,38,8,63,
    66,206,250,196,19,25,245,187,206,179,163,164,137,109,178,84,
    155,231,158,246,44,62,146,201,215,49,58,89,221,153,88,48,
    122,196,12,156,87,146,122,40,117,251,29,124,244,105,23,232,
    214,223,107,14,82,37,187,23,24,18,11,69,210,117,195,204,
    62,228,199,124,1,191,129,57,207,218,84,155,199,40,220,173,
    176,149,114,168,49,174,19,217,14,240,228,132,25,141,109,200,
    74,2,129,145,197,158,140,208,194,230,43,9,3,221,179,235,
    187,255,19,138,91,126,123,65,111,248,42,243,21,81,54,168,
    80,152,120,17,159,19,150,57,91,171,88,179,51,21,171,50,
    101,242,203,155,57,188,122,85,173,202,204,172,56,239,111,11,
    67,168,106,108,45,84,196,255,0,94,228,236,232,
};

EmbeddedPython embedded_m5_internal_param_BaseTags(
    "m5/internal/param_BaseTags.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_BaseTags.py",
    "m5.internal.param_BaseTags",
    data_m5_internal_param_BaseTags,
    2365,
    6853);

} // anonymous namespace