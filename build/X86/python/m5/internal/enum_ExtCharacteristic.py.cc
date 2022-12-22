#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_ExtCharacteristic[] = {
    120,156,189,87,235,110,220,212,22,94,219,246,76,50,147,153,
    38,109,218,164,151,208,14,133,150,1,161,14,183,115,64,162,
    170,104,171,114,20,132,66,241,128,90,12,194,184,246,78,226,
    116,198,30,217,59,109,7,37,127,78,208,129,23,224,17,248,
    193,219,156,55,57,143,0,235,91,30,207,56,23,164,131,68,
    136,226,157,237,111,47,175,189,46,223,94,107,39,164,201,79,
    141,159,143,58,68,249,255,20,81,196,191,138,6,68,67,69,
    158,34,165,21,69,75,244,180,70,217,123,20,213,232,7,34,
    207,34,109,209,1,79,108,250,218,162,164,37,223,212,105,96,
    11,162,104,220,36,237,144,87,163,71,201,89,114,116,157,158,
    54,41,251,142,148,82,137,162,199,209,28,69,243,244,3,107,
    231,73,67,20,206,19,192,166,128,13,138,22,4,108,82,212,
    146,201,2,141,151,72,183,200,107,67,204,59,195,106,223,96,
    181,139,162,246,191,80,27,241,202,89,138,206,64,156,237,250,
    10,146,14,36,101,191,69,209,194,42,108,218,57,139,241,0,
    110,241,203,57,242,206,9,186,92,69,207,147,119,94,208,11,
    85,116,133,188,21,65,87,171,232,69,242,46,10,122,169,138,
    94,38,239,178,160,87,170,232,26,121,107,130,190,84,69,175,
    146,119,85,208,107,85,180,67,94,71,208,151,171,232,117,242,
    174,11,250,74,21,125,149,188,87,5,189,81,69,111,146,119,
    83,208,215,170,104,151,188,174,160,175,147,247,58,114,214,239,
    158,227,228,199,191,241,79,151,147,79,166,197,195,51,157,229,
    113,154,248,113,178,153,198,22,214,235,24,64,149,16,195,220,
    132,51,247,193,153,95,73,8,19,89,19,206,236,19,41,188,
    19,13,44,218,151,201,190,69,227,46,237,41,218,113,40,178,
    105,143,183,169,193,164,45,69,7,22,125,99,67,96,159,71,
    135,51,123,149,28,83,16,102,71,50,91,104,154,163,253,26,
    237,213,168,255,120,207,2,240,180,65,217,47,244,253,154,40,
    157,23,165,22,237,241,232,208,129,67,251,117,122,196,66,12,
    237,52,192,7,245,120,143,61,101,164,223,117,216,218,141,138,
    187,112,37,138,179,36,24,106,179,202,115,95,39,187,67,255,
    193,11,115,127,59,200,130,208,232,44,206,77,28,118,155,165,
    112,154,223,26,5,102,219,149,175,109,132,101,56,50,162,53,
    77,180,89,224,201,102,156,68,254,48,141,118,7,218,204,67,
    165,191,25,15,180,239,203,226,250,112,148,102,230,65,150,165,
    153,139,200,10,56,72,131,233,23,136,107,56,72,115,221,197,
    110,178,141,11,245,6,210,155,35,209,8,3,196,98,124,28,
    233,60,204,226,145,225,132,21,26,33,13,109,93,164,74,134,
    124,157,135,222,118,58,212,189,205,32,220,29,152,113,111,75,
    15,255,209,123,178,27,15,162,222,227,15,254,217,27,141,205,
    118,154,244,24,139,19,246,57,9,6,189,147,3,113,139,37,
    193,152,252,121,188,229,199,226,140,191,173,7,35,157,181,129,
    94,198,118,106,73,181,84,93,217,170,171,218,60,171,241,99,
    171,53,107,65,109,196,112,39,132,139,32,148,83,165,16,242,
    170,232,169,69,217,26,8,178,195,191,10,25,101,154,244,177,
    102,201,218,231,136,67,129,238,216,72,123,1,238,9,169,152,
    93,44,121,27,121,78,72,152,81,163,157,58,21,140,97,162,
    21,20,202,198,24,89,28,106,44,86,238,80,254,51,113,92,
    153,43,123,52,225,209,129,77,42,89,34,211,68,29,97,116,
    133,55,252,183,80,177,223,133,249,27,194,5,179,29,231,233,
    243,68,34,142,185,28,158,62,71,230,225,248,179,39,59,58,
    52,249,53,6,190,74,119,59,97,144,36,169,233,4,81,212,
    9,140,201,226,39,187,70,231,29,147,118,110,228,93,36,209,
    61,91,210,105,170,111,60,42,233,131,84,51,125,138,151,40,
    14,13,191,44,203,139,100,33,215,134,169,176,157,70,57,227,
    80,177,165,141,11,35,13,130,156,138,33,194,20,31,162,216,
    158,229,206,240,251,221,210,18,161,99,183,94,146,39,215,131,
    77,211,20,30,6,121,238,139,37,192,133,114,80,252,44,24,
    236,106,209,158,179,62,54,8,211,194,134,83,35,221,69,56,
    80,250,43,78,36,105,18,141,217,166,56,124,13,219,93,20,
    234,181,132,124,23,152,120,115,60,214,249,111,93,173,88,161,
    51,161,91,189,164,220,10,156,37,73,184,154,228,156,233,119,
    192,21,166,107,73,137,16,63,228,244,93,199,12,31,187,107,
    24,94,194,112,21,195,181,210,213,211,240,183,125,212,223,247,
    177,135,37,78,138,59,72,132,93,186,19,29,58,65,151,102,
    39,136,171,95,31,39,193,194,121,153,157,4,7,149,50,187,
    131,145,69,229,140,217,148,127,129,186,140,19,35,202,112,56,
    152,230,152,205,200,47,193,113,151,224,244,124,201,91,23,100,
    172,50,114,171,194,72,23,121,17,58,186,151,202,122,231,67,
    162,32,162,123,5,170,106,39,68,183,131,225,229,211,12,241,
    140,82,91,199,40,245,33,182,91,154,80,170,45,84,106,242,
    179,100,133,246,36,238,211,6,184,124,132,74,224,145,115,2,
    143,110,98,102,31,247,244,111,160,208,196,191,143,43,20,130,
    73,86,213,141,13,158,140,87,97,125,149,60,171,220,193,31,
    37,171,220,148,45,105,202,111,73,83,150,198,46,119,171,162,
    240,218,82,123,139,73,13,97,216,180,105,101,210,108,243,6,
    143,163,44,125,49,238,164,155,29,35,126,162,78,222,190,145,
    223,186,145,127,200,21,176,115,71,106,79,81,3,139,42,151,
    233,17,170,20,62,125,240,34,212,210,221,228,205,247,139,162,
    228,75,129,242,39,93,147,121,116,1,65,180,202,232,74,121,
    206,77,134,170,124,106,241,109,78,227,11,115,63,193,6,77,
    9,174,173,86,153,51,77,37,86,248,69,5,150,139,147,172,
    242,115,15,1,135,167,154,112,199,118,251,133,141,98,62,28,
    113,223,60,196,139,83,48,222,237,177,182,47,75,62,212,103,
    124,192,99,151,180,254,145,175,28,10,148,248,15,33,227,156,
    216,9,173,167,167,0,41,94,134,248,183,36,252,63,161,135,
    75,253,232,163,111,139,4,151,149,252,125,17,45,90,250,39,
    244,83,229,240,148,141,215,158,92,20,171,141,215,153,214,30,
    161,202,255,213,92,157,195,69,10,9,217,14,114,136,21,149,
    103,118,30,103,37,125,122,181,227,202,123,26,188,153,47,84,
    251,176,226,155,25,107,208,186,174,168,101,171,194,133,183,49,
    188,51,165,129,42,177,191,216,160,107,244,199,189,213,47,42,
    249,215,216,213,17,59,23,231,36,106,71,254,49,40,44,124,
    99,26,186,113,238,2,113,23,49,88,229,201,230,58,192,87,
    69,51,150,251,71,177,229,20,194,241,222,224,43,70,113,57,
    70,215,117,95,161,73,221,116,209,226,221,91,52,233,34,194,
    222,162,30,36,250,185,84,4,73,167,251,46,112,164,251,238,
    253,135,235,162,63,76,19,190,164,36,70,110,48,64,13,8,
    116,247,95,15,15,175,218,5,104,112,250,238,165,169,233,143,
    116,120,88,98,190,178,98,96,196,199,113,166,159,243,3,240,
    176,104,235,200,170,57,207,192,250,59,111,29,151,156,155,45,
    200,191,31,159,246,253,183,79,146,107,30,90,51,240,117,67,
    155,190,206,158,197,225,9,6,156,57,182,46,22,247,135,65,
    102,238,113,130,117,54,62,110,113,117,213,224,34,255,69,144,
    113,227,184,207,149,87,39,71,54,104,31,93,54,184,80,125,
    217,191,247,169,222,10,194,35,202,27,213,37,137,133,183,254,
    240,228,88,76,22,12,178,191,113,18,93,15,127,114,225,143,
    196,36,219,225,179,32,59,213,34,42,156,184,93,180,160,59,
    184,216,72,21,196,5,180,177,216,80,117,11,255,247,216,220,
    7,218,202,177,91,75,13,167,181,208,112,26,115,182,220,37,
    218,124,210,155,78,163,213,86,13,235,207,60,191,3,176,28,
    228,99,
};

EmbeddedPython embedded_m5_internal_enum_ExtCharacteristic(
    "m5/internal/enum_ExtCharacteristic.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/enum_ExtCharacteristic.py",
    "m5.internal.enum_ExtCharacteristic",
    data_m5_internal_enum_ExtCharacteristic,
    1778,
    4533);

} // anonymous namespace