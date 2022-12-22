        #include "sim/init.hh"

        extern "C" {
            void init_param_PowerModelState();
        }

        EmbeddedSwig embed_swig_param_PowerModelState(init_param_PowerModelState, "m5.internal._param_PowerModelState");
        
