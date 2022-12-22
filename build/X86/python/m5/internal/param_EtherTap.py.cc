#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_EtherTap[] = {
    120,156,181,88,91,115,219,198,21,62,11,128,148,72,81,22,
    117,183,45,217,98,219,113,195,122,90,169,77,227,56,51,113,
    220,58,173,59,211,60,40,9,232,142,29,38,83,20,2,150,
    34,40,16,224,0,75,219,244,72,121,168,220,203,67,95,251,
    19,250,208,127,211,127,212,156,115,22,0,33,201,154,201,76,
    72,71,220,44,118,15,206,158,203,119,46,11,15,178,127,21,
    252,253,182,5,144,126,43,0,124,252,19,16,2,12,5,116,
    5,8,41,192,223,128,147,10,36,31,128,95,129,183,0,93,
    3,164,1,231,56,49,225,107,3,162,6,191,83,133,208,228,
    21,1,147,58,72,11,186,21,120,30,173,130,37,171,112,82,
    135,228,47,32,132,136,4,188,240,23,192,95,132,183,200,29,
    39,53,102,184,8,180,88,231,197,26,248,75,188,88,7,191,
    193,147,37,152,52,65,54,160,187,76,100,221,27,200,246,62,
    178,93,97,182,255,35,182,62,238,108,130,127,131,200,81,174,
    175,136,210,34,74,62,111,133,185,52,115,41,87,161,187,150,
    207,215,75,243,141,210,124,179,52,223,226,57,74,176,6,131,
    109,24,220,132,193,45,232,161,81,86,139,211,110,131,52,97,
    176,3,221,29,144,248,119,27,206,209,110,254,90,233,141,93,
    126,99,189,120,227,14,191,113,23,186,119,65,226,223,29,253,
    70,21,58,237,45,244,69,240,127,252,215,70,95,128,106,224,
    240,82,38,105,16,71,78,16,245,226,192,160,253,42,13,228,
    57,143,134,133,204,133,191,35,23,254,23,216,127,190,145,185,
    240,12,144,177,32,93,66,3,206,120,114,102,192,164,13,167,
    2,6,22,248,38,156,226,49,21,18,224,88,192,185,1,223,
    152,68,112,134,163,133,134,190,11,150,210,254,27,176,161,53,
    167,5,56,171,192,105,5,58,47,78,13,90,56,169,65,242,
    31,120,179,203,76,23,153,169,1,167,56,90,112,110,193,89,
    21,158,35,17,46,13,106,164,190,120,113,138,154,226,74,167,
    109,161,180,135,37,117,73,21,63,72,34,119,40,213,10,206,
    157,145,155,184,67,231,169,234,203,228,153,59,106,215,115,162,
    56,221,31,185,170,111,243,91,38,153,99,56,82,204,45,142,
    164,90,194,73,47,136,124,103,24,251,227,80,170,69,98,229,
    244,130,80,58,14,111,254,113,56,138,19,245,52,73,226,196,
    38,139,242,98,24,187,197,27,100,79,47,140,83,217,166,211,
    248,24,155,216,43,162,238,141,152,35,9,192,146,210,203,190,
    76,189,36,24,41,116,148,230,72,212,196,173,77,46,226,33,
    125,130,195,65,63,30,202,131,158,235,141,67,53,57,56,150,
    195,7,7,71,227,32,244,15,94,124,244,225,193,104,162,250,
    113,116,128,107,65,164,36,154,33,60,184,104,128,125,164,88,
    35,86,175,130,99,39,96,37,156,190,12,71,50,89,166,213,
    219,116,140,104,138,134,168,10,83,180,197,50,206,42,248,51,
    197,174,177,36,14,3,82,195,35,213,8,64,86,25,50,228,
    71,1,39,6,36,187,4,136,1,254,9,242,32,194,162,67,
    123,6,239,125,73,250,235,213,129,73,110,214,139,167,12,34,
    68,19,82,62,34,191,70,192,72,168,192,160,10,26,33,8,
    44,13,153,100,66,35,146,19,27,3,153,91,144,254,27,208,
    158,136,141,83,200,112,115,110,130,136,154,160,234,20,198,184,
    186,133,7,254,149,161,215,105,147,248,135,140,1,213,15,210,
    248,85,196,150,166,57,7,75,7,45,243,197,228,243,163,129,
    244,84,186,135,11,95,197,227,150,231,70,81,172,90,174,239,
    183,92,165,146,224,104,172,100,218,82,113,235,94,218,38,231,
    217,171,57,140,10,126,147,81,14,27,114,49,194,70,63,248,
    129,167,240,97,157,31,216,11,169,84,8,129,126,236,167,184,
    78,44,142,165,178,73,72,69,70,142,89,16,70,136,67,164,
    116,60,210,221,192,231,39,185,36,12,195,118,53,7,77,42,
    195,158,170,51,254,220,52,117,88,18,90,103,168,17,227,151,
    110,56,150,204,61,69,126,40,16,77,181,12,51,7,219,77,
    18,60,215,147,133,143,226,200,159,160,44,129,247,30,29,115,
    147,33,215,96,208,109,34,224,22,112,172,226,255,171,98,203,
    240,172,12,102,213,28,106,148,221,20,176,163,69,230,107,132,
    221,57,102,146,182,193,169,128,229,231,104,251,49,205,232,101,
    123,151,134,59,52,220,165,97,47,87,113,150,122,46,95,214,
    243,33,241,54,88,57,86,131,12,111,230,106,248,23,34,230,
    214,52,98,48,187,117,8,249,6,197,199,20,249,22,101,194,
    228,49,141,72,202,49,101,66,250,140,242,46,69,8,51,163,
    96,64,88,211,108,10,118,54,138,221,36,101,23,115,156,218,
    4,190,50,2,143,75,8,180,201,31,12,63,251,86,158,215,
    28,162,208,192,179,119,136,85,229,29,86,109,209,240,163,121,
    152,118,10,161,227,43,16,250,152,142,105,102,16,90,102,232,
    212,241,215,52,60,51,179,119,81,216,214,47,65,135,112,99,
    189,3,55,63,165,153,121,85,195,57,66,38,211,235,15,37,
    200,144,40,70,89,252,67,156,76,182,73,234,50,88,182,177,
    34,63,143,182,177,200,26,92,100,127,201,69,150,11,53,183,
    46,58,177,154,156,91,245,164,66,234,247,76,216,202,138,103,
    90,195,113,148,196,175,39,173,184,215,82,172,31,229,193,71,
    247,210,253,123,233,199,152,225,90,143,57,183,232,28,167,179,
    88,34,71,148,133,232,213,167,175,61,201,85,139,159,28,71,
    39,29,135,19,144,147,85,67,196,205,38,25,207,200,173,202,
    233,55,85,9,101,221,153,219,181,94,216,149,196,252,140,24,
    215,217,168,166,216,70,140,212,5,159,238,232,204,202,13,16,
    239,226,239,83,50,52,105,40,129,90,87,187,163,101,99,177,
    73,1,251,231,23,112,48,67,161,237,3,228,242,167,220,255,
    213,169,255,233,103,230,240,253,7,112,27,40,224,239,64,30,
    70,71,102,240,45,208,78,46,93,39,242,63,3,227,252,29,
    53,153,243,67,135,234,48,83,96,218,72,31,50,169,46,209,
    159,193,63,75,65,146,23,82,51,107,244,202,133,212,42,114,
    11,67,227,123,21,75,235,98,18,34,71,244,221,148,200,116,
    102,153,198,221,52,85,23,45,26,102,214,89,226,100,81,179,
    116,232,244,111,166,40,161,82,180,35,214,141,146,239,127,69,
    195,251,133,219,69,190,54,35,65,246,224,250,26,233,232,204,
    252,53,157,102,177,124,43,11,44,121,206,160,0,112,37,7,
    240,251,5,128,37,23,144,183,220,208,211,104,144,23,207,13,
    129,183,44,236,139,232,82,99,129,172,64,183,74,80,231,142,
    85,100,145,32,242,180,67,73,234,66,117,98,237,15,181,93,
    10,71,106,31,209,240,122,230,225,76,202,62,10,221,225,145,
    239,62,14,137,45,241,246,242,216,48,114,65,155,101,65,9,
    215,226,58,89,249,241,65,46,240,203,153,135,242,135,200,165,
    16,148,129,235,199,30,199,239,179,190,108,13,229,240,8,239,
    99,253,96,212,234,133,238,49,91,220,204,20,249,60,87,68,
    177,203,46,215,241,244,62,141,113,203,139,35,204,157,99,79,
    197,73,203,151,120,79,145,126,235,23,45,78,188,173,32,109,
    185,71,184,235,122,74,227,244,98,88,113,35,232,38,199,41,
    247,124,39,175,104,58,23,143,57,120,219,12,176,211,141,160,
    168,105,250,38,84,228,81,238,97,53,236,177,252,224,13,68,
    77,116,50,161,154,110,239,211,240,51,152,87,186,253,128,180,
    39,118,100,134,170,216,49,106,6,203,147,211,124,65,111,164,
    87,99,235,95,223,39,182,244,183,139,44,194,170,68,41,23,
    232,90,75,99,141,18,110,183,158,47,46,241,216,224,197,229,
    124,241,6,143,43,188,216,204,191,153,172,242,226,26,116,215,
    233,163,2,173,108,80,212,46,252,208,168,229,72,152,75,12,
    140,103,26,172,246,195,185,203,105,127,4,89,161,189,46,80,
    69,89,137,101,29,168,3,145,247,228,101,13,248,10,191,121,
    5,81,142,151,72,87,73,109,249,221,57,104,196,113,173,15,
    121,61,13,189,171,237,228,147,66,248,115,238,37,38,27,236,
    16,125,239,96,135,136,231,209,109,236,43,45,238,43,31,81,
    95,121,202,154,58,134,110,45,167,168,170,20,10,211,167,133,
    72,190,114,46,42,173,59,71,18,204,29,141,100,228,219,247,
    161,220,12,242,246,204,61,75,89,228,91,40,85,117,83,108,
    96,247,119,53,86,40,35,150,148,97,207,84,138,232,152,135,
    143,24,117,127,203,81,215,230,140,88,164,69,251,17,13,156,
    8,139,28,104,255,166,176,240,205,171,144,58,26,247,210,55,
    116,135,184,126,19,251,10,190,249,243,147,218,190,74,230,143,
    135,35,102,113,221,30,113,96,75,225,195,187,136,248,75,210,
    53,12,120,47,103,64,15,236,28,142,14,95,134,82,201,75,
    120,81,164,125,118,55,245,37,22,179,120,130,23,10,110,218,
    241,57,116,156,249,212,132,79,116,72,64,74,40,198,154,32,
    170,88,21,54,241,78,185,105,212,170,53,193,69,244,210,231,
    83,45,3,245,111,186,65,157,164,54,39,146,149,194,95,252,
    157,47,47,111,228,90,190,38,29,186,67,253,213,134,191,82,
    216,63,129,236,222,105,191,87,248,157,110,223,124,43,208,247,
    42,140,42,46,240,92,207,237,95,211,58,205,134,15,246,115,
    141,246,75,26,253,158,188,100,240,254,53,100,157,96,168,191,
    113,169,213,75,251,126,226,226,124,243,210,106,42,147,192,13,
    131,55,82,221,185,254,216,140,35,233,156,111,51,251,171,36,
    75,57,74,244,51,215,227,11,233,146,189,159,200,227,32,69,
    62,204,164,68,158,165,149,79,114,43,92,194,91,249,213,185,
    64,69,247,164,250,110,251,152,84,73,63,197,129,190,96,213,
    86,106,8,27,74,54,38,94,52,151,133,101,54,154,53,171,
    177,84,179,106,11,38,127,156,88,198,171,69,221,170,45,53,
    68,254,223,30,130,171,110,236,173,213,196,119,6,138,105,227,
};

EmbeddedPython embedded_m5_internal_param_EtherTap(
    "m5/internal/param_EtherTap.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_EtherTap.py",
    "m5.internal.param_EtherTap",
    data_m5_internal_param_EtherTap,
    2240,
    6481);

} // anonymous namespace