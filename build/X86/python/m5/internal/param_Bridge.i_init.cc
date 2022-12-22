        #include "sim/init.hh"

        extern "C" {
            void init_param_Bridge();
        }

        EmbeddedSwig embed_swig_param_Bridge(init_param_Bridge, "m5.internal._param_Bridge");
        
