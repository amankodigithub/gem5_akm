#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Ethernet[] = {
    120,156,181,90,75,115,27,199,17,30,190,65,16,124,129,18,
    41,137,146,188,146,109,9,118,42,226,67,162,74,113,217,137,
    69,81,146,153,136,18,107,41,43,49,243,128,23,216,33,49,
    228,2,139,218,89,136,164,114,113,197,169,156,114,72,202,215,
    220,114,73,165,114,200,41,231,84,110,249,21,249,41,78,127,
    61,59,139,37,0,146,118,232,16,210,96,247,219,222,157,153,
    158,238,254,186,103,81,21,201,223,0,253,255,216,17,66,7,
    125,66,248,244,175,79,4,66,212,251,196,118,159,232,195,121,
    191,8,250,197,203,228,104,192,28,13,136,96,80,212,7,197,
    246,32,201,12,10,217,39,118,250,132,63,36,126,43,196,151,
    66,124,182,61,36,252,97,33,135,24,29,73,209,97,225,231,
    44,58,154,162,35,194,207,91,116,44,69,115,194,47,88,116,
    60,69,71,133,63,97,209,201,20,205,11,127,202,142,97,58,
    69,199,132,95,20,114,144,209,153,20,45,8,255,130,144,5,
    70,47,166,232,184,240,103,133,28,103,116,46,69,39,132,127,
    201,162,151,83,116,82,248,87,236,19,230,83,116,74,248,87,
    133,156,98,244,90,138,78,11,255,186,69,223,74,209,162,240,
    29,177,85,186,65,154,87,95,211,95,137,52,47,226,81,106,
    182,84,253,69,101,79,86,99,3,161,121,191,125,117,179,170,
    214,228,107,85,149,241,24,157,61,142,107,50,50,210,85,187,
    152,16,93,197,98,94,161,3,41,176,134,180,92,219,253,66,
    14,96,173,104,109,105,105,220,173,82,63,93,118,177,242,122,
    150,26,95,190,94,104,200,120,65,226,137,33,63,241,78,173,
    86,26,70,191,57,106,202,229,134,87,151,229,114,156,231,147,
    122,232,183,2,156,14,66,224,168,41,249,224,101,212,146,44,
    237,85,116,28,121,213,152,165,171,135,135,229,154,244,124,25,
    149,48,190,118,163,223,167,102,161,22,214,229,194,142,87,109,
    5,241,209,194,174,172,175,44,232,168,186,96,199,195,51,164,
    131,59,205,35,30,236,29,220,135,81,13,247,225,195,58,97,
    153,103,170,177,159,234,96,192,234,32,238,208,1,102,63,0,
    139,32,67,254,146,53,129,227,1,62,38,107,29,17,123,100,
    116,131,48,227,47,251,5,153,90,130,12,195,132,129,228,25,
    25,131,17,147,249,2,41,48,50,46,228,4,108,24,200,36,
    180,139,213,113,49,123,125,161,83,187,1,141,148,116,171,33,
    162,26,177,140,104,242,210,89,236,56,95,138,49,137,197,150,
    214,23,233,187,233,85,247,101,236,144,82,27,186,174,98,199,
    151,129,119,100,36,26,90,223,56,73,194,121,237,69,202,171,
    168,64,197,71,241,16,73,45,61,173,52,181,198,184,48,10,
    71,55,165,244,185,99,191,85,111,58,102,221,75,83,24,59,
    214,211,197,45,46,180,237,142,166,230,25,120,175,229,102,24,
    197,188,226,52,222,69,123,176,196,61,108,122,145,87,143,71,
    232,232,153,23,203,70,213,244,107,198,59,106,143,202,52,174,
    24,221,60,151,241,65,24,237,175,122,13,255,64,249,113,141,
    133,121,84,237,149,93,163,161,113,31,207,63,125,246,140,15,
    48,216,115,218,18,84,112,23,247,77,165,182,84,160,79,145,
    63,241,56,129,107,74,199,167,88,86,190,239,76,203,26,22,
    123,35,48,46,50,40,216,69,206,34,28,25,19,251,34,36,
    15,227,34,131,2,50,198,72,1,17,39,177,175,9,70,38,
    97,92,20,26,129,76,89,164,128,176,8,100,218,62,121,2,
    33,17,72,209,34,83,8,135,64,102,24,185,128,128,72,161,
    16,200,69,251,156,11,8,131,64,102,25,153,19,242,18,98,
    33,144,203,25,100,142,145,43,246,174,75,8,136,64,230,97,
    239,8,54,46,26,125,57,99,239,62,233,176,124,154,209,187,
    56,63,217,194,221,2,46,127,35,243,118,177,102,103,88,54,
    7,211,69,253,14,198,234,145,80,184,227,196,53,165,29,88,
    138,211,140,194,170,212,218,41,97,208,78,212,106,188,199,226,
    75,250,109,152,94,171,94,145,17,110,200,202,202,99,210,19,
    36,183,178,188,216,254,139,245,28,65,59,42,34,9,22,211,
    71,141,170,83,241,162,72,201,136,13,121,9,254,125,9,131,
    236,188,236,68,178,41,189,152,189,32,8,171,94,80,11,117,
    172,103,232,108,131,58,246,118,165,163,101,244,154,228,16,150,
    249,89,203,212,117,47,129,38,249,170,190,9,247,165,232,236,
    168,100,202,158,195,106,82,13,135,151,71,31,168,184,90,227,
    181,219,138,201,55,205,88,8,172,57,77,45,91,126,88,14,
    155,172,142,101,30,110,91,29,90,213,91,1,57,186,211,8,
    125,169,75,87,79,8,29,46,148,227,78,162,153,70,83,68,
    131,193,186,8,143,46,12,192,5,13,185,208,152,139,46,92,
    140,37,198,3,62,93,111,196,119,151,77,240,128,61,145,9,
    236,183,207,180,122,35,153,102,48,226,178,198,224,153,26,249,
    52,81,226,48,79,43,82,141,93,115,137,21,195,132,150,61,
    111,218,160,182,26,134,1,7,162,39,94,160,37,119,165,116,
    217,168,40,158,77,59,70,7,97,163,220,214,15,4,27,173,
    122,217,168,226,124,241,9,174,244,17,238,115,50,241,169,120,
    194,135,57,151,239,94,109,233,238,80,245,227,147,72,112,143,
    131,20,2,22,185,241,8,35,20,164,70,153,16,13,217,13,
    50,217,165,132,88,128,171,243,162,46,96,108,51,157,212,86,
    105,105,56,249,123,172,212,134,239,36,94,91,161,47,39,14,
    201,242,96,149,13,159,22,194,73,131,64,151,147,142,176,99,
    44,110,128,169,96,79,244,80,227,206,176,214,138,138,181,211,
    36,219,211,178,26,54,252,210,248,73,6,199,102,6,165,187,
    120,30,107,40,8,195,38,134,210,97,100,109,235,59,231,154,
    65,39,47,108,20,50,107,198,171,147,102,106,91,108,66,221,
    11,244,251,111,181,64,109,70,33,254,200,243,210,244,49,115,
    12,130,57,218,185,202,56,35,19,153,92,101,210,34,89,46,
    49,72,134,75,104,137,217,91,151,69,175,220,208,184,129,13,
    229,217,117,27,230,117,227,4,227,22,110,101,65,103,199,171,
    68,170,122,226,2,234,162,85,14,245,224,172,91,163,224,212,
    102,105,99,85,207,227,73,228,226,136,53,97,43,110,182,98,
    14,104,78,165,181,179,67,131,249,238,248,35,137,199,117,109,
    98,165,170,75,88,108,160,94,115,215,27,15,31,57,158,239,
    71,32,136,186,215,36,3,46,21,79,181,188,30,38,22,99,
    48,70,29,101,147,226,32,247,120,69,170,11,163,13,79,211,
    204,57,173,226,112,147,234,33,207,1,189,30,70,71,91,8,
    116,232,212,168,161,108,52,192,241,175,35,156,114,71,152,65,
    57,14,203,152,193,57,237,26,134,240,10,247,21,179,118,221,
    95,232,138,62,47,189,230,183,139,62,100,217,73,172,25,102,
    132,76,60,151,49,238,65,78,142,210,116,105,12,166,9,111,
    118,63,236,25,125,98,175,73,118,169,166,110,211,69,80,13,
    157,39,118,226,64,75,157,6,171,254,70,193,67,231,18,65,
    88,85,169,112,218,154,178,77,146,133,50,53,208,115,245,155,
    147,216,106,233,62,91,19,63,242,124,170,199,68,43,221,33,
    133,59,238,86,245,202,233,170,78,138,156,193,206,180,148,180,
    58,100,109,182,187,92,129,198,224,238,163,86,123,59,42,144,
    234,115,200,194,83,234,222,33,235,78,133,13,56,74,226,103,
    190,23,123,240,31,206,212,71,79,245,148,219,208,28,174,226,
    185,238,71,86,143,244,220,64,54,206,169,62,204,72,137,100,
    149,141,250,38,51,241,216,84,210,169,30,251,173,30,111,137,
    147,43,231,36,30,247,33,30,147,226,160,123,247,145,232,21,
    41,125,126,58,84,215,59,198,149,114,61,244,194,230,157,179,
    26,50,238,159,198,6,247,129,56,55,73,97,172,225,113,149,
    80,25,141,81,172,63,173,60,238,182,41,255,164,58,231,108,
    110,74,145,161,227,233,68,202,80,133,46,100,28,108,133,77,
    151,81,176,21,142,167,192,86,216,68,201,163,170,33,218,162,
    74,6,199,23,184,189,200,237,44,183,115,220,94,226,246,50,
    183,87,184,157,7,187,109,95,5,193,109,95,67,141,180,125,
    29,101,210,246,91,220,187,147,169,145,110,100,144,34,35,55,
    51,136,169,154,222,206,32,23,24,121,199,34,23,109,213,244,
    110,6,49,85,211,45,70,110,163,106,130,233,148,236,233,101,
    62,125,47,173,160,30,119,186,160,122,176,188,114,239,240,233,
    42,219,209,229,172,29,125,226,69,254,129,23,73,231,161,225,
    37,14,75,119,31,220,219,95,229,200,184,149,144,38,114,174,
    232,208,121,178,254,228,69,23,30,27,92,125,140,94,191,47,
    178,121,189,132,149,42,42,112,136,178,147,71,80,82,91,141,
    84,147,216,202,169,122,213,154,84,191,251,130,188,43,55,101,
    92,76,40,184,143,250,26,205,117,52,188,101,197,123,14,203,
    15,246,87,19,122,109,24,122,53,236,91,145,59,33,141,31,
    207,117,14,34,21,75,206,19,195,106,181,21,105,125,189,167,
    216,142,68,78,145,136,92,75,69,188,29,26,109,15,137,43,
    189,36,14,42,201,101,147,29,204,117,200,144,82,252,186,71,
    245,151,231,119,93,139,50,215,222,165,107,155,181,35,103,115,
    125,141,52,228,197,78,53,140,104,29,154,72,106,56,244,177,
    251,59,235,107,28,78,32,249,248,76,209,210,251,167,133,74,
    230,117,187,254,88,245,100,11,229,48,238,2,107,137,113,148,
    147,164,197,253,129,189,63,58,44,239,168,157,208,212,77,156,
    40,100,0,19,126,139,70,12,202,42,243,74,27,225,162,17,
    238,132,17,71,94,81,82,31,70,235,107,28,90,183,90,21,
    125,68,33,171,78,231,211,217,243,84,202,212,99,94,220,210,
    60,2,18,120,20,120,90,63,162,186,137,211,159,246,25,36,
    55,163,112,119,253,137,169,204,30,186,139,246,96,201,30,44,
    219,131,187,246,224,158,61,88,225,162,124,195,59,164,42,181,
    110,247,163,208,229,134,106,0,122,74,233,96,204,187,61,28,
    149,163,86,51,126,166,26,70,47,41,178,73,217,88,46,233,
    124,203,102,91,140,28,84,202,102,99,11,211,102,195,75,206,
    167,210,243,106,88,111,38,224,184,185,163,3,33,141,194,156,
    18,100,194,168,158,189,193,64,238,143,32,4,90,104,214,142,
    202,77,229,115,207,56,150,116,114,78,50,64,184,105,225,190,
    79,64,6,253,160,130,81,250,32,197,24,77,62,195,223,224,
    147,173,69,137,95,243,9,153,148,37,149,113,139,103,111,76,
    27,74,33,38,33,146,77,40,85,181,16,86,254,66,33,69,
    125,65,231,38,63,73,253,130,85,96,200,123,125,205,173,1,
    86,231,103,198,61,18,255,147,176,219,203,3,204,139,57,59,
    21,181,91,249,223,38,242,111,76,228,33,221,162,254,89,232,
    154,136,187,143,230,187,154,64,64,226,127,238,152,64,26,50,
    72,93,171,158,150,221,4,63,219,119,106,178,147,228,228,253,
    199,55,44,83,154,31,203,32,118,143,160,141,12,219,66,52,
    69,70,50,155,154,249,227,165,105,138,228,51,219,156,211,160,
    124,226,239,246,166,166,65,198,143,109,106,210,152,137,215,219,
    155,154,121,16,60,49,116,123,83,147,100,230,44,205,95,202,
    32,197,204,54,167,65,102,146,109,78,90,64,222,155,170,139,
    211,147,187,83,73,217,212,167,16,217,81,135,84,0,27,50,
    33,62,107,243,8,111,168,213,105,117,85,51,192,198,223,241,
    139,87,78,184,149,35,132,230,39,247,184,215,92,53,69,116,
    75,107,222,36,145,85,137,98,118,13,143,209,136,51,47,109,
    45,204,16,83,245,202,210,114,146,62,32,173,183,117,55,177,
    30,24,162,11,143,19,28,197,237,227,134,87,9,164,99,123,
    121,162,2,138,158,46,72,156,75,248,52,152,98,235,180,233,
    237,122,92,47,240,148,120,59,214,151,190,170,82,124,246,157,
    125,40,50,32,154,196,252,121,66,182,102,63,77,80,179,100,
    100,122,231,4,202,142,100,75,249,212,84,189,0,53,251,188,
    56,43,227,54,53,201,58,26,20,174,238,79,68,178,91,201,
    161,153,116,155,141,214,147,89,136,92,148,82,163,20,203,132,
    112,166,131,54,150,8,230,68,194,178,144,200,137,132,91,17,
    241,193,213,238,51,52,27,34,217,196,98,90,100,234,134,94,
    57,194,18,43,69,201,13,223,203,72,24,125,240,89,156,158,
    193,16,40,29,58,103,124,129,39,252,21,247,97,33,146,216,
    223,79,28,209,159,196,254,206,239,62,166,239,231,91,79,213,
    110,143,194,226,31,61,131,103,239,194,194,32,3,246,53,138,
    65,70,109,12,226,61,130,109,46,35,240,110,119,228,212,50,
    34,199,101,68,142,203,136,28,151,17,57,46,35,114,92,70,
    140,113,25,81,224,50,98,60,83,70,76,112,25,49,137,50,
    130,226,2,191,32,251,181,72,118,68,172,170,26,186,188,171,
    118,57,38,192,83,214,54,30,194,73,214,80,9,43,178,207,
    72,74,246,102,139,167,217,180,78,47,147,90,196,86,45,108,
    5,190,115,32,29,47,192,198,127,44,77,182,237,144,191,96,
    45,213,24,8,5,73,180,250,67,255,177,212,27,180,164,238,
    161,249,187,72,146,112,243,98,96,229,254,42,91,0,149,6,
    165,107,61,60,160,99,191,148,173,105,60,49,89,20,242,101,
    12,174,141,32,255,3,98,54,86,173,189,55,194,178,29,176,
    187,153,82,219,22,154,151,104,62,69,131,93,36,247,167,104,
    126,134,230,51,52,219,104,126,142,230,23,104,126,137,230,87,
    104,202,104,62,71,227,137,132,243,145,246,33,5,59,167,33,
    99,233,254,133,251,238,88,67,54,38,219,127,118,170,195,97,
    114,139,178,199,106,183,69,239,245,44,149,77,58,32,135,196,
    222,112,134,55,71,44,146,238,110,241,207,34,246,70,51,47,
    3,243,86,102,212,114,226,152,69,82,78,44,100,100,198,45,
    219,166,50,19,150,109,205,147,83,78,156,180,200,180,101,192,
    41,139,204,216,178,118,154,17,226,220,25,251,122,240,66,6,
    153,181,108,155,34,115,9,219,82,137,11,31,186,204,62,116,
    133,125,104,158,125,232,42,251,208,60,151,226,243,92,138,207,
    115,41,62,143,82,28,173,195,237,13,110,111,226,39,20,84,
    108,251,215,81,96,251,111,161,168,134,255,221,194,239,38,182,
    111,195,11,177,173,235,254,6,203,56,110,215,228,131,15,76,
    86,200,111,117,237,202,107,92,33,175,52,197,232,202,210,189,
    85,222,9,36,86,3,153,85,195,102,178,247,123,127,223,92,
    136,219,23,20,191,88,194,75,8,32,116,135,217,222,50,27,
    216,202,114,154,251,68,36,41,66,194,148,78,77,237,214,152,
    153,116,45,12,124,247,169,72,54,169,237,245,32,60,104,95,
    230,59,227,158,119,242,77,113,175,155,216,219,53,156,246,149,
    138,226,22,209,219,27,226,196,173,245,231,235,143,76,57,143,
    88,178,122,68,89,0,10,76,204,5,175,254,42,242,248,67,
    144,202,242,251,205,23,141,224,200,121,35,163,68,212,171,132,
    68,157,252,162,176,61,22,116,182,157,138,88,174,197,8,57,
    129,160,238,249,66,74,215,197,246,224,236,222,57,113,176,250,
    35,225,234,171,98,119,252,234,17,186,238,35,100,149,186,67,
    22,211,27,126,87,82,69,165,152,9,96,92,230,154,213,45,
    211,146,149,121,117,205,162,166,231,238,205,14,33,48,41,87,
    170,182,54,78,231,204,204,109,81,82,29,137,71,251,44,106,
    171,102,172,87,55,218,126,0,76,243,181,81,2,117,222,162,
    106,19,121,4,52,205,99,49,37,244,204,49,168,109,55,237,
    112,60,154,149,96,250,55,191,163,224,211,66,166,15,40,250,
    255,18,127,207,25,114,225,167,255,193,125,107,162,157,59,116,
    191,201,180,213,231,217,161,248,121,9,90,227,185,215,87,238,
    164,63,154,114,133,85,23,161,77,252,22,69,51,115,224,44,
    10,15,143,220,244,103,79,252,19,16,126,207,202,47,238,248,
    45,7,239,183,155,93,125,236,147,114,125,204,117,33,215,86,
    156,0,49,121,240,116,206,167,17,30,213,135,230,119,84,63,
    228,23,166,48,203,169,190,60,125,166,250,103,135,102,243,179,
    197,217,145,217,2,253,31,166,207,109,250,30,153,189,52,123,
    237,191,234,188,170,109,
};

EmbeddedPython embedded_m5_objects_Ethernet(
    "m5/objects/Ethernet.py",
    "/home/faculty/gem5/src/dev/net/Ethernet.py",
    "m5.objects.Ethernet",
    data_m5_objects_Ethernet,
    3654,
    10165);

} // anonymous namespace
