#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ThermalDomain[] = {
    120,156,189,88,235,114,219,198,21,62,11,128,148,72,73,150,
    100,221,108,75,141,216,118,220,176,110,43,245,18,199,153,177,
    199,77,210,38,51,205,15,37,133,210,177,163,100,138,66,196,
    74,2,69,2,28,96,101,155,25,233,79,229,105,251,2,125,
    132,254,232,219,244,141,218,243,157,37,64,232,54,147,78,197,
    202,228,122,185,88,156,61,151,239,124,103,119,59,52,250,171,
    241,247,195,22,81,126,160,136,34,254,40,234,17,245,21,237,
    41,82,90,81,180,76,199,53,202,222,163,168,70,111,137,246,
    28,210,14,157,115,199,165,175,29,74,102,229,157,58,245,92,
    25,81,52,108,146,246,104,175,70,47,146,69,242,116,157,142,
    155,148,253,137,148,82,137,162,151,209,20,69,211,244,150,165,
    115,167,33,2,167,9,131,77,25,108,80,52,35,131,77,138,
    102,165,51,67,195,5,210,179,180,55,135,105,123,119,88,236,
    35,22,59,47,98,255,5,177,17,63,89,161,232,14,166,179,
    94,95,97,166,135,153,178,222,188,72,89,40,180,92,164,189,
    187,69,127,169,210,95,150,62,175,116,151,186,43,212,93,165,
    238,26,177,67,162,197,82,234,61,210,46,117,239,211,222,125,
    210,252,185,71,231,236,159,232,110,229,141,7,242,198,82,249,
    198,186,188,177,65,123,27,164,249,179,110,223,168,211,110,123,
    149,125,30,255,155,255,218,236,115,50,179,220,188,210,89,30,
    167,73,16,39,7,105,236,224,121,29,13,34,212,65,51,53,
    10,213,111,16,170,127,146,196,41,114,70,161,58,35,22,172,
    96,75,207,161,51,233,156,57,52,108,211,169,162,174,71,145,
    75,167,188,76,13,10,28,42,58,119,232,27,23,19,206,184,
    245,216,161,239,144,103,108,156,186,226,80,43,105,138,206,106,
    116,90,163,221,151,167,14,6,142,27,148,253,131,190,221,16,
    161,211,34,212,161,83,110,61,58,247,232,172,78,47,120,18,
    15,117,27,48,95,189,60,101,75,121,100,183,237,177,182,59,
    21,115,97,74,20,103,73,216,215,102,153,251,193,32,204,194,
    126,240,229,145,206,250,97,239,183,105,63,140,147,118,179,152,
    153,230,91,131,208,28,249,242,170,11,159,244,7,70,68,166,
    137,54,51,220,57,136,147,40,232,167,209,73,79,155,105,200,
    11,14,226,158,14,2,121,248,187,254,32,205,204,39,89,150,
    102,62,220,42,131,189,52,44,223,128,83,59,189,52,215,109,
    172,38,203,248,16,111,48,251,96,32,18,161,128,168,139,151,
    35,157,119,178,120,96,56,90,86,34,102,67,90,27,113,146,
    38,255,148,155,237,163,180,175,183,15,194,206,73,207,12,183,
    15,117,255,241,246,254,73,220,139,182,95,126,240,254,246,96,
    104,142,210,100,155,199,226,196,104,246,69,111,251,26,47,108,
    241,180,187,144,247,58,62,12,98,177,36,56,210,189,129,206,
    230,48,250,0,107,169,5,53,171,234,202,85,109,53,199,189,
    26,127,93,181,225,204,168,157,24,182,116,96,31,160,228,85,
    193,131,136,42,58,118,40,219,0,52,186,252,81,136,37,3,
    100,23,207,28,121,246,123,56,193,142,118,93,4,220,14,158,
    10,156,24,87,60,243,25,34,156,144,96,162,70,221,58,89,
    172,48,196,44,120,178,33,90,158,14,49,14,11,247,40,255,
    59,177,83,25,37,167,52,66,208,185,75,42,89,32,211,68,
    226,242,232,42,47,248,103,1,225,110,27,234,239,8,16,204,
    81,156,167,175,19,113,55,250,146,54,187,236,153,47,134,159,
    239,119,117,199,228,155,60,240,85,122,210,234,132,73,146,154,
    86,24,69,173,208,152,44,222,63,49,58,111,153,180,245,48,
    111,35,130,254,98,129,165,82,222,112,80,96,7,113,102,236,
    216,31,81,220,49,252,99,73,126,72,20,114,109,24,7,71,
    105,148,243,56,68,28,106,227,67,73,3,39,167,162,136,192,
    36,192,84,44,207,243,238,240,239,143,10,77,4,139,237,122,
    129,156,92,247,14,76,83,64,24,230,121,32,154,96,92,240,
    6,193,175,194,222,137,22,233,57,203,99,133,208,181,58,76,
    6,113,247,160,125,97,172,88,144,164,73,52,100,133,226,206,
    187,88,235,158,224,110,86,144,183,194,168,155,226,182,206,255,
    215,213,170,211,241,70,88,171,23,120,3,217,25,146,104,171,
    81,192,25,123,231,76,44,109,71,152,65,140,144,188,251,1,
    122,120,217,223,64,243,61,52,239,160,217,44,236,188,117,99,
    231,46,27,251,4,11,56,98,161,216,130,16,184,133,45,209,
    133,220,185,63,206,29,102,188,93,228,128,131,76,25,231,128,
    7,118,204,158,163,229,169,146,93,46,229,95,130,139,145,43,
    34,12,105,193,0,71,111,12,123,241,140,191,0,139,167,11,
    196,250,128,97,21,139,135,21,44,250,8,138,0,209,191,95,
    208,92,128,25,22,130,254,58,68,213,174,113,109,11,205,247,
    39,230,223,49,152,14,175,128,233,41,214,90,24,129,105,78,
    64,212,228,239,130,211,113,71,78,47,43,222,210,37,16,1,
    65,222,53,8,250,17,122,238,85,51,39,13,158,145,113,159,
    86,192,3,125,156,170,13,59,220,25,174,65,245,42,108,214,
    184,94,191,72,214,184,4,59,82,130,127,46,37,88,202,184,
    108,96,44,217,186,194,183,182,83,131,15,14,92,90,29,149,
    214,188,193,237,32,75,223,12,91,233,65,203,136,145,224,198,
    103,15,243,173,135,249,83,102,189,214,115,225,27,203,123,150,
    217,50,61,0,51,225,213,79,222,116,180,148,51,249,21,4,
    150,136,2,33,165,96,84,38,25,65,43,240,160,83,184,86,
    40,57,55,25,152,120,50,206,109,150,206,133,174,159,65,122,
    83,60,235,170,53,70,75,83,137,10,129,165,92,217,35,201,
    83,254,126,12,111,195,76,77,216,197,250,187,86,65,209,29,
    86,248,63,189,128,136,219,214,220,223,102,81,127,40,144,80,
    31,35,1,95,183,64,243,95,73,182,139,138,254,66,136,53,
    135,116,132,230,18,252,8,238,18,166,255,145,4,246,215,84,
    108,225,140,93,84,105,153,193,84,146,63,145,169,182,128,127,
    70,127,171,228,76,81,102,221,209,134,176,90,102,189,146,111,
    4,36,223,169,148,122,23,137,9,209,56,10,115,76,179,108,
    51,78,195,49,135,151,187,56,102,219,91,71,204,180,149,27,
    64,133,111,198,120,65,161,90,87,75,78,5,5,191,64,243,
    203,18,0,170,24,187,77,109,54,233,230,50,26,88,222,254,
    26,75,122,162,228,252,148,176,201,5,41,37,168,107,5,168,
    159,150,160,214,82,99,222,202,57,0,173,131,160,158,59,138,
    15,97,188,137,194,153,199,35,93,163,189,122,113,110,155,66,
    30,128,5,4,142,197,87,136,9,11,95,168,100,226,144,29,
    235,170,50,192,54,118,104,222,76,38,225,17,190,103,189,176,
    191,31,133,207,187,144,141,5,58,69,226,56,133,182,11,85,
    109,1,122,117,147,194,242,243,113,161,245,171,201,36,251,251,
    36,186,88,109,5,218,81,218,145,12,231,169,173,190,238,239,
    243,201,238,40,30,180,14,122,225,161,248,222,29,89,243,121,
    97,141,145,40,94,174,254,249,35,180,105,171,147,38,204,179,
    39,29,147,102,173,72,243,97,71,71,173,159,181,132,164,91,
    113,222,10,247,249,105,216,49,22,196,23,19,79,54,146,97,
    118,152,203,158,241,248,53,186,147,139,93,192,135,215,152,183,
    203,61,26,23,193,146,246,170,209,51,54,116,5,101,93,136,
    158,156,168,86,46,103,2,82,104,39,141,116,165,254,200,30,
    25,67,19,177,103,202,82,9,214,28,140,205,177,123,177,178,
    132,200,190,222,166,56,151,95,62,149,153,161,165,80,164,169,
    191,133,230,199,104,158,211,68,203,205,123,100,47,10,164,228,
    213,213,186,211,112,234,142,89,186,236,195,47,240,118,126,149,
    83,246,191,11,167,216,43,157,17,179,212,49,83,79,225,22,
    0,109,3,65,196,141,77,109,116,99,131,65,123,99,83,151,
    145,59,160,158,169,255,149,122,36,147,39,151,195,175,110,149,
    113,252,39,255,31,101,253,15,104,180,159,184,137,109,84,213,
    146,185,106,246,93,54,67,82,239,193,245,176,9,58,153,14,
    141,182,129,216,152,148,109,66,83,118,165,97,133,68,174,236,
    164,63,42,205,56,151,205,211,112,89,226,99,15,95,18,31,
    245,34,121,192,91,106,79,182,212,207,176,165,62,21,155,3,
    199,238,170,199,72,171,149,166,175,129,81,244,235,224,26,243,
    237,206,25,218,133,131,129,78,34,255,17,85,55,195,242,120,
    50,209,6,149,156,81,101,47,227,170,101,222,253,94,205,36,
    240,97,197,44,9,84,173,204,157,137,133,76,224,248,182,128,
    99,123,158,170,4,233,255,26,141,80,226,152,13,63,46,29,
    254,147,27,176,134,50,18,135,189,192,232,62,147,106,104,78,
    50,141,3,214,127,53,159,201,91,40,240,154,103,226,83,1,
    122,164,123,218,232,235,2,110,160,244,232,152,29,105,174,176,
    233,144,79,68,114,224,224,223,189,32,152,32,159,127,200,162,
    78,32,19,229,133,249,92,213,153,209,87,156,70,189,161,164,
    180,95,186,30,182,74,224,164,107,55,214,195,220,23,102,152,
    47,253,44,87,152,69,129,66,72,228,160,183,19,246,237,93,
    148,92,187,248,63,164,209,241,217,127,183,140,23,110,18,228,
    52,99,79,134,156,28,178,237,144,93,134,255,43,140,163,215,
    127,188,85,152,180,101,77,218,141,251,246,74,78,46,81,251,
    143,205,226,165,105,81,198,182,74,153,175,142,230,58,227,80,
    197,223,218,171,184,98,216,192,144,203,114,161,79,249,75,42,
    224,85,230,146,232,101,250,48,206,89,144,72,41,223,24,101,
    53,60,109,90,55,160,170,250,246,228,162,109,119,189,246,144,
    253,28,151,54,57,118,11,184,89,107,204,55,56,242,72,120,
    151,15,187,115,202,115,103,23,26,222,236,76,195,107,76,185,
    114,85,50,199,135,154,166,215,152,153,85,248,183,217,104,168,
    166,179,185,208,80,255,1,38,28,155,115,
};

EmbeddedPython embedded_m5_internal_param_ThermalDomain(
    "m5/internal/param_ThermalDomain.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_ThermalDomain.py",
    "m5.internal.param_ThermalDomain",
    data_m5_internal_param_ThermalDomain,
    2235,
    6620);

} // anonymous namespace
