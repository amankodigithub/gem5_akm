#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_NoMali[] = {
    120,156,165,86,91,143,219,68,20,30,59,217,220,246,146,189,
    180,91,42,212,98,238,105,81,55,81,161,229,5,33,90,64,
    21,72,91,86,222,182,18,251,128,53,107,79,146,9,118,28,
    121,198,219,93,30,80,81,121,230,47,240,11,248,139,45,231,
    59,118,178,241,182,32,68,227,238,233,124,103,198,227,57,103,
    190,111,206,132,162,252,213,232,239,43,79,8,243,140,26,17,
    253,115,68,44,196,35,180,92,17,59,34,113,197,145,43,156,
    178,167,70,61,53,161,234,98,232,136,168,46,126,23,226,185,
    16,63,30,173,136,104,69,168,6,123,27,11,111,83,68,77,
    161,154,236,109,45,188,45,17,181,133,106,177,183,179,240,182,
    69,180,42,14,123,107,180,8,253,146,126,61,135,90,22,230,
    102,209,220,32,115,95,26,29,30,232,244,27,117,162,67,101,
    215,201,245,48,221,151,177,126,48,203,31,157,205,84,184,28,
    212,125,4,117,133,26,74,136,35,167,12,141,98,26,213,16,
    144,127,216,195,32,91,39,243,232,238,224,180,108,220,46,27,
    159,223,29,20,253,45,50,65,48,149,137,10,2,219,97,144,
    164,81,30,3,98,228,137,140,77,15,159,60,55,140,251,227,
    52,81,253,161,12,243,216,158,245,71,42,185,211,55,89,216,
    143,212,73,95,102,73,191,88,246,222,236,204,119,17,34,222,
    106,144,105,56,53,122,108,123,57,176,87,131,250,107,57,40,
    138,133,226,58,226,77,153,172,32,192,231,4,27,12,155,200,
    243,132,82,91,19,207,105,27,59,236,92,197,198,209,118,193,
    179,198,158,117,108,26,109,21,60,27,75,158,22,123,186,75,
    158,54,123,54,231,158,14,127,107,107,14,87,25,110,207,225,
    26,195,29,164,26,59,229,35,42,115,25,44,43,147,48,154,
    229,193,52,77,144,136,241,216,236,80,79,177,177,222,177,52,
    202,147,81,148,41,99,12,69,44,14,98,105,135,105,150,120,
    118,172,141,23,21,163,168,53,147,153,245,210,225,158,191,130,
    185,177,87,15,14,30,123,150,168,160,121,39,118,74,207,19,
    149,25,157,78,189,222,190,156,164,217,141,215,248,245,20,254,
    75,23,253,135,86,218,220,220,48,239,83,199,119,83,171,178,
    44,159,89,111,154,39,199,42,243,104,69,30,70,235,121,135,
    249,231,113,223,255,112,255,63,141,219,223,95,158,175,135,5,
    249,96,134,223,156,179,21,209,49,19,195,211,211,96,172,100,
    164,50,139,240,15,100,38,19,30,113,143,50,199,196,157,233,
    52,144,115,224,43,25,63,209,234,169,109,20,131,213,212,90,
    80,74,78,207,138,193,101,142,153,145,236,193,254,240,215,240,
    198,99,90,238,167,183,45,150,113,162,178,32,145,147,243,54,
    45,184,83,182,13,39,140,187,200,27,208,20,139,246,36,61,
    94,180,147,36,127,35,213,128,75,3,188,181,203,170,161,199,
    237,186,151,221,109,135,31,183,235,116,29,219,165,174,175,105,
    45,105,242,170,150,220,185,150,58,206,235,180,68,42,58,170,
    11,181,34,38,13,22,15,57,155,85,216,170,194,118,21,118,
    170,112,181,10,215,170,112,189,10,55,170,176,91,133,155,85,
    72,218,219,94,130,59,85,120,137,7,95,158,195,221,42,188,
    82,133,111,65,168,160,143,249,163,56,106,149,23,198,146,244,
    7,90,134,156,71,175,72,164,167,147,89,172,18,34,144,180,
    80,137,29,75,226,176,82,145,103,83,47,37,22,100,58,82,
    29,143,126,97,58,29,234,81,158,21,227,50,53,210,134,168,
    109,246,188,67,165,188,229,189,193,129,203,31,146,94,110,228,
    72,121,234,84,226,35,123,29,158,199,127,251,95,207,14,203,
    44,186,90,213,74,147,15,235,40,13,131,192,7,59,253,85,
    24,20,24,31,170,98,82,99,22,29,89,244,196,183,131,161,
    34,238,210,153,195,181,198,234,152,232,188,112,225,189,68,37,
    23,28,73,126,238,192,55,164,9,102,212,134,180,0,39,231,
    112,27,83,142,51,146,43,73,231,52,40,154,198,94,173,186,
    159,166,217,207,163,44,205,103,129,209,191,40,123,165,218,123,
    44,41,179,208,24,250,186,231,125,139,37,32,142,39,42,180,
    105,86,28,6,155,24,163,78,209,89,29,68,11,91,224,185,
    184,239,126,198,113,155,49,78,148,197,186,215,23,169,88,14,
    140,146,85,194,55,82,49,118,245,30,222,250,8,42,174,55,
    92,214,177,179,244,184,75,255,23,170,222,188,160,106,48,231,
    213,18,249,236,181,37,178,144,53,241,29,23,150,58,170,36,
    213,65,92,83,26,16,52,85,64,92,67,90,144,47,236,42,
    219,53,84,189,35,46,118,84,224,168,168,225,254,176,33,34,
    242,144,237,50,236,138,104,19,210,196,156,91,108,183,33,166,
    45,132,246,19,153,111,11,50,207,229,195,100,207,6,179,193,
    173,193,5,133,228,70,79,71,164,39,69,53,110,40,41,125,
    164,190,44,77,88,3,240,150,19,196,250,56,147,217,89,41,
    14,42,117,7,77,221,112,119,154,186,77,199,182,198,117,73,
    15,122,184,72,161,197,71,174,112,96,234,245,142,190,46,94,
    224,134,69,229,231,229,203,223,254,68,210,244,6,157,134,250,
    5,70,252,10,8,102,245,118,42,98,242,175,193,92,135,121,
    7,6,53,217,127,23,230,61,24,84,51,255,3,152,15,97,
    176,155,254,199,48,96,131,143,219,141,255,9,204,45,152,61,
    152,126,133,53,255,131,58,56,252,145,90,115,115,78,29,151,
    203,64,241,204,219,53,92,167,218,165,133,231,97,15,244,229,
    11,86,114,103,111,6,149,20,10,40,110,30,62,95,53,193,
    162,7,58,228,90,250,45,213,230,162,34,226,157,197,221,147,
    11,16,243,151,87,242,38,161,112,169,253,162,184,84,126,137,
    212,25,28,45,29,103,211,233,184,187,141,221,173,221,107,127,
    3,141,8,137,157,
};

EmbeddedPython embedded_m5_objects_NoMali(
    "m5/objects/NoMali.py",
    "/home/faculty/gem5/src/dev/arm/NoMali.py",
    "m5.objects.NoMali",
    data_m5_objects_NoMali,
    1301,
    2988);

} // anonymous namespace