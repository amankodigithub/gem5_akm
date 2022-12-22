        #include "sim/init.hh"

        extern "C" {
            void init_param_BaseSimpleCPU();
        }

        EmbeddedSwig embed_swig_param_BaseSimpleCPU(init_param_BaseSimpleCPU, "m5.internal._param_BaseSimpleCPU");
        
