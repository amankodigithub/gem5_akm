#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Gic[] = {
    120,156,157,85,109,111,27,69,16,158,243,187,29,59,113,10,
    9,124,65,108,145,64,6,137,216,77,233,7,36,64,37,148,
    70,145,160,141,46,45,18,254,114,90,223,173,237,141,238,77,
    183,235,196,254,134,84,126,1,191,128,127,10,51,115,190,179,
    147,16,164,198,142,55,59,179,179,59,51,207,60,179,235,195,
    250,83,197,223,115,1,96,254,198,73,128,127,14,132,0,111,
    214,51,39,159,85,32,172,64,84,133,113,21,28,146,171,16,
    214,32,170,195,184,158,203,53,8,27,16,53,96,220,64,185,
    14,170,14,83,7,130,6,252,9,240,14,224,247,113,19,130,
    38,168,38,107,91,165,182,5,65,27,84,149,181,157,82,219,
    134,96,167,56,161,91,106,59,16,244,224,98,176,139,65,234,
    127,240,51,112,112,102,105,248,42,159,182,113,184,208,209,235,
    201,165,242,237,70,117,174,147,23,234,74,251,42,87,181,72,
    21,74,59,77,178,200,54,81,56,145,70,157,106,223,223,134,
    227,132,224,24,226,68,1,140,29,2,101,92,161,56,199,53,
    194,4,115,86,13,184,196,124,90,112,217,38,108,222,85,0,
    227,115,47,6,180,217,173,225,96,62,32,48,213,213,80,102,
    209,112,130,46,188,153,246,143,230,115,35,182,252,11,59,215,
    70,4,28,157,192,89,42,51,43,146,233,209,96,167,136,212,
    243,98,25,41,207,179,29,22,162,36,88,132,36,146,11,187,
    74,21,79,222,100,11,197,214,114,98,108,38,125,203,214,254,
    114,233,205,149,12,84,102,235,228,83,102,50,114,41,62,219,
    200,69,21,91,75,178,140,87,188,59,93,71,53,32,20,54,
    131,249,28,135,225,60,137,212,112,42,253,69,104,87,195,153,
    138,158,13,77,230,15,139,4,17,191,163,116,197,137,127,77,
    91,232,184,134,195,223,74,238,61,124,250,237,232,46,196,127,
    221,130,152,192,173,130,170,193,101,157,96,69,150,17,178,141,
    66,131,232,215,89,211,100,77,139,8,134,180,34,77,123,75,
    211,90,215,99,163,105,179,102,135,53,93,162,26,18,140,52,
    61,214,236,130,218,35,166,145,166,79,85,236,81,21,247,40,
    145,15,183,170,136,5,244,82,202,3,203,168,161,15,159,154,
    143,112,245,199,32,200,148,49,2,145,19,129,70,252,245,100,
    97,147,76,131,131,6,123,183,12,252,116,193,21,123,50,138,
    13,51,225,133,10,229,138,151,206,207,94,139,108,120,45,108,
    178,125,140,249,236,62,35,60,74,232,216,170,12,139,162,204,
    227,27,102,172,207,22,169,37,195,153,226,127,63,157,191,213,
    127,80,74,35,28,94,45,162,137,202,144,106,91,166,161,142,
    149,17,102,145,166,73,102,85,32,6,145,92,138,239,197,147,
    209,241,232,75,115,136,155,126,142,229,36,84,130,138,47,212,
    210,170,216,232,36,54,131,125,2,139,106,236,18,175,92,106,
    41,151,248,231,50,137,107,107,4,184,21,41,49,79,146,68,
    4,193,12,114,129,182,252,34,241,64,127,101,119,11,179,84,
    39,94,64,25,217,222,218,118,163,161,147,49,112,47,92,111,
    34,199,111,207,98,251,244,152,15,214,184,66,201,176,243,147,
    36,9,153,130,47,101,104,148,165,138,80,6,222,86,6,15,
    230,59,29,246,13,109,121,84,240,189,242,200,217,124,57,78,
    52,189,58,142,94,98,243,169,187,252,63,125,63,254,87,168,
    5,110,240,31,219,193,33,242,35,105,25,253,79,138,104,182,
    73,139,254,153,178,180,118,64,72,80,48,226,226,252,76,208,
    197,36,98,38,3,151,120,179,98,19,43,195,98,233,224,22,
    141,167,108,134,100,28,116,254,175,248,238,199,197,53,102,82,
    237,145,47,46,53,9,161,138,221,253,130,31,68,130,135,23,
    129,82,126,78,91,58,229,165,195,224,55,74,240,239,226,254,
    235,123,224,94,94,243,181,226,90,217,161,75,100,6,197,101,
    212,43,209,127,124,63,250,110,159,214,246,255,171,155,185,199,
    49,82,145,196,226,122,174,253,57,181,43,94,0,179,153,218,
    106,101,99,40,209,243,228,58,239,91,123,157,172,171,67,18,
    23,196,240,219,120,127,53,232,46,227,54,44,27,137,47,108,
    183,75,3,53,25,191,6,24,50,243,246,55,124,68,147,44,
    127,53,200,51,227,185,246,243,224,90,17,64,167,55,106,133,
    13,115,224,188,202,31,60,138,45,122,118,148,146,79,195,188,
    33,41,75,150,43,219,205,133,242,121,119,157,34,164,252,109,
    119,43,148,68,249,250,114,103,114,216,236,242,193,1,115,16,
    223,229,175,238,15,95,208,86,42,99,199,233,56,253,74,31,
    127,135,205,195,238,97,243,95,46,170,248,6,
};

EmbeddedPython embedded_m5_objects_Gic(
    "m5/objects/Gic.py",
    "/home/faculty/gem5/src/dev/arm/Gic.py",
    "m5.objects.Gic",
    data_m5_objects_Gic,
    1036,
    2378);

} // anonymous namespace