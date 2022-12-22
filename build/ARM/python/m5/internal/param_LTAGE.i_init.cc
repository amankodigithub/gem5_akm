        #include "sim/init.hh"

        extern "C" {
            void init_param_LTAGE();
        }

        EmbeddedSwig embed_swig_param_LTAGE(init_param_LTAGE, "m5.internal._param_LTAGE");
        
