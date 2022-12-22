        #include "sim/init.hh"

        extern "C" {
            void init_param_LiveProcess();
        }

        EmbeddedSwig embed_swig_param_LiveProcess(init_param_LiveProcess, "m5.internal._param_LiveProcess");
        
