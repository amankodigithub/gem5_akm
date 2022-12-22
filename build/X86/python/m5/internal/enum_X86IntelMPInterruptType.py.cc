#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_X86IntelMPInterruptType[] = {
    120,156,189,87,111,111,211,102,16,191,199,118,210,38,77,104,
    74,161,45,180,27,217,38,182,104,154,154,253,103,18,8,109,
    76,76,2,137,192,28,16,37,160,121,33,118,90,167,137,29,
    217,79,128,76,233,155,21,109,251,2,251,8,123,177,111,179,
    111,180,221,239,108,39,105,41,104,111,74,85,95,31,223,115,
    190,231,254,252,238,238,105,135,210,159,28,63,223,86,137,226,
    7,138,200,229,95,69,125,162,129,162,150,34,229,41,114,43,
    180,159,163,232,75,114,115,244,146,168,101,144,103,208,33,47,
    76,122,108,80,80,146,111,242,212,55,133,163,104,92,36,207,
    162,86,142,30,6,43,100,121,121,218,47,82,244,51,41,165,
    2,69,59,238,2,185,139,244,146,181,243,162,32,10,23,9,
    204,162,48,11,228,46,9,179,72,110,73,22,75,52,174,144,
    87,162,86,25,98,173,51,172,246,99,86,187,44,106,255,129,
    90,151,119,86,200,61,3,113,182,235,17,36,45,72,202,121,
    203,162,133,85,152,212,91,1,61,132,91,252,114,150,90,103,
    133,187,58,207,61,71,173,115,194,61,63,207,93,163,214,154,
    112,215,231,185,27,212,218,16,238,133,121,238,69,106,93,20,
    238,38,181,54,17,153,102,237,44,135,216,255,151,127,106,28,
    98,210,37,38,207,188,40,246,195,192,241,131,110,232,27,216,
    207,131,32,33,29,144,133,52,51,223,35,51,127,147,164,197,
    53,210,204,28,16,41,188,19,245,13,58,144,197,129,65,227,
    26,77,20,245,44,114,77,154,240,49,57,152,180,171,232,208,
    160,39,38,4,14,152,90,28,191,119,201,210,73,90,122,18,
    191,68,211,2,29,228,104,146,163,230,206,196,0,99,191,64,
    209,95,244,203,150,40,93,20,165,6,77,152,90,116,104,209,
    65,158,30,178,16,179,122,5,68,93,237,76,216,83,230,52,
    107,22,91,219,152,115,23,174,184,126,20,180,7,158,126,135,
    215,142,23,140,6,206,206,55,95,223,10,180,215,191,115,15,
    127,162,104,52,212,247,199,67,175,86,204,62,9,227,237,97,
    91,239,217,162,195,68,112,6,67,45,186,195,192,211,75,188,
    232,250,129,235,12,66,119,212,247,244,34,20,59,93,191,239,
    57,142,108,222,26,12,195,72,223,140,162,48,178,17,95,97,
    246,195,246,244,11,68,183,211,15,99,175,134,211,228,24,27,
    234,53,164,187,67,209,8,3,196,110,124,236,122,113,39,242,
    135,154,211,150,104,132,52,180,213,144,48,33,241,93,38,245,
    189,112,224,213,187,237,206,168,175,199,245,93,111,240,85,253,
    233,200,239,187,117,118,185,62,28,235,189,48,168,51,207,135,
    219,65,187,95,127,83,56,182,89,30,232,137,159,251,187,142,
    47,46,57,123,94,127,232,69,101,112,47,226,80,85,81,37,
    149,87,166,170,169,50,175,114,252,152,106,203,88,82,13,31,
    78,117,224,40,192,101,205,195,9,57,86,180,111,80,180,5,
    176,244,248,87,33,187,12,153,38,246,12,217,251,17,209,72,
    184,61,19,16,72,152,19,1,24,35,141,37,175,33,231,1,
    9,74,114,212,203,83,130,30,6,93,2,167,104,12,202,226,
    80,99,176,114,139,226,63,137,163,203,184,153,80,138,169,67,
    147,84,80,33,93,68,229,50,119,141,15,252,85,96,217,172,
    193,252,134,32,66,239,249,113,248,60,144,184,99,45,133,212,
    228,200,220,27,223,125,218,243,58,58,190,196,140,71,225,168,
    218,105,7,65,168,171,109,215,173,182,181,142,252,167,35,237,
    197,85,29,86,47,199,53,164,210,94,201,64,53,213,199,193,
    78,65,132,132,51,136,146,23,215,239,104,126,89,149,23,201,
    66,236,105,6,196,94,232,198,204,135,138,93,79,219,48,82,
    35,200,161,24,34,120,113,32,138,227,89,238,12,191,127,151,
    89,34,160,172,229,51,8,197,94,191,171,139,130,198,118,28,
    59,98,9,248,2,60,40,126,214,238,143,60,209,30,179,62,
    54,8,203,196,134,83,134,222,6,220,200,188,22,87,130,48,
    112,199,108,153,223,249,8,135,110,8,0,75,2,193,243,12,
    191,5,166,121,254,155,87,107,70,199,74,65,151,207,128,183,
    6,151,73,210,174,210,204,51,8,15,185,231,212,12,105,26,
    226,141,84,226,251,88,225,99,123,11,4,125,195,126,23,228,
    82,230,240,233,121,93,62,238,245,21,156,100,136,171,226,20,
    146,98,102,78,185,71,170,233,194,172,154,184,43,54,81,21,
    6,106,103,86,21,22,58,104,116,29,148,69,165,222,76,138,
    239,163,95,163,122,68,25,10,133,33,143,213,172,16,36,68,
    118,5,174,47,102,24,182,1,204,121,116,238,206,161,211,70,
    118,4,154,246,133,172,3,58,144,72,64,105,111,66,85,238,
    132,24,87,65,222,59,253,64,207,224,181,251,10,188,174,226,
    208,74,10,175,178,192,170,200,79,197,232,152,105,244,167,227,
    113,245,24,172,128,41,235,4,76,125,136,149,249,170,191,111,
    13,78,169,151,63,204,193,9,134,25,243,206,52,120,49,94,
    135,15,243,64,90,231,41,255,48,88,231,193,109,200,224,254,
    84,6,183,12,127,185,229,36,13,217,148,158,156,44,114,8,
    70,215,164,181,116,32,199,5,166,195,40,124,49,174,134,221,
    170,22,111,209,63,175,93,142,183,47,199,87,185,51,86,175,
    75,79,74,122,99,210,253,34,111,136,238,133,79,111,190,232,
    120,50,251,228,205,113,146,102,229,72,227,114,210,153,202,152,
    58,143,80,26,89,140,165,109,199,58,66,183,62,229,40,23,
    167,81,134,209,183,113,76,81,66,108,170,117,198,79,81,137,
    45,78,210,159,229,138,37,187,252,220,64,216,225,175,71,184,
    243,218,205,196,82,113,2,238,216,159,28,193,200,169,185,96,
    215,89,231,131,12,27,249,25,54,240,152,25,208,127,231,203,
    137,2,60,126,35,100,159,147,156,2,125,90,23,72,247,42,
    196,127,34,169,136,19,230,188,244,149,38,102,187,72,112,187,
    137,175,136,104,50,246,111,211,31,115,229,148,13,103,51,189,
    88,206,15,103,107,218,147,4,54,255,107,0,91,71,155,23,
    210,178,215,142,33,150,116,164,89,133,206,26,254,244,18,200,
    29,249,244,48,180,152,28,224,192,150,39,51,4,97,188,109,
    170,85,99,14,23,159,129,124,62,133,132,202,120,167,98,214,
    37,122,253,20,118,146,110,255,24,103,91,98,237,242,130,68,
    240,216,63,21,137,157,91,211,48,142,99,27,28,123,25,196,
    200,42,158,251,3,95,45,245,88,238,43,201,145,83,22,202,
    190,193,87,146,228,74,141,249,108,127,64,105,87,181,113,25,
    176,183,41,157,52,130,228,164,79,4,222,115,233,20,146,90,
    251,11,74,167,213,205,23,154,221,148,19,58,97,192,215,154,
    64,203,173,38,225,107,0,234,86,227,254,209,125,51,97,202,
    102,227,206,173,87,55,153,41,155,205,147,54,153,41,200,105,
    188,62,214,71,63,218,124,179,176,92,209,58,207,218,209,91,
    232,12,146,155,107,73,143,189,142,41,30,223,96,130,59,87,
    97,185,160,242,6,46,252,38,183,184,178,178,204,82,165,96,
    149,150,10,86,97,193,148,145,89,102,224,22,173,66,169,172,
    10,198,241,231,63,205,189,120,16,
};

EmbeddedPython embedded_m5_internal_enum_X86IntelMPInterruptType(
    "m5/internal/enum_X86IntelMPInterruptType.py",
    "/home/faculty/gem5/build/X86/python/m5/internal/enum_X86IntelMPInterruptType.py",
    "m5.internal.enum_X86IntelMPInterruptType",
    data_m5_internal_enum_X86IntelMPInterruptType,
    1609,
    4100);

} // anonymous namespace