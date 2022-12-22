#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_BaseKvmCPU[] = {
    120,156,173,84,223,111,219,54,16,62,201,142,19,59,105,157,
    102,237,126,97,15,28,6,20,202,80,216,216,128,98,15,29,
    214,53,65,186,22,155,221,64,73,139,205,47,2,75,157,99,
    55,146,232,137,180,107,13,123,235,254,181,253,63,251,15,182,
    187,147,181,4,195,94,214,85,178,206,188,143,228,241,187,143,
    71,26,216,60,45,250,190,85,0,110,76,141,148,126,1,100,
    0,231,155,86,80,183,66,200,66,200,67,152,132,16,176,223,
    130,172,5,121,11,38,45,242,219,128,33,76,3,72,183,224,
    55,128,55,0,63,77,218,144,118,224,44,218,166,144,243,63,
    233,137,2,106,121,54,159,215,77,238,57,210,14,143,79,159,
    215,192,22,153,239,87,249,139,145,239,109,186,200,163,94,115,
    157,231,17,243,252,157,26,8,48,9,152,45,17,34,154,68,
    3,219,48,217,2,236,48,87,102,65,224,182,184,173,198,221,
    17,183,221,184,93,113,183,26,183,7,184,11,175,246,0,111,
    192,171,155,204,254,13,101,219,23,112,31,240,22,164,219,130,
    28,92,67,118,4,121,239,26,210,21,228,182,32,119,32,237,
    65,186,43,200,251,130,124,0,233,30,164,55,4,249,16,226,
    179,232,38,101,18,115,94,174,79,198,44,150,195,203,85,62,
    124,73,185,15,102,51,19,18,214,124,199,156,56,15,255,53,
    224,124,137,48,111,195,89,196,125,99,247,49,217,158,146,103,
    101,231,169,74,151,249,34,58,84,198,22,206,63,232,69,172,
    158,140,244,188,150,201,156,111,243,191,77,177,238,98,227,238,
    145,25,206,108,142,195,169,54,203,204,87,195,11,204,239,15,
    93,105,134,13,177,171,77,25,44,42,207,108,112,189,176,165,
    79,114,244,51,155,186,47,56,14,135,134,176,21,26,222,213,
    230,19,250,220,67,220,55,164,253,45,178,218,219,124,110,146,
    194,22,70,155,217,188,184,168,9,241,148,184,221,80,123,75,
    126,187,52,33,199,220,150,85,146,83,170,95,113,144,80,200,
    253,59,53,207,122,50,50,190,42,200,199,58,115,248,110,232,
    176,92,37,254,188,156,151,152,112,178,232,30,252,87,70,140,
    157,151,203,119,68,136,245,119,203,133,108,160,215,151,152,216,
    21,150,15,175,56,185,207,248,68,190,24,41,250,69,243,1,
    14,238,41,55,211,37,166,170,86,85,165,54,215,243,226,208,
    125,74,227,158,59,164,114,211,25,58,67,3,70,163,167,207,
    84,116,242,227,233,73,252,116,116,50,62,127,244,195,161,27,
    110,70,45,176,156,42,92,97,225,21,47,56,205,236,107,154,
    185,44,60,150,238,159,115,14,105,206,163,236,181,174,156,114,
    85,97,148,159,149,168,83,174,107,143,107,239,148,45,20,197,
    41,171,33,174,231,94,228,249,242,187,39,191,184,219,212,120,
    98,157,87,38,179,230,82,77,89,118,44,76,117,81,95,36,
    127,60,116,7,44,115,101,50,84,206,16,105,69,146,121,91,
    70,31,177,202,59,100,146,164,208,57,38,137,220,69,9,215,
    207,50,99,87,118,165,90,160,224,102,189,78,102,196,7,203,
    120,183,153,168,95,58,95,82,48,169,62,147,105,231,234,179,
    17,119,120,203,120,68,204,83,227,189,166,194,78,117,169,243,
    88,14,103,167,118,41,35,57,167,186,168,100,196,165,92,138,
    188,242,145,181,89,220,229,161,251,100,150,116,121,54,138,179,
    224,190,95,131,167,36,234,179,141,178,158,215,209,162,224,25,
    9,120,126,44,17,143,89,22,161,59,35,149,30,147,60,117,
    177,103,86,123,201,76,224,90,146,191,11,236,237,170,76,110,
    55,158,228,62,33,211,9,228,13,251,157,126,155,223,59,193,
    1,189,221,160,27,30,4,227,136,57,120,78,47,191,63,88,
    176,44,78,56,178,87,218,117,21,75,213,179,82,18,244,255,
    50,147,216,95,215,59,251,205,93,142,192,64,47,232,133,251,
    193,126,248,23,108,172,136,29,
};

EmbeddedPython embedded_m5_objects_BaseKvmCPU(
    "m5/objects/BaseKvmCPU.py",
    "/home/faculty/gem5/src/cpu/kvm/BaseKvmCPU.py",
    "m5.objects.BaseKvmCPU",
    data_m5_objects_BaseKvmCPU,
    872,
    1822);

} // anonymous namespace