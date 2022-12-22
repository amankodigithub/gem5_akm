#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_Enum[] = {
    120,156,181,86,235,142,219,84,16,158,99,59,217,77,54,233,
    102,187,116,183,165,11,13,160,66,132,208,134,123,145,186,170,
    184,168,72,244,199,2,14,168,219,180,194,164,246,201,198,89,
    199,142,108,167,109,80,246,15,91,1,47,192,35,240,131,183,
    225,133,16,204,55,182,147,244,130,132,68,88,197,179,199,115,
    198,115,230,242,205,204,113,41,255,43,241,243,113,147,40,249,
    147,23,30,255,20,5,68,35,69,93,69,74,43,242,26,116,
    82,162,248,125,242,74,244,152,168,107,144,54,232,140,23,38,
    221,53,40,172,201,55,101,10,76,225,40,154,86,73,91,212,
    45,209,237,112,139,44,93,166,147,42,197,223,147,82,42,84,
    116,228,173,145,183,78,143,89,59,47,42,162,112,157,192,172,
    10,179,66,222,134,48,171,228,213,100,177,65,211,6,233,26,
    117,235,16,235,158,99,181,111,178,218,77,81,251,7,212,122,
    188,179,69,222,57,136,179,93,119,32,105,65,82,206,219,20,
    45,172,194,164,225,22,232,25,220,226,151,243,212,61,47,220,
    109,234,110,195,131,78,235,60,71,192,255,139,255,90,138,87,
    105,141,201,3,29,39,126,20,58,126,216,143,124,3,251,101,
    16,4,206,5,89,203,35,248,25,34,248,59,73,248,60,35,
    143,224,41,145,194,59,81,96,208,169,44,78,13,154,182,104,
    166,104,104,145,103,210,140,143,41,193,164,99,69,103,6,221,
    51,33,112,202,212,98,63,95,38,43,205,194,55,20,63,51,
    77,107,116,90,162,89,137,58,71,51,3,140,147,10,197,191,
    209,15,123,162,116,93,148,26,52,99,106,209,153,69,167,101,
    186,205,66,204,26,86,16,29,117,52,99,79,153,211,105,89,
    108,237,225,146,187,112,197,243,227,176,55,210,105,149,215,142,
    14,39,35,231,38,147,86,181,216,143,146,253,113,47,29,216,
    242,129,137,72,140,198,169,40,138,66,157,110,240,162,239,135,
    158,51,138,188,73,160,211,117,104,113,250,126,160,29,71,54,
    191,24,141,163,56,189,25,199,81,108,35,152,194,12,162,222,
    252,11,132,210,13,162,68,183,112,154,28,99,67,125,10,233,
    254,88,52,194,0,49,18,31,123,58,113,99,127,156,114,142,
    50,141,144,134,182,22,178,35,36,57,96,210,30,68,35,221,
    238,247,220,73,144,78,219,199,122,244,65,251,254,196,15,188,
    246,209,71,31,182,199,211,116,16,133,109,230,249,97,170,57,
    2,65,123,238,251,62,111,2,23,201,67,255,216,241,197,126,
    103,160,131,177,142,235,224,190,136,19,84,67,213,84,89,153,
    170,165,234,188,42,241,99,170,61,99,67,29,250,240,192,133,
    87,128,141,181,12,20,100,79,209,137,65,241,30,96,48,228,
    159,66,222,24,12,29,236,25,178,247,53,92,207,184,67,19,
    201,205,152,51,129,14,99,136,37,15,144,205,144,36,255,37,
    26,150,41,195,5,195,41,3,74,60,5,101,113,168,49,88,
    185,69,201,175,196,161,100,68,204,40,71,203,153,73,42,108,
    16,39,158,107,135,185,59,124,224,143,2,184,78,11,230,31,
    74,250,211,129,159,68,15,67,9,50,214,82,34,29,142,204,
    87,211,47,239,15,181,155,38,87,152,113,39,154,52,221,94,
    24,70,105,179,231,121,205,94,154,198,254,253,73,170,147,102,
    26,53,175,38,45,228,205,222,42,16,52,215,55,29,23,136,
    65,118,25,49,217,139,231,187,41,191,108,203,139,100,33,209,
    41,103,127,16,121,9,243,161,226,88,167,54,140,76,17,228,
    72,12,17,112,56,16,197,241,44,119,142,223,63,41,44,17,
    4,182,202,5,94,18,29,244,5,242,110,208,75,18,71,44,
    1,95,80,6,197,15,122,193,68,139,246,132,245,177,65,88,
    102,54,172,18,103,23,97,115,225,162,216,29,70,161,55,101,
    51,124,247,13,156,112,81,208,86,19,188,93,96,172,173,49,
    45,243,255,178,218,49,92,43,71,88,185,64,217,14,252,35,
    201,177,202,211,204,136,59,227,214,209,50,164,246,197,116,169,
    177,87,177,194,199,246,30,200,75,32,47,131,92,41,188,91,
    145,139,245,167,93,188,6,181,134,248,37,30,32,220,102,225,
    129,247,68,157,92,90,212,9,119,178,14,240,110,160,42,22,
    120,183,208,245,226,27,160,44,42,149,100,82,242,13,122,44,
    234,66,148,161,4,24,204,88,45,32,46,241,176,27,240,115,
    189,64,167,13,200,45,227,238,120,9,119,54,82,33,160,179,
    47,21,141,204,129,68,6,55,251,50,84,149,158,19,208,38,
    200,43,43,142,234,2,56,199,207,0,231,58,78,104,228,192,
    169,11,96,170,252,52,12,215,204,67,61,159,95,219,79,1,
    6,104,177,158,131,150,215,177,50,159,117,238,255,1,74,238,
    210,231,75,64,129,21,198,178,229,135,188,152,238,194,224,101,
    136,236,242,204,189,29,238,242,24,53,100,140,190,45,99,84,
    70,177,220,13,178,38,106,74,31,205,22,37,120,222,55,105,
    39,31,143,73,133,233,56,142,30,77,155,81,191,153,138,107,
    232,121,7,87,147,253,171,201,117,238,102,205,27,210,71,178,
    126,150,117,172,88,143,209,113,240,233,205,71,174,150,225,36,
    111,142,147,53,24,39,155,175,249,208,99,180,92,64,220,140,
    34,160,210,106,147,52,70,135,93,101,72,171,243,144,194,194,
    91,208,89,149,120,154,106,151,145,81,85,114,176,147,53,80,
    185,221,200,46,63,159,34,198,112,78,19,174,133,118,39,51,
    75,44,134,237,246,91,79,100,127,53,246,218,109,86,240,109,
    145,245,242,34,235,120,204,2,175,63,243,189,64,33,241,63,
    17,242,202,233,203,241,58,135,55,18,185,13,241,239,72,128,
    253,156,169,43,189,160,131,73,43,18,220,34,146,107,34,154,
    13,225,91,244,203,82,85,20,163,210,204,47,112,203,163,210,
    154,247,17,1,196,191,26,135,214,147,13,7,57,24,244,18,
    136,101,93,100,81,104,139,142,60,191,127,113,23,93,17,58,
    214,51,109,14,14,190,183,192,6,134,205,101,181,109,44,101,
    252,29,144,119,231,201,86,5,239,191,219,112,133,254,121,0,
    58,89,239,189,139,131,44,49,109,115,77,98,243,212,181,60,
    51,234,133,121,128,166,137,13,142,189,9,98,20,85,202,53,
    205,87,184,116,42,247,130,236,200,57,11,165,122,200,163,63,
    187,167,98,52,218,175,81,222,246,108,204,97,123,159,242,190,
    47,24,205,106,59,212,15,165,186,37,105,246,123,224,163,52,
    14,115,247,228,12,55,10,249,2,17,166,98,66,177,35,87,
    13,247,65,47,94,117,1,201,41,7,89,147,185,129,1,149,
    32,105,184,59,84,54,43,170,108,224,150,106,114,217,215,149,
    101,214,26,21,171,182,81,177,42,107,166,12,136,58,167,188,
    106,85,106,117,85,49,254,6,6,171,232,94,
};

EmbeddedPython embedded_m5_internal_enum_Enum(
    "m5/internal/enum_Enum.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/enum_Enum.py",
    "m5.internal.enum_Enum",
    data_m5_internal_enum_Enum,
    1516,
    3627);

} // anonymous namespace
