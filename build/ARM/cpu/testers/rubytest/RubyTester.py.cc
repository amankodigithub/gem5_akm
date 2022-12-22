#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_RubyTester[] = {
    120,156,173,83,205,110,211,64,16,30,167,73,218,166,191,180,
    133,3,18,98,65,2,69,28,234,83,15,72,168,66,21,66,
    234,161,80,181,21,18,185,88,206,238,164,78,106,123,141,119,
    173,212,231,242,40,188,9,15,6,51,227,184,41,23,184,224,
    77,70,51,223,204,206,207,231,177,134,197,179,66,255,247,10,
    192,29,147,98,232,23,64,10,144,1,140,0,2,182,59,144,
    6,112,181,208,58,164,173,0,2,76,2,48,93,248,14,112,
    7,240,117,180,2,166,7,151,195,62,165,152,254,162,103,24,
    144,230,215,73,156,97,246,121,60,67,237,27,136,197,27,63,
    32,121,81,141,235,43,116,30,75,253,176,149,19,110,229,7,
    41,84,99,20,112,67,163,14,247,68,37,176,11,179,30,119,
    113,71,102,31,112,21,168,21,214,215,68,239,138,190,46,122,
    79,244,65,123,165,15,102,21,238,58,48,218,104,145,53,48,
    235,130,108,182,200,0,204,134,32,91,130,108,3,238,128,217,
    20,100,87,144,71,128,123,48,219,7,179,37,224,1,92,92,
    14,183,121,144,14,9,247,146,132,46,170,208,203,72,46,44,
    105,60,214,195,229,156,135,73,226,158,82,88,94,101,99,44,
    149,157,40,186,224,84,168,56,228,220,150,222,185,87,77,22,
    165,109,54,182,170,96,76,121,171,166,185,243,234,181,50,177,
    143,149,142,117,130,206,61,91,68,222,199,216,60,173,155,192,
    191,70,60,200,49,53,220,248,30,135,37,168,111,36,134,10,
    23,41,122,156,158,255,36,223,115,242,37,118,78,173,122,204,
    197,205,129,106,98,75,101,48,54,169,213,55,83,126,151,78,
    253,57,86,173,83,116,106,140,126,142,116,111,30,223,96,85,
    56,119,208,86,106,234,171,73,90,185,100,154,95,187,125,114,
    92,214,68,81,166,230,72,215,82,155,95,83,181,225,99,222,
    152,53,18,81,148,199,25,70,145,44,78,20,101,214,84,41,
    155,93,14,168,11,20,92,223,222,70,9,117,133,165,239,145,
    121,30,151,113,230,121,165,78,115,47,89,168,193,136,25,247,
    187,100,124,161,149,180,229,89,204,47,134,185,247,59,13,93,
    167,196,224,7,226,72,176,141,37,246,208,190,247,47,185,139,
    188,141,90,238,4,110,249,137,124,82,162,75,108,106,164,108,
    195,69,52,41,241,91,133,185,174,101,132,19,107,83,233,249,
    99,156,58,108,170,112,214,72,24,242,253,123,122,68,165,193,
    144,38,226,201,226,188,22,200,137,119,200,223,208,82,184,183,
    36,194,196,102,24,78,98,93,165,190,14,175,49,59,10,93,
    169,195,127,109,106,81,203,86,191,224,52,79,72,244,3,62,
    59,193,166,156,189,197,249,52,228,238,47,160,253,214,179,163,
    195,130,89,119,66,55,91,165,189,109,50,253,215,222,36,253,
    187,102,11,142,121,205,29,147,176,27,12,130,65,231,55,111,
    231,56,188,
};

EmbeddedPython embedded_m5_objects_RubyTester(
    "m5/objects/RubyTester.py",
    "/home/faculty/gem5/src/cpu/testers/rubytest/RubyTester.py",
    "m5.objects.RubyTester",
    data_m5_objects_RubyTester,
    643,
    1240);

} // anonymous namespace