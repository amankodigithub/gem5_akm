#include "sim/init.hh"

namespace {

const uint8_t data_m5_core[] = {
    120,156,149,143,61,11,194,48,16,134,239,162,131,131,163,139,
    131,232,216,201,76,110,34,130,206,21,218,205,173,164,209,182,
    244,139,230,58,20,220,244,127,235,93,168,56,27,146,203,115,
    185,188,111,46,6,198,161,120,29,55,0,110,201,144,242,68,
    40,1,174,12,10,94,12,40,39,113,48,225,106,254,230,17,
    26,100,196,81,121,18,229,130,129,0,10,132,66,193,3,224,
    137,128,236,20,7,114,43,244,82,154,137,190,38,219,213,73,
    73,83,78,76,211,89,154,51,56,75,151,158,218,158,206,121,
    231,21,36,130,148,19,105,207,7,39,81,103,77,101,245,45,
    49,125,73,131,190,219,106,167,93,103,116,59,80,214,212,154,
    51,113,220,182,67,36,125,173,69,37,0,24,200,22,9,250,
    202,207,245,127,107,255,139,125,213,164,125,105,15,171,239,19,
    115,245,1,76,203,65,34,
};

EmbeddedPython embedded_m5_core(
    "m5/core.py",
    "/home/faculty/gem5/src/python/m5/core.py",
    "m5.core",
    data_m5_core,
    199,
    333);

} // anonymous namespace
