#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_stats[] = {
    120,156,237,93,13,140,220,198,117,30,114,239,71,123,63,186,
    255,59,157,238,36,157,254,172,147,100,233,36,89,178,108,73,
    150,127,244,99,201,177,37,155,103,199,246,218,205,134,183,156,
    187,219,211,238,114,77,114,207,90,87,10,154,202,77,154,192,
    169,155,22,14,154,58,14,146,166,9,26,164,45,144,32,69,
    128,0,1,82,184,77,154,54,64,138,180,6,130,4,72,27,
    212,104,128,0,41,82,164,72,210,160,69,59,239,13,135,75,
    46,121,178,116,51,188,172,99,251,86,227,217,199,225,227,199,
    153,55,239,189,121,143,59,44,16,255,191,118,246,239,158,41,
    66,220,159,183,17,98,177,143,70,74,132,148,53,146,211,136,
    70,53,98,157,32,151,218,137,115,152,88,237,228,121,66,114,
    58,161,58,185,198,42,25,242,148,78,42,61,120,78,7,41,
    101,144,162,145,122,23,161,109,36,215,78,30,175,12,144,54,
    218,65,46,117,17,231,221,68,211,180,138,70,158,176,58,137,
    181,142,60,207,184,179,74,22,25,174,35,64,236,66,98,150,
    88,221,72,236,34,86,15,86,186,73,189,159,208,30,146,235,
    133,102,185,245,140,237,30,198,182,15,217,254,35,176,181,216,
    145,187,136,181,30,154,51,92,79,66,203,54,104,137,215,235,
    67,46,253,196,66,46,243,236,126,6,130,134,3,132,102,200,
    210,32,201,13,18,202,62,3,228,26,187,101,107,80,52,28,
    10,26,14,97,195,97,146,27,38,148,125,134,176,33,144,70,
    72,110,132,208,17,178,52,74,114,163,88,25,35,185,49,172,
    108,32,185,13,88,25,39,185,113,172,108,36,185,141,88,153,
    32,185,9,172,76,146,220,36,86,54,145,220,38,172,108,38,
    185,205,88,217,66,114,91,176,50,69,114,83,196,26,198,219,
    216,138,56,182,66,197,26,1,28,0,115,52,128,185,13,15,
    111,39,185,237,132,178,207,54,126,63,99,162,225,134,160,225,
    14,108,184,147,228,118,18,202,62,59,130,251,185,5,14,136,
    47,187,72,110,23,54,156,14,83,119,147,220,110,164,238,9,
    83,247,146,220,94,98,141,139,174,219,24,92,234,86,108,187,
    143,228,246,17,202,62,183,114,76,19,2,211,100,208,112,63,
    54,156,33,185,25,66,217,103,63,111,184,73,52,220,28,52,
    60,128,13,15,146,220,65,66,217,231,0,111,184,69,52,156,
    10,26,30,194,134,183,145,220,109,132,178,207,33,222,112,43,
    220,47,52,220,22,52,60,140,13,143,144,220,17,66,217,231,
    48,111,184,93,220,204,142,160,225,237,216,240,40,201,29,37,
    148,125,110,231,13,119,138,75,223,18,52,188,3,27,222,73,
    114,119,18,202,62,119,240,134,187,4,199,233,160,225,49,108,
    120,156,228,142,19,202,62,199,120,195,221,162,225,158,160,225,
    9,108,120,23,201,221,69,40,251,156,224,13,247,138,134,183,
    6,13,79,98,195,187,73,238,110,66,217,231,36,111,184,79,
    52,220,31,52,188,7,27,222,75,114,247,18,202,62,247,240,
    134,51,162,225,129,160,225,125,216,240,20,201,157,34,148,125,
    238,227,13,15,162,68,158,198,99,167,161,98,29,66,202,25,
    164,156,129,138,117,27,82,206,34,229,44,84,172,195,72,185,
    31,41,247,67,133,77,85,235,8,206,253,115,72,60,7,21,
    235,118,108,118,30,41,231,161,98,29,69,202,3,72,121,0,
    42,214,29,72,121,7,82,222,1,21,235,78,164,60,136,148,
    7,161,98,29,67,202,67,72,121,8,42,214,113,164,92,64,
    202,5,168,48,221,53,59,125,146,41,193,226,255,177,255,166,
    53,86,243,122,88,177,76,29,183,104,87,242,197,202,188,93,
    212,225,120,7,20,160,50,11,80,116,250,186,243,20,232,206,
    207,18,84,156,150,238,235,206,171,132,245,144,6,170,177,164,
    147,171,88,185,170,147,250,52,185,162,145,37,118,199,25,114,
    133,93,166,29,122,114,65,35,215,116,242,116,6,26,92,101,
    101,27,211,112,155,73,155,199,21,231,18,106,56,206,169,147,
    92,109,39,87,218,201,236,19,87,116,32,92,202,18,231,211,
    228,185,73,100,186,14,153,234,228,10,43,219,200,181,54,114,
    181,131,60,206,26,49,210,82,22,198,81,123,226,10,187,83,
    70,153,157,102,138,158,92,8,221,46,220,138,85,116,42,102,
    153,122,112,147,121,215,51,61,119,186,75,28,179,221,253,85,
    211,91,52,176,113,6,122,161,92,245,144,137,93,161,94,55,
    171,204,23,43,86,190,108,91,181,18,245,214,1,135,252,124,
    177,68,243,121,60,120,190,92,181,29,239,140,227,216,142,1,
    29,137,196,146,109,6,103,64,55,22,74,182,75,167,225,106,
    120,25,3,216,123,208,122,190,138,28,1,0,2,132,147,45,
    234,22,156,98,213,99,227,195,57,66,107,224,54,13,35,131,
    133,123,144,21,51,139,118,153,206,204,155,133,90,201,171,207,
    44,208,242,145,153,185,90,177,100,205,220,107,60,52,83,173,
    123,139,118,101,198,125,182,184,48,131,55,188,159,81,6,225,
    84,70,201,23,17,116,126,145,150,170,212,233,5,234,70,96,
    171,245,107,61,90,135,150,209,166,181,94,86,107,103,255,50,
    218,164,222,173,93,40,2,236,2,220,10,116,97,91,88,50,
    96,184,52,114,73,39,206,36,140,251,18,251,104,48,80,108,
    244,103,225,152,142,199,30,129,251,229,212,165,12,140,38,39,
    94,65,89,97,66,195,90,158,128,225,171,16,28,240,118,178,
    212,65,184,32,48,249,225,146,225,212,161,100,205,129,141,206,
    152,183,17,247,37,194,250,143,137,192,21,226,139,199,181,12,
    209,42,253,196,235,130,185,199,168,163,236,130,191,141,18,54,
    59,13,240,47,224,152,123,139,69,215,126,182,130,61,11,117,
    156,19,179,172,103,30,174,95,156,91,162,5,207,221,194,8,
    79,218,181,169,130,89,169,216,222,148,105,89,83,166,231,57,
    197,185,154,71,221,41,207,158,218,233,78,195,96,25,3,66,
    108,2,126,245,170,16,19,24,82,38,38,252,139,85,44,120,
    236,203,16,126,193,81,112,169,199,134,124,209,182,92,70,7,
    22,11,212,51,0,36,202,169,141,64,80,34,242,208,20,46,
    207,218,173,103,223,239,21,72,80,236,166,59,132,144,184,180,
    52,239,117,161,188,153,174,155,71,36,64,71,209,2,198,203,
    102,169,198,103,1,200,4,3,4,85,142,65,90,184,54,224,
    220,242,239,11,193,86,236,138,85,103,215,46,22,118,1,219,
    13,40,98,61,40,100,35,76,192,58,89,217,193,254,223,161,
    141,234,133,54,95,172,58,132,104,141,194,77,17,28,88,205,
    31,91,38,102,215,152,130,152,214,113,134,35,94,156,77,219,
    160,6,39,27,147,80,108,130,98,51,20,91,196,45,201,220,
    87,111,243,125,29,5,94,58,222,12,194,134,142,205,8,216,
    86,100,70,140,55,102,4,83,82,179,32,217,58,200,127,67,
    178,219,64,161,57,39,161,100,77,113,206,100,136,251,40,168,
    79,152,1,200,12,132,157,137,45,212,26,194,140,157,96,244,
    195,205,173,19,114,104,128,112,133,37,108,33,36,97,6,244,
    63,138,151,49,46,244,84,30,90,112,193,50,38,128,85,123,
    66,47,78,65,177,85,69,87,54,68,100,33,38,34,199,129,
    109,191,47,34,189,40,26,93,236,95,191,94,200,248,253,27,
    216,163,161,38,209,0,185,104,75,144,139,91,160,150,137,223,
    145,66,145,240,239,227,108,72,36,224,210,122,24,238,5,86,
    169,143,1,202,176,48,140,49,195,249,120,101,140,217,66,29,
    109,225,1,180,133,104,79,209,181,231,138,49,131,186,145,87,
    218,225,118,231,51,100,212,183,113,110,150,149,85,199,190,92,
    159,178,231,167,60,188,31,208,99,39,118,186,251,119,186,199,
    153,134,154,58,137,186,129,235,40,174,133,28,90,5,45,2,
    167,158,185,92,160,104,101,240,91,62,207,149,70,30,21,72,
    222,183,94,76,46,70,160,179,116,209,139,168,62,93,207,1,
    173,41,221,143,93,65,63,2,172,7,128,81,23,118,98,70,
    27,99,50,208,165,225,213,242,92,19,162,95,130,71,217,191,
    251,160,99,225,142,40,129,165,156,49,203,177,32,76,0,108,
    220,26,25,103,9,144,198,12,59,235,49,49,190,29,141,241,
    133,127,25,33,142,239,39,232,86,106,228,125,4,70,144,13,
    148,47,142,129,244,194,144,13,65,243,119,17,148,219,4,155,
    137,243,123,22,236,36,182,96,211,222,61,138,77,185,9,125,
    128,252,110,72,232,133,161,203,248,254,86,216,208,181,5,186,
    1,135,254,134,140,89,91,84,137,64,199,47,154,46,52,227,
    154,161,49,143,26,170,53,112,153,152,102,148,145,131,117,156,
    69,30,174,246,116,67,10,192,84,76,104,67,122,104,108,129,
    191,113,40,24,86,77,208,86,121,225,45,100,101,155,149,231,
    154,243,41,224,222,134,120,250,58,209,250,114,63,225,188,71,
    29,211,179,157,64,44,219,133,88,254,91,32,150,20,213,252,
    243,232,61,67,169,195,88,93,211,181,92,6,188,19,112,213,
    219,8,109,39,185,14,66,59,193,201,133,8,65,187,136,16,
    116,248,17,130,70,80,161,7,235,89,172,247,98,80,129,64,
    36,192,15,42,244,137,160,66,63,177,122,177,50,224,199,13,
    114,131,196,143,20,12,65,164,0,42,195,126,164,128,45,240,
    173,65,172,140,250,33,1,182,192,247,215,227,27,96,25,14,
    149,113,127,25,206,22,248,108,189,13,149,9,152,113,160,205,
    113,54,136,127,168,237,64,55,70,140,30,14,210,5,62,124,
    129,124,113,209,129,226,178,180,22,1,233,57,81,50,203,115,
    150,121,114,1,216,0,175,130,152,162,186,0,214,31,6,6,
    211,75,91,9,27,126,61,34,0,46,75,107,144,219,217,89,
    1,48,156,47,150,93,64,181,241,232,34,157,42,211,242,28,
    91,141,45,22,171,83,243,37,115,1,123,52,227,3,191,40,
    128,123,40,67,205,230,223,221,3,165,61,85,176,43,76,37,
    215,10,76,28,167,44,202,150,43,212,154,218,55,133,250,124,
    170,232,78,153,115,236,168,89,240,248,116,137,206,102,244,15,
    77,103,193,69,87,240,210,179,80,85,50,34,121,182,182,44,
    50,135,183,72,162,166,49,34,44,112,113,171,33,35,136,175,
    61,152,216,147,68,129,250,134,206,47,7,82,33,174,30,72,
    69,47,239,220,37,77,184,95,97,145,192,213,215,112,108,202,
    231,209,141,86,136,17,212,144,221,232,39,190,216,10,108,76,
    88,128,3,168,220,62,196,209,14,197,209,22,43,5,39,100,
    192,225,140,138,244,16,195,200,1,99,39,52,188,202,16,91,
    52,140,216,56,169,160,143,17,48,240,173,73,3,30,75,0,
    204,150,144,102,165,64,67,160,143,168,0,13,19,73,240,190,
    44,13,60,65,146,233,51,53,179,164,26,53,204,96,100,252,
    155,9,115,255,38,102,94,130,100,20,236,106,93,221,196,67,
    161,0,150,239,81,14,180,66,47,123,138,129,2,203,247,202,
    1,77,16,221,60,66,205,231,21,130,245,131,31,200,246,121,
    229,128,171,14,93,46,218,53,87,49,96,193,246,253,210,211,
    108,52,142,217,180,150,155,212,131,18,157,6,78,186,207,250,
    131,210,176,71,146,100,131,62,195,36,67,177,122,192,32,44,
    114,254,80,58,160,43,52,45,208,192,249,247,165,65,39,206,
    194,34,91,149,69,96,43,145,16,223,19,67,222,127,152,18,
    112,183,54,151,26,112,228,253,145,52,166,100,62,159,74,135,
    99,192,130,179,254,40,33,177,160,16,192,190,63,9,246,11,
    73,218,47,17,118,115,119,223,169,14,54,178,254,24,137,107,
    236,136,195,126,165,225,176,227,101,85,27,142,34,187,215,124,
    254,227,13,24,211,120,159,65,88,7,23,225,124,213,94,117,
    236,42,117,188,58,143,117,64,8,209,216,15,197,238,136,130,
    176,104,137,122,52,31,237,73,175,159,4,97,82,139,178,5,
    146,93,207,231,253,126,96,39,228,243,232,149,27,119,67,113,
    47,20,167,160,56,3,197,253,80,156,135,226,29,80,60,4,
    197,69,40,30,129,98,22,10,8,24,25,143,67,241,36,20,
    16,68,48,158,142,116,145,204,122,225,48,59,107,30,78,135,
    238,232,208,38,244,172,222,161,101,181,172,158,205,244,176,191,
    236,74,127,58,250,17,231,43,243,118,60,106,97,106,171,136,
    90,232,126,224,2,202,44,76,189,92,151,32,118,99,217,131,
    196,94,65,92,143,101,31,18,251,5,113,0,203,65,36,14,
    9,226,48,150,35,72,28,21,196,49,44,55,32,113,92,16,
    55,98,57,129,196,73,65,220,132,229,102,36,110,193,250,20,
    62,87,192,163,43,219,68,116,101,59,68,84,160,178,3,99,
    44,4,158,25,240,31,220,184,69,4,88,118,137,0,203,180,
    8,176,236,22,1,150,61,34,192,178,23,114,255,112,149,125,
    224,198,64,182,159,195,152,193,242,0,194,56,8,49,147,62,
    34,25,51,81,98,205,112,81,252,167,68,101,168,196,56,170,
    28,151,113,7,241,163,171,191,250,48,9,106,89,227,152,138,
    123,4,45,245,25,242,6,58,118,13,130,34,95,136,141,255,
    205,217,212,30,95,149,64,232,244,130,89,14,59,183,74,146,
    44,152,104,224,172,191,72,100,29,128,129,16,216,89,90,53,
    209,4,132,130,34,152,98,119,105,85,26,117,15,71,29,92,
    227,75,9,35,125,19,235,159,46,129,187,176,72,11,151,20,
    154,90,124,42,1,120,126,89,14,224,122,1,112,206,116,233,
    41,197,32,33,47,21,240,253,138,28,208,110,1,148,86,204,
    185,146,194,232,29,46,13,56,211,175,202,65,12,102,20,91,
    139,50,241,81,137,17,38,147,207,245,85,69,18,233,80,200,
    250,168,149,72,228,249,53,57,128,89,1,240,57,234,216,138,
    67,48,192,242,27,68,86,25,5,93,184,92,116,139,94,83,
    110,21,105,76,55,169,232,78,228,245,205,6,222,105,200,156,
    53,28,105,227,55,160,88,209,117,238,21,48,241,49,150,5,
    234,53,81,216,80,161,166,199,180,190,175,92,125,173,55,235,
    57,197,10,102,199,87,62,200,78,247,192,29,106,162,55,46,
    2,207,65,69,47,139,20,56,143,7,115,221,2,62,209,36,
    166,76,161,136,143,180,193,25,9,100,56,141,39,204,125,10,
    94,92,52,114,232,51,120,98,51,13,206,234,224,103,177,175,
    13,51,82,180,242,5,187,86,241,240,164,56,21,78,131,197,
    140,32,52,180,15,163,192,41,225,239,208,88,199,198,184,224,
    227,157,197,250,195,92,160,15,179,158,41,187,120,198,10,135,
    92,191,127,34,84,255,49,50,92,245,192,57,70,30,6,245,
    221,80,128,227,111,192,218,193,88,132,98,9,138,18,20,21,
    40,170,80,64,72,223,168,9,133,196,31,20,226,185,208,198,
    220,42,81,215,197,81,192,74,96,4,192,51,227,112,155,72,
    0,19,36,18,191,169,89,4,153,236,172,79,193,233,7,72,
    99,17,52,210,244,199,23,69,205,203,160,190,85,206,92,227,
    69,226,251,188,120,51,0,229,96,80,59,36,125,71,192,253,
    95,26,179,21,245,196,108,193,44,153,78,242,146,13,70,245,
    102,151,108,254,10,168,83,172,128,214,137,21,80,150,208,46,
    88,181,65,150,153,47,133,122,97,193,2,35,222,34,11,150,
    215,73,107,46,88,2,92,191,198,11,150,127,39,82,54,185,
    63,34,201,169,228,79,127,36,135,112,32,138,144,57,34,236,
    234,138,157,68,206,244,199,74,187,210,179,61,179,164,216,11,
    67,158,63,73,128,185,214,75,212,159,138,153,53,13,230,228,
    70,28,23,140,217,65,224,213,120,57,50,180,34,4,24,116,
    92,195,36,170,177,70,16,163,134,7,127,112,86,251,214,136,
    91,30,61,203,53,249,59,41,204,227,100,77,14,96,211,11,
    190,249,58,127,189,208,249,125,66,231,247,11,85,63,32,162,
    94,131,120,226,16,62,32,212,229,63,32,196,172,0,248,19,
    45,98,5,126,65,90,211,10,4,184,126,141,173,192,47,19,
    116,194,77,234,216,198,44,80,190,16,71,63,22,48,73,64,
    236,139,66,116,139,207,169,92,133,227,51,250,140,101,70,14,
    100,127,20,100,26,214,180,67,14,97,211,72,171,182,166,168,
    225,179,74,59,81,177,29,69,243,211,147,128,112,173,77,104,
    159,38,76,40,44,32,111,120,237,63,214,52,15,106,115,176,
    228,231,75,187,149,142,137,69,175,32,36,52,132,53,251,74,
    76,248,177,16,19,36,240,197,233,39,72,204,182,135,205,122,
    131,145,106,179,254,10,59,235,231,112,250,6,18,89,100,54,
    22,149,96,222,1,240,233,162,235,157,54,61,51,110,220,31,
    187,145,204,26,255,85,49,152,239,14,178,212,137,229,58,52,
    223,89,65,236,194,178,27,137,61,130,216,139,229,122,36,246,
    9,98,63,150,3,72,28,20,196,33,44,135,145,56,34,136,
    163,88,142,33,113,131,32,142,99,185,17,137,19,130,56,137,
    229,38,36,110,22,196,45,88,78,33,113,171,32,110,195,114,
    59,18,119,8,226,78,44,111,65,226,46,65,156,198,114,55,
    18,247,8,226,94,44,111,69,226,62,225,243,236,71,226,12,
    201,29,16,206,12,102,211,192,169,110,17,183,100,147,152,103,
    45,230,150,4,184,222,216,45,209,73,232,71,43,247,6,10,
    244,26,254,162,161,62,140,247,192,127,189,132,247,160,61,94,
    217,72,218,152,77,131,95,175,156,128,95,175,92,65,109,155,
    215,249,15,88,26,29,223,30,168,21,8,40,85,232,179,121,
    49,89,248,47,83,96,24,205,106,149,86,44,99,79,208,13,
    147,162,107,148,120,46,251,160,27,196,175,10,50,218,176,214,
    251,171,83,201,135,3,149,188,98,56,182,73,27,15,132,244,
    11,254,170,47,8,59,70,169,16,145,133,135,60,209,184,5,
    135,202,69,30,20,141,17,65,215,130,171,200,234,77,7,205,
    203,9,103,48,98,112,134,121,25,3,187,193,193,185,90,225,
    18,245,208,95,10,162,190,137,7,93,63,248,25,162,225,115,
    169,17,96,204,163,65,46,137,7,128,67,39,71,13,223,155,
    26,49,144,201,103,251,7,130,179,249,119,12,171,6,141,106,
    21,139,58,243,37,251,217,32,226,154,112,72,4,146,3,10,
    62,99,18,52,180,151,67,44,146,143,8,27,39,8,209,145,
    44,44,211,66,124,124,145,42,66,223,240,37,58,56,110,173,
    28,31,49,32,138,17,99,245,104,135,184,207,212,76,199,183,
    232,137,7,68,79,249,223,163,112,74,182,31,231,141,83,5,
    72,248,210,196,217,44,87,75,137,151,244,15,4,151,228,223,
    113,230,162,75,238,219,249,64,109,40,182,242,159,99,103,77,
    194,172,220,65,208,202,107,241,64,114,240,167,103,59,66,22,
    63,121,57,15,207,252,168,89,206,119,138,144,108,123,35,36,
    219,66,86,239,206,22,181,122,119,222,184,213,123,211,46,198,
    143,183,192,234,226,158,192,148,221,104,128,46,98,207,120,82,
    15,52,64,88,149,52,168,65,170,143,125,105,214,3,105,120,
    251,175,177,179,238,128,91,234,33,97,111,159,205,119,184,61,
    190,202,88,121,214,191,164,108,214,223,240,19,116,190,90,24,
    16,145,189,112,248,174,179,17,190,91,215,58,26,227,76,139,
    106,140,51,111,1,141,113,191,92,196,100,36,54,7,210,9,
    225,93,144,131,57,20,135,169,54,140,135,209,136,71,90,64,
    251,62,42,27,219,137,235,224,149,142,193,202,226,59,112,242,
    68,66,239,134,131,67,215,59,14,76,62,179,50,147,70,112,
    232,122,199,129,9,108,59,211,8,12,133,159,241,142,158,165,
    218,62,124,151,157,117,26,58,29,188,215,200,35,7,186,31,
    9,234,9,144,31,178,146,173,196,63,147,55,219,115,214,190,
    145,217,40,140,204,4,30,157,132,77,221,124,35,179,185,197,
    140,204,147,45,106,100,158,124,11,24,153,167,84,105,111,62,
    129,210,49,49,84,14,228,96,51,200,52,178,7,139,45,96,
    97,46,5,22,6,131,239,55,106,97,198,155,251,39,98,34,
    86,62,26,24,136,164,38,13,243,176,242,81,97,28,66,22,
    196,111,82,95,201,76,197,143,195,170,3,66,133,13,82,124,
    192,47,7,143,25,54,145,1,193,145,68,25,169,39,159,82,
    199,235,193,176,213,67,30,150,127,48,136,5,37,31,129,139,
    125,157,8,91,248,178,152,63,17,91,200,219,171,182,132,240,
    204,211,19,32,28,176,111,92,194,195,119,194,30,66,168,239,
    172,237,148,107,37,51,217,28,194,143,167,86,253,12,27,197,
    189,223,194,155,165,48,59,4,1,164,22,177,67,213,22,181,
    67,213,183,128,29,114,228,84,124,95,84,112,243,12,183,194,
    7,1,48,34,235,57,203,45,160,226,235,129,138,7,223,245,
    70,84,252,47,130,78,2,101,230,43,155,80,95,169,214,53,
    63,99,103,217,77,81,25,29,181,11,238,198,84,53,29,151,
    158,91,49,251,10,207,53,43,207,190,250,10,73,100,95,225,
    137,170,118,255,137,170,214,10,208,190,167,69,53,208,123,110,
    92,3,173,65,90,18,228,24,210,146,81,89,226,61,240,23,
    80,164,149,150,188,214,66,105,201,15,6,138,96,96,37,69,
    144,16,72,136,118,89,190,80,54,171,65,32,33,233,88,144,
    194,98,95,188,141,241,70,225,28,209,117,14,131,231,243,79,
    66,55,69,126,228,29,29,66,197,170,8,30,128,187,10,253,
    180,158,132,18,69,60,37,20,85,70,111,241,196,208,139,45,
    170,119,94,188,113,189,243,166,245,124,62,220,2,94,197,71,
    86,151,24,138,106,141,120,104,50,233,88,16,154,76,212,2,
    105,56,36,58,187,185,223,75,76,19,193,12,188,88,243,170,
    53,47,62,247,23,87,51,247,175,187,45,36,84,66,191,214,
    241,31,225,94,15,170,160,171,117,84,193,203,45,170,10,94,
    126,11,168,130,87,90,64,21,124,50,24,255,85,44,195,122,
    130,9,149,159,163,11,197,138,226,95,186,32,207,79,201,173,
    20,187,26,16,105,197,82,188,72,100,28,63,35,7,47,212,
    131,203,102,169,168,18,160,191,163,124,209,250,108,19,68,157,
    220,236,78,71,97,148,209,31,69,43,217,223,8,127,206,250,
    231,13,148,184,15,203,77,253,16,218,55,44,28,99,232,247,
    180,235,24,83,163,11,10,120,218,27,175,163,198,200,192,19,
    248,127,12,136,97,113,18,221,227,7,254,240,17,180,18,51,
    112,248,10,143,184,181,1,39,224,6,151,189,190,205,185,238,
    111,67,125,35,211,37,140,76,183,248,121,80,143,216,29,167,
    87,236,142,179,94,236,142,211,39,118,199,233,23,219,15,15,
    136,237,135,7,197,246,195,67,98,251,225,97,177,253,240,136,
    216,126,120,84,108,63,60,38,182,31,222,32,182,31,30,247,
    95,247,3,57,169,113,63,39,197,223,202,147,155,36,214,4,
    86,54,249,175,223,201,109,38,214,38,172,108,241,223,179,3,
    111,28,218,130,149,173,254,11,117,96,67,160,173,98,67,160,
    109,98,67,160,237,98,67,160,29,98,67,160,157,98,67,160,
    91,196,134,64,187,196,134,64,211,98,67,160,221,141,13,129,
    224,197,64,251,253,215,220,228,102,192,44,239,37,45,99,150,
    191,208,162,102,57,192,245,198,102,121,21,89,155,96,198,224,
    46,99,184,9,140,58,125,8,25,80,193,246,175,174,103,121,
    187,130,14,190,214,100,127,7,52,165,246,23,182,28,251,146,
    156,253,24,137,244,90,30,54,72,135,93,48,148,110,24,202,
    95,69,17,112,254,178,28,226,193,38,196,115,182,93,74,97,
    127,83,206,246,43,114,88,7,154,176,150,104,69,41,84,190,
    159,29,114,253,106,8,105,248,165,4,136,116,136,68,141,52,
    127,193,64,242,142,132,97,188,108,97,230,150,138,5,216,112,
    179,177,165,184,134,243,0,202,37,233,27,232,33,254,91,74,
    252,203,188,42,237,106,52,223,130,219,184,5,181,78,135,143,
    189,193,255,107,105,140,0,115,76,98,35,96,140,131,47,178,
    81,83,118,15,141,139,124,67,186,255,155,21,10,227,205,148,
    102,89,125,247,119,11,232,156,253,55,149,35,103,82,153,38,
    242,128,253,183,148,35,119,211,69,30,176,255,182,156,118,236,
    141,192,174,218,85,197,171,43,198,241,181,16,66,225,4,221,
    220,110,78,253,17,144,252,119,76,138,119,31,198,36,196,119,
    228,250,178,47,2,147,150,171,158,202,141,212,113,203,119,224,
    249,61,57,148,235,35,40,83,120,110,243,251,210,227,221,4,
    241,89,179,26,26,109,21,110,48,255,153,56,227,251,3,149,
    35,174,56,124,130,11,223,215,85,78,111,165,193,19,92,146,
    255,80,14,94,116,98,59,170,227,79,184,35,12,50,253,145,
    202,57,227,168,13,66,129,44,2,203,31,171,148,197,66,137,
    154,42,23,94,252,21,155,140,231,79,228,80,142,69,80,46,
    192,27,169,74,37,187,160,120,153,8,56,34,188,127,170,114,
    189,195,108,90,126,206,84,186,13,39,172,119,4,219,159,73,
    251,34,77,134,200,49,93,170,218,11,65,107,4,140,255,187,
    9,173,120,141,32,162,61,221,64,203,160,242,119,216,134,31,
    39,208,99,143,19,220,141,143,19,232,111,244,56,1,12,25,
    60,78,16,220,101,243,147,4,77,225,126,101,143,19,252,143,
    70,196,227,4,125,226,113,130,213,25,185,161,168,76,213,220,
    69,46,84,106,253,26,190,33,163,96,158,209,21,170,152,121,
    199,174,168,222,157,20,121,118,200,161,140,42,107,197,19,21,
    148,53,176,204,134,48,174,122,161,217,228,215,186,110,113,161,
    18,146,220,147,202,132,0,127,254,143,236,123,116,89,229,210,
    100,179,41,122,144,138,181,139,191,149,27,227,220,167,24,111,
    177,226,82,71,117,238,3,241,114,206,131,114,178,219,164,20,
    152,69,80,61,203,80,31,8,190,35,33,180,171,211,98,195,
    36,166,197,56,98,197,106,12,84,110,131,251,6,105,220,205,
    82,92,182,151,149,191,90,140,75,49,112,158,144,147,138,40,
    216,90,165,248,140,202,221,168,16,39,103,186,89,14,103,52,
    212,234,208,101,234,184,170,183,216,246,185,110,85,105,35,92,
    219,81,253,38,49,96,185,67,90,74,163,6,183,76,157,5,
    229,66,10,86,23,25,239,74,232,81,77,160,93,163,7,25,
    246,232,126,102,106,26,118,28,126,131,7,36,33,145,131,233,
    23,99,8,106,35,80,140,65,49,1,5,236,202,99,108,129,
    98,43,20,219,161,216,9,197,46,45,112,20,161,246,9,168,
    193,222,53,161,60,243,65,40,110,131,226,8,20,71,161,128,
    253,14,140,227,88,192,25,39,161,6,191,205,55,238,131,2,
    126,178,104,156,133,226,28,20,15,64,241,32,20,240,75,91,
    227,97,40,12,40,224,247,164,198,59,181,240,196,246,211,222,
    13,79,86,241,163,84,176,61,217,231,193,107,125,148,248,15,
    84,234,9,27,54,95,255,175,115,229,247,221,100,53,116,198,
    151,241,151,48,121,203,174,205,149,104,60,87,110,105,111,231,
    202,85,231,202,233,46,72,254,64,102,124,167,159,25,55,102,
    167,225,133,236,45,146,254,158,17,147,185,197,210,223,1,46,
    229,233,239,209,230,137,144,66,10,28,213,222,161,235,233,234,
    53,77,125,31,150,179,195,227,177,30,75,37,253,141,22,226,
    168,28,212,248,224,170,207,123,163,17,59,38,135,115,36,1,
    167,226,156,55,154,217,187,84,172,128,55,38,128,77,74,120,
    171,75,183,162,119,112,143,244,170,50,9,120,106,105,110,116,
    102,78,165,213,223,233,166,183,209,7,59,43,221,223,73,138,
    34,173,180,54,122,140,231,83,129,156,86,62,27,253,219,7,
    83,129,156,86,34,27,189,241,139,242,11,206,40,94,165,25,
    108,190,86,80,18,35,137,162,76,47,133,253,152,92,135,14,
    197,160,42,78,99,227,162,235,9,57,144,131,49,144,41,100,
    177,159,146,30,246,4,152,234,51,217,184,116,125,151,234,65,
    79,35,147,109,170,158,234,234,179,217,150,28,196,248,60,87,
    157,209,198,200,196,130,234,217,163,54,159,141,129,147,37,213,
    18,169,56,159,141,129,157,178,28,200,137,24,200,148,210,217,
    24,128,170,170,94,189,168,207,98,99,140,204,149,118,66,18,
    108,80,10,25,108,140,229,45,55,129,93,155,228,53,168,50,
    72,94,71,110,114,173,18,216,117,157,40,74,96,143,197,69,
    42,165,36,54,70,91,127,75,181,74,81,156,89,195,104,240,
    53,213,186,89,241,12,133,96,245,251,84,44,36,19,124,218,
    212,210,215,24,93,255,128,180,94,73,48,207,105,36,175,49,
    13,240,66,10,104,83,73,93,99,190,226,69,105,95,55,30,
    116,130,247,204,58,145,156,234,73,5,112,253,20,32,178,254,
    3,213,22,177,96,86,205,66,81,233,67,187,240,92,151,96,
    251,82,2,222,32,104,187,70,9,182,63,210,69,130,13,126,
    39,247,230,77,176,93,134,226,57,45,60,89,252,60,90,212,
    168,42,206,165,193,126,108,251,161,11,31,32,202,114,105,77,
    25,52,23,95,209,251,118,6,237,237,12,26,33,175,136,217,
    218,98,25,180,0,87,154,25,52,62,17,210,202,160,125,226,
    122,202,120,77,51,104,127,34,103,198,66,33,91,191,199,210,
    203,160,125,90,153,197,13,160,166,146,65,251,51,57,156,35,
    9,56,211,200,160,125,78,133,35,190,49,1,236,26,100,208,
    254,82,218,193,77,2,158,110,6,237,243,105,245,247,26,100,
    208,190,40,221,223,73,138,34,213,12,218,151,82,129,156,106,
    6,237,203,169,64,78,53,131,246,21,57,93,55,16,195,171,
    62,131,246,85,233,229,229,112,12,101,122,25,180,87,229,58,
    116,40,6,53,141,12,218,215,228,64,14,198,64,166,144,65,
    251,134,244,176,39,192,76,41,131,246,77,213,131,158,70,6,
    237,91,170,167,186,250,12,218,183,229,32,198,231,121,42,25,
    180,215,84,207,158,20,50,104,223,81,45,145,105,100,208,190,
    39,7,114,34,6,50,205,12,218,247,85,175,94,82,202,160,
    253,64,218,9,73,176,65,105,101,208,94,111,2,251,43,201,
    160,241,155,92,171,12,218,15,245,20,50,104,66,164,210,204,
    160,253,135,106,149,146,70,6,237,63,85,235,230,20,50,104,
    255,165,98,33,153,224,211,166,155,65,251,185,180,94,73,48,
    207,169,101,208,126,153,2,218,244,50,104,255,43,237,235,198,
    131,78,233,100,208,48,117,2,216,148,154,66,245,169,51,204,
    238,100,18,112,6,81,218,53,74,153,117,100,222,34,41,51,
    223,138,42,78,153,49,121,39,31,211,213,167,204,250,26,50,
    40,222,89,253,118,210,236,237,164,25,33,221,98,190,182,88,
    210,44,192,165,60,105,182,33,62,21,210,74,155,173,191,158,
    66,94,211,180,89,191,156,9,11,45,61,131,62,75,47,113,
    54,36,7,54,105,128,83,74,157,141,202,33,29,75,68,154,
    70,242,108,60,4,116,213,62,248,100,34,220,53,72,159,77,
    54,117,243,205,123,183,201,208,211,77,160,109,73,175,207,215,
    32,133,182,77,186,207,147,149,70,170,73,180,157,41,129,78,
    53,141,54,157,18,232,84,19,105,123,229,52,223,80,2,98,
    245,169,180,253,33,144,171,91,103,142,38,224,76,47,153,118,
    80,174,83,71,18,192,166,145,78,59,44,7,115,56,1,102,
    10,9,181,163,210,131,159,8,52,165,148,218,49,245,67,159,
    70,82,237,46,245,211,94,125,90,237,30,101,241,154,0,100,
    42,137,181,83,234,231,81,10,169,181,179,234,37,51,141,228,
    218,121,57,152,155,18,96,166,153,94,123,80,253,26,39,165,
    4,219,69,105,247,36,209,46,165,149,98,51,154,224,174,77,
    138,13,20,91,40,197,38,110,115,173,146,108,143,101,84,37,
    217,66,79,100,53,4,43,205,52,219,211,234,213,75,26,137,
    182,188,122,93,157,66,170,109,78,197,146,51,209,231,77,55,
    217,70,165,117,76,162,209,78,45,221,182,152,10,222,244,18,
    110,151,164,125,225,164,80,85,138,41,183,138,122,243,152,82,
    210,237,153,22,72,186,121,191,158,73,55,152,35,209,164,91,
    96,87,21,167,221,62,206,174,217,149,81,158,118,11,82,108,
    129,64,116,5,162,219,156,224,193,59,134,151,27,21,43,69,
    111,182,88,158,5,108,106,238,14,94,180,85,151,214,0,235,
    124,108,143,210,203,92,71,33,101,190,88,162,21,179,76,141,
    171,42,144,254,53,187,232,213,16,210,155,237,63,8,132,57,
    108,165,230,122,212,121,24,47,128,221,120,206,172,88,37,234,
    40,234,206,87,217,85,223,219,4,82,232,167,251,99,250,233,
    133,36,156,176,161,174,91,88,164,22,192,59,179,76,133,187,
    162,68,225,255,13,99,245,59,114,250,19,4,162,74,157,162,
    109,21,11,0,241,116,173,204,99,115,184,251,49,63,34,141,
    243,111,25,195,15,72,12,54,76,150,90,213,50,61,138,61,
    168,104,116,191,206,46,243,33,9,84,224,211,87,29,187,64,
    93,215,96,246,209,123,164,70,107,84,13,180,191,99,215,250,
    176,4,180,254,6,52,24,80,133,200,224,37,108,47,173,30,
    153,81,34,170,52,57,112,250,168,68,31,193,47,230,153,66,
    155,43,81,75,13,160,191,103,87,120,69,2,16,236,64,143,
    204,30,100,90,77,13,164,127,96,215,248,100,3,18,122,245,
    69,168,23,113,103,254,198,53,46,18,238,91,16,183,238,26,
    64,49,250,72,216,28,48,97,98,186,192,171,163,159,129,72,
    47,48,83,112,198,113,108,199,216,6,45,183,67,1,79,59,
    24,187,136,112,66,96,133,105,204,136,19,242,108,213,140,47,
    34,199,247,142,27,183,65,113,152,248,170,124,150,193,126,184,
    126,222,79,206,231,225,46,132,118,55,76,49,217,206,243,183,
    94,53,14,225,142,226,133,101,147,87,42,118,133,98,5,108,
    23,14,175,85,116,171,37,179,110,188,44,238,174,106,205,227,
    255,11,236,255,109,188,129,135,138,174,98,67,126,27,55,253,
    102,108,204,10,158,206,248,149,138,140,39,140,91,94,248,192,
    150,241,34,32,255,8,241,93,229,217,130,89,50,157,24,52,
    227,21,209,224,157,232,208,196,177,131,207,115,154,46,23,77,
    175,104,87,240,16,190,188,157,93,27,187,43,56,132,183,14,
    238,80,180,77,155,79,197,195,231,18,15,3,213,248,28,241,
    215,206,161,192,118,8,230,107,225,195,241,187,248,174,24,32,
    126,23,201,141,94,39,126,56,129,55,58,100,197,155,252,140,
    248,190,250,89,219,41,215,74,102,188,197,47,3,81,168,154,
    142,75,207,37,162,213,181,88,163,56,39,120,125,53,134,105,
    252,183,122,71,14,194,174,223,77,47,178,140,28,135,157,12,
    18,118,3,141,180,185,210,212,38,248,13,78,168,13,248,153,
    137,41,221,72,43,240,215,208,21,66,87,3,237,57,26,75,
    180,77,104,5,80,225,162,174,67,253,130,51,90,137,110,192,
    105,125,162,108,91,181,18,61,9,239,78,116,255,149,21,253,
    90,143,150,237,203,50,175,184,71,203,176,191,46,173,87,107,
    203,244,244,103,219,122,186,179,109,217,206,140,214,129,180,33,
    189,171,45,219,61,122,44,171,117,233,163,251,88,9,239,7,
    79,250,3,239,90,31,29,192,118,227,172,204,244,50,154,255,
    79,67,138,62,154,197,146,183,25,198,178,27,203,245,161,163,
    156,254,28,150,151,154,202,12,191,74,227,175,71,111,166,136,
    191,255,7,159,140,125,14,
};

EmbeddedPython embedded_m5_internal_stats(
    "m5/internal/stats.py",
    "/home/faculty/gem5/build/ARM/python/swig/stats.py",
    "m5.internal.stats",
    data_m5_internal_stats,
    7895,
    58782);

} // anonymous namespace
