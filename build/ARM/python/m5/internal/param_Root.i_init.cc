        #include "sim/init.hh"

        extern "C" {
            void init_param_Root();
        }

        EmbeddedSwig embed_swig_param_Root(init_param_Root, "m5.internal._param_Root");
        
