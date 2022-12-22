#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_IntrControl[] = {
    120,156,165,80,177,78,195,48,16,61,167,105,41,133,1,137,
    137,1,201,99,96,104,166,110,168,66,48,177,0,106,88,200,
    18,25,231,74,90,197,73,228,184,162,153,225,191,225,206,105,
    161,59,182,243,124,119,138,223,189,119,26,118,107,64,223,173,
    4,104,231,20,228,116,4,148,0,70,64,42,64,112,30,64,
    25,192,203,46,26,80,52,0,20,176,20,144,135,240,5,240,
    9,240,154,134,144,15,33,137,70,68,177,250,166,21,9,138,
    220,49,65,178,50,79,111,107,212,174,47,49,92,187,19,194,
    135,202,217,251,154,160,46,245,161,150,59,214,114,69,1,2,
    75,160,190,105,192,162,82,106,27,194,122,8,56,130,245,17,
    139,249,12,32,29,195,34,137,248,217,34,32,104,207,9,116,
    179,137,87,196,155,233,158,125,90,20,237,5,247,46,80,182,
    93,235,208,200,15,148,202,162,108,148,117,178,94,70,172,211,
    141,9,178,172,82,6,179,204,77,124,98,234,124,83,114,26,
    242,15,93,131,190,174,183,219,172,64,149,163,117,67,74,159,
    149,85,198,177,243,196,147,251,144,138,88,57,199,194,84,213,
    249,155,90,71,236,241,15,188,203,184,168,13,198,75,165,55,
    165,235,226,119,52,179,184,181,58,102,19,7,19,154,54,157,
    55,40,249,25,55,24,9,222,143,17,43,112,167,4,102,54,
    253,29,245,2,246,211,167,106,195,250,90,111,143,51,91,111,
    123,170,127,137,241,116,55,253,124,230,151,123,81,103,98,66,
    251,7,25,194,129,7,
};

EmbeddedPython embedded_m5_objects_IntrControl(
    "m5/objects/IntrControl.py",
    "/home/faculty/gem5/src/cpu/IntrControl.py",
    "m5.objects.IntrControl",
    data_m5_objects_IntrControl,
    342,
    602);

} // anonymous namespace