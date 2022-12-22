#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Process[] = {
    120,156,157,86,109,111,35,53,16,246,166,105,218,166,239,185,
    94,5,8,36,131,64,108,209,181,65,232,238,132,196,139,174,
    61,238,195,9,238,168,146,30,18,69,40,114,215,78,226,118,
    189,187,178,189,105,139,248,86,126,13,255,140,95,1,51,227,
    221,176,135,90,62,52,219,157,140,31,191,61,30,207,60,105,
    194,170,207,2,188,207,56,99,238,28,28,9,127,17,75,25,
    51,17,59,141,88,132,237,22,75,91,236,164,242,22,192,91,
    96,42,98,227,136,201,54,251,131,177,27,198,126,62,109,51,
    185,88,163,157,57,186,200,228,18,83,109,66,151,231,104,135,
    201,21,54,140,187,176,157,254,27,62,113,4,158,95,1,51,
    212,230,199,179,115,149,248,0,161,249,204,47,129,61,182,121,
    162,156,75,154,156,143,144,243,159,224,40,134,84,129,223,105,
    139,169,5,134,92,128,60,208,233,176,243,37,36,13,132,111,
    90,236,116,185,70,136,44,34,43,53,210,65,162,136,116,9,
    89,101,106,141,157,175,35,105,4,55,8,220,68,218,178,75,
    200,86,3,89,37,100,155,144,30,147,107,76,174,19,242,128,
    169,29,38,55,232,216,192,231,33,27,12,227,77,160,59,104,
    129,113,27,104,180,233,23,225,100,7,211,169,199,67,37,58,
    115,61,248,30,235,84,101,194,40,62,206,45,119,94,234,204,
    183,177,59,47,189,123,112,75,63,224,97,128,178,246,214,1,
    136,191,135,123,94,59,175,12,175,182,229,151,58,77,185,45,
    51,158,103,126,17,167,137,212,41,103,192,51,2,246,132,151,
    139,140,235,108,223,40,147,219,107,62,83,214,233,28,134,143,
    185,159,42,94,136,137,226,255,243,241,226,44,85,60,44,34,
    108,50,213,30,46,183,180,106,223,21,42,209,99,157,32,61,
    35,188,251,20,147,33,211,94,139,84,255,166,194,218,21,69,
    60,192,247,51,243,252,248,13,46,52,124,65,231,124,250,248,
    213,145,123,151,104,94,105,83,26,238,112,90,197,202,121,145,
    92,36,24,230,250,125,206,171,144,255,30,97,114,220,132,204,
    30,198,216,247,218,61,3,123,150,231,41,55,162,136,15,165,
    180,124,38,192,62,226,228,23,193,135,104,208,38,143,56,13,
    77,68,50,85,120,186,111,188,45,213,222,87,49,166,37,173,
    23,238,49,117,213,133,73,21,186,208,184,79,192,244,167,185,
    81,253,177,72,202,212,95,247,39,202,60,233,59,155,244,49,
    25,170,52,63,40,174,61,146,85,87,69,110,253,200,40,63,
    205,165,59,192,5,112,3,214,138,119,113,159,101,48,163,17,
    94,242,104,228,187,212,48,185,44,83,108,226,222,254,186,80,
    228,156,0,67,26,45,206,156,183,34,241,52,58,185,186,26,
    193,17,32,51,232,230,143,133,21,198,119,176,10,189,213,217,
    132,64,157,21,144,88,8,66,130,213,46,164,82,94,185,67,
    202,38,114,97,190,202,60,29,94,100,215,4,133,92,35,10,
    71,16,51,42,241,210,169,67,72,132,227,19,170,235,139,153,
    121,153,193,149,34,159,87,148,97,67,8,49,29,30,46,118,
    68,23,57,194,168,251,85,10,170,112,46,68,99,208,173,99,
    122,159,232,82,9,126,136,83,222,1,211,137,194,211,163,231,
    97,180,2,15,120,45,162,241,194,148,169,240,74,126,103,53,
    228,254,92,128,90,181,0,237,253,71,128,80,122,22,80,243,
    154,2,132,245,191,140,245,143,209,25,112,220,184,87,213,191,
    130,245,71,146,22,7,13,112,31,160,6,171,153,78,160,112,
    161,130,57,149,112,92,102,112,75,188,15,29,123,49,6,113,
    128,209,24,172,161,89,71,179,133,6,217,14,72,96,182,209,
    244,234,20,169,149,224,254,209,66,194,95,224,148,229,70,180,
    232,70,126,0,222,119,106,243,95,119,133,230,124,177,161,202,
    29,166,150,8,105,87,97,10,205,9,107,136,244,124,74,167,
    22,233,54,138,52,104,118,165,208,107,13,100,133,144,245,6,
    210,173,85,124,142,4,205,222,108,32,107,181,174,7,100,29,
    149,187,210,245,54,233,58,136,253,86,173,235,192,112,135,24,
    110,19,66,210,142,241,30,124,116,135,180,83,192,63,166,146,
    86,73,25,84,49,206,225,206,173,150,202,241,196,200,95,62,
    255,149,235,49,119,202,239,185,152,132,195,24,145,73,158,234,
    12,134,54,166,21,105,233,64,75,39,165,129,114,115,123,110,
    7,87,205,102,218,230,25,34,184,130,135,242,117,164,142,73,
    105,177,42,249,101,110,47,0,228,82,91,16,96,40,51,45,
    145,209,82,40,72,203,181,116,152,52,106,60,134,110,184,83,
    94,163,120,227,19,40,247,2,27,189,183,134,204,97,44,197,
    90,172,181,212,152,8,180,90,65,138,192,27,93,20,134,253,
    16,30,44,43,252,37,41,114,84,86,1,28,167,58,153,114,
    159,163,124,91,212,218,122,8,253,110,29,206,132,78,41,0,
    170,170,72,30,170,198,145,24,222,90,17,255,214,65,247,173,
    208,83,234,254,68,129,8,170,71,138,109,36,125,67,44,67,
    251,50,180,95,86,162,86,106,73,74,166,208,65,96,82,3,
    147,10,40,42,160,64,7,245,239,13,204,125,250,152,138,16,
    78,67,7,165,90,34,233,171,217,223,187,42,49,215,190,196,
    41,239,207,171,178,23,109,86,42,214,124,94,199,184,159,199,
    224,152,39,7,243,255,177,6,184,31,105,50,160,5,198,193,
    17,85,108,217,252,42,136,36,241,165,173,238,77,148,22,253,
    58,252,50,125,139,250,70,9,179,21,117,163,110,107,119,123,
    183,243,15,211,17,101,248,
};

EmbeddedPython embedded_m5_objects_Process(
    "m5/objects/Process.py",
    "/home/faculty/gem5/src/sim/Process.py",
    "m5.objects.Process",
    data_m5_objects_Process,
    1239,
    2697);

} // anonymous namespace