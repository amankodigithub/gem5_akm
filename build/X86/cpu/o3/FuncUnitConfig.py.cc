#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_FuncUnitConfig[] = {
    120,156,189,87,223,111,219,54,16,62,217,146,252,59,113,157,
    212,109,31,22,236,209,43,134,24,104,155,174,3,134,109,89,
    126,12,25,154,181,144,147,21,243,195,12,87,148,93,110,146,
    236,89,178,177,238,53,251,187,183,221,157,68,154,114,51,44,
    24,178,196,49,113,252,172,35,121,31,63,222,81,62,228,127,
    101,252,126,253,49,64,242,39,26,2,255,45,8,1,34,11,
    134,22,88,212,47,65,88,130,168,12,195,114,214,47,67,104,
    195,69,110,57,104,217,16,184,48,177,64,56,240,7,192,21,
    192,143,195,10,8,87,161,21,141,86,65,84,21,90,211,104,
    13,68,93,161,13,141,214,65,52,21,218,210,104,3,196,150,
    66,183,53,218,4,209,86,232,61,141,182,64,116,20,186,163,
    209,45,16,187,10,189,175,209,109,16,93,24,244,30,32,5,
    242,47,252,235,89,104,165,53,108,6,50,122,245,246,231,192,
    79,51,168,138,205,219,165,12,197,73,188,202,16,106,30,167,
    46,182,103,113,122,248,242,210,55,137,253,134,136,197,47,4,
    64,124,6,165,156,225,43,176,166,22,49,138,236,14,109,240,
    6,61,122,58,173,96,51,155,31,133,227,36,209,35,134,75,
    73,102,207,81,211,143,70,241,56,10,70,163,180,206,157,104,
    38,150,33,117,233,169,87,243,227,32,241,217,156,205,95,202,
    36,77,201,205,159,45,227,180,71,107,90,55,73,31,155,254,
    187,89,20,244,39,99,127,25,166,239,251,211,32,58,232,39,
    11,191,239,207,151,253,217,211,254,233,50,246,47,99,153,30,
    205,226,137,156,238,207,223,123,180,200,125,114,182,177,113,173,
    142,197,107,192,85,158,227,0,199,114,165,99,175,170,216,127,
    250,48,118,12,25,149,115,5,165,28,177,25,113,88,49,132,
    151,167,204,73,224,144,116,30,161,98,126,113,97,241,3,41,
    38,176,169,125,52,114,33,6,18,13,202,12,153,107,224,20,
    158,173,232,203,23,195,113,35,5,227,84,50,179,57,155,184,
    70,185,171,182,118,46,231,65,40,227,64,112,20,23,135,222,
    183,39,23,163,179,193,97,74,30,191,189,120,46,105,107,101,
    137,24,163,120,60,26,195,163,57,60,234,242,12,167,227,48,
    9,60,26,204,163,135,189,22,53,245,2,209,255,157,109,10,
    236,9,57,215,115,182,247,220,182,213,46,113,44,167,175,71,
    166,214,42,138,239,239,110,202,183,137,56,107,100,202,231,28,
    183,34,83,101,69,115,75,33,159,134,179,113,122,40,4,135,
    201,196,172,225,163,104,110,116,86,169,180,149,104,55,120,203,
    216,186,45,142,118,208,231,43,114,174,230,28,117,172,135,153,
    42,145,161,77,85,54,20,75,191,223,92,149,107,196,101,164,
    98,32,85,70,178,252,197,202,205,241,6,227,205,53,62,117,
    136,79,204,99,67,135,88,221,210,172,214,20,99,180,212,140,
    86,198,155,38,126,232,251,210,41,62,45,19,63,211,181,166,
    156,148,77,94,222,118,225,201,193,175,139,84,62,212,58,118,
    175,217,143,206,173,111,10,165,209,19,114,110,234,77,161,109,
    217,179,178,140,122,118,126,60,34,7,189,47,93,181,47,182,
    117,93,166,204,237,146,97,151,13,219,54,108,199,176,93,195,
    174,24,118,213,176,107,134,93,55,236,134,97,55,13,187,101,
    216,91,134,189,109,216,109,195,190,103,216,29,195,222,49,236,
    93,174,6,187,124,238,238,231,231,174,91,200,105,88,131,4,
    30,59,150,117,110,163,38,214,63,133,75,109,211,49,212,246,
    42,101,125,144,77,138,89,119,40,65,54,140,14,141,150,23,
    59,49,120,39,39,41,11,80,247,232,103,229,75,130,210,191,
    170,132,176,1,224,122,10,0,45,170,8,172,54,198,64,245,
    166,45,19,224,245,22,17,90,116,123,19,161,165,21,30,99,
    193,223,77,238,249,8,125,206,201,249,49,203,188,121,163,15,
    214,76,94,73,48,22,175,103,139,245,25,176,213,25,248,244,
    195,220,180,113,6,168,62,150,233,12,100,90,177,11,90,57,
    15,34,26,219,200,32,25,32,225,78,56,161,122,37,200,217,
    205,57,233,100,135,254,205,66,166,193,173,7,92,205,2,230,
    193,89,6,42,98,70,238,40,228,3,202,174,27,33,243,44,
    226,205,162,16,177,171,34,62,254,215,136,255,41,205,77,109,
    102,194,201,153,112,21,19,222,83,106,158,83,243,140,154,207,
    32,175,36,255,127,248,47,208,39,94,135,207,105,158,47,98,
    243,98,244,250,138,114,205,126,103,197,151,94,36,178,114,105,
    113,185,116,242,114,169,163,100,37,225,184,120,232,131,36,201,
    202,37,85,65,174,121,124,91,187,163,2,247,57,57,130,190,
    7,239,89,223,247,40,51,241,161,139,14,246,245,59,131,71,
    51,112,218,70,84,4,19,188,108,38,158,126,181,64,108,62,
    94,140,163,36,171,226,249,44,217,245,238,146,238,241,124,223,
    230,107,32,223,115,184,174,114,214,225,99,198,194,99,250,121,
    61,183,16,23,175,227,139,236,133,226,203,79,104,16,186,57,
    224,157,211,170,91,245,82,215,238,182,186,110,183,218,125,208,
    117,232,243,55,251,89,147,26,
};

EmbeddedPython embedded_m5_objects_FuncUnitConfig(
    "m5/objects/FuncUnitConfig.py",
    "/home/faculty/gem5/src/cpu/o3/FuncUnitConfig.py",
    "m5.objects.FuncUnitConfig",
    data_m5_objects_FuncUnitConfig,
    1144,
    3650);

} // anonymous namespace
