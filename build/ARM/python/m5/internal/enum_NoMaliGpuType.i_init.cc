        #include "sim/init.hh"

        extern "C" {
            void init_enum_NoMaliGpuType();
        }

        EmbeddedSwig embed_swig_enum_NoMaliGpuType(init_enum_NoMaliGpuType, "m5.internal._enum_NoMaliGpuType");
        
