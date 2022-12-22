#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_UFSHostDevice[] = {
    120,156,189,89,235,115,212,200,17,239,209,62,236,93,219,216,
    198,47,192,6,47,175,99,143,220,217,7,7,33,85,71,72,
    56,56,18,174,10,31,209,222,5,206,119,21,69,94,205,174,
    181,214,74,91,210,24,179,87,246,151,51,121,84,37,85,169,
    74,85,190,228,91,62,228,67,254,155,252,51,249,156,116,247,
    72,90,121,31,64,37,108,192,30,90,173,158,158,126,252,166,
    167,71,212,33,254,83,192,223,159,86,0,162,63,27,0,14,
    254,8,240,0,218,2,182,5,8,41,192,89,132,189,2,132,
    183,192,41,192,43,128,109,3,164,1,199,72,228,224,27,3,
    252,105,158,83,4,47,199,28,1,221,50,200,60,108,23,224,
    153,63,15,121,89,132,189,50,132,191,6,33,132,47,224,185,
    51,1,206,36,188,66,237,72,148,88,225,36,16,179,204,204,
    18,56,83,204,44,131,51,205,196,20,116,231,64,78,195,246,
    12,137,109,159,66,181,215,81,237,44,171,253,39,169,117,240,
    205,18,56,167,72,28,237,250,154,36,243,36,201,235,205,178,
    150,185,196,202,121,216,62,157,208,11,25,122,49,67,47,101,
    232,229,12,189,146,161,207,100,232,179,25,250,92,134,94,205,
    208,107,25,250,124,134,190,144,161,215,51,116,37,67,95,204,
    208,151,50,244,229,12,125,37,67,95,205,208,239,101,232,107,
    25,186,154,161,223,207,208,215,51,244,15,50,244,7,25,250,
    67,166,49,43,167,161,181,1,173,77,104,125,4,13,4,202,
    124,154,129,27,32,115,208,186,9,219,55,65,226,207,13,56,
    70,44,57,167,51,51,62,230,25,11,233,140,91,60,227,54,
    108,223,6,137,63,183,244,140,34,212,170,203,136,79,247,223,
    248,167,42,144,82,211,56,188,144,97,228,6,190,229,250,141,
    192,53,232,125,145,6,66,115,157,134,137,24,214,15,8,214,
    255,0,198,180,99,196,176,62,2,84,44,200,23,207,128,35,
    38,142,12,232,86,225,80,64,43,15,78,14,14,113,153,2,
    25,208,20,112,108,192,183,57,18,56,194,49,143,224,187,0,
    121,165,49,221,98,240,105,77,19,112,84,128,195,2,212,158,
    31,26,196,216,43,65,248,119,248,110,141,149,78,178,82,3,
    14,113,204,195,113,30,142,138,240,12,133,144,213,42,145,251,
    226,249,33,122,138,156,90,53,143,214,110,101,220,37,87,28,
    55,244,237,182,84,139,72,91,29,59,180,219,214,87,143,106,
    63,15,34,245,80,190,112,235,178,90,78,36,131,104,163,99,
    171,93,147,167,230,40,38,237,142,98,149,129,47,213,20,18,
    13,215,119,172,118,224,236,123,82,77,146,62,171,225,122,210,
    178,248,229,227,118,39,8,213,103,97,24,132,38,133,149,153,
    94,96,167,51,40,168,117,47,136,100,149,86,227,101,76,82,
    175,72,186,209,97,141,100,0,155,75,147,29,25,213,67,183,
    163,48,91,90,35,73,147,182,42,229,137,135,232,17,14,155,
    187,65,91,110,54,236,250,190,167,186,155,77,217,190,189,185,
    179,239,122,206,230,125,243,201,102,167,171,118,3,127,19,121,
    174,175,36,198,194,219,28,18,133,13,20,59,77,250,14,220,
    166,229,178,39,214,174,244,58,50,156,33,238,57,90,75,204,
    137,105,81,20,57,81,21,51,72,21,240,55,39,214,140,41,
    177,229,146,47,117,242,143,160,148,207,130,135,50,42,96,207,
    128,112,141,160,209,194,31,65,185,68,128,212,232,157,193,239,
    126,65,65,208,220,86,142,18,174,153,135,12,39,196,21,74,
    222,165,12,251,192,152,40,64,171,8,26,43,8,49,13,158,
    176,75,35,138,147,26,3,149,231,33,250,11,96,80,17,37,
    135,16,35,232,56,7,194,159,3,85,166,34,135,220,101,92,
    240,123,6,97,173,74,230,111,49,16,212,174,27,5,7,62,
    135,155,104,222,54,53,140,204,211,238,23,59,45,89,87,209,
    58,50,190,14,246,43,117,219,247,3,85,177,29,167,98,43,
    21,186,59,251,74,70,21,21,84,174,70,85,202,160,57,159,
    96,41,213,215,237,36,216,161,60,35,118,244,131,227,214,21,
    62,44,240,3,103,33,146,10,113,176,27,56,17,242,73,69,
    83,42,147,140,84,20,228,128,13,97,152,88,36,74,203,163,
    220,41,124,190,159,88,194,88,172,22,19,228,68,210,107,168,
    50,131,208,142,34,139,45,33,62,227,141,20,191,176,189,125,
    201,218,35,212,135,6,17,169,109,24,15,226,206,144,245,137,
    179,236,129,31,248,78,23,13,114,235,215,104,173,51,140,187,
    105,70,222,18,162,110,2,199,34,254,91,20,203,70,61,31,
    99,173,152,224,141,138,157,2,206,182,136,19,142,216,59,198,
    194,82,53,184,50,176,19,188,239,46,17,69,147,205,53,26,
    206,211,112,129,134,245,196,207,119,238,236,76,191,179,119,104,
    1,131,61,100,95,40,5,185,196,23,231,196,222,57,219,219,
    59,88,241,106,180,7,12,218,41,189,61,144,167,234,24,222,
    163,17,69,121,119,229,32,250,146,106,49,237,21,86,70,219,
    2,1,78,84,15,246,28,25,115,142,60,158,76,16,107,18,
    12,179,88,108,102,176,104,82,82,24,136,230,217,164,204,89,
    36,161,33,104,174,146,170,194,144,208,86,104,184,56,182,248,
    246,192,212,28,0,211,39,180,214,92,12,166,25,6,81,25,
    127,231,140,122,46,14,122,122,226,45,244,129,136,16,148,31,
    130,160,247,136,202,13,186,57,110,240,196,206,61,202,128,135,
    236,49,178,62,108,33,209,93,33,211,179,176,89,193,243,250,
    153,191,130,71,176,193,71,240,71,124,4,243,49,206,205,158,
    46,182,57,174,183,154,40,80,12,26,57,88,142,143,214,168,
    132,99,39,12,94,118,43,65,163,162,216,73,170,141,119,175,
    70,27,87,163,79,176,234,85,238,113,189,209,117,79,87,182,
    80,118,168,50,209,212,207,94,214,37,31,103,252,100,89,186,
    16,89,92,148,172,248,152,68,4,45,81,4,141,36,180,92,
    146,35,21,82,37,30,79,112,203,105,112,201,214,207,73,123,
    153,35,155,19,43,136,150,178,96,19,44,93,114,185,71,226,
    183,248,251,41,69,155,220,148,64,29,191,89,211,6,178,237,
    228,133,249,193,9,68,188,107,203,205,77,84,245,85,130,132,
    98,15,9,244,155,75,208,252,59,224,118,81,192,111,129,114,
    141,41,141,209,156,130,159,146,187,64,226,191,2,134,253,144,
    19,155,107,70,141,78,105,150,192,82,18,221,97,81,125,128,
    127,14,191,207,236,153,228,152,205,197,13,97,246,152,205,167,
    245,134,65,242,86,71,105,254,100,97,162,108,236,218,17,137,
    233,106,211,219,134,189,26,158,118,113,88,109,223,57,98,38,
    181,94,139,76,248,182,135,23,58,168,86,197,130,145,65,193,
    13,26,110,166,0,16,9,239,93,90,179,14,163,143,81,75,
    215,237,111,104,201,60,27,57,59,193,213,228,132,150,20,212,
    133,4,212,55,83,80,75,62,99,94,241,61,128,70,131,146,
    122,108,8,188,176,98,19,69,247,195,60,200,2,108,23,9,
    254,220,227,138,120,119,136,164,30,209,122,39,14,48,142,195,
    150,142,80,154,87,157,50,26,94,142,103,159,83,214,238,122,
    118,123,199,177,239,29,147,110,90,160,158,236,23,35,177,118,
    46,107,45,97,93,140,50,152,31,111,39,86,191,24,207,30,
    255,33,240,45,79,91,203,136,118,130,58,111,236,47,119,101,
    165,45,219,59,120,161,219,117,59,149,134,103,55,57,246,185,
    216,155,47,18,111,20,39,175,255,208,143,174,211,24,84,234,
    129,143,229,117,191,174,130,176,226,72,188,227,72,167,242,97,
    133,107,115,197,141,42,246,14,190,181,235,74,99,247,228,126,
    227,254,209,14,155,17,183,138,123,7,68,142,47,119,22,222,
    89,93,236,146,127,3,233,217,167,175,82,105,169,229,254,87,
    111,5,60,166,240,246,162,186,186,212,80,3,96,110,208,240,
    62,140,181,34,223,66,85,223,147,78,10,72,81,172,26,37,
    131,27,169,19,130,79,105,110,52,184,233,254,245,54,155,78,
    127,31,138,183,94,145,36,229,4,93,147,105,44,81,97,222,
    46,39,204,41,30,167,153,57,147,48,79,241,56,203,204,185,
    132,57,207,227,105,102,46,36,204,69,30,151,152,185,156,48,
    87,120,60,195,204,179,9,243,28,143,171,204,92,75,152,231,
    121,188,192,204,245,228,3,88,133,153,23,97,251,18,125,13,
    33,206,101,170,27,19,255,107,221,224,109,56,190,13,248,199,
    119,90,46,204,59,255,31,99,205,31,65,220,3,140,42,21,
    34,235,201,140,46,21,45,145,92,33,178,110,240,7,136,115,
    195,145,108,213,67,105,43,169,19,177,54,46,223,184,198,232,
    149,254,212,171,0,131,221,239,253,212,141,99,110,120,186,139,
    156,31,125,97,226,252,136,103,254,57,108,131,243,220,6,223,
    165,54,248,144,125,182,12,221,9,247,144,86,72,93,95,193,
    193,151,7,214,16,247,117,183,75,214,217,157,142,244,29,243,
    58,100,27,88,126,61,158,108,83,89,251,43,100,250,143,156,
    88,196,142,117,112,39,81,157,206,184,197,137,42,164,123,103,
    108,41,99,56,254,45,129,99,245,10,100,139,181,121,151,6,
    46,207,105,101,54,127,146,6,124,117,4,214,154,216,212,224,
    37,232,181,239,177,15,210,159,76,220,186,58,63,66,206,109,
    219,77,201,154,94,47,65,186,40,84,252,164,174,140,148,109,
    90,59,222,158,21,185,223,105,165,111,37,72,186,167,89,119,
    143,201,237,220,208,153,190,178,252,253,54,107,127,147,12,41,
    166,154,26,63,171,171,163,229,57,127,88,16,162,93,214,252,
    118,146,164,127,70,235,239,113,85,101,196,220,142,27,88,216,
    216,135,188,192,27,133,72,55,127,11,141,25,234,242,107,102,
    120,88,13,252,122,151,53,191,141,28,41,159,138,149,199,60,
    117,113,196,188,253,70,100,69,94,160,34,214,254,102,41,210,
    77,23,219,148,195,251,147,139,166,35,61,169,228,176,226,161,
    104,3,196,159,89,28,137,173,86,208,197,27,49,95,56,241,
    217,179,172,49,54,43,63,70,85,127,32,157,84,0,176,89,
    17,69,108,87,150,196,137,191,70,169,88,18,220,241,245,253,
    103,129,54,137,54,184,190,102,117,35,147,207,156,217,116,7,
    115,18,147,54,140,54,59,71,103,203,110,235,47,147,252,17,
    206,164,164,241,199,20,243,90,90,9,232,187,18,223,109,245,
    119,2,44,187,220,141,114,243,105,126,76,124,146,104,223,222,
    72,28,220,208,14,126,106,71,242,103,184,229,13,126,203,129,
    31,20,122,138,105,111,4,97,155,183,253,224,235,199,190,10,
    31,4,56,4,30,127,82,26,148,168,117,35,37,219,92,127,
    178,47,37,237,187,39,178,29,132,221,39,129,35,213,90,223,
    251,251,8,101,211,246,177,162,188,144,212,107,51,160,78,8,
    196,141,182,214,145,72,85,134,218,112,82,118,192,22,45,132,
    47,245,247,106,46,23,131,239,31,120,65,125,79,58,177,204,
    240,112,176,204,195,160,109,35,127,248,42,53,55,89,101,190,
    239,189,19,210,172,165,62,110,36,67,215,246,168,208,245,39,
    145,35,248,244,32,172,225,37,118,48,126,113,246,130,3,25,
    82,124,61,117,169,79,160,247,138,21,140,10,115,191,30,189,
    218,8,223,246,119,226,108,15,143,32,182,85,97,219,246,226,
    248,244,91,156,70,38,49,229,194,235,148,104,167,134,219,241,
    212,13,244,174,29,88,227,161,27,237,61,230,115,42,94,99,
    184,130,84,108,192,134,4,73,91,191,124,146,168,24,142,132,
    140,224,168,69,218,118,108,229,100,230,104,80,84,16,250,5,
    104,95,167,79,124,105,26,236,45,185,38,134,178,233,98,2,
    66,214,146,206,136,251,46,170,95,35,207,147,236,236,241,213,
    80,253,81,65,127,186,188,71,7,75,212,193,129,254,191,162,
    52,91,194,122,74,45,89,78,148,177,41,203,231,166,231,74,
    249,233,169,82,190,52,145,227,15,208,51,98,193,40,231,75,
    83,211,226,191,251,187,142,149,185,108,172,175,148,196,127,0,
    3,51,150,180,
};

EmbeddedPython embedded_m5_internal_param_UFSHostDevice(
    "m5/internal/param_UFSHostDevice.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_UFSHostDevice.py",
    "m5.internal.param_UFSHostDevice",
    data_m5_internal_param_UFSHostDevice,
    2692,
    8336);

} // anonymous namespace