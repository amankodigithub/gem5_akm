#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_InvalidateGenerator[] = {
    120,156,189,88,109,115,219,198,17,222,3,64,74,164,36,139,
    178,44,201,182,100,11,118,106,155,86,109,169,113,227,186,51,
    81,221,186,73,218,73,166,86,92,48,29,59,74,166,8,68,
    156,36,80,36,192,1,78,150,233,74,95,42,79,211,153,126,
    235,76,127,66,63,244,223,244,31,181,187,123,0,8,145,162,
    199,211,134,150,201,243,242,112,216,219,151,103,95,238,154,144,
    254,149,240,251,43,27,32,121,96,0,248,248,17,208,6,232,
    8,216,22,32,164,0,255,18,28,148,32,254,8,252,18,188,
    1,216,54,64,26,112,138,132,9,223,24,16,78,243,59,101,
    104,155,60,35,160,87,5,105,193,118,9,158,135,115,96,201,
    50,28,84,33,254,14,132,16,161,128,23,254,4,248,147,240,
    6,185,35,81,97,134,147,64,147,85,158,172,128,63,197,147,
    85,240,167,153,152,130,94,13,228,52,108,207,208,178,237,11,
    200,118,13,217,206,50,219,127,19,91,31,159,44,128,127,129,
    150,163,92,95,211,74,139,86,242,126,179,204,165,150,73,57,
    7,219,23,51,122,190,64,95,42,208,11,5,122,177,64,47,
    21,232,203,5,250,74,129,190,90,160,151,11,244,74,129,190,
    86,160,175,23,232,213,2,109,23,232,27,5,250,102,129,254,
    160,64,255,168,64,223,98,26,173,118,17,90,183,161,117,7,
    90,117,216,69,71,206,229,22,186,11,210,132,214,26,108,175,
    129,196,207,93,56,69,95,251,23,11,111,252,152,223,152,207,
    223,184,199,111,220,135,237,251,32,241,115,79,191,81,134,70,
    125,17,241,19,252,7,255,234,2,41,53,141,195,75,25,39,
    65,20,186,65,184,27,5,6,61,47,211,64,104,107,210,48,
    145,194,238,19,130,221,191,128,49,231,27,41,236,78,0,25,
    11,210,165,109,192,9,19,39,6,244,234,112,44,160,101,129,
    111,194,49,110,83,34,1,246,4,156,26,240,173,73,11,78,
    112,180,16,28,215,193,82,26,115,45,6,135,230,52,1,39,
    37,56,46,65,227,197,177,65,19,7,21,136,255,9,175,87,
    152,233,36,51,53,224,24,71,11,78,45,56,41,195,115,92,
    132,83,173,10,169,47,94,28,163,166,56,211,168,91,40,237,
    86,65,93,82,197,15,226,208,235,72,117,21,105,183,235,197,
    94,199,253,60,124,233,181,3,223,83,242,183,50,148,177,167,
    162,184,94,205,214,71,201,122,215,83,251,14,51,48,201,50,
    157,174,98,198,81,40,213,20,18,187,65,232,187,157,200,63,
    108,75,53,73,92,221,221,160,45,93,151,31,126,222,233,70,
    177,250,44,142,163,216,33,227,242,100,59,242,242,55,200,180,
    205,118,148,200,58,237,198,219,56,196,94,209,234,221,46,115,
    36,1,88,104,122,217,151,73,51,14,186,10,125,166,57,210,
    106,226,86,39,111,241,144,252,14,135,141,253,168,35,55,118,
    189,230,97,91,245,54,246,100,231,225,198,206,97,208,246,55,
    158,56,79,55,186,61,181,31,133,27,56,23,132,74,162,69,
    218,27,35,109,177,142,139,47,18,215,163,96,207,13,88,31,
    119,95,182,187,50,158,161,89,50,36,136,154,152,22,101,97,
    138,186,152,65,170,132,95,83,172,24,83,98,43,32,141,154,
    164,37,193,202,42,2,137,188,43,224,192,128,120,133,96,210,
    194,143,32,191,34,88,26,244,204,224,103,191,39,83,232,217,
    150,73,206,215,147,199,12,45,196,24,174,220,36,111,135,192,
    248,40,65,171,12,26,55,8,55,13,164,184,71,35,46,39,
    54,6,50,183,32,249,7,160,105,17,49,199,144,162,233,212,
    4,17,214,64,85,41,33,225,236,34,110,248,103,6,100,163,
    78,226,111,49,28,212,126,144,68,71,33,27,157,104,14,161,
    6,90,230,89,239,203,157,150,108,170,100,21,39,190,142,14,
    237,166,23,134,145,178,61,223,183,61,165,226,96,231,80,201,
    196,86,145,125,43,169,147,31,157,185,12,81,57,191,94,55,
    67,16,121,27,17,164,127,248,65,83,225,143,121,254,193,94,
    72,164,66,52,236,71,126,130,243,196,98,79,42,135,132,84,
    100,228,136,5,97,176,184,180,148,182,199,117,23,240,247,147,
    76,18,70,100,189,156,225,39,145,237,93,85,101,40,122,73,
    226,178,36,52,207,168,35,198,136,138,67,201,220,19,228,135,
    2,17,169,101,24,39,238,46,147,14,153,202,172,71,24,133,
    126,15,197,10,154,119,104,199,203,140,190,105,198,223,2,98,
    111,2,199,50,254,95,22,139,70,211,74,17,87,206,80,71,
    233,79,1,251,92,164,110,71,4,158,98,170,169,27,156,43,
    88,21,142,193,155,68,209,203,206,10,13,215,104,184,78,195,
    106,166,237,152,84,158,25,84,249,17,109,99,176,158,172,17,
    185,195,204,52,242,207,196,209,149,126,28,97,38,108,80,60,
    24,20,53,253,120,176,40,107,198,143,105,196,165,28,105,38,
    36,95,81,142,166,184,97,102,20,34,8,118,162,250,33,192,
    246,113,106,164,247,100,134,94,135,32,89,196,229,94,1,151,
    14,185,134,65,233,92,201,18,159,75,43,52,28,157,101,98,
    85,58,199,192,54,13,55,198,108,229,62,176,246,134,128,245,
    49,237,88,75,129,53,195,128,170,226,183,102,52,205,212,244,
    121,61,156,31,0,20,161,201,58,7,77,183,137,50,135,149,
    125,63,64,74,85,252,77,1,72,36,149,81,212,100,11,137,
    222,18,41,80,132,208,18,214,244,231,225,18,150,105,131,203,
    244,79,184,76,115,169,231,134,77,39,97,147,243,176,38,74,
    100,137,93,19,22,211,242,155,84,112,236,198,209,171,158,29,
    237,218,138,85,165,156,185,121,43,89,191,149,124,140,217,208,
    126,204,121,72,231,67,157,241,98,217,165,140,69,175,126,246,
    170,41,185,216,241,47,215,213,9,202,229,100,229,166,69,20,
    209,180,64,118,52,50,3,115,170,78,84,76,25,122,156,38,
    174,230,38,38,137,191,160,61,170,108,95,83,44,33,114,170,
    130,5,113,117,66,230,110,138,159,226,247,215,100,115,82,86,
    2,245,238,78,67,139,201,26,144,46,206,189,51,232,24,143,
    252,206,6,50,252,67,134,138,114,31,21,244,53,51,124,127,
    15,220,94,10,248,11,144,223,209,189,41,190,243,112,32,71,
    207,211,242,63,2,7,194,57,85,157,115,73,131,42,57,175,
    192,20,147,60,226,165,186,200,127,1,127,45,68,81,86,138,
    205,180,129,44,150,98,43,207,67,12,152,119,42,183,214,217,
    132,69,62,217,247,18,90,166,179,80,63,48,251,25,62,239,
    247,48,11,143,9,61,147,154,187,75,130,124,219,199,14,21,
    179,101,49,111,20,16,241,33,13,15,114,48,136,108,238,135,
    151,105,21,70,23,92,87,231,246,111,104,99,139,69,157,157,
    224,236,127,14,175,28,236,165,12,236,15,114,176,75,174,70,
    111,248,36,65,163,65,110,62,53,4,30,73,177,245,162,19,
    160,5,178,4,219,101,10,11,238,143,69,26,53,34,203,86,
    148,219,206,148,58,182,201,150,182,86,238,105,237,68,26,94,
    141,51,11,144,31,55,219,94,103,199,247,30,255,137,118,160,
    109,154,89,28,25,153,204,181,162,204,20,3,98,148,216,252,
    243,97,38,251,203,113,102,128,159,33,195,92,102,198,187,31,
    53,57,236,191,218,151,118,71,118,118,240,120,184,31,116,237,
    221,182,183,199,126,48,83,157,190,204,116,82,236,200,193,86,
    33,89,163,49,178,155,81,136,137,248,176,137,251,217,190,196,
    179,146,244,237,251,54,103,113,59,72,108,111,7,159,122,77,
    165,49,125,54,26,185,3,245,226,189,132,155,205,131,35,34,
    199,237,71,23,207,193,1,118,219,39,144,215,74,125,48,203,
    147,50,247,209,58,68,176,172,225,41,72,245,116,58,162,182,
    193,89,167,225,46,188,135,220,253,17,50,124,77,156,201,56,
    101,177,108,84,12,117,229,252,96,124,70,124,146,225,144,220,
    121,151,144,212,247,67,105,96,150,105,165,156,160,99,56,141,
    21,74,228,116,253,83,74,175,127,104,82,95,255,148,121,230,
    2,133,240,196,255,27,194,28,11,227,142,130,55,63,104,228,
    58,143,222,167,200,206,207,33,45,214,163,162,86,20,245,153,
    209,81,219,18,217,25,160,168,12,223,41,216,111,3,146,219,
    140,37,206,106,215,172,140,87,79,14,125,189,223,247,253,144,
    28,110,95,159,228,42,157,114,151,210,187,196,30,211,167,31,
    246,152,120,30,94,197,62,214,226,62,118,147,250,216,99,214,
    223,53,116,43,219,71,96,41,55,3,245,233,161,60,58,79,
    54,109,10,221,180,146,140,94,183,43,67,223,89,131,98,31,
    202,143,199,137,2,202,57,127,131,66,235,96,138,75,216,120,
    14,71,27,165,210,130,138,236,186,82,30,95,99,118,34,131,
    245,239,25,88,235,179,80,204,167,206,38,13,156,65,243,228,
    233,252,50,119,193,135,111,69,34,182,123,49,102,108,4,72,
    71,134,202,77,130,215,146,78,59,255,195,91,216,238,112,47,
    115,206,51,182,50,135,132,47,219,82,201,209,112,80,164,70,
    122,22,246,37,86,182,168,135,71,21,62,3,224,239,182,235,
    142,189,42,252,2,248,14,24,18,170,82,88,21,68,25,235,
    194,130,81,41,87,4,23,214,129,27,94,45,10,217,93,247,
    186,189,196,225,124,50,155,219,159,239,31,179,58,71,174,226,
    115,216,150,215,209,87,72,124,79,226,124,0,233,25,215,185,
    147,251,145,106,17,31,48,244,193,13,195,136,139,62,215,120,
    231,167,52,79,111,117,30,174,103,138,173,107,197,62,13,98,
    60,44,73,63,87,139,111,66,59,15,249,200,62,188,188,209,
    75,148,236,168,229,129,135,50,60,236,184,79,101,39,138,123,
    79,35,95,170,149,129,231,79,208,205,142,23,238,73,247,165,
    164,222,68,221,24,92,144,54,38,154,71,182,202,62,87,134,
    179,107,135,100,209,139,240,161,190,33,228,30,123,248,249,39,
    237,168,121,32,253,116,205,181,209,107,62,141,58,30,206,159,
    191,75,35,200,118,153,27,120,238,199,244,214,194,192,108,34,
    227,0,113,244,90,114,239,48,100,193,103,71,113,3,143,1,
    195,246,211,187,61,139,142,100,76,246,109,171,155,3,11,250,
    143,152,193,40,51,15,242,209,187,141,208,237,112,39,245,246,
    249,22,196,218,23,119,188,118,106,159,65,137,115,203,100,162,
    92,127,27,19,173,20,129,63,123,174,150,40,18,70,64,148,
    140,61,52,203,45,218,168,82,202,73,34,150,123,1,42,20,
    51,239,161,247,211,18,67,33,173,110,191,53,161,21,121,141,
    59,197,232,227,142,190,120,121,76,151,122,201,119,56,208,253,
    107,101,182,130,233,134,106,144,41,170,88,133,44,115,186,86,
    177,166,167,42,86,101,194,228,75,180,25,60,214,86,173,202,
    212,180,120,183,127,171,152,182,170,198,106,173,34,254,11,40,
    202,173,158,
};

EmbeddedPython embedded_m5_internal_param_InvalidateGenerator(
    "m5/internal/param_InvalidateGenerator.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_InvalidateGenerator.py",
    "m5.internal.param_InvalidateGenerator",
    data_m5_internal_param_InvalidateGenerator,
    2419,
    7426);

} // anonymous namespace