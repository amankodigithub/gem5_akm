#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_HDLcd[] = {
    120,156,181,88,95,115,219,198,17,223,3,72,74,164,36,75,
    150,44,201,182,100,137,118,234,152,118,19,201,177,227,186,51,
    113,221,58,118,218,58,83,43,46,148,214,142,146,41,10,1,
    71,9,18,8,112,0,80,50,61,210,76,91,101,250,111,166,
    143,157,190,245,173,15,253,54,253,8,253,38,237,238,30,0,
    30,41,42,113,167,180,69,158,151,123,139,189,221,219,223,238,
    237,193,133,236,95,25,191,63,170,3,36,175,13,0,15,63,
    2,2,128,150,128,45,1,66,10,240,46,192,126,25,226,15,
    193,43,195,215,0,91,6,72,3,78,144,48,225,75,3,194,
    73,126,166,2,129,201,28,1,221,26,200,18,108,149,225,69,
    120,30,74,178,2,251,53,136,127,13,66,136,80,192,75,111,
    12,188,113,248,26,181,35,81,101,133,227,64,204,26,51,171,
    224,77,48,179,6,222,36,19,19,208,157,1,57,9,91,83,
    36,182,117,14,213,222,66,181,211,172,246,95,164,214,195,153,
    121,240,206,145,56,218,245,5,73,150,72,146,215,155,102,45,
    51,185,149,231,97,107,54,167,231,52,250,130,70,207,107,244,
    130,70,47,106,244,69,141,190,164,209,151,53,122,73,163,151,
    53,250,138,70,175,104,244,170,70,215,53,250,170,70,95,211,
    232,119,52,250,59,26,125,93,163,223,213,232,27,26,221,208,
    232,155,26,125,75,163,191,203,52,238,254,44,236,189,7,123,
    239,195,222,26,52,17,16,231,139,157,94,7,105,194,222,109,
    216,186,13,18,63,235,112,130,152,241,102,181,39,62,224,39,
    230,138,39,238,240,19,119,97,235,46,72,252,220,81,79,84,
    96,179,177,128,56,244,255,131,255,26,2,169,116,18,135,3,
    25,39,126,20,218,126,216,140,124,131,230,43,52,16,106,93,
    26,198,50,248,62,38,248,254,19,24,187,158,145,193,247,24,
    80,177,32,95,2,3,142,153,56,54,160,219,128,35,1,123,
    37,240,76,56,194,101,202,100,192,142,128,19,3,190,50,73,
    224,24,199,18,130,108,5,74,169,194,238,30,131,76,105,26,
    131,227,50,28,149,97,243,229,145,65,140,253,42,196,255,128,
    215,203,172,116,156,149,26,112,132,99,9,78,74,112,92,129,
    23,40,132,172,189,42,185,47,94,30,161,167,200,217,108,148,
    208,218,13,205,93,114,197,243,227,208,105,73,118,221,110,59,
    177,211,178,127,250,228,103,174,215,168,229,18,81,178,214,118,
    210,93,139,31,49,105,47,90,237,148,85,69,161,76,39,144,
    104,250,161,103,183,34,175,19,200,116,156,244,216,77,63,144,
    182,205,147,79,91,237,40,78,63,137,227,40,182,104,59,153,
    25,68,78,241,4,109,166,27,68,137,108,208,106,188,140,69,
    234,83,146,110,182,89,35,25,192,102,210,195,158,76,220,216,
    111,167,24,37,165,145,164,73,91,131,226,195,67,242,16,135,
    245,221,168,37,215,155,142,219,9,210,238,250,142,108,221,91,
    223,238,248,129,183,254,200,122,182,222,238,166,187,81,184,142,
    60,63,76,37,238,65,176,174,121,191,134,211,179,164,231,208,
    223,177,125,246,192,222,149,65,91,198,83,196,189,76,107,136,
    25,49,41,42,194,20,13,49,133,84,25,191,166,88,54,38,
    196,134,79,62,184,228,23,65,167,164,131,133,34,40,96,223,
    128,120,153,160,176,135,31,65,177,67,64,108,210,156,193,115,
    63,39,231,21,119,207,164,0,43,230,17,195,7,113,132,146,
    15,40,162,33,48,6,202,176,87,1,133,13,132,148,2,75,
    220,165,17,197,73,141,129,202,75,144,252,21,112,51,17,21,
    71,144,33,230,196,4,17,206,64,90,163,226,133,220,5,92,
    240,119,12,186,205,6,153,191,193,0,72,119,253,36,58,12,
    121,155,137,102,172,108,226,206,60,239,126,182,189,39,221,52,
    89,69,198,23,81,167,238,58,97,24,165,117,199,243,234,78,
    154,198,254,118,39,149,73,61,141,234,215,147,6,69,206,58,
    159,99,168,208,215,109,231,152,161,248,34,102,212,15,207,119,
    83,252,49,199,63,56,10,137,76,49,254,187,145,151,32,159,
    84,236,200,212,34,35,83,218,228,136,13,97,120,216,36,74,
    203,163,220,57,252,253,40,183,132,49,216,168,228,136,73,100,
    208,76,107,12,62,39,73,108,182,132,248,140,51,82,124,224,
    4,29,201,218,19,212,135,6,17,169,108,24,45,210,46,146,
    213,185,147,108,121,24,133,94,23,13,241,221,27,180,198,69,
    198,219,36,35,110,30,209,54,134,99,5,255,175,136,5,195,
    45,101,24,171,228,56,163,162,150,2,71,89,100,129,70,204,
    157,96,1,105,24,92,1,216,120,206,179,107,68,209,195,214,
    50,13,87,104,88,161,97,53,247,111,100,78,78,13,58,121,
    159,20,27,236,25,251,64,91,110,230,62,120,125,185,114,169,
    151,43,88,209,54,9,243,6,101,70,15,243,37,170,126,241,
    67,26,81,148,179,201,132,228,115,170,181,148,27,172,140,210,
    0,1,77,84,15,230,188,35,214,12,121,58,158,35,212,34,
    216,233,216,219,209,176,103,81,48,24,120,214,165,188,156,217,
    36,161,32,103,45,145,170,242,144,45,173,211,112,117,228,251,
    218,3,207,206,41,240,124,68,107,204,100,224,153,98,208,212,
    240,59,99,184,102,182,217,197,73,54,55,0,26,66,76,105,
    8,98,222,37,202,60,237,222,219,2,75,230,212,143,53,176,
    144,29,134,110,251,6,18,221,69,50,89,135,201,34,158,191,
    47,194,69,60,82,13,62,82,111,243,145,202,199,50,55,105,
    170,152,154,92,79,21,81,38,223,155,38,44,100,71,101,82,
    197,177,29,71,175,186,245,168,89,79,217,57,170,125,15,174,
    39,107,215,147,143,176,170,213,31,114,61,81,117,77,85,174,
    88,182,169,242,208,163,159,188,114,37,31,83,252,203,182,85,
    161,177,185,232,216,217,241,135,136,153,167,157,51,242,45,229,
    146,155,164,49,85,218,209,110,106,173,216,84,178,241,83,210,
    90,227,29,53,197,34,162,163,38,120,105,91,149,82,238,117,
    120,22,191,31,211,46,147,123,18,168,67,183,54,149,97,108,
    51,89,111,189,215,135,128,81,89,108,173,163,138,95,228,145,
    175,244,34,79,95,51,71,237,31,128,219,61,1,191,7,138,
    45,134,48,67,109,1,114,10,230,28,137,255,10,24,222,67,
    78,96,174,9,155,116,234,178,4,150,138,228,62,139,170,3,
    249,83,248,163,150,27,249,177,105,102,13,157,126,108,150,138,
    122,194,160,120,163,163,177,212,95,120,40,10,187,78,66,98,
    170,154,244,210,173,87,155,139,110,12,171,233,200,16,50,174,
    244,217,180,244,87,61,124,208,193,179,36,230,12,45,234,31,
    208,112,167,8,184,200,121,163,176,98,21,206,62,14,109,85,
    135,191,164,165,74,108,220,244,24,31,214,252,116,1,218,114,
    14,218,59,5,104,37,159,21,95,115,191,78,163,65,193,59,
    49,4,94,32,177,249,161,251,90,9,100,25,182,42,4,111,
    238,73,69,134,126,145,215,25,170,74,125,7,17,251,189,161,
    118,164,136,159,10,13,13,175,70,155,191,20,157,7,129,211,
    218,246,156,135,191,37,157,164,216,205,243,193,200,173,156,209,
    173,36,44,139,179,12,229,159,247,114,107,15,70,155,187,223,
    67,21,133,149,140,84,47,114,57,97,63,223,149,245,150,108,
    109,227,69,107,215,111,215,155,129,179,195,123,109,102,94,124,
    150,123,145,114,176,6,15,235,228,22,141,81,221,141,66,44,
    147,29,55,141,226,186,39,241,14,34,189,250,251,117,174,177,
    117,63,169,59,219,56,235,184,169,194,102,127,30,113,159,231,
    196,59,9,183,116,251,135,68,142,62,86,54,222,33,125,236,
    98,79,160,56,187,212,21,167,40,153,220,159,42,168,227,49,
    131,183,139,180,171,74,7,29,220,214,26,13,55,225,173,84,
    214,15,81,197,111,72,23,109,64,69,44,25,85,131,59,25,
    22,120,78,178,201,233,100,250,247,155,36,147,122,15,147,165,
    84,133,36,229,24,93,83,105,172,82,97,221,170,229,204,9,
    30,39,153,57,149,51,207,241,56,205,204,153,156,121,158,199,
    89,102,206,229,204,11,60,206,51,115,33,103,46,242,120,145,
    153,151,114,230,101,30,151,152,185,156,191,83,186,194,204,21,
    216,90,165,23,15,196,169,83,234,143,253,191,169,207,25,53,
    250,92,250,243,72,51,222,186,255,118,141,180,190,15,217,241,
    124,86,182,11,221,131,41,149,237,123,34,239,222,117,243,249,
    142,63,219,15,78,219,141,165,147,74,181,225,203,163,246,133,
    203,130,90,225,47,189,228,61,221,120,62,42,204,62,225,222,
    163,123,129,227,160,238,38,28,7,241,34,188,140,29,104,137,
    59,208,7,212,129,30,177,143,182,161,154,208,30,146,202,133,
    171,211,56,132,242,208,214,220,85,13,38,89,229,180,219,50,
    244,172,91,160,247,140,60,61,218,104,82,5,250,27,104,45,
    128,41,46,96,147,120,58,51,168,148,106,110,112,64,202,69,
    46,140,60,52,12,179,191,231,48,107,208,125,170,87,79,173,
    7,52,112,5,45,138,167,245,195,98,99,87,6,48,36,67,
    103,27,59,112,215,105,167,157,88,210,85,227,219,68,176,33,
    225,154,221,207,78,175,14,60,213,246,95,201,192,222,238,52,
    155,50,182,19,255,181,210,253,237,82,164,158,66,121,106,38,
    93,26,250,172,187,219,9,247,89,247,55,205,147,214,137,66,
    43,243,210,197,65,249,87,56,19,40,93,103,205,145,30,170,
    142,217,111,190,32,235,114,7,161,203,207,15,227,211,179,116,
    252,34,157,222,28,152,63,140,226,125,39,142,58,161,103,123,
    45,199,14,240,36,183,93,252,153,178,182,55,151,166,53,232,
    74,126,166,68,122,237,108,93,201,161,211,182,227,109,94,242,
    13,196,104,173,217,254,181,178,41,206,28,158,243,100,32,83,
    169,167,113,74,208,204,222,41,120,18,251,147,168,139,215,65,
    190,117,225,239,192,182,223,194,73,255,3,84,241,39,200,94,
    90,226,73,47,42,120,214,207,11,237,207,168,86,170,130,155,
    163,129,247,221,202,16,106,21,212,77,163,155,88,92,219,167,
    139,140,226,119,179,121,231,66,201,199,55,221,13,167,165,94,
    182,241,251,37,235,29,200,222,27,88,55,138,204,164,56,241,
    245,78,93,141,177,220,113,227,198,125,154,117,151,248,244,102,
    161,117,111,45,119,107,77,185,245,56,136,220,253,39,81,203,
    65,190,193,18,12,253,211,130,155,126,75,189,156,228,132,210,
    231,189,152,30,158,31,224,38,50,246,157,128,82,237,242,80,
    125,191,12,221,167,97,187,147,242,237,228,244,244,163,214,182,
    243,164,229,60,145,7,190,43,25,133,167,101,62,118,18,249,
    19,223,61,99,129,231,129,147,54,163,184,117,134,227,79,195,
    52,126,28,225,16,5,252,202,103,136,199,221,36,149,173,83,
    219,33,195,78,203,126,38,91,81,220,125,22,121,50,93,30,
    152,127,228,121,177,229,132,59,210,62,144,212,75,115,153,234,
    19,200,26,105,165,35,151,170,15,223,134,62,217,51,66,131,
    147,89,104,134,239,37,199,88,122,153,204,224,94,178,63,207,
    15,227,77,188,26,158,246,38,219,203,232,80,198,228,109,192,
    185,172,11,244,166,88,193,89,78,15,234,81,171,157,1,181,
    206,118,182,247,195,253,193,14,40,110,57,65,134,218,65,139,
    11,160,230,166,172,124,147,18,229,212,112,59,158,251,81,134,
    191,225,243,61,124,82,218,230,147,92,174,135,129,152,122,178,
    62,14,95,26,122,141,24,151,177,88,238,248,232,122,204,90,
    250,164,179,198,133,202,15,3,86,47,168,250,147,163,47,121,
    234,162,172,94,175,61,164,131,47,9,112,160,119,231,213,233,
    42,150,63,234,101,76,81,195,110,166,100,78,206,84,75,147,
    19,213,82,117,204,228,151,163,83,98,206,168,149,170,19,147,
    226,127,255,91,197,50,90,51,86,23,170,226,191,182,161,1,
    162,
};

EmbeddedPython embedded_m5_internal_param_HDLcd(
    "m5/internal/param_HDLcd.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_HDLcd.py",
    "m5.internal.param_HDLcd",
    data_m5_internal_param_HDLcd,
    2657,
    7912);

} // anonymous namespace
