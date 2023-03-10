#include "enums/OpClass.hh"
namespace Enums {
     const char *OpClassStrings[Num_OpClass] =
    {
        "No_OpClass",
        "IntAlu",
        "IntMult",
        "IntDiv",
        "FloatAdd",
        "FloatCmp",
        "FloatCvt",
        "FloatMult",
        "FloatMultAcc",
        "FloatDiv",
        "FloatMisc",
        "FloatSqrt",
        "SimdAdd",
        "SimdAddAcc",
        "SimdAlu",
        "SimdCmp",
        "SimdCvt",
        "SimdMisc",
        "SimdMult",
        "SimdMultAcc",
        "SimdShift",
        "SimdShiftAcc",
        "SimdSqrt",
        "SimdFloatAdd",
        "SimdFloatAlu",
        "SimdFloatCmp",
        "SimdFloatCvt",
        "SimdFloatDiv",
        "SimdFloatMisc",
        "SimdFloatMult",
        "SimdFloatMultAcc",
        "SimdFloatSqrt",
        "MemRead",
        "MemWrite",
        "FloatMemRead",
        "FloatMemWrite",
        "IprAccess",
        "InstPrefetch",
    };
    } // namespace Enums
