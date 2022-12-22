        #include "sim/init.hh"

        extern "C" {
            void init_param_MinorOpClass();
        }

        EmbeddedSwig embed_swig_param_MinorOpClass(init_param_MinorOpClass, "m5.internal._param_MinorOpClass");
        
