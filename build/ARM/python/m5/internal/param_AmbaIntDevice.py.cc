#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_AmbaIntDevice[] = {
    120,156,189,88,235,115,219,198,17,223,3,64,74,164,36,139,
    182,94,126,200,22,237,212,49,227,38,98,236,198,117,103,226,
    122,234,56,143,73,102,172,184,96,58,118,148,76,81,136,56,
    82,160,64,128,3,156,44,51,35,77,59,145,167,77,63,245,
    83,251,31,244,67,255,155,254,71,237,238,30,0,130,18,149,
    199,212,172,69,158,151,119,139,189,221,189,223,62,14,109,72,
    255,149,240,251,155,58,64,18,26,0,30,126,4,4,0,125,
    1,219,2,132,20,224,45,195,94,9,226,247,192,43,193,43,
    128,109,3,164,1,199,72,152,240,149,1,225,60,63,83,134,
    192,228,25,1,195,42,72,11,182,75,240,44,60,15,150,44,
    195,94,21,226,63,128,16,34,20,240,220,155,1,111,22,94,
    161,116,36,42,44,112,22,104,178,202,147,21,240,230,120,178,
    10,222,60,19,115,48,172,129,156,135,237,5,98,219,62,135,
    98,111,163,216,69,22,251,111,18,235,225,202,10,120,231,136,
    29,245,250,146,56,45,226,228,253,22,89,74,45,211,242,60,
    108,95,200,232,165,2,189,92,160,87,10,244,106,129,94,43,
    208,23,11,244,165,2,125,185,64,95,41,208,235,5,250,106,
    129,190,86,160,55,10,116,189,64,95,47,208,55,10,244,27,
    5,250,103,5,250,102,129,126,179,64,223,42,208,141,2,253,
    86,129,190,205,52,122,252,2,244,126,14,189,183,161,247,14,
    116,16,4,231,115,239,110,130,52,161,215,132,237,38,72,252,
    108,194,49,226,196,187,80,120,226,93,126,98,41,127,226,14,
    63,113,23,182,239,130,196,207,29,253,68,25,90,141,85,196,
    158,255,31,252,215,16,72,169,121,28,94,200,56,241,163,208,
    241,195,78,228,27,180,94,166,129,144,218,166,97,38,133,236,
    99,130,236,191,128,241,234,25,41,100,143,0,5,11,178,37,
    48,224,136,137,35,3,134,13,56,20,208,179,192,51,225,16,
    183,41,145,2,93,1,199,6,124,109,18,195,17,142,22,2,
    235,26,88,74,227,181,199,192,210,146,102,224,168,4,135,37,
    104,61,63,52,104,98,175,2,241,63,225,155,117,22,58,203,
    66,13,56,196,209,130,99,11,142,202,240,12,153,112,170,87,
    33,243,197,243,67,180,20,103,90,13,11,181,221,42,152,75,
    166,120,126,28,186,125,169,150,145,118,6,110,236,246,157,71,
    253,29,247,211,80,125,40,95,248,109,217,168,102,156,81,178,
    57,112,213,174,205,143,154,228,147,254,64,177,200,40,148,106,
    14,137,142,31,122,78,63,242,246,3,169,102,73,158,211,241,
    3,233,56,188,248,105,127,16,197,234,163,56,142,98,155,220,
    202,147,65,228,230,79,144,83,219,65,148,200,6,237,198,219,
    216,36,94,17,119,103,192,18,73,1,86,151,30,246,100,210,
    142,253,129,194,211,210,18,137,155,164,53,232,156,120,72,62,
    198,161,185,27,245,101,179,227,182,247,3,53,108,118,101,255,
    94,115,103,223,15,188,230,35,251,73,115,48,84,187,81,216,
    196,57,63,84,18,125,17,52,39,120,97,19,217,46,144,188,
    3,191,235,248,108,137,179,43,131,129,140,23,104,246,50,237,
    37,106,98,94,148,133,41,26,98,1,169,18,126,77,177,110,
    204,137,45,159,108,105,147,125,4,37,171,8,30,58,81,1,
    123,6,196,235,4,141,30,126,4,157,37,2,164,69,107,6,
    175,253,150,156,160,103,123,38,29,184,158,60,100,56,33,174,
    144,243,1,157,112,8,140,137,18,244,202,160,177,130,16,211,
    224,137,135,52,34,59,137,49,80,184,5,201,223,1,157,138,
    40,57,132,20,65,199,38,136,176,6,170,74,9,12,103,87,
    113,195,111,25,132,173,6,169,191,197,64,80,187,126,18,29,
    132,236,110,162,57,108,90,232,153,167,195,207,119,122,178,173,
    146,13,156,248,50,218,175,183,221,48,140,84,221,245,188,186,
    171,84,236,239,236,43,153,212,85,84,191,153,52,232,4,237,
    243,25,150,114,121,195,65,134,29,58,103,196,142,254,225,249,
    109,133,63,150,248,7,159,66,34,21,226,96,55,242,18,156,
    39,17,93,169,108,82,82,145,147,35,86,132,97,226,16,43,
    109,143,124,231,240,247,163,76,19,198,98,163,156,33,39,145,
    65,71,85,25,132,110,146,56,172,9,205,51,222,72,240,11,
    55,216,151,44,61,65,121,168,16,145,90,135,233,32,238,34,
    105,159,25,203,22,132,81,232,13,81,33,191,125,139,246,186,
    200,184,155,103,228,173,32,234,102,112,44,227,255,101,177,106,
    180,173,20,107,229,12,111,148,236,20,240,105,139,244,192,17,
    123,199,152,88,26,6,103,6,54,130,227,238,6,81,244,176,
    189,78,195,85,26,174,209,176,145,217,249,218,141,93,56,105,
    236,125,218,192,96,11,217,22,58,2,51,179,197,27,139,157,
    75,163,216,193,140,215,162,24,48,40,82,70,49,96,81,118,
    140,31,210,136,172,28,93,38,36,95,80,46,166,88,97,97,
    20,22,8,112,162,70,176,103,207,216,53,178,120,54,67,172,
    77,48,44,98,177,91,192,162,77,135,194,64,180,47,101,105,
    206,33,14,13,65,251,10,137,42,77,112,109,157,134,235,83,
    243,239,8,76,221,83,96,122,159,246,170,165,96,90,96,16,
    85,241,91,51,218,102,234,244,188,226,45,157,0,17,33,200,
    154,128,160,55,137,50,79,155,57,109,240,164,198,125,92,0,
    15,233,99,20,109,216,66,98,184,70,170,23,97,179,134,245,
    250,89,184,134,37,216,224,18,252,46,151,96,46,227,220,200,
    233,100,107,114,190,213,68,137,124,208,49,97,53,45,173,73,
    5,199,65,28,189,28,214,163,78,93,177,145,148,27,31,220,
    76,54,111,38,239,99,214,171,63,228,124,163,243,158,206,108,
    177,28,80,102,162,71,63,122,217,150,92,206,248,151,227,232,
    68,228,112,82,114,210,50,137,8,90,33,15,26,153,107,57,
    37,39,42,166,76,60,29,231,86,115,231,146,174,159,145,244,
    42,123,214,20,107,136,150,170,96,21,28,157,114,185,71,226,
    85,252,126,64,222,38,51,37,80,55,111,183,180,130,172,59,
    89,97,191,61,134,136,215,173,185,221,68,81,191,203,144,80,
    30,33,129,190,102,134,230,191,0,183,139,2,254,12,116,214,
    120,164,41,154,115,240,211,225,46,17,251,239,129,97,63,161,
    98,115,206,104,81,149,102,14,76,37,201,125,102,213,5,252,
    51,248,174,16,51,89,153,53,211,134,176,88,102,173,60,223,
    48,72,126,84,41,181,198,19,19,157,198,174,155,16,155,206,
    54,163,48,28,229,240,188,139,195,108,251,218,17,51,171,229,
    58,164,194,215,35,188,80,161,186,34,150,140,2,10,238,208,
    112,55,7,128,200,230,94,167,54,27,112,118,25,117,116,222,
    254,138,182,180,88,201,197,25,206,38,99,82,114,80,151,50,
    80,223,205,65,45,185,198,188,226,123,0,141,6,29,234,177,
    33,240,50,138,77,20,221,253,44,144,37,216,46,19,252,185,
    199,21,105,116,136,44,31,209,126,99,5,140,253,176,165,61,
    148,159,171,62,50,26,94,78,39,206,233,212,30,4,110,127,
    199,115,31,254,137,100,211,6,237,44,94,140,76,219,90,81,
    91,194,186,56,75,97,254,121,47,211,250,197,116,98,252,151,
    40,42,215,150,17,237,69,109,14,236,47,118,101,189,47,251,
    59,120,161,219,245,7,245,78,224,118,217,247,102,106,205,231,
    153,53,138,15,239,100,209,79,110,211,24,213,219,81,136,233,
    117,191,173,162,184,238,73,188,227,72,175,254,78,157,115,115,
    221,79,234,238,14,174,186,109,165,177,59,30,111,220,63,186,
    113,55,225,86,113,239,128,200,233,157,157,131,119,86,31,187,
    228,111,33,175,125,250,42,149,167,90,238,127,117,40,96,153,
    194,219,139,26,234,84,67,13,128,189,73,195,91,48,213,140,
    252,30,138,250,35,201,36,135,148,197,21,163,98,112,35,53,
    198,248,148,158,77,78,7,221,241,143,9,58,253,238,7,25,
    100,25,122,51,60,206,82,62,222,174,100,147,85,30,231,120,
    114,62,155,92,224,241,28,79,46,102,145,91,227,73,253,202,
    70,191,124,90,162,40,46,255,175,81,204,65,49,189,112,248,
    235,107,13,94,251,254,255,71,89,251,87,144,86,228,179,2,
    119,172,137,123,164,3,87,251,26,235,246,112,153,13,211,125,
    63,27,38,158,133,151,177,155,179,184,155,123,64,221,220,33,
    119,124,142,161,27,186,209,17,113,59,206,175,16,214,112,8,
    229,129,51,1,143,186,105,163,179,119,7,3,25,122,246,109,
    40,246,97,188,60,29,55,81,116,254,13,10,101,212,20,203,
    216,120,157,134,32,165,155,130,89,12,181,82,14,186,245,169,
    158,227,63,178,115,108,44,143,229,28,251,1,13,181,177,4,
    163,125,125,101,114,220,59,93,44,203,216,198,127,239,58,86,
    114,125,233,199,107,248,245,51,248,80,107,199,147,129,59,100,
    105,63,204,69,50,169,241,206,103,184,115,56,235,153,112,191,
    207,114,127,136,135,164,206,164,82,241,55,31,166,162,23,70,
    184,133,84,114,18,210,20,121,43,189,90,122,18,203,75,52,
    196,91,0,55,217,164,152,227,76,49,65,255,26,69,125,7,
    105,166,192,4,141,215,192,21,250,51,42,229,138,224,202,118,
    226,165,168,86,227,23,144,181,147,195,196,230,104,94,204,207,
    153,95,220,101,229,134,208,192,94,222,114,251,250,13,12,191,
    108,176,223,128,244,210,104,223,202,161,66,247,103,238,225,245,
    125,8,227,146,171,46,23,89,155,119,36,142,254,189,205,204,
    168,77,109,212,7,110,34,63,65,96,24,188,202,206,62,205,
    244,52,112,85,39,138,251,234,234,196,101,116,74,252,24,111,
    98,113,20,240,213,249,52,71,107,152,40,217,103,148,22,23,
    37,29,250,19,217,143,226,225,147,200,147,106,253,196,250,35,
    207,139,109,55,236,74,231,133,164,158,130,129,57,198,144,54,
    20,90,70,198,85,159,168,195,56,239,41,93,52,19,46,234,
    247,114,140,213,211,235,143,131,168,189,39,189,148,103,178,59,
    152,231,195,168,239,226,252,228,93,90,126,182,203,249,19,235,
    94,76,79,173,156,152,77,100,236,187,129,255,141,60,117,136,
    236,193,167,7,113,11,155,245,211,254,75,79,47,58,144,49,
    249,55,80,55,78,48,140,150,88,192,89,110,62,41,71,239,
    118,134,109,251,59,233,105,79,246,32,22,172,184,239,6,169,
    127,78,106,156,123,38,83,229,218,247,9,209,70,77,214,227,
    169,31,233,72,61,67,15,138,230,17,207,100,200,96,112,248,
    237,17,211,172,78,77,204,193,157,216,36,73,217,133,40,159,
    225,62,142,3,107,44,129,112,202,138,101,215,71,95,197,121,
    95,151,63,149,214,81,74,49,172,220,164,180,89,148,48,189,
    52,167,239,58,250,141,202,67,122,67,151,96,71,4,244,26,
    181,178,88,17,101,131,74,172,41,170,88,100,45,115,190,86,
    177,230,231,42,86,101,198,228,247,98,11,120,131,173,90,149,
    185,121,241,83,255,54,48,133,86,141,13,220,225,191,127,161,
    148,8,
};

EmbeddedPython embedded_m5_internal_param_AmbaIntDevice(
    "m5/internal/param_AmbaIntDevice.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_AmbaIntDevice.py",
    "m5.internal.param_AmbaIntDevice",
    data_m5_internal_param_AmbaIntDevice,
    2466,
    7421);

} // anonymous namespace