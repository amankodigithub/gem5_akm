#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_ArmSystem[] = {
    120,156,165,87,91,111,27,69,20,30,59,23,199,185,52,109,
    90,66,161,15,140,64,162,110,65,54,21,109,168,40,162,205,
    173,85,68,93,162,77,26,149,188,172,198,187,199,222,105,247,
    166,157,217,216,70,188,133,71,94,145,248,121,253,39,112,206,
    217,181,179,161,13,8,18,199,227,241,55,115,206,156,235,55,
    107,79,148,127,51,248,126,34,133,48,191,225,196,199,255,154,
    8,133,56,164,89,93,132,53,17,213,196,113,77,212,252,25,
    1,117,209,175,9,127,86,252,42,196,169,16,63,29,207,8,
    127,78,64,141,209,249,41,58,43,252,134,128,89,70,23,166,
    232,156,240,155,2,230,24,93,156,162,243,194,95,154,160,203,
    83,180,33,252,21,113,208,186,130,6,233,63,241,175,85,195,
    153,165,225,110,49,157,199,225,96,108,44,68,150,54,109,102,
    81,87,121,129,142,225,112,156,130,87,245,108,139,60,187,135,
    19,16,228,134,158,43,93,220,64,231,208,165,13,244,6,125,
    224,143,121,252,104,144,201,27,199,117,225,28,180,154,116,252,
    35,84,98,23,113,230,128,10,143,52,12,119,183,116,212,64,
    108,169,130,237,111,189,210,111,23,16,92,70,240,104,119,148,
    102,96,140,187,219,237,178,117,85,96,227,62,59,196,14,236,
    28,254,24,135,227,22,89,105,81,88,184,110,172,34,112,93,
    62,206,117,163,196,207,67,250,74,27,34,149,182,200,165,179,
    193,124,137,67,39,72,34,232,244,149,151,135,118,220,25,64,
    244,160,99,50,175,163,50,47,192,33,234,96,96,138,48,181,
    211,177,83,167,248,145,36,89,57,95,155,169,53,202,151,109,
    22,49,44,182,190,27,190,183,211,240,97,236,48,54,24,62,
    74,125,93,96,170,49,119,175,231,5,52,40,152,167,136,44,
    8,104,138,215,139,98,32,168,80,8,225,252,190,94,166,48,
    99,136,9,89,169,32,13,70,174,76,244,172,82,252,9,185,
    90,65,154,140,92,171,156,181,200,200,90,101,207,18,35,215,
    43,154,151,25,185,193,200,7,84,80,254,21,70,214,43,82,
    171,140,124,72,217,190,74,249,164,164,154,53,28,166,17,52,
    69,248,130,96,143,242,198,129,95,199,161,139,1,215,105,150,
    120,152,215,36,147,197,174,199,230,15,92,122,170,67,144,54,
    80,86,122,73,108,149,142,13,126,3,217,75,18,43,195,68,
    249,144,225,130,15,109,121,12,89,34,81,56,74,50,144,125,
    148,50,50,82,99,217,3,105,176,136,117,95,131,223,150,135,
    1,173,101,198,158,83,192,234,35,101,189,0,10,237,111,32,
    139,33,188,109,36,25,174,45,120,54,71,165,67,29,134,164,
    47,55,168,74,179,241,159,80,170,125,31,235,81,38,125,22,
    125,182,183,45,183,247,95,74,29,91,200,176,148,128,43,171,
    216,51,221,212,15,213,192,200,12,6,26,29,205,100,31,205,
    238,238,179,73,58,30,152,47,80,224,48,203,65,234,190,60,
    0,47,207,180,29,203,221,145,133,216,232,36,38,163,112,41,
    74,67,136,0,15,241,185,31,39,251,143,116,102,115,21,234,
    159,149,197,189,255,36,117,171,34,245,124,127,115,87,106,115,
    110,253,85,101,157,108,158,90,59,212,190,13,38,158,4,122,
    128,65,179,85,73,9,35,15,82,62,62,132,19,8,73,241,
    198,125,217,211,214,200,214,166,211,61,121,120,199,252,192,237,
    110,192,74,85,70,70,95,70,159,166,30,54,219,68,99,121,
    154,38,25,73,165,193,216,104,79,133,211,19,50,21,15,208,
    155,184,144,28,6,16,99,38,49,222,114,115,19,179,140,26,
    39,198,221,173,120,190,121,176,183,67,7,222,219,40,196,80,
    252,111,219,91,55,201,23,98,28,135,26,223,206,210,128,188,
    201,188,227,141,70,110,0,84,100,204,93,84,111,46,217,227,
    70,202,188,177,115,8,237,171,76,69,44,180,149,36,33,79,
    232,108,150,142,168,45,92,234,11,230,199,35,172,195,36,43,
    4,152,178,109,134,230,243,18,149,142,91,84,51,171,160,122,
    99,250,28,104,207,245,210,156,15,101,157,92,122,197,87,58,
    254,169,10,49,11,43,56,11,212,9,184,166,44,55,123,125,
    130,156,156,43,40,230,54,198,195,84,129,165,46,47,51,230,
    66,232,106,227,110,220,103,101,25,229,182,240,20,17,58,232,
    229,94,108,31,90,34,3,74,76,177,196,25,161,13,107,83,
    173,42,67,68,25,237,35,124,105,138,166,200,124,77,146,119,
    153,162,139,215,90,173,89,107,206,172,21,159,252,226,89,189,
    124,227,139,221,122,6,49,100,218,251,7,30,255,253,95,121,
    28,73,188,100,237,6,35,11,196,164,167,184,141,175,110,164,
    117,100,240,146,178,39,180,14,43,19,202,190,82,65,10,202,
    94,173,32,139,21,90,47,144,165,146,214,145,124,41,241,206,
    167,23,147,47,93,154,171,14,101,197,60,38,246,45,46,123,
    169,125,217,207,146,72,6,214,166,223,118,58,195,225,176,141,
    98,237,80,199,249,168,157,100,131,118,254,166,227,83,7,38,
    41,100,157,168,144,50,29,243,77,133,224,176,173,144,103,124,
    232,43,76,144,84,150,120,206,216,44,47,24,212,4,73,30,
    250,196,161,67,172,50,164,38,203,137,125,114,49,207,239,192,
    137,246,64,30,102,0,114,43,76,122,109,185,147,196,183,45,
    113,176,220,57,220,162,22,133,40,181,227,54,87,7,196,170,
    135,106,64,101,225,184,36,113,188,76,162,94,18,74,75,43,
    6,143,238,211,253,208,237,190,52,143,206,4,140,85,214,116,
    44,246,36,54,120,63,145,126,30,165,196,12,165,53,48,178,
    210,12,53,222,15,200,209,121,236,171,76,163,175,29,110,85,
    61,24,32,39,42,73,165,40,83,21,107,111,66,101,131,156,
    136,172,180,130,87,254,163,76,146,164,6,76,107,237,28,191,
    56,156,92,234,49,135,24,197,89,165,129,158,69,184,221,203,
    164,184,68,64,14,221,172,220,243,156,6,110,57,231,198,100,
    167,111,123,46,221,146,244,144,228,240,109,253,17,45,209,58,
    135,207,45,140,112,139,240,161,81,211,104,185,101,72,220,34,
    36,46,7,207,165,144,49,199,177,63,110,18,187,60,97,54,
    152,66,228,209,165,187,154,10,251,5,73,126,92,233,106,234,
    219,213,250,180,163,235,107,117,54,230,57,213,238,187,61,92,
    159,244,240,103,239,237,97,124,218,198,54,166,199,103,252,58,
    71,29,69,77,239,208,189,108,110,86,59,138,91,227,172,175,
    188,122,169,155,222,219,164,159,108,248,165,70,106,79,233,161,
    31,57,187,69,107,47,204,53,28,79,18,236,56,138,219,78,
    4,102,208,186,243,168,136,10,39,147,14,244,48,236,68,230,
    244,124,115,137,128,113,32,96,68,215,162,27,129,13,18,223,
    0,233,169,115,36,90,243,23,148,23,223,43,94,168,140,41,
    132,156,246,185,188,253,207,228,81,12,21,73,206,79,146,87,
    103,186,125,138,13,222,51,254,187,169,170,77,82,117,227,189,
    169,114,138,128,58,95,77,10,98,122,108,191,208,120,150,157,
    214,236,5,158,94,218,41,58,156,158,7,205,108,233,212,139,
    22,29,195,151,101,244,160,157,210,141,109,28,254,169,69,59,
    118,227,60,226,150,229,11,138,235,153,227,194,122,46,107,12,
    255,246,249,174,248,181,243,253,231,162,252,125,178,88,191,90,
    95,111,174,223,90,191,190,190,240,23,105,240,165,250,
};

EmbeddedPython embedded_m5_objects_ArmSystem(
    "m5/objects/ArmSystem.py",
    "/home/faculty/gem5/src/arch/arm/ArmSystem.py",
    "m5.objects.ArmSystem",
    data_m5_objects_ArmSystem,
    1646,
    3755);

} // anonymous namespace
