#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_stats[] = {
    120,156,237,93,13,108,28,199,117,158,221,227,143,238,72,138,
    255,164,40,82,18,245,103,81,146,37,74,178,100,217,146,44,
    255,232,199,146,99,75,246,210,142,237,179,155,203,242,118,72,
    30,117,119,123,222,221,163,69,87,10,154,202,77,154,32,169,
    155,22,14,154,58,14,146,166,49,26,164,45,144,32,69,128,
    0,1,82,184,77,154,54,64,138,180,6,130,4,72,27,212,
    104,128,0,41,82,164,72,210,160,69,59,239,205,206,222,238,
    237,82,150,56,179,204,57,182,121,26,207,189,157,125,251,237,
    204,155,247,222,188,183,55,91,36,254,127,237,236,223,61,147,
    132,184,63,111,35,196,98,31,141,148,9,169,104,36,175,17,
    141,106,196,58,65,46,181,19,231,48,177,218,201,243,132,228,
    117,66,117,114,141,85,50,228,41,157,84,187,241,156,14,82,
    206,32,69,35,203,57,66,219,72,190,157,60,94,237,39,109,
    180,131,92,202,17,231,221,68,211,180,170,70,158,176,58,137,
    181,142,60,207,184,179,74,22,25,174,35,64,204,33,49,75,
    172,46,36,230,136,213,141,149,46,178,220,71,104,55,201,247,
    64,179,252,122,198,118,15,99,219,139,108,255,17,216,90,236,
    200,93,196,90,15,205,25,174,39,161,101,27,180,196,235,245,
    34,151,62,98,33,151,57,118,63,253,65,195,126,66,51,100,
    113,128,228,7,8,101,159,126,114,141,221,178,53,32,26,14,
    6,13,7,177,225,16,201,15,17,202,62,131,216,16,72,195,
    36,63,76,232,48,89,28,33,249,17,172,140,146,252,40,86,
    54,144,252,6,172,140,145,252,24,86,54,146,252,70,172,140,
    147,252,56,86,38,72,126,2,43,155,72,126,19,86,54,147,
    252,102,172,108,33,249,45,88,153,36,249,73,98,13,225,109,
    108,69,28,91,161,98,13,3,14,128,57,18,192,220,134,135,
    183,147,252,118,66,217,103,27,191,159,81,209,112,67,208,112,
    7,54,220,73,242,59,9,101,159,29,193,253,220,2,7,196,
    151,93,36,191,11,27,78,133,169,187,73,126,55,82,247,132,
    169,123,73,126,47,177,198,68,215,109,12,46,117,43,182,221,
    71,242,251,8,101,159,91,57,166,113,129,105,34,104,184,31,
    27,78,147,252,52,161,236,179,159,55,220,36,26,110,14,26,
    30,192,134,7,73,254,32,161,236,115,128,55,220,34,26,78,
    6,13,15,97,195,219,72,254,54,66,217,231,16,111,184,21,
    238,23,26,110,11,26,30,198,134,71,72,254,8,161,236,115,
    152,55,220,46,110,102,71,208,240,118,108,120,148,228,143,18,
    202,62,183,243,134,59,197,165,111,9,26,222,129,13,239,36,
    249,59,9,101,159,59,120,195,93,130,227,84,208,240,24,54,
    60,78,242,199,9,101,159,99,188,225,110,209,112,79,208,240,
    4,54,188,139,228,239,34,148,125,78,240,134,123,69,195,91,
    131,134,39,177,225,221,36,127,55,161,236,115,146,55,220,39,
    26,238,15,26,222,131,13,239,37,249,123,9,101,159,123,120,
    195,105,209,240,64,208,240,62,108,120,138,228,79,17,202,62,
    247,241,134,7,81,34,79,227,177,211,80,177,14,33,229,12,
    82,206,64,197,186,13,41,103,145,114,22,42,214,97,164,220,
    143,148,251,161,194,166,170,117,4,231,254,57,36,158,131,138,
    117,59,54,59,143,148,243,80,177,142,34,229,1,164,60,0,
    21,235,14,164,188,3,41,239,128,138,117,39,82,30,68,202,
    131,80,177,142,33,229,33,164,60,4,21,235,56,82,46,32,
    229,2,84,152,238,154,153,58,201,148,96,233,255,216,127,83,
    26,171,121,221,172,88,162,142,91,178,171,133,82,117,206,46,
    233,112,188,3,10,80,153,69,40,58,125,221,121,10,116,231,
    103,9,42,78,75,247,117,231,85,194,122,72,3,213,88,214,
    201,85,172,92,213,201,242,20,185,162,145,69,118,199,25,114,
    133,93,166,29,122,114,94,35,215,116,242,116,6,26,92,101,
    101,27,211,112,155,73,155,199,21,231,34,106,56,206,169,147,
    92,109,39,87,218,201,204,19,87,116,32,92,202,18,231,51,
    228,185,9,100,186,14,153,234,228,10,43,219,200,181,54,114,
    181,131,60,206,26,49,210,98,22,198,81,123,226,10,187,83,
    70,153,153,98,138,158,92,8,221,46,220,138,85,114,170,102,
    133,122,112,147,5,215,51,61,119,42,39,142,217,238,254,154,
    233,45,24,216,56,3,189,80,169,121,200,196,174,82,175,139,
    85,230,74,85,171,80,177,173,122,153,122,235,128,67,97,174,
    84,166,133,2,30,60,95,169,217,142,119,198,113,108,199,128,
    142,68,98,217,54,131,51,160,27,139,101,219,165,83,112,53,
    188,140,1,236,61,104,61,87,67,142,0,0,1,194,201,22,
    117,139,78,169,230,177,241,225,28,161,53,112,155,130,145,193,
    194,61,200,138,233,5,187,66,167,231,204,98,189,236,45,79,
    207,211,202,145,233,217,122,169,108,77,63,113,199,237,211,181,
    101,111,193,174,78,187,207,150,230,167,241,134,247,51,202,0,
    156,202,40,133,18,130,46,44,208,114,141,58,61,64,221,8,
    108,181,62,173,91,235,208,50,218,148,214,195,106,237,236,95,
    70,155,208,187,180,11,37,128,93,132,91,129,46,108,11,75,
    6,12,151,70,46,233,196,153,128,113,95,100,31,13,6,138,
    141,254,12,28,211,241,216,35,112,191,156,186,152,129,209,228,
    196,43,40,43,76,104,88,203,19,48,124,85,130,3,222,78,
    22,59,8,23,4,38,63,92,50,156,101,40,89,115,96,163,
    51,230,109,196,125,145,176,254,99,34,112,133,248,226,113,45,
    67,180,106,31,241,114,48,247,24,117,132,93,240,183,81,194,
    102,166,0,254,5,28,115,111,161,228,218,207,86,177,103,161,
    142,115,98,134,245,204,195,203,23,103,23,105,209,115,183,48,
    194,147,118,125,178,104,86,171,182,55,105,90,214,164,233,121,
    78,105,182,238,81,119,210,179,39,119,186,83,48,88,70,191,
    16,155,128,223,114,77,136,9,12,41,19,19,254,197,42,21,
    61,246,101,16,191,224,40,184,212,99,67,190,96,91,46,163,
    3,139,121,234,25,0,18,229,212,70,32,40,17,5,104,10,
    151,103,237,214,179,239,247,10,36,40,118,83,29,66,72,92,
    90,158,243,114,40,111,166,235,22,16,9,208,81,180,128,241,
    146,89,174,243,89,0,50,193,0,65,149,99,144,22,174,13,
    56,183,252,251,66,176,85,187,106,45,179,107,151,138,187,128,
    237,6,20,177,110,20,178,97,38,96,157,172,236,96,255,239,
    208,70,244,98,155,47,86,29,66,180,70,224,166,8,14,172,
    230,143,45,19,179,107,76,65,76,233,56,195,17,47,206,166,
    109,80,131,147,141,9,40,54,65,177,25,138,45,226,150,100,
    238,171,167,249,190,142,2,47,29,111,6,97,67,199,102,4,
    108,43,50,35,198,26,51,130,41,169,25,144,108,29,228,191,
    33,217,109,160,208,156,147,80,178,166,56,103,50,196,125,20,
    212,39,204,0,100,6,194,206,196,22,106,13,97,198,78,48,
    250,224,230,214,9,57,52,64,184,194,18,54,31,146,48,3,
    250,31,197,203,24,19,122,170,0,45,184,96,25,227,192,170,
    61,161,23,39,161,216,170,162,43,27,34,50,31,19,145,227,
    192,182,207,23,145,30,20,141,28,251,215,167,23,51,126,255,
    6,246,104,176,73,52,64,46,218,18,228,226,22,168,101,226,
    119,164,80,36,252,251,56,27,18,9,184,180,30,134,123,129,
    85,150,71,1,101,88,24,70,153,225,124,188,58,202,108,161,
    142,182,240,0,218,66,180,167,232,218,115,197,152,65,221,200,
    43,237,112,187,115,25,50,226,219,56,55,203,202,154,99,95,
    94,158,180,231,38,61,188,31,208,99,39,118,186,251,119,186,
    199,153,134,154,60,137,186,129,235,40,174,133,28,90,3,45,
    2,167,158,185,92,164,104,101,240,91,161,192,149,70,1,21,
    72,193,183,94,76,46,134,161,179,116,209,139,168,62,93,207,
    1,173,41,221,143,185,160,31,1,214,3,192,40,135,157,152,
    209,70,153,12,228,52,188,90,129,107,66,244,75,240,40,251,
    119,31,116,44,220,17,37,176,148,51,102,56,22,132,9,128,
    141,91,35,227,44,1,210,152,102,103,61,38,198,183,163,49,
    190,240,47,35,196,241,253,4,221,74,141,188,143,192,8,178,
    129,242,197,49,144,94,24,178,65,104,254,46,130,114,155,96,
    51,113,126,207,128,157,196,22,108,218,187,71,177,41,55,161,
    15,144,223,13,9,189,48,116,25,223,223,10,27,186,182,64,
    55,224,208,223,144,49,107,139,42,17,232,248,5,211,133,102,
    92,51,52,230,81,67,181,6,46,19,211,140,50,114,176,142,
    179,40,192,213,158,110,72,1,152,138,113,109,80,15,141,45,
    240,55,14,5,195,170,9,218,42,47,188,133,172,108,179,10,
    92,115,62,5,220,219,16,79,111,39,90,95,238,39,156,247,
    168,99,122,182,19,136,101,187,16,203,127,11,196,146,162,154,
    127,30,189,103,40,117,24,171,107,186,150,207,128,119,2,174,
    122,27,161,237,36,223,65,104,39,56,185,16,33,104,23,17,
    130,14,63,66,208,8,42,116,99,61,139,245,30,12,42,16,
    136,4,248,65,133,94,17,84,232,35,86,15,86,250,253,184,
    65,126,128,248,145,130,65,136,20,64,101,200,143,20,176,5,
    190,53,128,149,17,63,36,192,22,248,254,122,124,3,44,195,
    161,50,230,47,195,217,2,159,173,183,161,50,14,51,14,180,
    57,206,6,241,15,181,29,232,198,136,209,195,65,186,192,135,
    47,144,47,46,58,80,92,150,214,34,32,61,39,202,102,101,
    214,50,79,206,3,27,224,85,20,83,84,23,192,250,194,192,
    96,122,105,43,97,195,175,71,4,192,37,105,13,114,59,59,
    43,0,134,243,197,178,139,168,54,30,93,160,147,21,90,153,
    101,171,177,133,82,109,114,174,108,206,99,143,102,124,224,23,
    5,112,15,101,168,217,252,187,123,160,180,39,139,118,149,169,
    228,122,145,137,227,164,69,217,114,133,90,147,251,38,81,159,
    79,150,220,73,115,150,29,53,139,30,159,46,209,217,140,254,
    161,233,204,187,232,10,94,122,22,170,74,70,164,192,214,150,
    37,230,240,150,72,212,52,70,132,5,46,110,53,100,4,241,
    181,7,19,123,130,40,80,223,208,249,149,64,42,196,213,3,
    169,232,225,157,187,168,9,247,43,44,18,184,250,26,138,77,
    249,2,186,209,10,49,130,26,178,27,253,196,23,91,129,141,
    9,11,112,0,149,219,135,56,218,193,56,218,82,181,232,132,
    12,56,156,81,149,30,98,24,57,96,236,132,134,87,25,98,
    139,134,17,27,39,21,244,49,2,6,190,117,105,192,163,9,
    128,217,18,210,172,22,105,8,244,17,21,160,97,34,9,222,
    151,165,129,39,72,50,125,166,110,150,85,163,134,25,140,140,
    127,51,97,238,223,196,204,75,144,140,162,93,91,86,55,241,
    80,40,128,229,123,148,3,173,210,203,158,98,160,192,242,189,
    114,64,19,68,183,128,80,11,5,133,96,253,224,7,178,125,
    94,57,224,154,67,151,74,118,221,85,12,88,176,125,191,244,
    52,27,137,99,54,173,165,38,245,160,68,167,129,147,238,179,
    254,160,52,236,225,36,217,160,207,48,201,80,172,30,48,8,
    139,156,63,156,14,232,42,77,11,52,112,254,125,105,208,137,
    179,176,196,86,101,17,216,74,36,196,247,196,144,247,31,166,
    4,220,173,207,166,6,28,121,127,52,141,41,89,40,164,210,
    225,24,176,224,172,63,70,72,44,40,4,176,239,79,130,253,
    161,36,237,151,8,187,185,187,239,84,7,27,89,127,156,196,
    53,118,196,97,191,210,112,216,241,178,170,13,71,137,221,107,
    161,240,137,6,140,41,188,207,32,172,131,139,112,190,106,175,
    57,118,141,58,222,50,143,117,64,8,209,216,15,197,238,136,
    130,176,104,153,122,180,16,237,73,175,143,4,97,82,139,178,
    5,146,189,92,40,248,253,192,78,40,20,208,43,55,238,134,
    226,94,40,78,65,113,6,138,251,161,56,15,197,59,160,120,
    8,138,139,80,60,2,197,12,20,16,48,50,30,135,226,73,
    40,32,136,96,60,29,233,34,153,245,194,97,118,214,28,156,
    14,221,209,161,141,235,89,189,67,203,106,89,61,155,233,102,
    127,217,149,254,116,244,35,206,87,231,236,120,212,194,212,86,
    17,181,208,253,192,5,148,89,152,122,249,156,32,118,97,217,
    141,196,30,65,92,143,101,47,18,251,4,177,31,203,1,36,
    14,10,226,16,150,195,72,28,17,196,81,44,55,32,113,76,
    16,55,98,57,142,196,9,65,220,132,229,102,36,110,193,250,
    36,62,87,192,163,43,219,68,116,101,59,68,84,160,178,3,
    99,44,4,158,25,240,31,220,184,69,4,88,118,137,0,203,
    148,8,176,236,22,1,150,61,34,192,178,23,114,255,112,149,
    125,224,198,64,182,159,195,152,198,242,0,194,56,8,49,147,
    94,34,25,51,81,98,205,112,81,252,167,68,101,168,196,56,
    170,28,151,113,7,241,163,171,191,250,48,9,106,89,227,152,
    138,123,4,45,245,10,121,3,29,187,6,65,145,47,196,198,
    255,230,108,106,183,175,74,32,116,122,193,172,132,157,91,37,
    73,22,76,52,112,214,95,36,178,14,64,127,8,236,12,173,
    153,104,2,66,65,17,76,177,187,180,38,141,186,155,163,14,
    174,241,165,132,145,190,137,245,79,78,224,46,46,208,226,37,
    133,166,22,159,74,0,158,95,150,3,184,94,0,156,53,93,
    122,74,49,72,200,75,5,124,191,34,7,180,75,0,165,85,
    115,182,172,48,122,135,75,3,206,244,171,114,16,131,25,197,
    214,162,76,124,84,98,132,201,228,115,125,85,145,68,58,20,
    178,62,106,37,18,121,126,77,14,96,86,0,124,142,58,182,
    226,16,12,176,252,6,145,85,70,65,23,46,149,220,146,215,
    148,91,69,26,211,77,42,186,19,121,125,179,129,119,10,50,
    103,13,71,218,248,13,40,86,116,157,123,4,76,124,140,101,
    158,122,77,20,54,84,168,233,49,173,239,43,87,95,235,205,
    120,78,169,138,217,241,149,15,178,211,61,112,135,154,232,141,
    139,192,115,80,209,203,34,5,206,227,193,92,183,136,79,52,
    137,41,83,44,225,35,109,112,70,2,25,78,227,9,115,159,
    130,23,23,141,28,250,12,158,216,76,131,179,58,248,89,236,
    107,195,140,148,172,66,209,174,87,61,60,41,78,133,211,96,
    49,35,8,13,237,195,40,112,74,248,59,52,214,177,49,46,
    248,120,103,177,254,48,231,233,195,172,103,42,46,158,177,194,
    33,215,239,159,8,213,127,140,12,87,61,112,142,81,128,65,
    125,55,20,224,248,27,176,118,48,22,160,88,132,162,12,69,
    21,138,26,20,16,210,55,234,66,33,241,7,133,120,46,180,
    49,183,202,212,117,113,20,176,18,24,1,240,204,56,220,38,
    18,192,4,137,196,111,106,22,65,38,59,235,211,112,250,1,
    210,88,4,13,55,253,241,69,81,243,50,168,119,149,51,215,
    120,129,248,62,47,222,12,64,57,24,212,14,73,223,17,112,
    255,151,198,108,69,61,49,83,52,203,166,147,188,100,131,81,
    189,217,37,155,191,2,234,20,43,160,117,98,5,148,37,52,
    7,171,54,200,50,243,165,80,15,44,88,96,196,91,100,193,
    242,58,105,205,5,75,128,235,215,120,193,242,239,68,202,38,
    247,69,36,57,149,252,233,143,228,16,246,71,17,50,71,132,
    93,93,177,147,200,153,254,88,105,87,122,182,103,150,21,123,
    97,200,243,39,9,48,215,122,137,250,83,49,179,166,192,156,
    220,136,227,130,49,59,8,188,26,47,69,134,86,132,0,131,
    142,107,152,68,53,214,8,98,212,240,224,15,206,106,223,26,
    113,203,163,103,185,38,127,39,133,121,156,172,201,1,108,122,
    193,55,95,231,175,23,58,191,87,232,252,62,161,234,251,69,
    212,107,0,79,28,196,7,132,114,254,3,66,204,10,128,63,
    209,34,86,224,23,164,53,173,64,128,235,215,216,10,252,50,
    65,39,220,164,142,109,204,2,229,11,113,244,99,1,147,4,
    196,222,40,68,183,244,156,202,85,56,62,163,207,88,102,228,
    64,246,69,65,166,97,77,59,228,16,54,141,180,106,107,138,
    26,62,171,180,19,21,219,81,52,63,221,9,8,215,218,132,
    246,106,194,132,194,2,242,134,215,254,163,77,243,160,62,11,
    75,126,190,180,91,233,152,88,244,10,66,66,67,88,179,175,
    196,132,31,11,49,65,2,95,156,126,146,196,108,123,216,172,
    55,24,169,54,235,47,179,179,126,14,167,111,32,145,69,102,
    99,81,9,230,29,0,159,46,185,222,105,211,51,227,198,253,
    177,27,201,172,241,95,21,131,249,238,32,139,157,88,174,67,
    243,157,21,196,28,150,93,72,236,22,196,30,44,215,35,177,
    87,16,251,176,236,71,226,128,32,14,98,57,132,196,97,65,
    28,193,114,20,137,27,4,113,12,203,141,72,28,23,196,9,
    44,55,33,113,179,32,110,193,114,18,137,91,5,113,27,150,
    219,145,184,67,16,119,98,121,11,18,119,9,226,20,150,187,
    145,184,71,16,247,98,121,43,18,247,9,159,103,63,18,167,
    73,254,128,112,102,48,155,6,78,117,139,184,37,155,196,60,
    107,49,183,36,192,245,198,110,137,78,66,63,90,185,55,80,
    160,215,240,23,13,203,67,120,15,252,215,75,120,15,218,227,
    213,141,164,141,217,52,248,245,202,9,248,245,202,21,212,182,
    5,157,255,128,165,209,241,237,129,90,129,128,82,149,62,91,
    16,147,133,255,50,5,134,209,172,213,104,213,50,246,4,221,
    48,33,186,70,137,231,178,15,186,65,252,170,32,163,13,105,
    61,191,58,149,124,56,80,201,43,134,99,155,180,113,127,72,
    191,224,175,250,130,176,99,148,10,17,89,120,200,19,141,91,
    112,168,82,226,65,209,24,17,116,45,184,138,172,222,116,208,
    188,156,112,6,35,6,103,152,151,49,176,27,28,156,173,23,
    47,81,15,253,165,32,234,155,120,208,245,131,159,33,26,62,
    151,26,1,198,60,26,228,146,120,0,56,116,114,212,240,189,
    169,17,3,153,124,182,127,32,56,155,127,199,176,106,208,168,
    94,181,168,51,87,182,159,13,34,174,9,135,68,32,57,160,
    224,51,38,65,67,123,41,196,34,249,136,176,113,130,16,29,
    201,226,18,45,198,199,23,169,34,244,13,95,162,131,227,214,
    43,241,17,3,162,24,49,86,143,118,136,251,76,221,116,124,
    139,158,120,64,244,148,255,61,10,167,108,251,113,222,56,85,
    128,132,47,77,156,205,74,173,156,120,73,255,64,112,73,254,
    29,103,46,186,228,190,157,15,212,134,98,43,255,57,118,214,
    4,204,202,29,4,173,188,22,15,36,7,127,122,182,35,100,
    241,147,151,243,240,204,143,154,229,124,167,8,201,182,55,66,
    178,45,100,245,238,108,81,171,119,231,141,91,189,55,237,98,
    252,120,11,172,46,238,9,76,217,141,6,232,34,246,140,39,
    245,64,3,132,85,73,131,26,164,250,216,151,102,61,144,134,
    183,255,26,59,235,14,184,165,110,18,246,246,217,124,135,219,
    227,171,140,149,103,253,139,202,102,253,13,63,65,231,171,133,
    126,17,217,11,135,239,58,27,225,187,117,173,163,49,206,180,
    168,198,56,243,22,208,24,247,203,69,76,134,99,115,32,157,
    16,222,5,57,152,131,113,152,106,195,120,24,141,120,164,5,
    180,239,163,178,177,157,184,14,94,233,24,172,44,190,3,39,
    143,39,244,110,56,56,116,189,227,192,228,149,149,153,52,130,
    67,215,59,14,76,96,219,153,70,96,40,252,140,119,244,44,
    213,246,225,187,236,172,211,208,233,224,189,70,30,57,208,253,
    72,80,119,128,252,144,149,108,37,254,153,188,217,158,179,246,
    141,204,70,97,100,198,241,232,4,108,234,230,27,153,205,45,
    102,100,158,108,81,35,243,228,91,192,200,60,165,74,123,243,
    9,148,142,137,161,114,32,7,154,65,166,145,61,88,104,1,
    11,115,41,176,48,24,124,191,81,11,51,214,220,63,17,19,
    177,242,209,192,64,36,53,105,152,135,149,143,10,227,16,178,
    32,126,147,229,149,204,84,252,56,172,58,32,84,216,32,197,
    7,252,114,240,152,97,19,25,16,28,73,148,145,229,228,83,
    150,241,122,48,108,203,33,15,203,63,24,196,130,146,143,192,
    197,190,78,132,45,124,73,204,159,136,45,228,237,85,91,66,
    120,230,233,9,16,14,216,55,46,225,225,59,97,15,33,212,
    119,214,118,42,245,178,153,108,14,225,199,83,171,126,134,141,
    226,222,111,225,205,82,152,29,130,0,82,139,216,161,90,139,
    218,161,218,91,192,14,57,114,42,190,55,42,184,5,134,91,
    225,131,0,24,145,245,156,165,22,80,241,203,129,138,7,223,
    245,70,84,252,47,130,78,2,101,230,43,155,80,95,169,214,
    53,63,99,103,217,77,81,25,29,181,11,238,198,84,51,29,
    151,158,91,49,251,10,207,53,43,207,190,250,10,73,100,95,
    225,137,170,118,255,137,170,214,10,208,190,167,69,53,208,123,
    110,92,3,173,65,90,18,228,24,210,146,81,89,226,61,240,
    23,80,164,149,150,188,214,66,105,201,15,6,138,160,127,37,
    69,144,16,72,136,118,89,161,88,49,107,65,32,33,233,88,
    144,194,98,95,188,141,241,70,225,28,209,117,14,131,231,243,
    79,66,55,69,126,228,29,29,66,197,170,8,30,128,187,10,
    253,180,158,132,18,69,60,37,20,85,70,111,241,196,208,11,
    45,170,119,94,184,113,189,243,166,245,124,62,210,2,94,197,
    71,87,151,24,138,106,141,120,104,50,233,88,16,154,76,212,
    2,105,56,36,58,187,185,223,75,76,19,193,12,188,88,247,
    106,117,47,62,247,23,86,51,247,175,187,45,36,84,66,191,
    214,241,31,225,94,15,170,32,215,58,170,224,165,22,85,5,
    47,189,5,84,193,203,45,160,10,62,21,140,255,42,150,97,
    221,193,132,42,204,210,249,82,85,241,47,93,144,231,167,229,
    86,138,185,6,68,90,181,20,47,18,25,199,87,228,224,133,
    122,112,201,44,151,84,2,244,119,148,47,89,159,109,130,168,
    147,155,221,233,40,140,50,250,163,104,37,251,27,225,207,89,
    255,188,129,18,247,97,185,169,31,66,251,134,133,99,12,253,
    158,118,29,99,106,228,160,128,167,189,241,58,106,140,12,60,
    129,255,199,128,24,22,39,209,61,126,224,15,31,65,43,51,
    3,135,175,240,136,91,27,112,2,110,112,217,235,219,156,235,
    254,54,212,55,50,57,97,100,186,196,207,131,186,197,238,56,
    61,98,119,156,245,98,119,156,94,177,59,78,159,216,126,184,
    95,108,63,60,32,182,31,30,20,219,15,15,137,237,135,135,
    197,246,195,35,98,251,225,81,177,253,240,6,177,253,240,152,
    255,186,31,200,73,141,249,57,41,254,86,158,252,4,177,198,
    177,178,201,127,253,78,126,51,177,54,97,101,139,255,158,29,
    120,227,208,22,172,108,245,95,168,3,27,2,109,21,27,2,
    109,19,27,2,109,23,27,2,237,16,27,2,237,20,27,2,
    221,34,54,4,218,37,54,4,154,18,27,2,237,110,108,8,
    4,47,6,218,239,191,230,38,63,13,102,121,47,105,25,179,
    252,133,22,53,203,1,174,55,54,203,171,200,218,4,51,6,
    119,25,195,77,96,212,233,67,200,128,10,182,127,117,61,203,
    155,11,58,248,90,147,253,237,215,148,218,95,216,114,236,75,
    114,246,99,56,210,107,5,216,32,29,118,193,80,186,97,40,
    127,21,69,192,249,203,114,136,7,154,16,207,218,118,57,133,
    253,77,57,219,175,200,97,237,111,194,90,166,85,165,80,249,
    126,118,200,245,171,33,164,225,151,18,32,210,65,18,53,210,
    252,5,3,201,59,18,134,241,178,133,153,91,46,21,97,195,
    205,198,150,226,26,206,3,40,23,165,111,160,155,248,111,41,
    241,47,243,170,180,171,209,124,11,110,227,22,212,58,29,62,
    246,6,255,175,165,49,2,204,49,137,141,128,49,6,190,200,
    70,77,217,61,52,46,242,13,233,254,111,86,40,140,55,83,
    154,21,245,221,223,37,160,115,246,223,84,142,156,73,101,154,
    200,3,246,223,82,142,220,77,23,121,192,254,219,114,218,177,
    39,2,187,102,215,20,175,174,24,199,215,66,8,133,19,116,
    115,187,57,245,69,64,242,223,49,41,222,125,24,147,16,223,
    145,235,203,222,8,76,90,169,121,42,55,82,199,45,223,129,
    231,247,228,80,174,143,160,76,225,185,205,239,75,143,119,19,
    196,103,205,90,104,180,85,184,193,252,103,226,140,239,15,84,
    142,184,226,240,9,46,124,95,87,57,189,149,6,79,112,73,
    254,67,57,120,209,137,237,168,142,63,225,142,48,200,244,71,
    42,231,140,163,54,8,5,178,8,44,127,172,82,22,139,101,
    106,170,92,120,241,87,108,50,158,63,145,67,57,26,65,57,
    15,111,164,42,151,237,162,226,101,34,224,136,240,254,169,202,
    245,14,179,105,133,89,83,233,54,156,176,222,17,108,127,38,
    237,139,52,25,34,199,116,169,106,47,4,173,17,48,254,239,
    38,180,226,53,130,136,246,116,3,45,131,202,223,97,27,126,
    156,64,143,61,78,112,55,62,78,160,191,209,227,4,48,100,
    240,56,65,112,151,205,79,18,52,133,251,149,61,78,240,63,
    26,17,143,19,244,138,199,9,86,103,228,6,163,50,85,119,
    23,184,80,169,245,107,248,134,140,130,121,70,87,168,98,230,
    28,187,170,122,119,82,228,217,33,135,50,170,172,21,79,84,
    80,214,192,50,27,194,184,234,133,102,147,95,235,186,165,249,
    106,72,114,79,42,19,2,252,249,63,178,239,214,101,149,75,
    147,205,166,232,65,42,214,46,254,86,110,140,115,175,98,188,
    165,170,75,29,213,185,15,196,203,57,15,200,201,110,147,82,
    96,22,65,245,44,67,125,32,248,14,135,208,174,78,139,13,
    145,152,22,227,136,21,171,49,80,185,13,238,27,164,113,55,
    75,113,197,94,82,254,106,49,46,197,192,121,92,78,42,162,
    96,235,213,210,51,42,119,163,66,156,156,233,102,57,156,209,
    80,171,67,151,168,227,170,222,98,219,231,186,85,165,141,112,
    109,71,245,155,196,128,229,14,105,41,141,26,220,10,117,230,
    149,11,41,88,93,100,188,43,161,71,53,129,118,141,30,100,
    216,163,251,153,169,41,216,113,248,13,30,144,132,68,14,166,
    95,140,65,168,13,67,49,10,197,56,20,176,43,143,177,5,
    138,173,80,108,135,98,39,20,187,180,192,81,132,218,39,161,
    6,123,215,132,242,204,7,161,184,13,138,35,80,28,133,2,
    246,59,48,142,99,1,103,156,132,26,252,54,223,184,15,10,
    248,201,162,113,22,138,115,80,60,0,197,131,80,192,47,109,
    141,135,161,48,160,128,223,147,26,239,212,194,19,219,79,123,
    55,60,89,197,143,82,193,246,100,159,7,175,245,81,226,63,
    80,169,39,108,216,124,253,191,206,149,223,119,147,213,208,25,
    95,194,95,194,20,44,187,62,91,166,241,92,185,165,189,157,
    43,87,157,43,167,187,32,249,3,153,241,157,126,102,220,152,
    153,130,23,178,183,72,250,123,90,76,230,22,75,127,7,184,
    148,167,191,71,154,39,66,10,41,112,84,123,135,174,167,171,
    215,52,245,125,88,206,14,143,197,122,44,149,244,55,90,136,
    163,114,80,227,131,171,62,239,141,70,236,152,28,206,225,4,
    156,138,115,222,104,102,239,82,177,2,222,152,0,54,41,225,
    173,46,221,138,222,193,61,210,171,202,36,224,169,165,185,209,
    153,57,149,86,127,167,155,222,70,31,236,172,116,127,39,41,
    138,180,210,218,232,49,158,79,5,114,90,249,108,244,111,31,
    76,5,114,90,137,108,244,198,47,202,47,56,163,120,149,102,
    176,249,90,65,73,140,36,138,50,189,20,246,99,114,29,58,
    24,131,170,56,141,141,139,174,39,228,64,14,196,64,166,144,
    197,126,74,122,216,19,96,170,207,100,227,210,245,93,170,7,
    61,141,76,182,169,122,170,171,207,102,91,114,16,227,243,92,
    117,70,27,35,19,243,170,103,143,218,124,54,6,78,22,85,
    75,164,226,124,54,6,118,42,114,32,199,99,32,83,74,103,
    99,0,170,166,122,245,162,62,139,141,49,50,87,218,9,73,
    176,65,41,100,176,49,150,183,212,4,118,109,146,215,160,202,
    32,121,29,185,201,181,74,96,47,235,68,81,2,123,52,46,
    82,41,37,177,49,218,250,91,170,85,138,226,204,26,70,131,
    175,169,214,205,138,103,40,4,171,223,167,98,33,153,224,211,
    166,150,190,198,232,250,7,164,245,74,130,121,78,35,121,141,
    105,128,15,165,128,54,149,212,53,230,43,94,144,246,117,227,
    65,39,120,207,172,19,201,169,158,84,0,215,79,1,34,235,
    63,80,109,17,139,102,205,44,150,148,62,180,11,207,117,9,
    182,47,38,224,13,130,182,107,148,96,251,35,93,36,216,224,
    119,114,111,222,4,219,101,40,158,211,194,147,197,207,163,69,
    141,170,226,92,26,236,199,182,31,186,240,1,162,44,151,214,
    148,65,115,241,21,189,111,103,208,222,206,160,17,242,178,152,
    173,45,150,65,11,112,165,153,65,227,19,33,173,12,218,39,
    175,167,140,215,52,131,246,39,114,102,44,20,178,245,123,44,
    189,12,218,103,148,89,220,0,106,42,25,180,63,147,195,57,
    156,128,51,141,12,218,231,84,56,226,27,19,192,174,65,6,
    237,47,165,29,220,36,224,233,102,208,62,159,86,127,175,65,
    6,237,139,210,253,157,164,40,82,205,160,125,41,21,200,169,
    102,208,190,156,10,228,84,51,104,95,145,211,117,253,49,188,
    234,51,104,95,149,94,94,14,197,80,166,151,65,123,85,174,
    67,7,99,80,211,200,160,125,77,14,228,64,12,100,10,25,
    180,111,72,15,123,2,204,148,50,104,223,84,61,232,105,100,
    208,190,165,122,170,171,207,160,125,91,14,98,124,158,167,146,
    65,123,77,245,236,73,33,131,246,29,213,18,153,70,6,237,
    123,114,32,199,99,32,211,204,160,125,95,245,234,37,165,12,
    218,15,164,157,144,4,27,148,86,6,237,245,38,176,191,146,
    12,26,191,201,181,202,160,253,80,79,33,131,38,68,42,205,
    12,218,127,168,86,41,105,100,208,254,83,181,110,78,33,131,
    246,95,42,22,146,9,62,109,186,25,180,159,75,235,149,4,
    243,156,90,6,237,151,41,160,77,47,131,246,191,210,190,110,
    60,232,148,78,6,13,83,39,128,77,169,41,84,159,58,195,
    236,78,38,1,103,16,165,93,163,148,89,71,230,45,146,50,
    243,173,168,226,148,25,147,119,242,113,93,125,202,172,183,33,
    131,226,157,213,111,39,205,222,78,154,17,210,37,230,107,139,
    37,205,2,92,202,147,102,27,226,83,33,173,180,217,250,235,
    41,228,53,77,155,245,201,153,176,208,210,51,232,179,244,18,
    103,131,114,96,147,6,56,165,212,217,136,28,210,209,68,164,
    105,36,207,198,66,64,87,237,131,79,36,194,93,131,244,217,
    68,83,55,223,188,119,155,12,61,221,4,218,150,244,250,124,
    13,82,104,219,164,251,60,89,105,164,154,68,219,153,18,232,
    84,211,104,83,41,129,78,53,145,182,87,78,243,13,38,32,
    86,159,74,219,31,2,185,186,117,230,72,2,206,244,146,105,
    7,229,58,117,56,1,108,26,233,180,195,114,48,135,18,96,
    166,144,80,59,42,61,248,137,64,83,74,169,29,83,63,244,
    105,36,213,238,82,63,237,213,167,213,238,81,22,175,9,64,
    166,146,88,59,165,126,30,165,144,90,59,171,94,50,211,72,
    174,157,151,131,185,41,1,102,154,233,181,7,213,175,113,82,
    74,176,93,148,118,79,18,237,82,90,41,54,163,9,238,218,
    164,216,64,177,133,82,108,226,54,215,42,201,246,88,70,85,
    146,45,244,68,86,67,176,210,76,179,61,173,94,189,164,145,
    104,43,168,215,213,41,164,218,102,85,44,57,19,125,222,116,
    147,109,84,90,199,36,26,237,212,210,109,11,169,224,77,47,
    225,118,73,218,23,78,10,85,165,152,114,171,170,55,143,41,
    37,221,158,105,129,164,155,247,235,153,116,131,57,18,77,186,
    5,118,85,113,218,237,19,236,154,185,140,242,180,91,144,98,
    11,4,34,23,136,110,115,130,7,239,24,94,110,84,170,150,
    188,153,82,101,6,176,169,185,59,120,209,214,178,180,6,88,
    231,99,123,148,94,230,58,10,41,115,165,50,173,154,21,106,
    92,85,129,244,175,217,69,175,134,144,222,108,255,65,32,204,
    97,43,53,215,163,206,195,120,1,236,198,115,102,213,42,83,
    71,81,119,190,202,174,250,222,38,144,66,63,221,31,211,79,
    31,74,194,9,27,234,186,197,5,106,1,188,51,75,84,184,
    43,74,20,254,223,48,86,191,35,167,63,65,32,106,212,41,
    217,86,169,8,16,79,215,43,60,54,135,187,31,243,35,210,
    56,255,150,49,252,128,196,96,195,100,169,215,44,211,163,216,
    131,138,70,247,235,236,50,31,150,64,5,62,125,205,177,139,
    212,117,13,102,31,189,71,234,180,78,213,64,251,59,118,173,
    143,72,64,235,107,64,131,1,85,136,12,94,194,246,226,234,
    145,25,101,162,74,147,3,167,143,73,244,17,252,98,158,41,
    180,217,50,181,212,0,250,123,118,133,151,37,0,193,14,244,
    200,236,65,166,213,212,64,250,7,118,141,79,53,32,161,87,
    95,130,122,9,119,230,111,92,227,34,225,190,5,113,151,93,
    3,40,70,47,9,155,3,38,76,76,23,120,203,232,103,32,
    210,11,204,20,156,113,28,219,49,182,65,203,237,80,192,211,
    14,198,46,34,156,16,88,97,26,211,226,132,2,91,53,227,
    139,200,241,189,227,198,109,80,28,38,190,42,159,97,176,31,
    94,62,239,39,231,11,112,23,66,187,27,166,152,108,231,249,
    91,175,26,135,112,71,241,226,146,201,43,85,187,74,177,2,
    182,11,135,215,42,185,181,178,185,108,188,36,238,174,102,205,
    225,255,139,236,255,109,188,129,135,138,174,106,67,126,27,55,
    253,102,108,204,42,158,206,248,149,75,140,39,140,91,65,248,
    192,150,241,2,32,255,40,241,93,229,153,162,89,54,157,24,
    52,227,101,209,224,157,232,208,196,177,131,207,115,154,46,149,
    76,175,100,87,241,16,190,188,157,93,27,187,43,56,132,183,
    14,238,80,180,77,155,79,197,195,231,18,15,3,213,248,28,
    241,215,206,161,192,118,8,230,107,225,195,241,187,248,174,24,
    32,126,23,201,141,94,39,126,56,129,55,58,100,197,155,252,
    140,248,190,250,89,219,169,212,203,102,188,197,47,3,81,168,
    153,142,75,207,37,162,213,181,88,163,56,39,120,125,53,134,
    105,252,183,122,71,14,194,174,223,77,47,178,140,28,135,157,
    12,18,118,3,141,180,185,210,212,38,248,13,78,168,13,248,
    153,137,41,221,72,43,240,215,208,21,66,87,3,237,57,26,
    75,180,77,104,5,80,225,162,174,67,253,130,51,90,137,110,
    192,105,125,162,98,91,245,50,61,9,239,78,116,255,149,21,
    125,90,183,150,237,205,50,175,184,91,203,176,191,156,214,163,
    181,101,186,251,178,109,221,93,217,182,108,103,70,235,64,218,
    160,158,107,203,118,141,28,203,106,57,125,100,31,43,225,253,
    224,73,127,224,93,235,35,253,216,110,140,149,153,30,70,243,
    255,105,72,209,71,178,88,242,54,67,88,118,97,185,62,116,
    148,211,159,195,242,82,83,153,225,87,105,252,117,235,205,20,
    241,247,255,107,114,96,210,
};

EmbeddedPython embedded_m5_internal_stats(
    "m5/internal/stats.py",
    "/home/faculty/gem5/build/X86/python/swig/stats.py",
    "m5.internal.stats",
    data_m5_internal_stats,
    7895,
    58782);

} // anonymous namespace