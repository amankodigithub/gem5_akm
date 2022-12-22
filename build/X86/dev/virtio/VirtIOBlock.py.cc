#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_VirtIOBlock[] = {
    120,156,173,81,193,78,194,64,16,157,109,1,17,47,68,79,
    222,122,172,198,80,47,220,12,49,132,139,23,49,160,38,246,
    210,212,118,128,149,150,214,238,150,80,79,38,248,223,58,179,
    69,228,3,220,182,47,51,179,59,243,222,190,70,176,91,54,
    125,183,14,128,26,80,16,211,43,32,1,120,220,69,162,142,
    44,72,44,72,109,240,109,16,177,13,104,195,76,64,220,128,
    47,128,45,192,139,223,128,184,9,83,183,69,35,228,55,45,
    87,80,164,25,46,235,176,75,240,44,11,125,55,30,225,90,
    70,56,12,21,234,147,125,113,152,100,209,50,58,148,52,100,
    73,125,10,16,192,23,44,204,183,88,17,41,192,6,188,53,
    89,19,41,217,90,224,183,76,229,136,245,108,233,64,27,38,
    83,183,73,157,19,139,64,157,241,181,112,237,173,137,72,102,
    222,43,51,245,22,11,249,201,155,231,4,227,82,231,165,118,
    222,75,44,209,81,242,3,29,55,15,231,168,46,84,135,118,
    71,82,45,29,153,82,193,61,230,139,180,9,130,96,21,166,
    24,4,186,99,146,52,139,203,132,211,6,31,168,114,52,245,
    104,179,9,22,24,198,88,104,22,243,16,22,97,106,186,159,
    86,74,206,87,24,107,158,103,88,167,68,106,50,38,187,99,
    46,211,82,179,178,33,127,160,174,9,188,69,150,162,55,11,
    163,50,209,149,55,199,180,239,169,34,242,14,110,121,224,106,
    47,175,140,17,87,220,205,252,45,65,143,117,106,221,27,147,
    12,111,218,239,229,172,79,25,129,156,21,217,166,210,173,253,
    255,153,136,95,63,255,67,143,97,185,169,109,27,240,24,197,
    76,29,209,17,93,235,7,231,152,145,183,
};

EmbeddedPython embedded_m5_objects_VirtIOBlock(
    "m5/objects/VirtIOBlock.py",
    "/home/faculty/gem5/src/dev/virtio/VirtIOBlock.py",
    "m5.objects.VirtIOBlock",
    data_m5_objects_VirtIOBlock,
    379,
    664);

} // anonymous namespace