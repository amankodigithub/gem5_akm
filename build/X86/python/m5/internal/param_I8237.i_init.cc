        #include "sim/init.hh"

        extern "C" {
            void init_param_I8237();
        }

        EmbeddedSwig embed_swig_param_I8237(init_param_I8237, "m5.internal._param_I8237");
        
