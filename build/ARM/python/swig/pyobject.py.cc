#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_pyobject[] = {
    120,156,173,87,239,110,219,84,20,63,215,118,146,38,77,214,
    116,213,218,141,149,45,128,6,17,66,205,86,134,246,97,211,
    196,64,67,98,18,101,56,160,109,221,132,201,108,39,113,154,
    218,145,237,110,51,74,191,208,9,120,1,30,129,15,188,13,
    143,194,27,192,249,157,107,39,233,54,36,68,91,213,167,199,
    199,231,158,123,254,252,238,57,183,46,229,63,37,126,62,109,
    17,37,127,49,227,241,175,162,49,209,190,162,93,69,202,87,
    228,173,210,94,137,226,235,228,149,232,37,209,174,65,190,65,
    71,204,152,244,216,160,176,46,107,202,52,54,69,162,40,171,
    145,111,209,110,137,30,132,171,100,249,101,218,171,81,252,3,
    41,165,66,69,15,189,10,121,75,244,146,173,51,83,21,131,
    75,4,97,77,132,85,242,150,69,88,35,175,46,204,50,101,
    77,242,235,180,219,128,218,238,25,54,251,33,155,93,17,179,
    127,194,172,199,95,206,146,119,6,234,236,215,35,104,90,208,
    148,253,86,196,74,147,188,166,48,171,228,155,52,90,5,195,
    78,119,219,107,28,116,240,55,255,180,21,115,105,157,201,51,
    63,78,130,40,116,130,176,31,5,6,190,151,65,144,43,23,
    164,146,39,237,115,36,237,15,146,140,121,70,158,180,67,34,
    133,119,162,177,65,135,194,28,26,148,181,105,170,104,100,145,
    103,210,148,183,41,209,145,162,129,162,35,131,158,152,80,56,
    100,106,113,104,151,200,74,117,198,70,18,154,182,84,161,195,
    18,77,75,212,125,56,53,32,216,171,82,252,59,253,184,41,
    70,151,196,168,65,83,166,22,29,89,116,88,166,7,172,196,
    162,81,21,9,81,15,167,28,41,75,186,109,139,189,221,89,
    8,23,161,120,65,28,246,246,253,180,202,188,51,201,162,167,
    35,223,77,219,181,226,115,148,108,77,122,233,208,22,125,19,
    137,216,159,164,98,39,10,253,116,153,153,126,16,122,206,126,
    228,29,140,253,116,9,70,156,126,48,246,29,71,62,126,185,
    63,137,226,244,110,28,71,177,141,92,138,112,28,245,102,43,
    144,73,119,28,37,126,27,187,201,54,54,204,167,208,238,79,
    196,34,28,16,31,177,216,243,19,55,14,38,41,151,72,91,
    132,54,172,181,81,28,33,201,117,38,157,97,180,239,119,250,
    61,247,96,156,102,157,129,191,255,73,231,233,65,48,246,58,
    119,236,175,58,147,44,29,70,97,39,121,30,12,58,69,204,
    91,44,60,139,213,44,116,2,241,219,25,250,227,137,31,55,
    32,125,11,150,85,83,213,85,89,153,170,173,26,204,149,248,
    49,213,166,177,172,118,2,120,238,34,26,160,197,90,196,7,
    138,166,104,207,160,120,19,213,31,241,175,66,185,24,3,93,
    124,51,228,219,55,8,89,75,71,38,106,170,133,83,65,12,
    67,135,53,111,161,136,33,73,217,75,52,42,147,134,3,163,
    72,227,35,206,64,89,29,102,12,54,110,81,242,27,113,10,
    25,8,83,202,65,114,100,146,10,155,148,214,112,74,88,186,
    206,27,254,36,56,235,182,225,254,142,148,61,29,6,73,244,
    60,148,228,130,151,147,209,229,204,220,207,190,150,108,37,151,
    89,240,40,58,104,185,189,48,140,210,86,207,243,90,189,52,
    141,131,167,7,169,159,180,210,168,117,37,105,163,94,246,106,
    129,156,153,189,108,82,32,5,85,101,164,232,23,47,112,83,
    126,89,147,23,169,66,226,167,92,245,97,228,37,44,135,137,
    129,159,218,112,50,69,146,117,217,4,20,14,84,177,61,235,
    157,225,247,59,133,39,130,188,118,185,192,73,226,143,251,105,
    77,32,215,75,18,71,60,129,92,208,5,195,207,122,227,3,
    95,172,39,108,143,29,2,171,125,56,13,124,157,135,175,69,
    104,226,111,24,133,94,198,219,7,238,7,176,124,94,80,86,
    23,156,157,99,140,85,152,150,249,111,89,173,27,174,149,35,
    171,92,160,107,29,113,145,212,86,229,229,101,164,29,113,167,
    104,27,114,212,197,101,57,83,239,130,195,98,123,19,228,109,
    144,75,32,151,139,168,78,24,90,227,213,208,110,192,156,33,
    241,136,231,72,175,89,120,238,29,59,23,23,230,231,130,27,
    86,23,248,54,112,10,230,248,182,208,220,226,219,160,172,42,
    39,199,164,228,91,180,82,156,3,49,6,200,51,120,193,205,
    33,45,121,176,155,136,111,169,64,163,13,136,45,226,108,176,
    128,51,27,37,16,144,217,23,138,134,229,64,67,195,203,190,
    8,83,165,55,36,178,5,242,206,41,101,115,14,148,193,107,
    64,185,9,203,205,28,40,13,1,72,141,159,166,225,154,121,
    138,103,227,105,237,21,128,0,29,214,27,208,241,62,56,243,
    245,160,78,23,24,121,40,95,44,0,3,187,27,139,30,239,
    48,147,109,192,209,69,72,108,240,40,125,16,110,240,116,52,
    100,58,94,149,233,40,19,86,166,188,110,146,166,244,73,205,
    148,16,113,223,164,245,124,234,37,152,111,147,56,122,145,181,
    162,126,43,149,144,208,211,110,93,73,182,174,36,55,185,91,
    181,110,75,159,208,253,74,119,164,216,159,160,163,96,233,221,
    23,174,47,67,71,15,74,71,55,16,71,154,137,147,15,51,
    70,199,57,228,203,40,18,41,173,52,73,99,116,208,211,72,
    101,109,150,74,120,118,15,182,106,146,71,83,109,48,18,106,
    74,54,116,244,2,185,172,200,87,126,62,67,110,17,148,79,
    184,216,217,93,237,142,120,10,159,237,143,142,85,251,100,126,
    218,29,94,248,93,81,229,242,188,202,120,204,2,151,191,240,
    124,87,40,244,207,132,58,114,185,114,92,206,96,140,194,173,
    65,253,123,18,0,191,97,138,202,89,239,98,114,138,6,183,
    128,228,134,168,234,161,122,143,126,93,64,127,49,250,204,252,
    30,182,56,250,172,89,159,16,0,252,167,241,102,29,111,40,
    200,253,176,151,64,77,119,137,249,129,154,119,218,217,61,138,
    187,228,9,209,176,164,173,56,216,240,201,28,11,24,30,23,
    213,154,177,80,225,107,32,219,179,226,170,66,246,255,247,190,
    76,255,62,200,28,221,75,31,99,3,75,92,90,169,184,56,
    90,120,42,197,65,223,212,173,105,164,142,141,47,244,119,190,
    29,227,106,14,47,119,180,255,114,207,195,105,117,163,48,100,
    15,238,243,221,44,209,83,29,159,162,107,50,187,49,196,175,
    137,32,208,127,162,237,153,124,91,203,183,79,3,221,88,56,
    152,247,48,41,243,43,255,40,232,109,206,206,106,157,37,54,
    36,246,202,44,26,185,215,198,17,223,46,211,76,174,44,58,
    155,51,17,186,204,14,59,174,175,206,152,222,246,123,148,119,
    106,27,87,5,123,139,242,17,37,199,77,183,165,208,127,46,
    141,73,240,103,127,12,114,253,20,15,182,120,125,75,55,187,
    219,24,140,201,85,38,184,171,84,87,170,170,108,224,54,108,
    114,27,106,40,203,172,55,171,86,125,185,106,85,43,166,12,
    168,6,67,178,102,85,235,85,227,31,151,215,232,99,
};

EmbeddedPython embedded_m5_internal_pyobject(
    "m5/internal/pyobject.py",
    "/home/faculty/gem5/build/ARM/python/swig/pyobject.py",
    "m5.internal.pyobject",
    data_m5_internal_pyobject,
    1550,
    3707);

} // anonymous namespace
