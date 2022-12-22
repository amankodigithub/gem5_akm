#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_ThermalModel[] = {
    120,156,205,88,221,111,27,69,16,223,189,243,71,236,36,181,
    219,134,208,20,90,142,130,224,26,74,77,91,21,132,138,74,
    68,34,42,138,154,210,75,81,132,149,202,189,222,173,99,187,
    119,62,215,123,41,41,36,79,169,132,4,47,60,241,196,11,
    79,188,32,248,155,248,15,120,224,29,102,230,246,246,174,142,
    251,1,113,17,78,60,222,219,153,157,221,153,249,237,236,236,
    121,76,125,76,248,46,89,140,201,223,160,225,195,63,103,1,
    99,33,103,77,206,56,62,27,44,48,88,104,176,166,145,60,
    155,44,48,217,77,108,21,88,80,96,97,145,53,139,192,41,
    50,193,89,155,51,191,196,30,50,182,199,216,23,205,18,243,
    203,105,239,148,238,45,51,191,146,246,86,117,239,20,243,167,
    177,87,84,88,219,96,254,140,102,84,153,63,203,132,65,226,
    135,116,239,52,243,107,108,205,174,195,154,187,127,193,199,230,
    208,138,43,64,214,186,225,245,59,61,225,197,73,215,44,144,
    229,32,242,238,10,63,223,141,100,49,147,184,217,17,195,208,
    13,86,162,208,237,246,227,233,172,103,53,242,133,151,186,10,
    197,63,66,87,205,65,67,48,244,16,184,1,252,2,62,107,
    154,204,89,179,13,96,56,5,32,242,56,146,110,216,24,68,
    95,138,97,35,78,180,181,66,80,23,156,237,116,108,148,137,
    167,128,180,90,125,55,20,173,86,92,165,7,16,216,10,240,
    145,4,30,12,4,245,123,219,219,173,142,112,125,49,180,113,
    29,25,145,239,0,105,116,162,80,52,218,174,183,21,196,15,
    26,155,34,188,216,144,67,175,145,205,174,108,185,70,147,15,
    30,208,2,207,226,104,108,148,120,137,199,181,204,98,71,200,
    174,140,163,161,182,218,76,173,190,56,214,106,81,64,136,96,
    92,56,2,65,148,88,175,140,32,1,116,236,1,104,166,208,
    45,69,116,75,229,233,110,241,208,127,233,119,25,231,60,4,
    141,29,142,83,237,37,112,76,124,188,42,151,128,86,45,250,
    220,143,186,190,37,69,140,177,146,118,46,112,214,162,213,135,
    159,115,103,172,253,157,231,79,95,170,38,126,68,125,49,26,
    233,5,146,220,238,1,251,128,46,142,113,221,98,123,16,13,
    227,86,40,226,78,228,203,247,82,135,51,195,52,54,19,215,
    254,241,33,105,87,131,173,33,185,222,237,123,226,140,5,131,
    225,81,10,223,234,246,173,79,69,112,31,126,6,98,104,173,
    187,113,108,163,43,29,114,106,9,73,25,9,130,137,144,235,
    5,174,148,201,164,206,12,118,162,224,103,238,208,13,169,245,
    113,16,129,10,68,85,54,221,68,80,133,139,186,128,163,167,
    20,170,74,70,173,20,215,51,251,150,221,129,235,117,159,7,
    180,14,255,143,161,229,160,171,157,233,9,56,24,131,185,50,
    30,69,23,114,40,242,18,55,143,129,209,213,8,114,139,36,
    24,37,136,122,44,144,28,76,138,52,161,131,110,114,106,26,
    92,153,242,137,128,6,35,183,244,36,208,56,162,45,134,2,
    166,155,56,104,142,78,20,52,167,199,131,102,12,102,158,35,
    58,110,140,65,199,251,75,242,20,252,92,135,168,187,113,55,
    234,3,66,98,17,210,211,214,80,32,44,150,69,32,187,91,
    242,159,131,33,167,103,34,96,192,136,92,27,1,67,57,158,
    201,192,64,146,251,129,176,251,239,128,0,37,11,112,155,21,
    85,178,96,165,81,166,198,180,42,87,154,51,88,170,96,99,
    86,149,42,205,67,88,166,96,163,166,106,148,102,29,1,69,
    30,122,97,162,128,250,115,4,80,174,239,235,4,106,143,102,
    84,107,49,186,211,3,96,61,42,159,30,229,246,200,209,254,
    56,105,181,211,236,209,173,55,94,62,41,150,236,71,74,167,
    241,146,251,55,194,62,41,63,90,139,197,192,126,142,123,227,
    118,110,111,148,55,191,158,251,245,202,239,95,61,76,50,39,
    148,140,91,1,109,14,75,194,42,44,27,12,145,194,139,250,
    190,60,109,181,193,95,42,140,150,212,130,30,214,130,92,129,
    144,2,249,29,110,8,136,37,85,208,0,48,249,18,219,164,
    199,22,103,125,205,50,136,245,110,202,50,114,44,147,88,55,
    82,150,153,99,17,98,101,144,178,10,57,86,145,88,223,164,
    172,34,178,8,69,184,135,87,105,155,182,188,20,38,50,169,
    50,135,10,7,50,169,64,125,10,157,76,100,135,105,208,101,
    140,26,90,125,58,249,176,25,99,66,232,184,18,170,135,161,
    51,143,161,121,17,201,49,36,11,72,16,250,73,73,77,21,
    176,8,218,7,173,162,112,121,131,104,128,62,23,33,83,133,
    55,227,53,54,51,242,165,112,160,116,33,13,7,236,38,116,
    72,143,238,11,124,251,19,122,224,108,229,214,101,182,97,176,
    93,206,118,13,220,119,61,3,249,61,147,237,24,170,141,219,
    16,101,19,70,33,19,66,198,189,57,182,174,116,21,181,46,
    147,116,153,79,213,85,202,132,72,215,109,208,245,57,233,42,
    131,174,171,108,3,20,21,216,110,145,237,130,100,33,29,53,
    197,118,138,170,189,83,74,135,27,121,189,149,76,154,244,254,
    162,245,86,181,222,114,170,183,252,236,122,167,51,105,210,91,
    224,235,219,139,164,119,6,244,190,66,86,107,225,217,71,173,
    190,183,193,215,9,134,24,152,85,155,206,141,19,41,82,8,
    105,155,34,94,94,78,174,100,132,44,117,96,82,186,207,103,
    35,2,24,221,236,116,206,33,244,17,56,210,210,44,29,165,
    19,34,97,147,230,201,229,65,66,40,77,150,38,37,58,222,
    94,102,234,2,0,216,39,232,34,230,169,3,118,70,114,51,
    112,7,84,59,83,201,167,91,231,213,32,121,80,152,227,156,
    221,126,55,142,81,195,73,130,120,213,152,231,11,252,132,162,
    11,252,148,166,117,238,21,20,208,53,216,175,178,60,216,19,
    164,247,8,223,59,132,204,182,169,161,104,34,166,19,94,218,
    85,84,82,123,134,58,128,146,152,149,116,204,200,221,248,232,
    14,6,162,239,147,7,91,3,23,194,19,199,71,144,167,78,
    57,47,10,7,81,31,122,147,196,162,156,44,233,178,75,94,
    118,176,74,114,22,145,188,53,129,180,254,26,12,250,150,169,
    122,1,124,6,190,58,250,223,123,135,178,32,94,167,157,6,
    18,180,196,57,135,134,101,102,159,153,168,217,175,195,160,239,
    247,153,109,170,195,72,31,72,43,79,50,187,109,60,213,102,
    93,143,140,26,188,240,56,131,77,109,240,27,72,222,156,128,
    173,96,8,251,33,111,235,252,88,91,207,61,179,173,251,13,
    43,104,195,142,105,195,70,204,177,39,101,206,171,48,232,71,
    28,93,210,230,120,60,103,204,149,20,175,219,203,184,248,149,
    91,151,40,203,26,202,184,187,101,54,44,171,118,143,167,182,
    36,73,24,227,168,187,238,149,25,252,175,143,90,121,124,127,
    228,50,43,117,94,147,19,49,21,93,248,83,22,185,89,94,
    227,117,174,203,38,158,70,110,46,31,57,48,0,227,151,91,
    54,213,129,39,211,252,163,170,68,158,46,249,160,107,196,226,
    239,103,28,109,208,26,109,188,141,62,243,13,136,138,28,88,
    78,130,157,183,145,96,66,162,237,73,184,165,104,147,31,104,
    162,137,92,145,240,142,177,129,163,17,171,234,138,52,125,196,
    168,148,43,243,149,18,253,21,43,165,85,155,222,251,32,9,
    47,158,213,47,68,29,156,214,209,47,74,129,53,192,183,66,
    73,81,8,79,17,73,73,135,16,65,120,161,27,225,225,212,
    251,9,159,110,105,180,142,73,24,68,7,197,7,201,91,207,
    203,152,53,36,222,253,235,188,110,84,121,189,48,95,156,159,
    157,159,93,168,253,13,200,60,141,178,
};

EmbeddedPython embedded_m5_objects_ThermalModel(
    "m5/objects/ThermalModel.py",
    "/home/faculty/gem5/src/sim/power/ThermalModel.py",
    "m5.objects.ThermalModel",
    data_m5_objects_ThermalModel,
    1706,
    5805);

} // anonymous namespace
