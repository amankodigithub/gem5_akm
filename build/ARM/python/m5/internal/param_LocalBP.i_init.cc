        #include "sim/init.hh"

        extern "C" {
            void init_param_LocalBP();
        }

        EmbeddedSwig embed_swig_param_LocalBP(init_param_LocalBP, "m5.internal._param_LocalBP");
        
