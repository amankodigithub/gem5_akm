#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubySequencer[] = {
    120,156,189,89,221,115,219,198,17,223,3,72,74,164,36,75,
    214,167,45,203,22,109,199,49,237,198,146,157,198,113,102,226,
    186,117,221,100,166,153,137,162,130,233,216,81,50,69,33,224,
    36,130,2,1,22,56,89,102,70,106,167,85,166,205,76,159,
    211,183,62,246,161,255,77,255,153,62,183,187,123,0,8,73,
    164,63,166,102,37,242,180,216,91,236,237,222,254,110,111,239,
    228,66,250,83,198,239,207,234,0,201,182,1,224,225,71,64,
    0,208,17,176,37,64,72,1,222,60,236,149,33,254,0,188,
    50,124,7,176,101,128,52,224,24,9,19,190,54,32,156,228,
    119,42,16,152,204,17,208,171,129,44,193,86,25,158,134,231,
    161,36,43,176,87,131,248,183,32,132,8,5,60,243,198,192,
    27,135,239,80,59,18,85,86,56,14,196,172,49,179,10,222,
    4,51,107,224,77,50,49,1,189,25,144,147,176,53,69,98,
    91,231,80,237,109,84,59,205,106,255,69,106,61,236,89,0,
    239,28,137,163,93,95,145,100,137,36,121,188,105,214,50,147,
    89,121,30,182,102,51,122,174,64,207,23,232,133,2,189,88,
    160,151,10,244,133,2,125,177,64,47,23,232,75,5,122,165,
    64,95,46,208,87,10,244,106,129,174,23,232,171,5,250,90,
    129,190,94,160,223,41,208,55,10,244,187,5,250,102,129,110,
    20,232,91,76,227,44,207,66,251,54,180,127,4,237,247,96,
    7,3,127,62,159,209,59,32,77,104,175,193,214,26,72,252,
    220,129,99,196,134,55,91,120,99,157,223,152,203,223,184,203,
    111,220,131,173,123,32,241,115,87,191,81,129,102,99,17,241,
    230,255,7,127,26,2,41,53,137,205,115,25,39,126,20,218,
    126,184,19,249,6,245,87,168,33,116,186,212,140,165,48,125,
    66,48,253,39,48,70,61,35,133,233,17,160,98,65,190,4,
    6,28,49,113,100,64,175,1,135,2,218,37,240,76,56,196,
    97,202,100,192,174,128,99,3,190,49,73,224,8,219,18,130,
    233,10,148,148,198,104,155,193,164,53,141,193,81,25,14,203,
    208,124,118,104,16,99,175,10,241,63,224,219,21,86,58,206,
    74,13,56,196,182,4,199,37,56,170,192,83,20,66,86,187,
    74,238,139,103,135,232,41,114,154,141,18,90,187,81,112,151,
    92,241,252,56,116,58,82,205,35,109,119,157,216,233,216,214,
    254,118,175,41,127,183,47,67,87,198,141,90,38,25,37,107,
    93,71,181,44,126,213,164,57,233,116,21,171,140,66,169,38,
    144,216,241,67,207,238,68,222,126,32,213,56,233,179,119,252,
    64,218,54,119,254,178,211,141,98,245,73,28,71,177,69,211,
    202,204,32,114,242,55,104,82,221,32,74,100,131,70,227,97,
    44,82,175,72,122,167,203,26,201,0,54,151,94,246,100,226,
    198,126,87,97,180,180,70,146,38,109,13,138,19,55,201,167,
    216,172,183,162,142,92,223,113,220,253,64,245,214,119,101,231,
    254,250,246,190,31,120,235,207,62,250,112,189,219,83,173,40,
    92,71,158,31,42,137,115,17,172,15,152,133,53,20,155,37,
    125,7,254,174,237,179,39,118,75,6,93,25,79,17,119,153,
    198,18,51,98,82,84,132,41,26,98,10,169,50,126,77,177,
    98,76,136,13,159,124,113,201,63,130,82,169,8,30,138,168,
    128,61,3,226,21,130,70,27,63,130,98,137,0,105,82,159,
    193,125,191,162,73,208,220,182,73,1,215,204,67,134,19,226,
    10,37,31,82,132,67,96,76,148,161,93,1,141,21,132,152,
    6,79,220,163,22,197,73,141,129,202,75,144,252,0,56,169,
    136,146,67,72,17,116,108,130,8,103,64,213,40,105,33,119,
    17,7,252,19,131,176,217,32,243,55,24,8,170,229,39,209,
    65,200,211,77,52,47,155,38,206,204,102,239,139,237,182,116,
    85,178,138,140,175,162,253,186,235,132,97,164,234,142,231,213,
    29,165,98,127,123,95,201,164,174,162,250,141,164,65,17,180,
    206,103,88,202,245,245,186,25,118,40,206,136,29,253,224,249,
    174,194,135,57,126,224,40,36,82,33,14,90,145,151,32,159,
    84,236,74,101,145,145,138,38,57,98,67,24,38,54,137,210,
    240,40,119,14,159,31,103,150,48,22,27,149,12,57,137,12,
    118,84,141,65,232,36,137,205,150,16,159,241,70,138,159,59,
    193,190,100,237,9,234,67,131,136,212,54,140,6,113,23,200,
    250,204,89,246,32,140,66,175,135,6,249,238,77,26,235,2,
    227,110,146,145,183,128,168,27,195,182,130,127,43,98,209,112,
    75,41,214,42,25,222,40,217,41,224,104,139,52,224,136,189,
    99,76,44,13,131,51,3,59,193,235,238,26,81,244,178,181,
    66,205,101,106,174,80,179,154,249,249,214,157,157,58,237,236,
    3,26,192,96,15,217,23,10,129,153,249,226,157,88,59,23,
    251,107,7,51,94,147,214,128,65,43,165,191,6,74,148,29,
    227,71,212,162,40,175,46,19,146,47,41,23,211,90,97,101,
    180,44,16,224,68,245,97,207,51,99,205,144,199,227,25,98,
    45,130,97,17,139,187,5,44,90,20,20,6,162,117,49,75,
    115,54,73,104,8,90,151,72,85,121,192,212,214,169,185,58,
    178,249,237,131,105,247,12,152,62,166,177,102,82,48,77,49,
    136,106,248,157,49,92,51,157,244,124,199,155,59,5,34,66,
    80,105,0,130,222,37,202,60,235,230,168,193,147,58,247,105,
    1,60,100,143,81,244,97,3,137,222,18,153,94,132,205,18,
    238,215,79,195,37,220,130,13,222,130,239,242,22,204,219,56,
    23,111,58,217,154,156,111,53,81,166,57,216,49,97,49,221,
    90,147,42,182,221,56,122,209,171,71,59,117,197,78,82,110,
    124,120,35,89,187,145,124,140,89,175,254,136,243,141,206,123,
    58,179,197,178,75,153,137,94,253,228,133,43,121,59,227,39,
    219,214,137,200,230,164,100,167,219,36,34,104,129,102,208,200,
    166,150,83,114,162,98,202,196,163,153,220,90,62,185,100,235,
    103,164,189,198,51,107,138,37,68,75,77,176,9,182,78,185,
    92,35,113,47,126,127,78,179,77,110,74,160,10,222,106,106,
    3,217,118,242,194,122,239,4,34,222,182,229,214,58,170,250,
    117,134,132,74,31,9,244,53,51,52,255,5,184,92,20,240,
    103,160,88,99,72,83,52,231,224,167,224,206,145,248,111,128,
    97,63,96,199,230,156,209,164,93,154,37,48,149,36,15,88,
    84,111,224,159,193,247,133,53,147,109,179,102,90,16,22,183,
    217,82,158,111,24,36,175,181,149,150,78,38,38,138,70,203,
    73,72,76,103,155,254,50,236,231,240,188,138,195,108,251,214,
    17,51,174,245,218,100,194,55,125,188,208,70,117,73,204,25,
    5,20,220,163,230,253,28,0,34,227,189,77,107,86,97,248,
    54,106,235,188,253,53,13,89,98,35,167,199,120,245,229,26,
    114,64,151,51,64,191,159,3,90,242,254,242,29,159,1,168,
    53,40,160,199,134,192,195,39,22,80,116,214,43,129,44,195,
    86,133,160,207,245,173,72,87,134,200,114,17,101,174,19,155,
    23,207,193,134,158,157,60,166,58,92,212,188,24,205,26,167,
    136,61,12,156,206,182,231,60,250,3,233,166,1,220,108,173,
    24,153,181,51,69,107,9,231,98,152,193,252,120,63,179,250,
    249,104,214,247,135,168,42,183,150,209,236,69,46,47,234,47,
    91,178,222,145,157,109,60,204,181,252,110,125,39,112,118,121,
    238,205,212,155,47,50,111,20,7,239,244,134,159,220,166,54,
    170,187,81,136,169,117,223,85,81,92,247,36,158,111,164,87,
    191,83,231,188,92,247,147,186,179,141,189,142,171,52,110,79,
    174,53,174,29,157,120,55,225,50,113,239,128,200,209,197,206,
    198,243,170,143,21,242,31,33,223,247,244,49,42,79,179,92,
    251,234,101,128,91,20,158,92,84,79,167,25,218,252,173,53,
    106,110,193,72,179,241,7,168,234,247,164,147,38,164,34,46,
    25,85,131,139,168,19,130,155,244,110,114,118,209,253,251,117,
    22,157,190,235,73,151,94,133,36,229,24,29,145,169,173,82,
    82,222,170,101,204,9,110,39,153,57,149,49,207,113,59,205,
    204,153,140,121,158,219,89,102,206,101,204,121,110,23,152,185,
    152,49,151,184,189,192,204,139,25,115,153,219,75,204,92,201,
    152,151,185,189,194,204,213,236,50,171,206,204,171,176,117,141,
    110,66,136,115,157,242,198,216,255,154,55,120,25,142,110,1,
    126,255,86,211,133,245,224,255,99,172,245,17,164,251,255,176,
    84,33,138,158,76,233,84,209,22,217,241,161,232,6,95,62,
    44,15,70,178,237,198,210,81,82,7,98,101,84,190,113,142,
    209,35,253,181,159,1,206,86,190,143,115,55,142,185,216,233,
    205,115,124,244,97,137,227,35,158,134,203,88,2,151,184,4,
    126,72,37,240,33,251,108,27,186,10,238,35,173,156,187,190,
    132,77,40,15,236,1,238,235,74,151,172,115,186,93,25,122,
    214,109,40,22,175,220,61,154,104,83,90,251,27,20,106,15,
    83,204,99,181,122,118,37,81,158,46,184,197,129,42,231,107,
    103,100,33,99,56,254,61,131,99,227,29,40,38,107,235,33,
    53,156,158,243,204,108,253,52,159,240,43,195,176,22,197,210,
    247,232,12,244,42,17,172,132,52,102,248,113,168,180,231,58,
    110,75,190,84,97,42,146,41,212,143,234,246,203,165,91,184,
    87,5,8,214,208,237,177,242,55,16,167,129,102,243,129,138,
    93,195,181,72,199,11,34,119,207,86,173,88,38,173,40,240,
    94,62,232,89,241,124,208,51,93,234,214,16,45,187,78,28,
    98,9,156,40,39,244,156,32,10,245,44,190,190,52,13,73,
    171,227,76,207,208,72,248,175,14,150,127,50,88,254,203,131,
    229,191,89,176,6,136,103,243,118,182,75,221,29,162,165,227,
    188,176,163,125,197,254,250,33,157,57,177,63,81,9,15,253,
    198,47,145,1,116,243,49,76,128,211,4,231,110,79,6,82,
    201,65,57,76,209,58,76,111,122,60,124,41,142,122,120,40,
    231,51,47,62,7,182,61,194,154,233,39,192,7,84,72,40,
    15,97,205,36,42,88,53,45,136,19,191,70,181,82,21,92,
    120,158,250,127,133,54,137,142,43,250,164,215,75,44,222,250,
    166,243,68,194,119,234,89,53,72,57,135,207,62,27,78,71,
    95,142,242,61,160,117,29,210,251,28,235,102,158,144,232,106,
    139,143,215,250,170,2,179,63,23,197,92,3,91,63,38,62,
    81,157,251,107,153,131,107,125,7,159,48,232,12,238,87,215,
    7,139,201,110,224,184,178,35,67,181,25,5,62,194,101,176,
    186,166,223,209,87,206,188,84,138,253,94,236,32,189,112,138,
    155,200,216,119,2,255,91,169,86,134,154,215,236,37,74,118,
    120,9,13,28,176,27,200,207,101,39,138,123,170,62,80,228,
    113,122,40,72,133,6,27,142,157,169,225,171,3,251,159,80,
    150,145,94,42,115,121,184,204,47,162,14,57,122,241,148,132,
    12,247,59,246,230,65,220,196,3,239,48,103,55,163,3,25,
    127,30,33,132,213,181,83,2,253,46,86,96,63,151,116,4,
    82,87,95,161,71,143,54,36,84,251,219,233,204,14,246,24,
    203,176,184,227,4,169,63,203,67,195,179,137,118,232,37,125,
    118,8,173,255,244,248,60,23,58,26,100,229,153,217,120,236,
    121,177,229,132,187,67,221,60,25,209,76,234,180,154,28,139,
    153,192,96,4,165,126,234,121,167,245,151,245,243,1,237,148,
    159,227,105,190,163,7,62,63,41,186,196,207,51,4,231,164,
    88,238,250,232,119,204,239,103,194,105,245,69,233,131,97,58,
    40,105,22,95,30,93,10,211,87,11,250,242,242,17,93,134,
    39,45,108,232,63,22,213,233,42,166,51,42,204,76,81,195,
    210,172,100,78,206,84,75,147,19,213,82,117,204,228,43,232,
    41,49,103,212,74,213,137,73,241,102,191,171,152,16,107,198,
    234,82,85,252,23,142,92,171,40,
};

EmbeddedPython embedded_m5_internal_param_RubySequencer(
    "m5/internal/param_RubySequencer.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/param_RubySequencer.py",
    "m5.internal.param_RubySequencer",
    data_m5_internal_param_RubySequencer,
    2649,
    8282);

} // anonymous namespace
