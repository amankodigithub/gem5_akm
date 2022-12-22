#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_LRU[] = {
    120,156,181,88,253,110,220,198,17,159,37,121,39,221,73,178,
    78,150,37,217,150,108,209,118,229,92,141,86,106,211,184,46,
    16,213,173,147,166,64,131,88,113,121,14,236,40,65,89,138,
    220,147,120,226,145,7,114,37,249,2,9,40,42,163,45,250,
    127,31,161,127,244,109,242,4,125,149,118,102,150,228,81,95,
    72,128,156,229,187,245,220,238,114,118,62,126,243,177,244,33,
    255,171,225,247,183,54,64,246,95,1,16,224,71,64,4,208,
    23,176,45,64,72,1,193,13,216,175,65,250,1,4,53,120,
    11,176,109,128,52,224,20,9,19,190,50,32,158,230,103,234,
    16,153,60,35,96,216,4,105,193,118,13,94,197,115,96,201,
    58,236,55,33,253,51,8,33,98,1,175,131,9,8,38,225,
    45,114,71,162,193,12,39,129,38,155,60,217,128,96,138,39,
    155,16,76,51,49,5,195,22,200,105,216,158,161,109,219,215,
    144,237,35,100,59,203,108,191,37,182,1,174,44,64,112,141,
    182,163,92,95,210,78,139,118,242,121,179,204,165,85,72,57,
    7,219,215,11,122,190,66,223,168,208,11,21,122,177,66,47,
    85,232,155,21,250,86,133,190,93,161,151,43,244,74,133,190,
    83,161,239,50,141,26,94,135,222,42,244,108,232,221,131,46,
    26,125,174,212,230,62,72,19,122,15,96,251,1,72,252,220,
    135,83,244,75,112,189,242,196,143,248,137,249,242,137,53,126,
    226,33,108,63,4,137,159,53,253,68,29,58,237,69,244,117,
    248,63,252,107,163,175,65,77,227,112,40,211,44,76,98,55,
    140,187,73,104,208,122,157,6,66,134,79,195,68,14,145,143,
    9,34,255,1,198,71,96,228,16,57,1,100,44,72,151,200,
    128,19,38,78,12,24,182,225,88,64,207,130,192,132,99,60,
    166,70,2,236,10,56,53,224,107,147,54,156,224,104,161,35,
    239,130,165,52,62,122,236,72,205,105,2,78,106,112,92,131,
    206,235,99,131,38,246,27,144,254,27,190,89,97,166,147,204,
    212,128,99,28,45,56,181,224,164,14,175,112,19,78,245,26,
    164,190,120,125,140,154,226,76,167,109,161,180,91,21,117,73,
    149,32,76,99,175,47,85,19,105,119,224,165,94,223,253,204,
    249,162,221,44,214,147,108,125,224,169,61,135,31,48,201,18,
    253,129,98,70,73,44,213,20,18,221,48,14,220,126,18,28,
    68,82,77,18,23,183,27,70,210,117,121,241,15,253,65,146,
    170,79,210,52,73,29,50,38,79,70,137,87,62,65,166,244,
    163,36,147,109,58,141,143,113,136,189,162,221,221,1,115,36,
    1,88,72,122,56,144,153,159,134,3,133,62,210,28,105,55,
    113,107,147,119,120,200,54,113,216,216,75,250,114,163,235,249,
    7,145,26,110,236,202,254,227,141,157,131,48,10,54,158,57,
    207,55,6,67,181,151,196,27,56,23,198,74,162,5,162,141,
    82,247,117,92,188,78,92,142,194,93,55,100,249,221,61,25,
    13,100,58,67,179,183,233,4,209,18,211,162,46,76,209,22,
    51,72,213,240,107,138,21,99,74,108,133,164,129,79,90,17,
    108,172,42,80,200,123,2,246,13,72,87,8,6,61,252,8,
    242,27,130,161,67,107,6,175,253,145,84,215,179,61,147,156,
    171,39,143,25,58,136,33,220,185,73,222,140,129,253,95,131,
    94,29,52,46,16,78,26,40,233,144,70,220,78,108,12,100,
    110,65,246,47,64,83,34,34,142,33,71,203,169,9,34,110,
    1,58,30,147,3,206,46,226,129,127,101,192,117,218,36,254,
    22,187,95,237,133,89,114,20,179,145,137,230,16,233,160,101,
    94,12,63,223,233,73,95,101,171,56,241,101,114,96,251,94,
    28,39,202,246,130,192,246,148,74,195,157,3,37,51,91,37,
    246,90,214,38,191,57,115,5,130,74,126,195,65,129,24,242,
    46,34,70,255,8,66,95,225,143,121,254,193,94,200,164,66,
    239,239,37,65,134,243,196,98,87,42,135,132,84,100,228,132,
    5,97,112,184,180,149,142,199,125,215,240,247,179,66,18,70,
    96,187,94,224,37,147,81,151,33,239,71,94,150,185,44,9,
    205,51,202,136,241,161,23,29,72,230,158,33,63,20,136,72,
    45,195,56,113,118,147,100,46,84,100,185,227,36,14,134,40,
    70,232,191,71,39,220,100,180,77,51,222,22,16,107,19,56,
    214,241,255,186,88,52,124,43,71,88,189,64,25,165,51,5,
    236,99,145,187,25,17,119,138,169,163,109,112,236,179,232,28,
    99,247,137,162,135,157,21,26,238,208,112,151,134,213,66,187,
    49,169,56,115,94,197,39,196,214,96,189,88,3,50,183,89,
    104,16,156,137,147,91,163,56,193,76,214,33,188,27,20,21,
    35,188,91,148,245,210,167,52,226,86,142,36,19,178,151,148,
    99,41,46,152,25,133,0,130,153,168,17,196,217,30,78,139,
    244,156,44,208,233,16,228,170,184,219,173,224,206,33,87,48,
    232,156,91,69,34,115,105,135,134,155,179,76,172,106,151,24,
    212,166,225,222,152,173,58,2,206,238,5,224,124,72,39,180,
    114,224,204,48,96,154,248,109,25,190,153,155,186,172,95,243,
    231,0,67,104,177,46,65,203,67,162,204,139,202,189,27,160,
    228,42,253,190,2,20,146,194,168,74,190,133,196,112,137,4,
    174,66,100,9,107,238,171,120,9,203,168,193,101,244,103,92,
    70,185,20,115,243,163,147,168,201,121,84,19,53,210,188,107,
    194,98,94,30,179,6,142,131,52,121,51,180,147,174,173,88,
    53,202,121,155,107,217,250,90,246,33,102,51,251,41,231,17,
    157,207,116,198,74,229,128,50,14,61,250,201,27,95,114,113,
    226,95,174,171,19,140,171,235,107,94,244,16,45,11,100,55,
    163,48,40,167,218,76,165,148,97,199,105,210,102,105,82,146,
    240,83,226,217,100,123,154,98,9,145,209,20,124,176,171,19,
    40,119,55,188,138,223,143,200,198,164,156,4,234,123,157,142,
    22,139,37,38,217,157,159,156,241,254,120,228,117,54,144,193,
    23,133,215,235,35,175,211,215,44,240,250,119,224,246,78,192,
    223,128,252,138,238,203,241,90,194,155,28,57,79,219,255,4,
    12,236,75,170,46,231,130,14,85,90,222,129,41,34,123,194,
    91,117,17,254,20,254,81,137,138,162,84,154,121,3,87,45,
    149,86,153,71,24,16,223,171,28,90,103,19,14,249,96,207,
    203,104,155,206,34,163,64,27,101,228,178,255,194,44,58,38,
    116,76,106,110,46,29,252,245,8,27,84,108,150,197,188,81,
    241,248,207,105,120,191,116,182,40,230,126,184,12,171,112,117,
    1,116,117,238,253,138,14,178,88,180,217,9,54,1,62,91,
    130,181,86,128,245,253,18,172,146,171,195,91,238,204,105,52,
    200,109,167,134,192,235,24,182,58,116,251,177,64,214,96,187,
    78,176,230,254,83,228,168,23,69,118,161,92,116,166,244,176,
    206,91,218,26,165,231,180,83,104,120,51,206,168,37,191,108,
    70,94,127,39,240,158,82,2,202,136,173,95,196,129,81,200,
    216,170,202,72,24,22,87,137,201,63,31,23,178,30,142,51,
    98,127,9,92,64,180,140,236,156,32,241,57,76,95,238,73,
    187,47,251,59,120,157,218,11,7,118,55,242,118,217,206,102,
    174,195,231,133,14,138,29,117,190,52,103,143,104,76,108,63,
    137,49,49,30,248,42,73,237,64,226,93,67,6,246,79,109,
    206,170,118,152,217,222,14,174,122,190,210,152,60,27,61,220,
    209,121,233,110,198,205,219,254,17,145,227,246,147,139,247,196,
    16,187,213,67,40,107,149,190,200,148,73,146,251,80,13,113,
    44,43,120,139,80,67,157,46,168,76,59,235,52,252,24,222,
    65,46,253,32,247,74,70,202,215,197,178,209,48,184,36,225,
    242,11,218,151,93,12,161,231,223,39,132,244,187,140,60,144,
    234,197,75,144,9,144,124,189,160,247,20,245,252,61,5,70,
    215,196,15,141,46,134,237,184,1,123,50,214,160,114,158,188,
    75,17,157,95,65,94,247,174,10,40,81,149,127,70,7,84,
    79,20,237,112,85,120,190,46,183,170,24,112,253,84,122,74,
    106,83,175,140,87,15,142,58,205,255,47,163,232,184,216,201,
    61,43,69,62,229,130,62,188,193,30,208,141,62,123,64,188,
    138,111,99,75,103,113,75,183,73,45,221,49,235,231,26,186,
    171,27,33,168,86,170,73,134,136,229,145,91,170,170,251,53,
    146,201,27,12,100,28,56,143,160,218,130,241,242,56,189,72,
    225,125,10,149,170,106,138,27,216,115,93,140,6,202,82,21,
    21,216,21,181,18,255,99,118,10,131,235,159,5,184,218,212,
    217,142,82,149,67,220,117,114,42,243,146,243,27,40,114,85,
    9,159,64,70,82,201,145,105,121,50,191,50,5,18,19,114,
    50,196,142,151,91,75,252,29,185,238,216,147,219,175,117,152,
    234,214,28,147,155,168,27,13,179,81,111,8,206,254,231,94,
    219,233,131,233,58,173,27,168,97,230,112,100,205,150,74,241,
    75,166,34,57,147,112,156,41,183,188,190,126,111,192,151,101,
    231,1,228,23,33,231,189,210,66,116,19,228,174,85,119,251,
    8,56,174,76,92,136,156,95,208,60,117,112,253,199,235,133,
    26,235,90,141,143,188,76,118,164,122,150,101,137,207,111,186,
    250,143,213,237,43,119,190,244,176,134,173,94,186,252,113,148,
    248,251,50,208,239,98,212,157,171,247,252,46,233,123,56,191,
    124,233,142,78,216,207,57,204,157,91,15,82,122,106,225,220,
    108,38,211,208,139,194,111,164,186,117,110,69,198,7,125,247,
    197,81,218,193,102,78,170,149,75,79,123,145,28,201,244,121,
    130,200,80,247,207,109,24,45,49,3,247,80,82,225,87,247,
    190,131,143,62,237,10,221,14,118,58,195,76,201,254,21,22,
    196,180,154,246,189,40,183,15,33,161,216,192,111,1,47,241,
    23,97,174,58,193,165,182,200,171,28,5,169,220,13,241,200,
    148,57,84,183,230,169,136,224,171,22,207,36,226,234,99,227,
    14,23,221,81,234,187,231,83,122,111,193,1,64,175,148,26,
    179,13,12,29,202,77,38,222,6,103,132,101,78,183,26,214,
    244,84,195,106,76,152,252,222,96,6,111,2,77,171,49,53,
    45,174,250,183,138,97,215,52,86,145,211,255,1,154,179,82,
    235,
};

EmbeddedPython embedded_m5_internal_param_LRU(
    "m5/internal/param_LRU.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_LRU.py",
    "m5.internal.param_LRU",
    data_m5_internal_param_LRU,
    2273,
    6467);

} // anonymous namespace
