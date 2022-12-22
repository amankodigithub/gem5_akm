#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DMA_Controller[] = {
    120,156,189,89,95,115,219,198,17,223,3,72,74,164,36,75,
    178,254,217,150,28,209,78,109,51,110,34,197,110,92,119,38,
    174,91,197,78,58,205,140,21,7,116,199,142,146,41,10,17,
    71,10,20,8,176,192,209,50,51,210,180,19,121,218,116,38,
    143,237,83,159,251,208,47,208,207,209,111,212,238,238,1,32,
    36,145,169,58,53,43,137,231,229,98,177,183,187,247,219,189,
    189,115,3,146,159,34,126,126,94,5,136,3,3,192,197,63,
    1,62,64,71,192,142,0,33,5,184,139,176,95,132,232,3,
    112,139,240,26,96,199,0,105,192,49,18,38,124,105,64,48,
    205,239,148,192,55,153,35,160,95,1,89,128,157,34,60,15,
    230,161,32,75,176,95,129,232,55,32,132,8,4,188,112,39,
    192,157,132,215,168,29,137,50,43,156,4,98,86,152,89,6,
    119,138,153,21,112,167,153,152,130,254,28,200,105,216,153,33,
    177,157,11,168,246,54,170,157,101,181,255,36,181,46,62,89,
    2,247,2,137,163,93,95,144,100,129,36,121,190,89,214,50,
    151,90,57,15,59,23,83,122,33,71,47,230,232,165,28,189,
    156,163,87,114,244,165,28,125,57,71,95,201,209,171,57,122,
    45,71,95,205,209,111,229,232,245,28,93,205,209,215,114,244,
    245,28,253,118,142,254,65,142,190,145,163,111,230,232,91,57,
    186,150,163,223,201,209,183,153,198,136,95,132,246,15,161,253,
    46,180,223,131,38,130,96,62,139,238,6,72,19,218,155,176,
    179,9,18,255,54,224,24,113,226,94,204,189,241,62,191,177,
    144,189,113,135,223,184,11,59,119,65,226,223,29,253,70,9,
    234,181,101,196,158,247,47,252,169,9,164,212,52,14,47,101,
    20,123,97,96,123,65,51,244,12,122,94,162,129,144,218,160,
    97,34,129,236,35,130,236,223,129,241,234,26,9,100,143,0,
    21,11,242,197,55,224,136,137,35,3,250,53,56,20,208,46,
    128,107,194,33,78,83,36,3,90,2,142,13,248,202,36,129,
    35,28,11,8,172,183,160,160,52,94,219,12,44,173,105,2,
    142,138,112,88,132,250,139,67,131,24,251,101,136,254,6,95,
    175,177,210,73,86,106,192,33,142,5,56,46,192,81,9,158,
    163,16,178,218,101,114,95,188,56,68,79,145,83,175,21,208,
    218,237,156,187,228,138,235,69,129,211,145,106,9,105,187,235,
    68,78,199,126,252,100,203,126,20,6,42,10,125,95,70,181,
    74,42,26,198,27,93,71,237,89,252,174,73,65,233,116,21,
    235,12,3,169,166,144,104,122,129,107,119,66,183,231,75,53,
    73,10,237,166,231,75,219,230,135,191,236,116,195,72,125,28,
    69,97,100,81,92,153,233,135,78,246,6,69,181,225,135,177,
    172,209,108,60,141,69,234,21,73,55,187,172,145,12,96,123,
    233,101,87,198,141,200,235,42,92,46,173,145,164,73,91,141,
    22,138,135,248,23,56,108,238,133,29,185,217,116,26,61,95,
    245,55,91,178,115,111,115,183,231,249,238,230,150,245,100,179,
    219,87,123,97,176,137,60,47,80,18,131,225,111,14,11,195,
    6,202,93,36,133,7,94,203,246,216,21,123,79,250,93,25,
    205,16,247,10,77,38,230,196,180,40,9,83,212,196,12,82,
    69,252,152,98,205,152,18,219,30,57,211,32,7,9,76,133,
    60,124,104,77,5,236,27,16,173,17,56,218,248,39,104,53,
    17,34,117,122,102,240,179,207,41,10,154,219,54,105,201,53,
    243,144,1,133,200,66,201,7,180,198,1,48,42,138,208,46,
    129,70,11,130,76,195,39,234,211,136,226,164,198,64,229,5,
    136,255,2,24,85,196,201,33,36,24,58,54,65,4,115,160,
    42,84,194,144,187,140,19,126,195,48,172,215,200,252,109,70,
    130,218,243,226,240,32,224,120,19,205,137,83,199,200,60,237,
    127,182,219,150,13,21,175,35,227,139,176,87,109,56,65,16,
    170,170,227,186,85,71,169,200,219,237,41,25,87,85,88,189,
    17,215,104,9,173,249,20,76,153,190,126,55,5,15,45,52,
    130,71,127,113,189,134,194,47,11,252,133,87,33,150,10,129,
    176,23,186,49,242,73,69,75,42,139,140,84,20,228,144,13,
    97,156,216,36,74,211,163,220,5,252,190,149,90,194,96,172,
    149,82,232,196,210,111,170,10,163,208,137,99,155,45,33,62,
    3,142,20,191,116,252,158,100,237,49,234,67,131,136,212,54,
    140,9,114,151,200,252,212,91,118,33,8,3,183,143,22,121,
    141,91,52,217,37,6,222,52,67,111,9,97,55,129,99,9,
    255,45,137,101,163,81,72,192,86,74,1,71,245,78,1,47,
    183,72,86,28,193,119,140,181,165,102,112,113,96,47,56,243,
    174,19,69,47,91,107,52,92,165,225,45,26,214,83,71,223,
    188,183,51,167,189,189,79,51,24,236,34,59,67,139,96,166,
    206,184,39,178,231,242,32,123,176,234,213,41,11,12,202,149,
    65,22,20,168,66,70,15,105,68,81,206,47,19,226,103,84,
    143,41,91,88,25,37,6,66,156,168,1,240,57,52,214,28,
    185,60,153,98,214,34,32,230,209,216,202,161,209,162,85,97,
    40,90,151,211,74,103,147,132,6,161,181,74,170,138,67,98,
    91,165,225,218,248,2,60,128,83,235,12,156,62,164,201,230,
    18,56,205,48,140,42,248,153,51,26,102,18,245,108,219,91,
    56,5,35,194,80,97,8,134,110,18,101,158,245,115,236,240,
    73,188,251,36,7,31,50,200,200,59,177,141,68,127,133,108,
    207,3,103,5,119,237,231,193,10,110,196,6,111,196,239,243,
    70,204,155,57,183,115,186,224,154,92,115,53,81,164,32,52,
    77,88,78,54,216,184,140,99,55,10,95,245,171,97,179,170,
    216,75,170,143,15,110,196,27,55,226,15,177,242,85,31,114,
    205,209,181,79,87,183,72,118,169,58,209,171,31,191,106,72,
    222,211,248,155,109,235,98,100,115,97,178,147,189,18,49,68,
    27,54,7,156,99,203,101,57,86,17,85,227,49,69,183,146,
    69,151,140,253,148,212,87,56,180,166,88,65,188,84,4,219,
    96,235,186,203,173,18,63,197,207,71,20,110,242,83,2,53,
    245,86,93,91,200,198,147,27,214,187,39,48,241,198,77,183,
    54,81,215,175,82,44,148,6,88,160,143,153,2,250,143,192,
    109,163,128,63,0,173,54,46,106,2,232,12,255,180,188,11,
    36,254,107,96,228,15,217,183,185,110,212,105,175,102,9,44,
    39,241,125,22,213,219,248,167,240,109,46,109,210,205,214,76,
    26,195,252,102,91,200,106,14,195,228,92,27,106,225,100,113,
    162,229,216,115,98,18,211,21,103,144,137,131,66,158,53,115,
    88,113,223,60,102,38,181,98,155,108,248,106,128,24,218,174,
    86,197,130,145,195,193,29,26,238,102,16,16,41,239,141,154,
    179,14,163,119,83,91,87,239,47,105,206,2,91,57,59,193,
    221,194,73,53,25,176,139,41,176,239,102,192,150,188,213,188,
    230,35,1,141,6,173,235,177,33,240,92,138,221,20,29,3,
    11,32,139,176,83,162,20,224,110,87,36,25,34,210,162,68,
    37,236,196,62,198,145,216,214,49,202,150,86,175,26,13,175,
    198,148,236,180,112,15,124,167,179,235,58,15,127,79,202,105,
    134,70,154,51,70,106,238,92,222,92,194,187,24,101,49,127,
    189,151,154,253,114,76,137,254,99,212,149,153,203,176,118,195,
    6,103,247,179,61,89,237,200,206,46,158,238,246,188,110,181,
    233,59,45,142,190,153,184,243,89,234,142,226,229,59,189,251,
    199,183,105,12,171,141,48,192,42,219,107,168,48,170,186,18,
    207,59,210,173,190,87,229,18,93,245,226,170,179,139,79,157,
    134,210,248,61,153,116,220,74,58,81,43,230,174,113,255,128,
    200,49,174,158,141,39,88,15,59,230,111,32,219,3,245,185,
    42,171,184,140,110,157,14,184,93,225,73,70,245,117,193,161,
    78,192,218,160,225,29,24,111,97,254,0,117,253,142,148,82,
    72,74,98,213,40,27,106,241,76,206,61,165,183,227,179,153,
    247,143,243,100,158,190,11,74,242,175,68,146,114,130,142,205,
    52,150,169,64,239,84,82,230,20,143,211,204,156,73,153,23,
    120,156,101,230,92,202,156,231,241,34,51,23,82,230,34,143,
    75,204,92,78,111,171,86,152,121,9,118,46,211,245,6,113,
    174,80,246,79,252,175,217,207,185,52,198,44,250,211,27,77,
    122,235,254,255,201,90,235,39,144,108,231,163,18,94,228,93,
    153,209,9,223,22,233,137,32,239,7,95,41,172,142,64,163,
    221,136,164,163,164,94,139,181,177,121,199,181,66,79,245,221,
    32,145,207,54,179,91,153,35,199,220,189,244,23,121,137,244,
    9,136,151,72,60,15,174,96,87,91,224,174,246,1,117,181,
    135,236,181,109,232,198,118,128,182,98,230,60,29,23,2,121,
    96,15,11,128,238,94,201,60,167,219,149,129,107,221,134,124,
    67,202,143,199,180,226,84,159,254,12,185,110,194,20,139,216,
    129,158,205,39,170,184,57,199,120,173,138,89,6,141,111,213,
    24,147,127,77,49,89,35,12,13,202,174,245,128,6,46,180,
    89,141,181,126,150,197,252,230,40,192,185,29,7,219,150,223,
    246,100,208,144,17,157,112,206,43,138,189,14,31,141,78,112,
    213,173,81,47,119,156,192,117,112,127,235,127,222,147,61,201,
    19,157,87,150,102,162,77,229,36,91,221,24,245,122,68,214,
    196,234,89,248,216,211,30,157,79,146,166,161,19,85,158,201,
    205,235,247,189,106,251,152,67,65,163,207,243,156,91,152,166,
    154,29,76,149,242,191,79,65,220,197,30,65,126,18,133,157,
    212,171,115,11,15,102,59,193,103,192,115,37,114,165,47,149,
    28,154,143,138,16,149,220,69,184,104,106,20,246,241,208,200,
    71,50,252,238,219,246,56,247,241,159,162,174,111,33,185,96,
    194,125,92,148,112,39,95,18,201,175,81,46,149,5,55,66,
    167,46,212,181,53,63,130,244,8,210,143,45,46,226,179,89,
    54,240,157,111,218,156,80,226,240,161,120,219,233,232,187,59,
    190,165,178,222,134,228,174,193,186,149,101,21,221,187,240,185,
    79,159,162,177,138,113,147,198,61,153,197,51,210,25,168,115,
    111,35,245,109,35,243,173,158,229,136,193,34,234,202,80,73,
    171,183,219,127,26,70,74,173,141,124,92,239,199,74,118,70,
    204,84,247,58,93,95,62,145,29,204,19,85,29,42,178,149,
    180,147,137,208,234,80,33,124,168,47,93,249,120,115,246,249,
    35,63,108,236,75,55,145,185,58,90,230,113,216,113,144,63,
    124,22,180,54,209,48,127,234,185,27,209,91,75,167,184,177,
    140,60,199,247,190,150,234,242,169,39,50,232,117,236,167,7,
    81,29,79,96,114,68,240,158,134,7,50,122,18,34,110,213,
    245,83,2,131,71,172,192,126,41,169,25,87,215,254,131,30,
    61,219,8,223,122,187,201,74,13,143,32,182,18,81,199,241,
    147,248,92,26,174,67,43,56,61,1,59,171,151,143,204,56,
    227,238,150,235,70,150,19,180,70,250,113,18,2,169,212,105,
    53,217,234,164,2,195,33,151,56,162,3,59,220,215,39,50,
    142,157,150,252,168,215,108,98,2,12,135,37,65,123,144,255,
    156,163,169,4,119,239,67,165,232,63,79,82,103,6,108,62,
    1,12,105,178,184,142,69,178,229,97,84,35,86,122,82,93,
    210,131,80,221,225,144,13,45,175,121,29,99,172,126,250,176,
    172,47,230,30,210,85,111,140,173,49,208,133,124,121,182,140,
    149,144,250,19,83,84,176,67,41,152,211,115,229,194,244,84,
    185,80,158,48,249,126,117,70,44,24,149,66,121,106,90,252,
    183,191,235,88,83,43,198,250,98,89,252,27,146,196,74,20,
};

EmbeddedPython embedded_m5_internal_param_DMA_Controller(
    "m5/internal/param_DMA_Controller.py",
    "/home/faculty/gem5/build/ARM/python/m5/internal/param_DMA_Controller.py",
    "m5.internal.param_DMA_Controller",
    data_m5_internal_param_DMA_Controller,
    2592,
    8010);

} // anonymous namespace