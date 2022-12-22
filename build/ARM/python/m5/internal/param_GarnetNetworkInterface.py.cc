#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GarnetNetworkInterface[] = {
    120,156,189,88,91,115,219,198,21,62,11,128,148,72,73,214,
    93,242,69,177,104,59,110,24,79,35,181,105,92,119,26,215,
    173,155,166,157,100,38,178,11,166,99,135,201,20,133,128,149,
    8,10,4,88,96,37,153,174,212,135,202,189,60,228,181,63,
    160,15,125,232,31,233,115,254,81,122,206,89,0,132,110,145,
    51,41,101,145,235,229,193,226,236,185,124,231,178,235,65,246,
    175,130,223,95,52,0,210,255,10,0,31,63,2,66,128,158,
    128,182,0,33,5,248,11,176,83,129,228,61,240,43,240,10,
    160,109,128,52,224,8,39,38,124,110,64,52,201,239,84,33,
    52,153,34,96,80,7,105,65,187,2,207,162,89,176,100,21,
    118,234,144,252,1,132,16,145,128,231,254,24,248,227,240,10,
    185,227,164,198,12,199,129,136,117,38,214,192,159,96,98,29,
    252,73,158,76,192,96,6,228,36,180,167,104,89,251,10,178,
    189,135,108,167,153,237,87,196,214,199,39,139,224,95,161,229,
    40,215,103,180,210,162,149,188,223,52,115,153,201,165,156,133,
    246,92,62,159,47,205,23,74,243,197,210,124,169,52,95,46,
    205,175,150,230,215,74,243,235,165,249,141,210,124,133,231,168,
    201,28,116,223,128,238,77,232,174,194,22,26,119,182,144,186,
    1,210,132,238,45,104,223,2,137,159,6,28,161,253,253,185,
    210,27,183,249,141,249,226,141,59,252,198,155,208,126,19,36,
    126,238,232,55,170,208,106,46,161,79,131,175,241,95,19,125,
    10,106,18,135,61,153,164,65,28,57,65,180,21,7,6,61,
    175,210,64,8,240,104,24,203,160,240,1,65,225,63,192,56,
    240,141,12,10,135,128,140,5,233,18,26,112,200,147,67,3,
    6,77,56,16,208,181,192,55,225,0,183,169,144,0,219,2,
    142,12,248,194,164,5,135,56,90,232,176,155,96,41,141,131,
    46,59,76,115,26,131,195,10,28,84,160,245,252,192,32,194,
    78,13,146,127,195,203,21,102,58,206,76,13,56,192,209,130,
    35,11,14,171,240,12,23,33,169,91,35,245,197,243,3,212,
    20,41,173,166,133,210,110,148,212,37,85,252,32,137,220,158,
    84,111,224,220,233,187,137,219,115,126,227,38,145,84,27,82,
    237,199,201,206,71,145,146,201,150,235,201,102,61,127,37,78,
    215,250,174,234,216,204,195,36,227,244,250,138,121,199,248,222,
    4,78,182,130,200,119,122,177,191,27,74,53,78,140,157,173,
    32,148,142,195,15,63,234,245,227,68,125,152,36,113,98,147,
    125,153,24,198,110,241,6,89,215,11,227,84,54,105,55,222,
    198,38,246,138,86,111,245,153,35,9,192,114,211,203,190,76,
    189,36,232,43,116,155,230,72,171,137,91,147,28,198,67,250,
    4,135,245,78,220,147,235,168,204,110,168,6,235,219,178,119,
    127,125,115,55,8,253,245,199,246,39,235,253,129,234,196,209,
    58,210,2,82,57,114,195,245,111,50,199,26,174,159,35,198,
    251,193,182,19,176,74,78,71,134,125,153,76,17,245,58,109,
    42,102,196,164,168,10,83,52,197,20,206,42,248,53,197,138,
    49,33,54,2,82,202,35,69,9,92,86,25,78,228,99,1,
    59,6,36,43,4,150,46,126,4,121,23,33,211,162,103,6,
    63,251,45,89,67,83,187,38,65,64,19,15,24,96,136,52,
    92,249,144,124,30,1,163,164,2,221,42,104,244,32,232,52,
    156,146,1,141,184,156,216,24,200,220,130,244,159,128,214,69,
    220,28,64,134,169,35,19,68,52,3,170,78,169,2,169,75,
    184,225,95,24,150,173,38,137,191,193,136,80,157,32,141,247,
    35,182,59,205,57,144,90,104,153,167,131,39,155,93,233,169,
    116,21,9,159,197,187,13,207,141,162,88,53,92,223,111,184,
    74,37,193,230,174,146,105,67,197,141,187,105,147,92,105,207,
    230,160,42,248,13,250,57,136,200,225,8,34,253,195,15,60,
    133,63,230,249,7,123,33,149,10,1,209,137,253,20,233,196,
    98,91,42,155,132,84,100,228,152,5,97,188,56,180,148,182,
    199,117,87,240,247,227,92,18,6,101,179,154,67,40,149,225,
    150,170,51,26,221,52,117,88,18,162,51,240,136,241,158,27,
    238,74,230,158,34,63,20,136,166,90,134,17,67,239,42,169,
    145,107,205,170,68,113,228,15,80,178,192,123,139,54,189,202,
    0,156,100,8,46,34,252,198,112,172,226,255,85,177,100,120,
    86,6,186,106,14,60,202,131,10,216,237,34,243,60,130,240,
    8,115,78,211,224,164,193,218,112,36,222,166,25,189,108,175,
    208,64,121,195,190,73,195,106,174,240,232,180,158,58,169,245,
    3,218,201,96,85,89,41,114,138,153,43,229,31,139,166,107,
    195,104,194,172,216,162,168,48,40,118,134,81,97,81,6,77,
    30,209,136,75,57,222,76,72,63,165,124,77,209,195,204,40,
    80,16,242,52,27,6,2,155,200,158,33,213,199,115,12,219,
    4,204,50,58,183,75,232,180,201,59,12,77,251,90,158,1,
    29,90,161,65,105,223,32,86,149,51,108,220,160,225,214,232,
    13,61,132,215,246,41,120,189,79,155,206,100,240,154,98,88,
    213,241,59,99,120,102,102,253,162,60,206,159,128,21,97,202,
    58,3,83,223,163,153,121,90,223,75,131,83,166,229,175,75,
    112,34,193,140,178,50,27,56,25,44,147,14,101,32,45,99,
    149,127,22,45,99,225,54,184,112,255,128,11,55,23,127,110,
    171,116,66,54,57,39,235,73,133,140,177,101,194,82,86,144,
    211,26,142,253,36,126,49,104,196,91,13,197,218,82,254,124,
    120,55,93,187,155,190,143,153,177,241,136,115,146,206,141,58,
    251,37,178,79,217,139,94,253,240,133,39,185,246,241,47,199,
    209,201,202,225,196,229,100,53,21,49,181,72,166,52,114,27,
    115,218,78,85,66,217,122,196,86,174,23,86,38,161,63,166,
    109,234,108,98,83,44,35,126,234,130,101,113,116,126,230,22,
    139,159,226,247,151,100,118,210,87,2,53,217,118,75,75,202,
    74,144,58,246,247,143,97,100,100,42,216,235,200,243,119,57,
    54,170,67,108,208,215,204,129,254,119,224,182,83,192,223,128,
    188,143,78,206,128,94,196,5,185,123,158,150,255,30,56,34,
    206,168,243,156,87,90,84,219,121,5,166,155,244,1,47,213,
    101,255,99,248,71,41,156,242,226,108,102,141,101,185,56,91,
    69,78,98,216,188,86,1,182,142,39,47,114,75,199,77,105,
    153,206,72,195,8,29,38,252,162,9,196,140,60,58,12,141,
    235,13,28,146,229,139,33,130,168,188,221,16,243,70,9,23,
    63,164,225,221,2,18,34,167,141,68,172,85,56,191,10,59,
    58,219,127,78,123,91,44,237,244,152,34,127,156,100,84,64,
    190,146,67,254,221,2,242,146,139,211,43,62,100,208,104,144,
    167,143,12,129,39,72,236,199,232,192,102,129,172,64,187,74,
    193,193,125,179,200,98,71,228,105,139,146,220,177,202,199,54,
    217,208,214,42,156,173,253,72,195,139,17,167,3,114,229,195,
    208,237,109,250,238,163,132,54,161,157,188,60,154,140,92,236,
    153,178,216,20,9,226,60,201,249,231,253,92,252,189,17,167,
    130,31,35,207,66,108,6,190,31,123,28,255,159,118,100,163,
    39,123,155,120,126,236,4,253,198,86,232,110,179,55,204,76,
    173,39,185,90,138,221,121,178,127,72,239,209,24,55,188,56,
    194,188,188,235,169,56,105,248,18,79,82,210,111,188,211,224,
    164,222,8,210,134,187,137,79,93,79,105,100,31,15,75,110,
    78,221,100,59,229,62,116,103,159,166,151,224,77,7,207,202,
    1,245,226,80,84,79,125,114,43,114,52,119,217,58,80,176,
    208,225,25,73,13,116,106,162,94,194,94,163,225,109,184,156,
    84,254,30,242,252,35,49,39,19,85,197,13,163,102,40,178,
    221,217,111,60,37,110,233,233,8,253,215,235,68,168,190,221,
    201,226,180,74,43,229,24,29,216,105,172,81,106,111,215,115,
    226,4,143,147,76,156,202,137,87,120,156,102,226,76,78,156,
    229,113,142,137,243,249,85,211,2,19,23,161,189,68,119,40,
    68,89,166,132,48,246,93,19,2,135,213,37,4,212,159,254,
    175,121,192,126,112,201,82,219,63,129,172,7,56,47,7,136,
    178,74,83,58,7,116,69,126,204,40,235,195,247,23,119,46,
    0,164,227,37,210,85,82,251,104,101,228,218,114,58,209,91,
    254,121,24,227,167,59,228,199,133,98,71,220,2,13,22,216,
    117,250,152,197,174,19,207,162,235,216,42,91,220,42,63,164,
    86,249,128,173,224,24,186,91,30,162,177,82,24,3,57,67,
    36,247,207,17,79,27,68,183,198,36,166,219,239,203,200,183,
    239,65,185,219,229,199,35,70,4,165,178,191,66,169,53,49,
    197,2,182,183,167,227,143,146,116,73,81,246,97,165,136,184,
    209,123,147,177,251,101,142,221,38,31,69,139,76,109,63,164,
    129,115,115,145,150,237,159,23,190,248,233,69,192,220,230,135,
    142,47,93,63,140,189,29,71,117,18,153,118,226,208,167,35,
    214,119,121,29,27,44,69,103,229,115,87,92,28,52,129,22,
    226,117,214,209,110,124,247,235,171,119,46,90,190,231,165,14,
    150,52,103,143,228,162,13,190,221,27,180,21,223,59,151,136,
    234,222,133,44,130,68,57,248,56,229,29,191,197,114,218,142,
    206,137,5,133,129,203,70,241,101,40,149,252,198,56,227,6,
    54,187,208,240,37,118,34,241,0,235,62,159,223,240,119,232,
    56,151,81,194,127,134,60,95,18,243,5,224,18,46,170,88,
    196,23,5,255,25,181,106,77,112,71,116,226,238,94,203,116,
    23,242,211,202,32,181,57,117,79,23,216,230,107,229,188,59,
    161,48,96,59,109,184,61,125,45,200,23,95,54,217,137,175,
    43,236,183,138,24,33,88,242,17,81,31,192,49,87,113,183,
    198,205,153,253,35,162,211,57,161,119,127,45,215,112,77,107,
    248,1,1,88,250,250,134,148,225,214,187,207,247,240,231,44,
    253,85,220,115,145,126,227,204,21,173,160,151,49,154,61,241,
    220,79,232,173,197,19,212,84,38,129,27,6,47,37,71,85,
    249,137,140,118,123,206,211,253,164,133,39,26,201,189,209,233,
    221,158,198,251,50,249,36,70,151,171,219,39,22,12,31,49,
    3,103,79,82,43,171,110,93,192,71,239,118,142,110,187,155,
    173,65,170,100,239,28,67,98,213,77,122,110,152,217,135,252,
    152,47,224,11,184,179,172,77,53,248,24,133,27,67,182,254,
    73,200,49,218,19,185,29,160,4,9,51,60,246,98,86,128,
    8,148,234,237,139,226,176,204,234,18,66,69,31,182,244,21,
    208,35,186,100,228,75,44,186,18,174,77,215,48,108,168,72,
    153,162,142,101,202,50,39,103,106,214,228,68,205,170,141,153,
    124,163,55,133,231,234,186,85,155,152,20,103,253,173,98,152,
    213,141,213,249,154,248,31,163,42,207,50,
};

EmbeddedPython embedded_m5_internal_param_GarnetNetworkInterface(
    "m5/internal/param_GarnetNetworkInterface.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_GarnetNetworkInterface.py",
    "m5.internal.param_GarnetNetworkInterface",
    data_m5_internal_param_GarnetNetworkInterface,
    2411,
    7456);

} // anonymous namespace