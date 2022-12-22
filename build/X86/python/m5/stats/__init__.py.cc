#include "sim/init.hh"

namespace {

const uint8_t data_m5_stats[] = {
    120,156,173,86,235,111,27,69,16,159,189,243,59,182,155,164,
    109,250,74,219,43,16,234,74,224,208,138,230,83,65,133,166,
    226,33,148,150,75,80,80,160,178,206,183,155,228,156,243,157,
    115,187,46,73,149,72,136,244,159,224,11,127,13,223,248,163,
    96,102,246,206,118,35,241,169,241,99,119,103,31,179,243,250,
    205,108,8,249,167,132,255,167,30,128,174,9,0,137,63,1,
    49,192,142,29,59,52,30,10,216,17,32,136,118,33,118,96,
    232,194,142,107,233,18,196,37,24,150,97,167,12,195,10,236,
    84,236,108,25,226,42,12,107,176,83,183,116,133,233,6,236,
    52,64,236,33,239,57,80,77,144,85,120,139,140,91,32,107,
    240,22,39,219,64,75,151,32,194,118,158,198,193,2,200,58,
    47,45,130,108,240,224,50,200,57,8,174,128,108,50,121,21,
    100,139,7,75,160,202,16,213,105,85,182,97,77,94,2,57,
    143,29,50,88,196,14,79,93,193,14,119,47,97,119,13,228,
    117,236,110,128,188,137,221,45,144,203,216,221,6,121,7,214,
    206,80,158,107,100,128,205,206,93,180,74,244,47,126,54,58,
    104,22,48,53,162,19,163,178,36,136,237,12,217,205,79,83,
    211,113,138,245,192,152,76,70,161,49,101,36,118,3,83,236,
    108,99,163,195,125,37,55,77,96,158,191,86,137,177,243,243,
    216,140,84,22,165,120,136,150,214,199,195,81,72,220,220,252,
    255,140,220,242,49,109,5,24,8,24,56,112,2,112,34,224,
    204,129,83,7,140,11,131,18,156,56,112,102,157,179,201,92,
    55,58,116,187,79,158,101,57,52,50,214,185,248,145,217,82,
    71,198,52,144,72,199,102,52,54,63,68,218,152,10,137,62,
    26,169,68,118,220,66,149,221,40,86,73,48,84,172,165,84,
    58,228,93,246,80,135,120,115,163,31,97,179,186,159,14,213,
    234,110,16,142,99,115,188,186,167,134,143,87,117,22,174,142,
    142,205,126,154,172,18,69,18,172,246,122,116,127,175,215,29,
    29,251,85,60,246,128,206,19,119,16,87,69,88,4,163,40,
    180,190,51,171,245,25,46,228,132,203,196,140,182,165,66,91,
    159,36,52,205,92,209,205,104,184,201,154,223,194,137,76,237,
    161,162,42,123,201,50,241,252,183,65,34,99,149,233,169,50,
    239,165,81,11,143,125,58,213,168,101,53,34,95,150,11,141,
    254,177,26,25,214,200,234,129,142,11,74,112,36,41,152,214,
    95,253,10,167,64,14,30,148,105,173,169,159,48,81,97,34,
    251,9,76,149,34,147,166,106,220,214,225,12,65,152,216,35,
    13,64,175,14,230,224,169,94,38,208,218,245,37,236,122,53,
    56,92,166,223,54,98,23,161,114,42,232,178,65,147,195,8,
    227,230,104,197,94,126,59,191,220,180,242,43,158,80,215,102,
    107,31,254,9,219,185,216,118,2,97,191,201,97,166,255,198,
    230,121,18,244,99,229,153,125,229,145,97,208,210,81,168,189,
    81,16,30,4,123,170,235,121,95,171,221,52,251,191,117,47,
    210,13,15,63,138,153,200,79,188,32,142,103,183,13,199,218,
    120,125,229,133,153,10,140,146,30,186,205,35,179,71,65,28,
    189,201,233,52,9,21,51,161,43,166,124,167,60,147,212,27,
    146,8,51,124,195,32,153,97,219,213,223,231,80,225,101,239,
    254,138,190,239,117,86,228,3,239,183,64,227,113,227,141,178,
    20,161,26,31,191,115,121,255,216,11,60,12,46,142,168,206,
    3,111,119,156,132,38,74,147,134,38,136,245,122,52,191,242,
    217,154,100,80,151,242,128,216,164,96,232,130,245,27,7,181,
    100,87,32,162,209,39,239,204,184,132,238,19,23,14,40,220,
    233,236,134,161,160,239,218,148,67,12,25,163,236,137,81,28,
    25,6,195,4,245,15,39,163,71,134,14,188,126,104,187,71,
    239,29,238,124,117,172,180,94,39,30,21,14,249,69,252,110,
    116,46,21,130,197,104,200,25,88,214,139,76,196,25,167,81,
    80,61,218,198,98,98,122,12,15,120,91,63,208,234,25,81,
    62,101,35,159,146,36,203,29,73,155,87,227,96,79,27,202,
    32,50,66,165,3,43,140,78,179,89,182,156,133,233,98,27,
    2,83,123,209,178,191,116,33,144,191,135,199,62,167,243,55,
    137,75,229,170,211,18,55,69,69,92,118,230,197,53,167,94,
    110,9,250,182,157,176,72,107,78,145,8,168,180,28,93,167,
    92,176,254,106,190,192,188,176,72,171,34,78,69,238,108,253,
    11,54,47,51,53,10,48,116,11,88,104,15,193,228,73,44,
    46,94,16,134,232,2,4,216,214,126,52,5,138,76,19,133,
    61,65,142,49,33,177,168,68,201,30,3,69,99,177,161,208,
    13,40,72,187,27,124,139,127,131,108,67,246,28,217,171,56,
    175,250,31,92,136,141,62,36,13,38,105,177,212,18,17,245,
    108,18,55,135,4,155,228,175,73,182,71,43,156,178,195,209,
    40,7,130,234,0,150,185,63,68,49,227,64,214,229,2,141,
    68,224,112,42,43,231,57,82,160,18,212,29,189,160,18,182,
    254,234,27,202,117,132,168,58,77,103,47,120,220,176,91,110,
    129,153,195,45,151,25,116,206,76,58,60,204,96,155,246,181,
    172,59,94,0,254,102,60,66,102,160,42,125,62,75,177,63,
    76,202,9,168,40,54,152,31,108,189,212,27,157,118,17,196,
    195,199,108,234,112,156,109,69,24,239,84,106,227,64,115,229,
    231,103,194,87,26,125,68,222,121,158,101,105,54,3,32,126,
    43,100,41,121,156,54,255,56,86,99,197,230,245,107,5,230,
    95,163,107,45,70,250,40,66,98,29,203,11,145,142,140,113,
    25,14,182,198,251,43,212,52,47,204,209,246,153,128,114,253,
    60,1,132,219,116,23,69,83,148,68,197,105,57,85,4,71,
    83,52,16,16,11,98,226,253,9,32,250,231,188,143,190,205,
    214,224,232,30,3,131,171,63,3,197,122,211,62,0,14,239,
    194,118,98,97,84,178,171,214,145,101,187,250,5,22,172,10,
    12,170,84,200,184,96,77,60,72,175,41,95,105,101,206,187,
    48,247,30,101,31,158,86,27,29,202,70,62,191,212,230,176,
    217,83,230,187,4,87,176,216,48,77,175,34,180,103,144,224,
    35,131,50,79,70,92,185,18,76,45,207,115,51,94,92,152,
    122,145,133,96,55,218,87,23,89,48,195,231,36,251,41,237,
    15,46,8,129,15,241,88,66,231,219,140,192,38,101,40,88,
    112,41,51,217,2,130,233,34,154,188,103,185,184,113,86,160,
    247,87,52,95,232,97,82,124,204,70,30,141,72,188,145,220,
    141,158,22,68,136,196,239,5,3,73,214,164,116,199,217,55,
    73,223,168,44,141,200,211,204,6,47,11,146,206,117,226,255,
    17,20,143,212,6,195,162,139,42,171,16,109,39,138,116,132,
    115,99,19,197,62,139,227,22,214,195,217,226,25,222,101,109,
    253,82,193,132,159,216,252,188,246,203,19,96,208,234,86,134,
    88,33,150,252,76,179,146,96,221,212,190,87,228,63,78,230,
    22,78,28,32,244,148,99,211,249,183,223,241,194,123,97,132,
    228,121,50,76,229,56,86,95,146,121,53,85,143,38,150,139,
    121,177,228,98,235,84,68,179,84,47,85,4,125,235,203,245,
    42,182,75,245,118,69,84,207,125,255,3,125,181,234,189,
};

EmbeddedPython embedded_m5_stats(
    "m5/stats/__init__.py",
    "/home/faculty/gem5/src/python/m5/stats/__init__.py",
    "m5.stats",
    data_m5_stats,
    1615,
    3515);

} // anonymous namespace
