#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RealViewOsc[] = {
    120,156,189,88,95,115,219,198,17,223,3,72,74,164,36,75,
    178,172,63,150,100,139,118,226,152,113,99,201,78,227,186,51,
    113,220,58,118,58,211,204,88,118,193,52,118,148,76,81,8,
    56,73,160,64,128,5,78,146,153,145,219,105,229,105,51,147,
    231,188,245,181,15,253,54,253,8,253,38,237,238,30,0,66,
    36,229,186,83,179,150,116,94,236,45,246,246,207,239,246,246,
    224,66,250,175,140,127,63,175,3,36,219,6,128,135,191,2,
    2,128,182,128,45,1,66,10,240,46,192,126,25,226,143,192,
    43,195,43,128,45,3,164,1,39,72,152,240,181,1,225,36,
    191,83,129,192,100,142,128,110,13,100,9,182,202,240,44,156,
    133,146,172,192,126,13,226,223,130,16,34,20,240,220,27,3,
    111,28,94,161,118,36,170,172,112,28,136,89,99,102,21,188,
    9,102,214,192,155,100,98,2,186,51,32,39,97,107,138,196,
    182,206,161,218,27,168,118,154,213,254,131,212,122,56,51,15,
    222,57,18,71,187,190,34,201,18,73,242,122,211,172,101,38,
    179,114,22,182,206,103,244,92,129,190,80,160,231,11,244,66,
    129,94,44,208,75,5,250,98,129,94,46,208,43,5,122,181,
    64,95,42,208,151,11,244,90,129,174,23,232,43,5,250,106,
    129,126,167,64,191,91,160,175,21,232,247,10,244,245,2,221,
    40,208,239,51,141,81,62,15,173,27,208,250,17,180,62,128,
    29,76,252,108,30,209,155,32,77,104,173,195,214,58,72,252,
    189,9,39,136,13,239,124,225,141,13,126,99,46,127,227,22,
    191,113,27,182,110,131,196,223,91,250,141,10,52,27,11,136,
    55,255,95,248,175,33,144,82,147,56,28,202,56,241,163,208,
    246,195,157,200,55,104,190,66,3,161,211,165,97,44,133,233,
    67,130,233,223,129,49,234,25,41,76,95,2,42,22,228,75,
    96,192,75,38,94,26,208,109,192,177,128,86,9,60,19,142,
    113,153,50,25,176,43,224,196,128,111,76,18,120,137,99,9,
    193,116,25,74,74,99,180,197,96,210,154,198,224,101,25,142,
    203,208,124,126,108,16,99,191,10,241,223,224,219,85,86,58,
    206,74,13,56,198,177,4,39,37,120,89,129,103,40,132,172,
    86,149,220,23,207,143,209,83,228,52,27,37,180,118,179,224,
    46,185,226,249,113,232,180,165,58,143,180,221,113,98,167,109,
    91,210,9,190,244,229,209,147,196,109,212,50,185,40,89,239,
    56,106,207,226,23,77,138,72,187,163,88,97,20,74,53,129,
    196,142,31,122,118,59,242,14,2,169,198,73,155,189,227,7,
    210,182,121,242,151,237,78,20,171,207,226,56,138,45,10,42,
    51,131,200,201,223,160,144,186,65,148,200,6,173,198,203,88,
    164,94,145,244,78,135,53,146,1,108,44,189,236,201,196,141,
    253,142,194,92,105,141,36,77,218,26,148,37,30,146,71,56,
    108,236,69,109,185,177,227,184,7,129,234,110,236,202,246,157,
    141,237,3,63,240,54,30,88,143,55,58,93,181,23,133,27,
    200,243,67,37,49,18,193,198,64,12,214,81,136,162,147,28,
    249,187,182,207,126,216,123,50,232,200,120,138,184,203,180,146,
    152,17,147,162,34,76,209,16,83,72,149,241,207,20,171,198,
    132,216,244,201,19,151,188,35,24,149,138,192,161,108,10,216,
    55,32,94,37,88,180,240,87,80,30,17,28,77,154,51,120,
    238,87,20,2,205,109,153,148,108,205,60,102,40,33,166,80,
    242,30,101,55,4,198,67,25,90,21,208,56,65,120,105,224,
    196,93,26,81,156,212,24,168,188,4,201,15,128,33,69,132,
    28,67,138,158,19,19,68,56,3,170,70,5,11,185,11,184,
    224,159,24,128,205,6,153,191,201,48,80,123,126,18,29,133,
    28,108,162,121,203,52,49,50,79,187,79,182,91,210,85,201,
    26,50,190,138,14,234,174,19,134,145,170,59,158,87,119,148,
    138,253,237,3,37,147,186,138,234,215,146,6,229,207,154,205,
    144,148,235,235,118,50,228,80,150,17,57,250,193,243,93,133,
    15,115,252,192,89,72,164,66,20,236,69,94,130,124,82,177,
    43,149,69,70,42,10,114,196,134,48,72,108,18,165,229,81,
    238,28,62,63,200,44,97,36,54,42,25,110,18,25,236,168,
    26,67,208,73,18,155,45,33,62,163,141,20,31,58,193,129,
    100,237,9,234,67,131,136,212,54,140,2,111,75,100,123,230,
    42,219,31,70,161,215,69,115,124,247,58,173,180,196,168,155,
    100,220,205,35,230,198,112,172,224,255,21,177,96,184,165,20,
    105,149,12,109,84,230,20,112,174,69,154,110,68,222,9,150,
    148,134,193,53,129,93,224,61,119,149,40,122,217,90,165,225,
    18,13,151,105,88,203,188,124,203,174,78,245,187,122,151,212,
    27,236,31,123,66,225,55,51,79,188,83,251,230,98,111,223,
    96,165,107,18,254,13,218,37,61,252,151,168,42,198,247,105,
    68,81,222,89,38,36,95,80,13,166,125,194,202,104,75,32,
    184,137,234,65,158,227,98,205,144,191,227,25,90,45,130,96,
    17,135,187,5,28,90,148,18,6,161,117,49,43,112,54,73,
    104,248,89,43,164,170,60,36,176,117,26,174,140,40,186,61,
    32,237,14,0,233,99,90,105,38,5,210,20,3,168,134,127,
    51,134,107,166,33,207,207,185,185,62,0,17,122,74,67,208,
    243,30,81,230,160,147,163,5,78,234,218,47,10,192,33,107,
    140,162,7,155,72,116,23,201,240,34,100,22,241,140,126,22,
    46,226,177,107,240,177,123,139,143,93,62,186,185,97,211,69,
    214,228,58,171,137,50,69,96,199,132,133,244,56,77,170,56,
    118,226,232,69,183,30,237,212,21,187,72,53,241,222,181,100,
    253,90,242,49,86,187,250,125,174,51,186,222,233,138,22,203,
    14,85,36,122,245,179,23,174,228,67,140,159,108,91,23,32,
    155,139,145,157,30,142,136,158,121,138,159,145,5,150,75,113,
    162,98,170,192,163,8,109,45,15,45,89,250,57,233,174,113,
    92,77,177,136,72,169,9,54,192,214,133,150,187,34,158,197,
    191,79,41,214,228,164,4,234,217,173,166,54,143,45,39,31,
    172,15,78,161,225,237,218,109,109,160,162,95,103,40,168,244,
    80,64,127,102,134,227,191,0,183,135,2,254,12,148,103,76,
    103,138,227,28,246,148,216,57,18,255,13,48,224,135,156,210,
    92,43,154,116,50,179,4,150,144,228,46,139,234,67,251,115,
    248,174,176,91,178,163,213,76,27,192,226,209,90,202,235,12,
    3,228,141,142,207,210,233,130,68,185,216,115,18,18,211,85,
    166,183,1,123,149,59,239,219,176,202,190,101,180,140,107,173,
    54,25,240,77,15,43,116,56,173,136,57,163,128,128,219,52,
    124,152,39,95,100,188,183,103,203,26,156,125,112,218,186,86,
    127,77,11,150,216,196,233,49,46,211,5,29,57,152,203,25,
    152,63,204,193,44,249,84,121,197,29,63,141,6,165,243,196,
    16,120,213,196,150,137,110,118,37,144,101,216,170,16,236,185,
    159,21,233,174,16,89,21,162,154,117,234,200,226,24,108,234,
    232,228,25,213,201,162,225,197,40,118,55,229,235,94,224,180,
    183,61,231,254,31,72,51,169,119,179,125,98,100,182,206,20,
    109,37,140,139,179,204,229,199,59,153,205,135,163,216,217,63,
    65,69,185,173,140,99,47,114,121,59,127,177,39,235,109,217,
    222,198,107,219,158,223,169,239,4,206,46,199,221,76,125,121,
    146,249,162,56,113,253,71,124,114,131,198,168,238,70,33,22,
    212,3,87,69,113,221,147,120,151,145,94,253,102,157,171,113,
    221,79,234,206,54,206,58,174,210,152,61,189,203,184,83,116,
    226,221,132,155,194,253,35,34,71,149,55,27,239,165,62,118,
    195,127,132,252,172,211,23,166,188,184,114,159,171,183,0,30,
    75,120,75,81,93,93,94,232,184,183,214,105,120,31,70,88,
    131,63,66,69,191,39,141,20,140,138,88,49,170,134,154,61,
    189,201,158,210,123,201,224,86,251,231,155,108,53,253,61,39,
    221,112,21,146,148,99,116,13,166,177,74,133,120,171,150,49,
    39,120,156,100,230,84,198,60,199,227,52,51,103,50,230,44,
    143,231,153,57,151,49,47,240,56,207,204,133,140,185,200,227,
    18,51,47,102,204,101,30,87,152,185,154,125,155,186,196,204,
    203,176,181,70,31,54,136,83,167,194,48,246,191,22,6,222,
    105,163,218,99,223,189,213,122,96,221,253,127,152,106,253,20,
    210,163,253,172,90,32,138,126,76,233,90,208,18,217,141,160,
    232,4,127,73,88,26,6,87,219,141,165,163,164,78,193,234,
    104,252,226,2,162,215,249,190,183,193,7,155,217,7,185,11,
    39,220,195,116,47,112,102,244,221,135,51,35,158,133,203,216,
    213,150,184,171,189,71,93,237,49,251,107,27,186,177,237,33,
    172,156,187,77,37,36,148,71,246,128,235,186,117,37,219,156,
    78,71,134,158,117,3,138,221,40,79,143,34,203,84,177,126,
    128,66,67,97,138,11,216,126,14,238,30,42,192,5,151,56,
    69,229,124,191,140,40,89,12,194,191,102,32,108,208,13,174,
    87,133,173,123,52,112,221,205,75,174,245,179,60,212,23,135,
    34,204,115,93,186,203,188,102,22,155,26,125,248,185,174,90,
    29,46,37,15,125,87,178,154,215,10,144,38,202,168,126,84,
    203,67,101,119,98,249,59,86,245,154,105,82,68,241,167,135,
    51,150,196,232,201,80,189,198,166,84,32,179,73,63,170,203,
    195,101,163,196,167,251,18,171,251,15,34,164,144,63,28,166,
    140,51,252,192,73,249,26,55,121,58,115,147,30,212,187,67,
    229,14,163,64,57,187,210,246,162,182,227,107,251,222,72,144,
    84,211,161,125,154,205,232,231,82,228,201,64,162,5,3,122,
    20,193,43,253,18,225,73,236,79,162,46,94,28,249,102,134,
    207,129,109,143,236,140,255,4,248,26,165,63,126,226,25,47,
    42,120,202,207,139,194,143,81,173,84,5,183,72,125,223,208,
    181,57,212,84,235,219,72,55,177,184,134,79,231,123,131,19,
    150,117,46,180,141,248,102,188,233,180,245,71,59,254,66,101,
    189,3,233,215,6,235,122,190,199,120,219,108,100,47,216,88,
    202,184,125,227,110,205,250,49,241,9,46,237,59,235,153,115,
    235,167,157,123,168,226,128,63,55,183,239,168,250,80,201,79,
    157,196,119,159,250,209,35,189,105,86,134,10,245,230,151,134,
    206,55,187,137,146,237,129,151,101,120,208,182,31,203,118,20,
    119,31,71,158,228,157,82,156,127,224,121,177,229,132,136,143,
    67,73,93,170,186,210,47,144,182,168,90,71,38,53,220,145,
    211,178,103,56,130,147,250,155,46,223,170,6,231,31,6,145,
    187,47,189,84,230,210,217,50,143,24,208,103,172,210,244,179,
    85,102,251,230,189,152,222,154,239,227,38,50,246,157,192,255,
    86,114,153,28,136,224,211,163,184,137,23,191,193,248,165,201,
    137,142,100,76,241,13,212,213,62,129,222,20,43,56,43,204,
    253,122,244,106,103,248,118,176,157,102,123,120,4,177,95,137,
    219,78,144,198,167,223,226,60,50,153,41,195,225,155,42,209,
    78,13,95,231,75,93,89,210,117,150,251,100,210,217,108,21,
    218,127,217,28,231,100,48,147,116,105,46,60,115,207,223,223,
    53,113,93,138,229,174,143,254,199,172,167,240,70,218,87,124,
    146,109,202,33,69,183,240,246,168,234,152,190,9,235,111,108,
    247,201,167,100,15,7,250,164,94,157,174,98,77,163,134,195,
    20,53,108,57,74,230,228,76,181,52,57,81,45,85,199,76,
    254,78,58,37,230,140,90,169,58,49,41,254,187,159,53,172,
    139,53,99,109,161,42,254,13,10,146,26,231,
};

EmbeddedPython embedded_m5_internal_param_RealViewOsc(
    "m5/internal/param_RealViewOsc.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_RealViewOsc.py",
    "m5.internal.param_RealViewOsc",
    data_m5_internal_param_RealViewOsc,
    2588,
    7925);

} // anonymous namespace
