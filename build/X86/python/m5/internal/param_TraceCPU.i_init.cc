        #include "sim/init.hh"

        extern "C" {
            void init_param_TraceCPU();
        }

        EmbeddedSwig embed_swig_param_TraceCPU(init_param_TraceCPU, "m5.internal._param_TraceCPU");
        
