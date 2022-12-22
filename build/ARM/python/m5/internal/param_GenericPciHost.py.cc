#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GenericPciHost[] = {
    120,156,189,89,95,115,219,198,17,223,3,64,74,164,36,139,
    178,254,217,150,108,209,78,29,211,174,45,185,105,92,119,38,
    174,91,215,73,211,100,198,138,10,166,181,163,100,138,66,192,
    81,2,69,2,28,0,178,204,140,212,233,84,158,164,211,231,
    246,169,207,125,232,183,233,71,232,55,105,119,247,0,240,36,
    81,142,58,53,43,137,231,229,222,222,222,238,222,239,246,246,
    206,30,100,63,37,252,252,172,14,144,252,198,0,240,241,79,
    64,7,160,43,96,83,128,144,2,252,57,216,45,65,252,62,
    248,37,120,13,176,105,128,52,224,8,9,19,190,52,32,156,
    228,49,101,232,152,204,17,208,175,130,180,96,179,4,207,195,
    25,176,100,25,118,171,16,255,14,132,16,161,128,23,254,24,
    248,227,240,26,181,35,81,97,133,227,64,204,42,51,43,224,
    79,48,179,10,254,36,19,19,208,175,129,156,132,205,41,18,
    219,188,128,106,239,160,218,105,86,251,79,82,235,99,207,60,
    248,23,72,28,237,250,130,36,45,146,228,249,166,89,75,45,
    183,114,6,54,47,230,244,172,70,207,105,244,188,70,47,104,
    244,162,70,95,210,232,203,26,125,69,163,151,52,122,89,163,
    175,106,244,53,141,94,209,232,186,70,95,215,232,27,26,253,
    142,70,127,79,163,111,106,244,187,26,125,75,163,27,76,99,
    100,47,66,251,54,180,239,64,251,251,208,194,197,158,41,162,
    120,23,164,9,237,123,176,121,15,36,254,221,133,35,196,131,
    127,81,27,177,202,35,102,139,17,107,60,226,62,108,222,7,
    137,127,107,106,68,25,154,141,5,196,88,240,111,252,105,8,
    164,210,73,108,94,202,56,9,162,208,9,194,86,20,24,212,
    95,166,134,16,233,81,51,150,65,243,41,65,243,31,192,184,
    244,141,12,154,135,128,138,5,249,210,49,224,144,137,67,3,
    250,13,56,16,208,182,192,55,225,0,167,41,145,1,219,2,
    142,12,248,202,36,129,67,108,45,4,208,53,176,82,133,203,
    54,3,72,105,26,131,195,18,28,148,160,249,226,192,32,198,
    110,5,226,191,195,215,203,172,116,156,149,26,112,128,173,5,
    71,22,28,150,225,57,10,33,171,93,33,247,197,139,3,244,
    20,57,205,134,133,214,174,107,238,146,43,126,16,135,110,87,
    166,243,72,59,61,55,118,187,206,199,50,148,113,224,109,120,
    193,47,163,36,109,84,115,209,40,89,237,185,233,142,205,99,
    77,10,74,183,151,178,206,40,148,233,4,18,173,32,244,157,
    110,228,239,117,100,58,78,10,157,86,208,145,142,195,157,159,
    116,123,81,156,126,20,199,81,108,83,92,153,217,137,220,98,
    4,69,213,235,68,137,108,208,108,60,141,77,234,83,146,110,
    245,88,35,25,192,246,210,96,95,38,94,28,244,82,92,46,
    165,145,164,73,91,131,22,138,155,228,99,108,214,118,162,174,
    92,107,185,222,94,39,237,175,109,203,238,131,181,173,189,160,
    227,175,61,177,159,173,245,250,233,78,20,174,33,47,8,83,
    137,193,232,172,13,11,195,42,202,93,36,133,251,193,182,19,
    176,43,206,142,236,244,100,60,69,220,43,52,153,168,137,73,
    81,22,166,104,136,41,164,74,248,49,197,178,49,33,214,3,
    114,198,35,7,9,76,150,14,31,90,83,1,187,6,196,203,
    4,142,54,254,9,90,77,132,72,147,250,12,238,251,21,69,
    65,113,219,38,45,185,98,30,48,160,16,89,40,249,136,214,
    56,4,70,69,9,218,101,80,104,65,144,41,248,196,125,106,
    81,156,212,24,168,220,130,228,175,128,81,69,156,28,64,134,
    161,35,19,68,88,131,180,74,169,10,185,11,56,225,31,25,
    134,205,6,153,191,206,72,72,119,130,36,218,15,57,222,68,
    243,198,105,98,100,54,250,159,109,181,165,151,38,43,200,248,
    34,218,171,123,110,24,70,105,221,245,253,186,155,166,113,176,
    181,151,202,164,158,70,245,155,73,131,150,208,158,201,193,84,
    232,235,247,114,240,208,66,35,120,212,23,63,240,82,252,50,
    203,95,120,21,18,153,34,16,118,34,63,65,62,169,216,150,
    169,77,70,166,20,228,136,13,97,156,56,36,74,211,163,220,
    5,252,254,36,183,132,193,216,40,231,208,73,100,167,149,86,
    25,133,110,146,56,108,9,241,25,112,164,248,165,219,217,147,
    172,61,65,125,104,16,145,202,134,17,65,238,18,153,159,123,
    203,46,132,81,232,247,209,162,192,187,69,147,93,98,224,77,
    50,244,230,17,118,99,216,150,241,223,178,88,48,60,43,3,
    91,57,7,28,229,187,20,120,185,69,182,226,8,190,35,204,
    45,13,131,147,3,123,193,59,239,6,81,52,216,94,166,230,
    42,53,215,168,89,201,29,125,251,222,78,157,244,246,33,205,
    96,176,139,236,12,45,130,153,59,227,31,219,61,151,7,187,
    7,179,94,147,118,129,65,123,101,176,11,44,202,144,241,99,
    106,81,148,247,151,9,201,231,148,143,105,183,176,50,218,24,
    8,113,162,6,192,231,208,216,53,114,121,60,199,172,77,64,
    212,209,184,173,161,209,166,85,97,40,218,151,243,76,231,144,
    132,2,161,189,68,170,74,67,98,91,167,230,250,232,2,60,
    128,211,246,41,56,125,64,147,213,50,56,77,49,140,170,248,
    169,25,158,153,69,189,56,246,102,79,192,136,48,100,13,193,
    208,187,68,153,167,253,28,57,124,50,239,126,161,193,135,12,
    50,116,39,214,145,232,47,146,237,58,112,22,241,212,126,30,
    46,226,65,108,240,65,124,159,15,98,62,204,185,108,83,9,
    215,228,156,171,136,18,5,161,101,194,66,118,192,38,21,108,
    123,113,244,170,95,143,90,245,148,189,164,252,248,232,102,178,
    122,51,249,0,51,95,253,49,231,28,149,251,84,118,139,101,
    143,178,19,13,253,232,149,39,249,76,227,111,142,163,146,145,
    195,137,201,201,206,74,196,16,29,216,28,112,142,45,167,229,
    36,141,41,27,143,40,186,213,34,186,100,236,167,164,190,202,
    161,53,197,34,226,165,42,216,6,71,229,93,46,149,184,23,
    63,63,167,112,147,159,18,168,120,183,155,202,66,54,158,220,
    176,239,30,195,196,91,55,221,94,67,93,191,206,177,80,30,
    96,129,62,102,14,232,111,129,203,70,1,223,0,173,54,46,
    106,6,232,2,255,180,188,179,36,254,91,96,228,15,57,183,
    57,111,52,233,172,102,9,76,39,201,67,22,85,199,248,167,
    240,39,109,219,228,135,173,153,21,134,250,97,107,21,57,135,
    97,114,174,3,213,58,158,156,104,57,118,220,132,196,84,198,
    25,236,196,65,34,47,138,57,204,184,111,31,51,227,74,177,
    67,54,124,53,64,12,29,87,75,98,214,208,112,240,3,106,
    222,43,32,32,114,222,91,53,103,5,206,62,77,29,149,189,
    191,164,57,45,182,114,122,140,171,133,227,106,10,96,151,114,
    96,191,87,0,91,242,81,243,154,175,4,212,26,180,174,71,
    134,192,251,39,86,83,116,221,179,64,150,96,179,76,91,128,
    171,93,145,237,16,145,39,37,74,97,199,206,49,142,196,186,
    138,81,177,180,106,213,168,121,53,162,205,78,11,247,168,227,
    118,183,124,247,241,239,73,57,205,224,229,123,198,200,205,173,
    233,230,18,222,197,89,22,243,215,7,185,217,47,71,180,209,
    127,132,186,10,115,25,214,126,228,241,238,254,124,71,214,187,
    178,187,133,183,187,157,160,87,111,117,220,109,142,190,153,185,
    243,89,238,78,202,203,119,242,244,79,238,80,27,213,189,40,
    196,44,187,231,165,81,92,247,37,222,119,164,95,191,87,231,
    20,93,15,146,186,187,133,189,174,151,42,252,30,223,116,92,
    74,186,241,118,194,85,227,238,62,145,35,92,61,7,111,176,
    1,86,204,127,128,226,12,84,247,170,34,227,50,186,213,118,
    192,227,10,111,50,105,95,37,28,170,4,236,85,106,110,195,
    104,19,243,251,168,235,144,148,82,72,202,98,201,168,24,233,
    220,169,61,183,65,163,147,211,59,239,95,231,217,121,234,205,
    39,219,127,101,146,148,99,116,109,166,182,66,9,122,179,154,
    51,39,184,157,100,230,84,206,188,192,237,52,51,107,57,115,
    134,219,139,204,156,205,153,115,220,206,51,115,33,103,46,114,
    123,137,153,151,115,230,21,110,151,152,185,156,191,95,93,101,
    230,53,216,92,161,135,16,226,212,41,79,140,253,175,121,130,
    119,221,8,247,219,183,111,53,61,216,15,255,79,214,218,63,
    134,236,224,63,43,53,8,221,149,41,149,26,218,34,191,59,
    232,126,240,227,195,210,25,184,117,188,88,186,169,84,107,177,
    60,50,239,56,171,168,169,254,60,216,242,167,203,222,39,133,
    35,71,92,231,244,231,120,137,212,93,137,151,72,60,15,175,
    96,253,107,113,253,251,136,234,223,3,246,218,49,84,9,60,
    64,91,169,112,158,46,22,161,220,119,134,5,64,213,185,100,
    158,219,235,201,208,183,239,128,94,186,114,247,136,86,156,50,
    217,95,64,171,59,76,49,135,181,234,233,253,68,185,89,115,
    140,215,170,84,236,160,209,173,26,99,242,111,57,38,27,116,
    245,27,36,104,251,17,53,156,146,139,108,108,255,180,136,249,
    141,51,1,23,133,45,103,203,77,36,221,131,206,35,134,213,
    16,95,54,10,78,122,251,141,131,124,249,50,240,164,179,21,
    164,9,79,113,126,105,154,169,150,207,164,117,124,135,149,73,
    240,245,121,156,97,177,99,206,16,39,189,121,214,160,158,23,
    56,126,215,29,196,234,124,146,52,3,221,232,116,230,155,135,
    98,122,57,231,36,133,164,62,73,206,124,243,208,94,16,157,
    115,146,66,82,159,36,103,166,215,207,28,218,113,211,86,20,
    119,121,130,239,150,34,229,252,102,155,49,120,55,114,154,244,
    101,71,166,114,104,178,96,116,100,79,42,190,196,106,42,234,
    227,221,151,111,150,248,189,227,56,163,44,71,126,130,186,190,
    129,236,57,23,203,17,81,198,130,100,94,104,191,70,165,92,
    17,92,211,157,248,191,1,101,17,221,88,212,109,170,159,216,
    124,202,76,23,219,149,67,145,215,89,180,179,25,165,235,110,
    87,61,67,242,131,155,253,14,100,207,38,246,173,98,219,211,
    19,18,95,97,213,131,0,166,89,174,55,185,188,180,127,72,
    124,50,183,251,96,53,247,111,85,249,183,145,197,157,223,207,
    187,15,210,171,67,165,62,9,211,248,105,132,77,212,225,44,
    126,90,162,217,79,82,217,229,133,211,59,101,184,215,117,158,
    201,110,20,247,159,69,190,76,151,79,244,63,241,253,216,118,
    195,109,233,188,148,84,47,51,98,142,9,100,197,178,210,145,
    75,213,135,218,112,92,246,148,45,74,8,59,213,243,51,95,
    244,78,247,63,237,68,222,174,244,51,153,225,225,96,153,15,
    163,174,139,252,225,179,52,131,124,150,153,19,253,126,76,163,
    230,79,112,19,4,153,219,161,60,116,121,88,4,55,246,227,
    38,222,69,79,199,47,91,196,104,95,198,20,223,14,231,62,
    93,96,208,197,10,206,10,243,73,61,106,182,51,124,219,219,
    202,86,123,120,4,177,84,138,187,110,39,139,207,73,139,139,
    200,228,166,92,123,147,18,229,212,201,152,100,214,170,61,121,
    134,149,27,65,244,33,31,29,188,167,242,78,126,254,59,62,
    156,210,70,70,243,85,99,72,141,198,153,38,150,219,1,122,
    29,179,138,227,181,11,165,132,179,115,157,62,120,132,137,73,
    93,199,213,211,223,99,122,76,78,90,216,208,147,127,101,186,
    130,73,138,234,26,83,84,177,178,177,204,201,90,197,154,156,
    168,88,149,49,147,95,112,167,196,172,81,181,42,19,147,226,
    191,249,93,193,52,87,53,86,22,42,226,63,136,237,94,252,
};

EmbeddedPython embedded_m5_internal_param_GenericPciHost(
    "m5/internal/param_GenericPciHost.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_GenericPciHost.py",
    "m5.internal.param_GenericPciHost",
    data_m5_internal_param_GenericPciHost,
    2592,
    8080);

} // anonymous namespace