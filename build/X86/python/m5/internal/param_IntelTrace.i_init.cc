        #include "sim/init.hh"

        extern "C" {
            void init_param_IntelTrace();
        }

        EmbeddedSwig embed_swig_param_IntelTrace(init_param_IntelTrace, "m5.internal._param_IntelTrace");
        
