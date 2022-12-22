        #include "sim/init.hh"

        extern "C" {
            void init_param_AbstractMemory();
        }

        EmbeddedSwig embed_swig_param_AbstractMemory(init_param_AbstractMemory, "m5.internal._param_AbstractMemory");
        
