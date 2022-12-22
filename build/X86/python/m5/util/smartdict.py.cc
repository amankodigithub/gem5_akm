#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_smartdict[] = {
    120,156,205,88,123,111,27,69,16,223,59,63,18,59,105,155,
    164,105,90,232,107,41,47,83,218,24,74,11,109,85,33,84,
    170,162,10,8,112,41,45,141,10,167,203,237,218,190,228,124,
    231,222,238,37,49,106,255,1,36,36,36,144,248,3,137,79,
    195,23,224,67,193,204,220,195,118,226,20,89,54,86,157,120,
    52,222,189,221,253,205,243,118,198,101,233,167,0,223,143,56,
    99,202,3,70,192,191,193,124,198,238,35,103,50,223,96,109,
    131,109,24,204,16,5,38,77,214,48,152,40,178,159,24,251,
    145,177,71,27,5,38,74,76,22,105,180,156,143,150,152,152,
    97,210,160,209,217,124,180,140,163,77,216,107,134,137,10,91,
    175,85,225,52,239,31,248,212,12,224,52,146,139,9,59,11,
    196,209,58,18,158,171,233,199,3,39,242,156,77,95,186,25,
    100,124,236,54,66,254,27,24,201,16,31,192,221,48,17,59,
    156,135,184,76,98,138,12,96,35,83,74,97,35,140,18,49,
    51,41,228,141,89,4,134,76,37,133,187,81,69,132,200,204,
    49,81,37,102,158,137,57,98,142,48,49,79,204,81,38,142,
    16,115,140,137,163,196,44,48,113,140,152,69,38,22,136,89,
    98,98,145,152,227,76,44,17,179,204,196,113,98,78,48,177,
    76,204,10,19,39,136,57,201,172,245,218,10,200,163,126,5,
    114,47,208,210,247,189,166,12,52,239,68,225,94,151,187,190,
    163,20,111,132,17,95,111,59,145,190,3,202,89,229,60,83,
    13,223,245,124,159,199,74,114,221,146,85,14,159,29,152,9,
    99,197,221,48,216,145,145,230,141,56,112,181,23,6,138,235,
    144,131,122,101,187,163,145,205,230,119,28,63,150,52,9,187,
    224,150,180,139,238,118,164,114,141,84,231,232,42,31,163,222,
    23,208,78,100,181,167,96,94,3,255,215,201,120,107,53,19,
    167,42,72,66,20,162,9,123,227,50,165,163,196,186,69,252,
    33,253,70,13,13,73,68,93,1,82,111,133,109,89,111,56,
    110,236,235,110,189,41,219,215,234,42,114,235,157,174,110,133,
    65,29,126,197,218,243,235,10,69,71,191,88,133,137,25,88,
    102,219,94,160,109,251,42,110,99,146,107,140,14,182,76,96,
    63,11,131,166,133,224,104,202,42,101,232,198,130,56,75,16,
    125,216,218,182,223,31,7,227,12,97,188,235,135,142,158,56,
    200,10,129,108,224,222,182,125,125,124,77,222,14,67,127,226,
    32,231,8,100,16,6,223,203,40,180,237,155,125,48,205,20,
    162,153,193,12,18,152,79,9,224,51,147,61,53,17,242,182,
    201,162,11,61,236,235,56,106,210,232,117,100,250,70,11,52,
    186,134,76,223,104,145,70,5,50,233,168,46,101,92,170,132,
    114,230,224,24,54,196,108,130,46,200,255,193,77,105,0,125,
    65,163,74,26,61,91,22,50,53,209,68,8,17,28,81,62,
    212,147,137,145,52,194,111,225,54,203,164,178,121,248,171,14,
    124,73,137,102,191,18,143,3,3,210,109,101,122,4,186,205,
    114,73,201,178,184,25,25,158,192,91,75,19,49,116,57,9,
    25,112,197,79,246,217,248,63,225,25,211,131,39,109,251,222,
    168,240,204,169,193,147,79,108,251,211,81,225,21,166,6,47,
    0,237,125,62,42,188,226,212,224,53,193,247,190,24,21,94,
    105,122,240,64,123,95,61,15,222,226,65,120,39,255,127,112,
    201,219,216,17,194,182,239,143,136,238,212,180,208,169,120,211,
    182,31,140,136,110,121,90,232,218,177,111,219,223,140,136,238,
    244,180,208,9,111,199,182,55,94,60,116,201,197,64,71,177,
    36,132,143,135,32,44,12,32,52,6,64,78,33,50,146,75,
    96,68,161,97,143,8,111,10,161,145,194,163,216,112,70,132,
    55,133,216,72,225,81,112,184,35,194,155,130,251,165,240,200,
    247,228,139,7,111,62,129,151,135,71,179,7,177,118,138,165,
    197,54,188,145,157,54,188,85,116,149,126,180,67,17,227,5,
    39,11,252,208,181,109,11,223,61,22,62,108,225,67,214,124,
    134,216,58,129,4,235,86,235,36,18,220,212,122,9,201,203,
    72,78,35,57,131,228,44,146,115,72,206,35,225,72,94,65,
    114,1,201,171,72,94,27,16,121,28,185,45,20,241,29,92,
    127,9,72,185,80,54,42,102,250,55,151,115,102,165,112,144,
    211,104,167,175,3,33,27,94,32,197,225,157,7,20,118,104,
    231,1,170,120,60,92,253,5,228,75,223,113,101,43,244,133,
    140,210,250,29,202,235,72,118,34,169,176,176,143,179,99,168,
    88,199,115,20,148,244,15,161,146,167,218,27,138,127,25,57,
    190,15,181,191,131,149,189,19,112,185,231,202,14,86,241,124,
    183,5,179,112,173,231,158,230,158,194,154,93,92,226,155,177,
    230,18,11,121,71,83,41,79,219,96,193,68,125,3,172,69,
    36,108,2,206,160,91,28,158,208,94,208,228,42,118,91,220,
    81,220,11,240,0,175,193,149,134,213,109,192,151,215,127,70,
    230,195,84,218,12,22,1,84,178,220,117,124,37,39,88,237,
    145,123,5,125,174,138,7,91,175,35,121,3,201,155,153,11,
    78,200,91,112,241,22,75,5,68,111,161,154,56,239,179,228,
    214,55,51,235,63,62,204,250,163,246,157,176,227,100,80,235,
    137,218,98,200,87,209,133,48,200,84,23,8,158,15,246,118,
    162,172,3,164,91,142,230,232,83,10,44,21,129,5,85,98,
    119,175,215,49,66,143,73,106,62,149,52,113,90,33,184,79,
    250,52,186,32,149,152,73,111,135,11,217,145,129,64,79,0,
    175,130,113,47,2,103,114,154,50,207,96,197,204,250,151,243,
    12,182,93,166,82,154,58,1,91,84,58,99,66,51,147,162,
    184,128,253,190,117,129,197,24,5,66,7,72,36,117,28,5,
    138,59,189,134,85,210,213,2,127,131,51,179,230,147,220,243,
    148,38,87,196,65,225,104,103,211,33,199,23,36,7,126,242,
    157,2,126,32,74,19,185,118,61,37,215,18,143,161,166,4,
    114,212,74,196,84,220,148,154,172,221,75,180,52,188,45,187,
    147,186,137,192,9,30,196,143,109,199,184,21,166,77,86,156,
    55,86,202,46,158,131,223,82,166,207,179,73,52,109,25,169,
    2,53,117,42,176,173,82,96,70,79,127,143,24,117,15,100,
    132,161,79,138,81,82,83,232,134,13,80,67,55,79,30,92,
    133,137,119,236,130,202,252,93,167,171,114,173,41,29,70,61,
    15,200,244,11,184,215,146,230,195,219,8,37,193,175,50,252,
    251,122,19,214,229,76,153,56,61,126,204,213,97,217,15,121,
    136,23,40,217,12,184,27,70,122,179,79,67,160,152,59,223,
    46,177,103,137,162,232,5,250,157,201,158,44,228,233,168,39,
    9,106,61,113,41,114,129,62,99,227,147,59,227,131,127,23,
    150,253,220,203,79,57,120,132,224,34,248,183,128,217,187,176,
    15,252,226,0,248,7,6,96,127,40,216,16,252,213,68,203,
    209,112,25,74,153,116,227,203,241,30,44,251,37,75,124,204,
    88,73,36,25,240,210,43,195,204,112,142,61,54,81,152,103,
    230,128,227,54,204,67,77,82,74,29,39,149,166,215,242,194,
    7,183,173,43,19,201,227,215,96,217,111,251,204,82,72,125,
    138,204,130,15,236,173,238,19,230,236,161,194,60,199,68,149,
    212,68,195,100,162,80,177,174,78,68,164,15,96,217,239,61,
    11,157,49,44,116,173,60,153,148,51,51,157,103,108,127,66,
    198,246,101,150,79,250,154,148,121,102,36,65,44,188,32,13,
    13,117,188,253,65,130,117,0,235,248,98,224,41,127,244,89,
    102,98,248,41,86,32,103,165,72,135,73,98,93,159,136,37,
    110,192,178,63,123,34,212,48,93,238,191,147,172,34,193,204,
    70,25,130,194,139,156,146,204,152,168,250,6,155,216,181,229,
    34,44,123,130,235,177,86,40,155,101,179,114,164,82,130,171,
    108,17,191,243,133,181,26,221,215,233,150,110,100,86,78,222,
    137,168,246,112,115,75,186,201,219,144,118,202,58,56,62,20,
    90,147,1,72,197,197,173,164,156,248,16,45,161,208,88,85,
    99,193,92,185,185,50,179,114,241,95,238,231,184,47,
};

EmbeddedPython embedded_m5_util_smartdict(
    "m5/util/smartdict.py",
    "/home/faculty/gem5/src/python/m5/util/smartdict.py",
    "m5.util.smartdict",
    data_m5_util_smartdict,
    1806,
    7299);

} // anonymous namespace
