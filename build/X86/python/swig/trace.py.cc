#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_trace[] = {
    120,156,173,87,109,115,219,68,16,222,147,100,39,118,236,198,
    73,154,164,165,161,53,48,45,30,134,137,121,41,109,153,102,
    58,188,76,153,161,31,2,200,48,77,211,14,194,177,206,142,
    28,71,242,72,114,91,51,206,23,210,1,254,0,63,129,15,
    252,27,254,17,236,179,103,217,110,26,102,152,38,73,116,57,
    173,86,123,207,238,62,183,123,106,209,248,39,199,215,103,85,
    162,228,134,34,242,249,79,81,143,232,80,209,174,34,165,21,
    249,23,233,32,71,241,77,242,115,244,130,104,215,34,109,209,
    49,79,108,122,108,81,88,146,119,242,212,179,69,162,104,88,
    36,237,208,110,142,30,134,75,228,232,60,29,20,41,254,137,
    148,82,161,162,29,127,142,252,121,122,193,214,121,82,16,131,
    243,4,97,81,132,5,242,23,68,88,36,191,36,147,5,26,
    86,72,151,104,183,12,181,221,11,108,246,61,54,187,40,102,
    255,134,89,159,159,172,146,127,1,234,140,235,17,52,29,104,
    202,122,139,98,165,66,126,69,38,75,164,109,234,46,97,226,
    47,137,100,89,36,203,152,248,203,34,89,17,201,10,38,254,
    138,72,46,138,228,34,38,236,106,163,182,198,49,11,254,225,
    159,26,199,140,210,18,15,79,117,156,4,81,232,5,97,59,
    10,44,60,207,99,64,132,91,24,230,198,161,254,18,161,254,
    139,36,206,190,53,14,245,17,145,194,61,81,207,162,35,153,
    28,89,52,172,209,72,81,215,33,223,166,17,47,147,163,99,
    69,29,69,199,22,61,177,161,112,196,163,195,1,185,74,78,
    106,226,220,149,128,24,75,115,116,148,163,81,142,26,59,35,
    11,130,131,2,197,127,210,207,27,98,116,94,140,90,52,226,
    209,161,99,135,142,242,244,144,149,88,212,45,32,140,106,103,
    196,158,178,164,81,115,24,237,246,140,187,112,197,15,226,176,
    121,168,83,56,233,165,113,179,165,107,197,236,89,148,108,246,
    155,233,190,43,202,54,162,112,216,79,197,72,20,234,116,129,
    39,237,32,244,189,195,200,31,244,116,58,15,11,94,59,232,
    105,207,147,135,95,31,246,163,56,189,31,199,81,236,34,144,
    34,236,69,205,201,27,8,99,171,23,37,186,134,213,100,25,
    23,230,83,104,183,251,98,17,0,4,32,94,246,117,210,138,
    131,126,202,249,49,22,161,13,107,53,100,70,134,228,67,30,
    234,251,209,161,174,183,155,173,65,47,29,214,59,250,240,147,
    250,222,32,232,249,245,157,59,183,234,253,97,186,31,133,245,
    228,89,208,169,139,195,155,44,89,198,171,44,241,2,1,237,
    237,235,94,95,199,101,72,223,128,89,85,81,37,149,87,182,
    170,169,50,207,114,124,217,106,195,90,80,219,1,96,183,224,
    10,66,232,204,50,3,233,82,116,96,81,188,129,188,119,249,
    79,33,81,156,253,6,158,89,242,236,59,248,107,164,93,27,
    217,52,194,145,112,133,73,195,154,91,72,95,72,146,240,28,
    117,243,100,136,192,252,49,204,136,135,24,89,29,102,44,54,
    238,80,242,7,113,252,152,2,35,26,211,227,216,38,21,86,
    40,45,98,87,177,116,141,23,252,69,24,214,168,1,254,182,
    228,60,221,15,146,232,89,40,145,197,92,246,68,131,35,243,
    237,240,155,189,174,110,165,201,53,22,60,138,6,213,86,51,
    12,163,180,218,244,253,106,51,77,227,96,111,144,234,164,154,
    70,213,235,73,13,201,114,151,50,218,76,236,13,251,25,77,
    144,82,166,137,185,241,131,86,202,55,43,114,35,89,72,116,
    202,41,223,143,252,132,229,48,209,209,169,11,144,194,211,72,
    128,8,35,60,168,98,121,214,187,192,247,159,103,72,132,118,
    181,124,70,146,68,247,218,105,81,248,214,76,18,79,144,64,
    46,212,130,225,167,205,222,192,236,130,132,237,49,32,76,13,
    134,51,147,235,18,128,102,126,9,216,48,10,253,33,175,29,
    180,222,133,217,75,66,177,146,144,108,149,9,54,199,99,158,
    255,231,213,154,213,114,198,180,202,103,212,66,209,74,73,18,
    171,198,185,101,154,29,115,129,168,89,178,195,5,175,236,166,
    183,49,195,203,238,6,134,55,49,92,197,112,45,115,233,44,
    126,149,79,250,117,27,182,44,113,70,96,35,176,118,6,219,
    127,105,71,92,158,238,8,46,82,13,48,219,2,255,167,204,
    118,80,208,226,123,24,89,85,246,140,77,201,247,40,159,216,
    1,98,12,100,103,218,98,54,37,179,4,193,173,192,185,249,
    140,135,46,200,53,203,176,206,12,195,92,196,95,232,229,94,
    206,234,148,7,13,67,44,247,10,76,229,78,137,98,21,195,
    91,231,17,202,41,69,58,175,80,228,46,204,86,198,20,41,
    11,53,138,124,85,172,150,61,142,239,164,31,173,156,160,6,
    120,225,156,194,139,27,152,217,175,122,116,142,148,24,251,241,
    213,12,37,176,180,53,11,119,155,39,195,117,160,156,37,195,
    58,55,206,135,225,58,247,66,75,122,225,7,210,11,165,159,
    202,73,192,20,70,91,106,163,153,228,224,110,219,166,181,113,
    143,75,10,60,246,227,232,249,176,26,181,171,169,248,131,58,
    182,117,61,217,188,158,220,229,10,85,189,39,181,193,212,40,
    83,133,98,221,71,21,193,171,247,159,183,180,116,25,185,243,
    60,83,52,60,41,32,222,184,123,49,47,86,17,44,43,139,
    162,148,207,36,141,81,53,207,28,199,226,36,142,128,245,0,
    134,138,18,68,91,173,51,7,138,74,86,243,76,37,148,115,
    137,60,229,235,11,4,22,30,105,194,201,207,109,24,44,2,
    19,128,221,247,95,202,243,25,64,186,117,126,235,135,44,191,
    249,105,126,113,217,25,29,127,227,86,174,144,226,95,9,25,
    228,68,141,233,56,97,47,82,182,2,245,31,73,120,123,74,
    207,148,253,221,64,159,20,13,222,246,201,109,81,53,45,244,
    1,253,62,67,250,172,209,217,227,243,214,108,163,115,38,181,
    65,82,255,191,154,153,243,114,17,65,224,247,155,9,212,76,
    101,152,238,163,105,105,157,28,153,184,50,158,133,7,243,198,
    132,135,213,158,76,89,128,86,113,69,173,88,51,185,133,125,
    247,163,73,90,85,38,123,205,133,175,209,127,247,44,207,84,
    206,199,176,238,8,158,197,57,73,126,70,0,217,220,101,83,
    139,186,42,43,223,130,105,219,160,149,211,155,244,242,65,218,
    31,164,38,94,166,251,198,65,216,57,51,53,111,242,91,157,
    19,165,231,53,208,5,157,48,138,181,65,7,79,245,243,126,
    124,102,108,183,248,173,131,25,108,179,187,87,176,21,39,216,
    208,26,79,5,166,195,230,94,79,159,207,54,190,131,52,156,
    1,143,249,140,72,206,15,208,167,120,117,10,72,54,216,137,
    79,49,179,198,234,100,151,13,19,23,18,119,113,130,74,62,
    30,226,136,79,241,233,80,142,134,134,205,19,17,42,251,54,
    159,254,204,247,9,14,74,238,59,52,110,141,46,78,101,238,
    38,141,15,4,82,232,76,43,8,245,51,105,6,178,243,221,
    143,49,128,106,146,83,9,164,128,63,151,48,136,7,91,166,
    217,220,195,145,36,217,226,1,71,196,194,98,65,229,45,124,
    129,216,220,9,202,202,177,75,149,130,83,90,40,56,133,57,
    91,78,7,101,174,13,69,167,80,42,88,179,191,255,2,102,
    216,42,223,
};

EmbeddedPython embedded_m5_internal_trace(
    "m5/internal/trace.py",
    "/home/faculty/gem5/build/X86/python/swig/trace.py",
    "m5.internal.trace",
    data_m5_internal_trace,
    1619,
    4139);

} // anonymous namespace
