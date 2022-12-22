        #include "sim/init.hh"

        extern "C" {
            void init_param_PowerModel();
        }

        EmbeddedSwig embed_swig_param_PowerModel(init_param_PowerModel, "m5.internal._param_PowerModel");
        
