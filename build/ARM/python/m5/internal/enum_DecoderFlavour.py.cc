#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_DecoderFlavour[] = {
    120,156,181,86,221,114,219,84,16,222,35,201,78,236,216,141,
    147,52,73,75,3,53,48,5,15,195,196,252,247,162,157,14,
    5,90,134,206,16,64,134,105,235,118,16,174,116,28,203,177,
    37,143,36,167,53,227,220,144,14,240,2,60,2,23,188,13,
    111,4,251,173,36,219,105,195,12,23,73,198,218,28,237,89,
    237,217,159,111,119,143,75,217,95,129,159,79,235,68,241,134,
    34,242,248,167,104,64,52,84,212,86,164,180,34,175,70,7,
    5,138,62,34,175,64,207,137,218,6,105,131,142,121,97,210,
    35,131,130,138,124,83,164,129,41,28,69,147,50,105,139,218,
    5,186,31,172,145,165,139,116,80,166,232,39,82,74,5,138,
    30,120,75,228,45,211,115,214,206,139,146,40,92,38,48,203,
    194,44,145,183,34,204,50,121,21,89,172,208,164,70,186,66,
    237,42,196,218,23,88,237,59,172,118,85,212,254,13,181,30,
    239,172,145,119,1,226,108,215,67,72,90,144,148,243,86,69,
    11,171,48,169,191,6,122,12,183,248,101,157,218,235,194,221,
    88,228,94,164,246,69,225,110,82,123,19,126,181,26,235,28,
    32,255,31,254,107,112,128,40,169,48,57,212,81,236,135,129,
    227,7,221,208,55,176,95,4,65,56,93,144,165,44,174,159,
    35,174,127,145,4,213,51,178,184,30,17,41,188,19,13,12,
    58,146,197,145,65,147,6,77,21,245,45,242,76,154,242,49,
    5,152,180,175,232,216,160,199,38,4,142,152,90,236,253,107,
    100,37,105,80,251,226,125,170,105,137,142,10,52,45,80,235,
    193,212,0,227,160,68,209,159,244,243,142,40,93,22,165,6,
    77,153,90,116,108,209,81,145,238,179,16,179,250,37,196,76,
    61,152,178,167,204,105,53,44,182,118,111,193,93,184,226,249,
    81,208,25,234,228,34,175,29,29,140,135,206,23,218,13,61,
    29,221,29,116,14,195,113,212,40,231,146,97,188,59,234,36,
    61,91,62,53,17,147,225,40,17,149,97,160,147,21,94,116,
    253,192,115,134,161,55,30,232,100,25,250,156,174,63,208,142,
    35,155,95,13,71,97,148,220,137,162,48,178,17,86,97,14,
    194,206,236,11,4,213,29,132,177,110,224,52,57,198,134,250,
    4,210,221,145,104,132,1,98,46,62,246,116,236,70,254,40,
    225,108,165,26,33,13,109,13,228,73,72,124,151,73,179,23,
    14,117,179,219,113,199,131,100,210,220,215,195,143,155,79,198,
    254,192,107,222,182,191,110,142,38,73,47,12,154,204,243,131,
    68,115,44,6,205,83,162,176,203,98,192,74,252,212,223,119,
    124,241,196,233,233,193,72,71,85,112,95,193,89,170,166,42,
    170,168,76,213,80,85,94,21,248,49,213,142,177,162,246,124,
    248,226,194,63,64,201,90,4,15,50,170,232,192,160,104,7,
    208,232,243,79,33,151,12,144,22,246,12,217,251,14,65,72,
    185,125,19,9,79,153,83,129,19,227,138,37,111,34,195,1,
    9,38,10,212,47,82,138,21,134,88,10,158,104,2,202,226,
    80,99,176,114,139,226,63,136,131,202,40,153,82,134,160,99,
    147,84,80,163,164,140,42,99,238,22,31,248,139,128,176,213,
    128,249,123,2,132,164,231,199,225,211,64,194,141,181,148,77,
    139,35,243,237,228,155,39,125,237,38,241,85,102,60,12,199,
    117,183,19,4,97,82,239,120,94,189,147,36,145,255,100,156,
    232,184,158,132,245,107,113,3,25,180,215,114,44,205,244,77,
    70,57,118,144,103,198,78,250,226,249,110,194,47,27,242,34,
    89,136,117,194,56,232,133,94,204,124,168,216,215,137,13,35,
    19,4,57,20,67,4,38,14,68,113,60,203,93,224,247,219,
    185,37,130,197,70,49,71,78,172,7,221,164,44,32,236,196,
    177,35,150,128,47,120,131,226,195,206,96,172,69,123,204,250,
    216,32,44,83,27,206,7,113,151,96,125,238,172,120,16,132,
    129,55,97,131,124,247,109,156,117,73,112,87,17,228,109,50,
    234,150,152,22,249,127,81,109,25,174,149,97,173,152,227,109,
    11,158,146,100,91,101,9,103,236,29,115,99,105,24,210,25,
    196,9,169,187,55,176,194,199,246,14,200,171,32,175,129,92,
    205,253,60,115,103,171,47,58,123,29,7,24,226,161,248,130,
    20,152,185,47,222,137,218,185,60,175,29,238,120,45,212,128,
    129,74,153,215,128,133,238,24,221,2,101,81,169,46,147,226,
    239,209,139,81,43,162,12,101,193,0,199,106,14,123,137,140,
    93,131,199,203,57,98,109,192,112,17,139,251,11,88,180,145,
    20,1,162,125,57,111,115,14,36,82,8,218,87,160,170,112,
    74,104,235,32,175,159,91,124,231,96,218,127,9,76,55,112,
    86,45,3,83,85,64,84,230,167,102,184,102,22,244,217,196,
    219,120,1,68,64,144,117,10,130,222,194,202,124,217,205,243,
    6,79,230,220,221,5,240,192,30,99,209,135,61,94,76,182,
    97,250,34,108,182,121,94,223,15,182,121,4,27,50,130,223,
    147,17,44,99,92,110,27,105,179,53,165,223,166,139,2,98,
    208,53,105,43,27,173,113,137,233,40,10,159,77,234,97,183,
    158,136,147,232,141,55,175,197,187,215,226,27,220,245,234,183,
    164,223,164,125,47,237,108,145,30,161,51,225,211,59,207,92,
    45,227,76,222,28,39,109,68,142,52,37,39,27,147,140,160,
    77,68,208,200,67,43,45,57,78,34,116,226,243,9,110,121,
    22,92,216,122,15,218,203,18,89,83,109,51,90,202,74,76,
    112,210,150,43,119,36,217,229,231,51,68,27,110,106,194,149,
    211,110,165,6,138,237,240,194,126,247,4,34,206,218,114,187,
    201,170,126,200,145,80,156,35,1,143,153,163,249,55,190,93,
    40,128,225,87,66,174,57,165,25,154,103,224,71,114,55,32,
    254,35,9,236,79,153,216,210,51,90,152,210,34,193,173,36,
    190,46,162,233,0,191,71,191,47,212,76,62,102,205,236,66,
    184,56,102,173,89,191,17,144,252,175,81,106,157,108,76,200,
    70,175,19,67,44,237,54,243,50,156,247,240,217,45,142,187,
    237,153,35,102,57,213,235,192,132,199,115,188,96,80,93,81,
    27,198,2,10,222,7,249,96,6,0,149,243,206,210,154,171,
    244,223,99,212,73,251,246,35,28,105,137,145,171,75,18,175,
    23,174,254,169,121,91,179,160,77,98,27,28,123,21,196,200,
    171,153,107,159,175,132,201,68,238,25,233,145,51,22,74,122,
    143,175,18,233,13,24,3,214,126,147,178,70,105,99,154,219,
    187,148,205,12,193,109,218,3,2,253,84,186,128,36,210,254,
    16,124,220,212,191,212,129,142,216,122,28,225,134,1,223,71,
    130,68,242,158,109,136,207,123,47,69,227,164,252,250,169,50,
    114,231,113,15,59,209,249,213,165,196,234,102,218,207,110,97,
    62,198,159,48,193,37,166,180,90,82,69,3,23,103,147,251,
    74,85,89,102,165,86,178,42,43,37,171,180,100,202,84,170,
    50,126,202,86,169,82,85,37,3,207,191,29,82,44,83,
};

EmbeddedPython embedded_m5_internal_enum_DecoderFlavour(
    "m5/internal/enum_DecoderFlavour.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/enum_DecoderFlavour.py",
    "m5.internal.enum_DecoderFlavour",
    data_m5_internal_enum_DecoderFlavour,
    1551,
    3820);

} // anonymous namespace
