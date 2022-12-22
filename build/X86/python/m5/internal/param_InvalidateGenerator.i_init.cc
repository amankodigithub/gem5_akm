        #include "sim/init.hh"

        extern "C" {
            void init_param_InvalidateGenerator();
        }

        EmbeddedSwig embed_swig_param_InvalidateGenerator(init_param_InvalidateGenerator, "m5.internal._param_InvalidateGenerator");
        
