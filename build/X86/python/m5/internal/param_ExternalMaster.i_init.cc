        #include "sim/init.hh"

        extern "C" {
            void init_param_ExternalMaster();
        }

        EmbeddedSwig embed_swig_param_ExternalMaster(init_param_ExternalMaster, "m5.internal._param_ExternalMaster");
        
