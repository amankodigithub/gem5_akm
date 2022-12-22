        #include "sim/init.hh"

        extern "C" {
            void init_param_CustomNoMaliGpu();
        }

        EmbeddedSwig embed_swig_param_CustomNoMaliGpu(init_param_CustomNoMaliGpu, "m5.internal._param_CustomNoMaliGpu");
        
