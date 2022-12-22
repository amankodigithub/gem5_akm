#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_TickedObject[] = {
    120,156,189,88,235,114,219,198,21,62,11,128,148,72,81,22,
    101,89,146,109,201,22,108,199,13,235,105,165,54,141,227,204,
    68,241,52,77,220,153,102,166,138,11,186,99,135,201,20,133,
    136,165,4,10,4,88,96,101,153,174,212,31,149,123,121,129,
    62,66,127,244,69,250,187,111,212,158,115,22,0,65,93,166,
    153,169,88,153,92,31,46,118,207,158,203,119,46,139,46,100,
    127,21,252,254,212,6,72,255,41,0,124,252,8,8,1,6,
    2,58,2,132,20,224,223,128,131,10,36,31,130,95,129,119,
    0,29,3,164,1,167,72,152,240,141,1,81,131,247,84,33,
    52,121,70,192,168,14,210,130,78,5,94,70,139,96,201,42,
    28,212,33,249,45,8,33,34,1,175,252,25,240,103,225,29,
    114,71,162,198,12,103,129,38,235,60,89,3,127,142,39,235,
    224,55,152,152,131,81,19,100,3,58,243,180,172,115,13,217,
    62,66,182,11,204,246,95,196,214,199,39,203,224,95,163,229,
    40,215,215,180,210,162,149,124,222,2,115,105,230,82,46,66,
    231,122,78,47,149,232,27,37,122,185,68,175,148,232,213,18,
    125,179,68,223,42,209,183,75,244,90,137,94,103,26,53,185,
    14,253,59,208,191,11,253,13,232,161,113,23,11,169,109,144,
    38,244,239,65,231,30,72,252,216,112,138,246,247,175,151,118,
    220,231,29,75,197,142,7,188,227,61,232,188,7,18,63,15,
    244,142,42,180,91,43,232,211,224,223,248,215,66,159,130,106,
    224,240,90,38,105,16,71,110,16,245,226,192,160,231,85,26,
    8,1,93,26,102,50,40,124,78,80,248,7,48,14,124,35,
    131,194,9,32,99,65,186,132,6,156,48,113,98,192,168,5,
    199,2,250,22,248,38,28,227,49,21,18,96,79,192,169,1,
    223,154,180,224,4,71,11,29,118,23,44,165,113,208,103,135,
    105,78,51,112,82,129,227,10,180,95,29,27,52,113,80,131,
    228,239,240,118,157,153,206,50,83,3,142,113,180,224,212,130,
    147,42,188,196,69,56,213,175,145,250,226,213,49,106,138,51,
    237,150,133,210,238,148,212,37,85,252,32,137,188,129,84,75,
    72,187,67,47,241,6,238,139,160,123,32,253,175,118,251,178,
    171,90,245,124,97,156,110,14,61,181,239,240,78,147,76,50,
    24,42,230,24,71,82,205,33,209,11,34,223,29,196,254,97,
    40,213,44,177,115,123,65,40,93,151,31,254,98,48,140,19,
    245,44,73,226,196,33,171,242,100,24,123,197,14,178,105,55,
    140,83,217,162,211,248,24,135,216,43,90,221,27,50,71,18,
    128,165,165,205,190,76,187,73,48,84,232,44,205,145,86,19,
    183,22,185,137,135,244,25,14,91,251,241,64,110,245,188,238,
    97,168,70,91,123,114,240,120,107,247,48,8,253,173,87,31,
    127,180,53,28,169,253,56,218,194,185,32,82,18,77,17,110,
    157,55,194,38,174,186,78,236,142,130,61,55,96,69,220,125,
    25,14,101,50,79,179,183,233,40,209,20,13,81,21,166,104,
    137,121,164,42,248,53,197,186,49,39,118,2,82,165,75,234,
    17,144,172,50,116,200,159,2,14,12,72,214,9,24,125,252,
    8,242,36,194,163,77,207,12,126,246,43,178,129,158,237,155,
    228,110,61,121,204,96,66,84,225,202,109,242,111,4,140,136,
    10,244,171,160,145,130,0,211,208,73,70,52,226,114,98,99,
    32,115,11,210,191,1,218,20,49,114,12,25,126,78,77,16,
    81,19,84,157,210,2,206,174,224,129,127,100,8,182,91,36,
    254,14,227,64,237,7,105,124,20,177,181,137,230,160,105,163,
    101,158,143,180,181,210,13,156,248,58,62,180,187,94,20,197,
    202,246,124,223,246,148,74,130,221,67,37,83,91,197,246,195,
    180,69,14,116,22,115,40,21,252,70,195,28,58,228,102,132,
    142,254,225,7,93,133,63,24,163,46,123,33,149,10,97,176,
    31,251,41,206,19,139,61,169,28,18,82,145,145,99,22,132,
    81,226,210,82,58,30,215,93,195,223,159,229,146,48,20,91,
    213,28,56,169,12,123,170,206,24,244,210,212,101,73,104,158,
    225,70,140,95,123,225,161,100,238,41,242,67,129,136,212,50,
    76,5,112,55,73,248,92,87,86,32,138,35,127,132,242,4,
    221,247,233,168,155,12,187,6,3,111,25,65,55,131,99,21,
    255,175,138,21,163,107,101,80,171,230,112,163,76,167,128,157,
    45,50,127,35,244,78,49,171,180,12,78,11,172,3,71,221,
    125,162,104,179,179,78,195,29,26,238,210,176,145,171,121,213,
    186,206,159,213,245,9,241,55,88,65,86,133,28,96,230,170,
    248,19,145,115,107,28,57,152,237,218,20,1,6,197,201,56,
    2,44,202,140,201,83,26,113,41,199,150,9,233,11,202,195,
    20,41,204,140,130,2,225,77,212,24,244,108,24,167,73,10,
    207,230,120,117,8,132,101,36,238,149,144,232,144,79,24,134,
    206,173,60,199,185,180,66,3,208,89,35,86,149,11,44,107,
    211,112,111,90,230,29,67,105,239,28,148,62,161,163,154,25,
    148,230,25,66,117,252,54,141,174,153,217,188,40,118,75,103,
    32,68,248,177,46,192,207,247,136,50,207,107,57,101,232,100,
    186,253,188,4,29,18,199,40,171,176,131,196,104,149,36,47,
    131,102,21,43,245,203,104,21,139,175,193,197,247,71,92,124,
    185,128,115,107,164,19,173,201,185,86,19,21,50,65,207,132,
    149,172,168,166,53,28,135,73,252,102,100,199,61,91,177,142,
    148,23,183,31,166,155,15,211,79,48,227,217,79,57,215,232,
    156,167,179,90,34,135,148,149,104,235,179,55,93,201,149,140,
    127,185,174,78,66,46,39,36,55,171,144,136,159,101,50,160,
    145,91,150,211,113,170,18,202,194,83,177,109,189,176,45,137,
    250,37,49,175,179,97,77,177,138,88,169,11,150,192,213,217,
    150,155,35,126,138,223,159,145,177,73,75,9,212,30,59,109,
    45,31,139,78,74,56,63,152,192,195,21,11,238,108,33,167,
    95,231,56,168,142,113,64,95,51,135,242,95,128,219,68,1,
    127,6,242,52,58,52,131,114,129,124,114,237,18,45,255,13,
    48,230,47,168,213,156,47,218,84,159,121,5,166,145,244,9,
    47,213,165,251,75,248,107,41,96,242,2,107,102,141,96,185,
    192,90,69,174,97,136,124,167,34,106,77,38,37,114,198,190,
    151,210,50,157,105,198,49,56,78,223,69,251,134,153,246,170,
    241,50,171,217,186,36,193,183,99,180,80,137,90,19,75,70,
    9,3,63,166,225,131,194,253,34,159,187,66,97,54,224,242,
    250,233,234,140,253,13,157,104,177,140,11,51,220,199,148,153,
    20,128,174,228,128,254,160,0,180,228,226,242,142,155,127,26,
    13,242,232,169,33,240,102,135,189,19,93,164,44,144,21,232,
    84,9,250,220,217,138,44,50,68,158,138,40,113,77,84,46,
    182,194,142,182,79,225,84,237,47,26,222,76,37,196,201,101,
    219,161,55,216,245,189,167,9,177,38,254,221,60,86,140,92,
    216,102,89,88,194,185,184,76,94,254,249,56,23,250,245,84,
    194,251,35,228,84,8,203,96,246,227,46,199,244,139,125,105,
    15,228,96,23,239,112,251,193,208,238,133,222,30,91,222,204,
    148,249,42,87,70,177,235,206,214,250,244,17,141,177,221,141,
    35,204,171,135,93,21,39,182,47,241,94,35,125,251,135,54,
    39,101,59,72,109,111,23,159,122,120,57,98,220,78,134,26,
    55,141,94,178,151,114,127,120,112,68,228,212,60,231,226,45,
    53,160,206,24,138,154,167,111,79,69,142,229,158,87,135,1,
    150,39,188,177,168,145,78,50,84,247,157,77,26,190,15,211,
    76,197,31,34,167,223,17,75,50,71,85,172,25,53,131,239,
    82,229,117,207,105,103,122,62,222,190,248,46,241,166,223,161,
    100,81,87,5,57,67,119,98,122,63,82,201,222,143,96,4,
    86,255,215,8,100,68,79,13,203,191,191,210,192,115,158,252,
    95,100,117,62,134,172,144,94,22,116,19,157,215,103,58,232,
    180,165,177,220,142,110,176,94,186,85,103,189,196,203,232,54,
    182,96,22,183,96,219,212,130,29,115,155,230,26,186,11,27,
    59,136,59,104,190,242,211,173,38,146,71,238,121,52,233,70,
    139,28,239,13,135,50,242,157,71,80,238,157,248,241,84,140,
    68,129,245,7,40,21,63,83,220,192,102,233,60,252,40,81,
    148,148,98,152,85,10,192,173,79,211,137,127,202,157,168,239,
    225,69,182,112,182,105,104,78,164,6,157,41,216,218,116,167,
    241,101,40,149,188,192,224,138,182,101,119,34,95,98,130,140,
    71,152,152,184,65,196,223,161,235,78,47,199,124,138,156,222,
    230,38,199,28,35,170,70,173,90,19,156,148,207,188,194,211,
    231,63,132,188,9,26,165,14,131,121,161,80,146,223,51,229,
    169,146,236,193,45,249,142,55,208,111,12,248,118,236,60,128,
    236,158,227,188,95,24,139,172,195,157,167,238,225,17,150,92,
    48,184,62,56,63,161,121,106,73,6,143,55,115,109,54,181,
    54,159,135,241,88,29,126,219,53,120,172,238,92,190,244,139,
    120,224,225,252,218,133,43,218,193,32,99,180,120,230,185,159,
    208,174,229,51,179,169,76,2,47,12,222,74,118,110,249,137,
    140,14,7,238,243,163,164,141,205,147,84,235,23,158,246,60,
    62,146,201,47,99,116,175,186,127,102,193,248,17,51,112,95,
    75,170,166,234,222,127,225,163,79,187,68,183,195,221,246,40,
    85,114,112,137,33,49,15,37,3,47,204,236,67,126,204,23,
    240,125,253,34,107,83,9,152,152,225,122,197,182,40,131,140,
    81,157,200,189,0,79,79,152,217,196,166,44,227,124,154,251,
    248,124,112,76,48,152,90,32,232,110,78,223,22,159,82,100,
    243,125,151,222,15,213,22,106,24,20,148,139,76,188,182,205,
    11,203,108,52,107,86,99,174,102,213,102,76,190,242,207,99,
    131,94,183,106,115,13,113,209,191,13,12,167,186,177,209,168,
    137,255,0,233,126,113,45,
};

EmbeddedPython embedded_m5_internal_param_TickedObject(
    "m5/internal/param_TickedObject.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_TickedObject.py",
    "m5.internal.param_TickedObject",
    data_m5_internal_param_TickedObject,
    2215,
    6415);

} // anonymous namespace
