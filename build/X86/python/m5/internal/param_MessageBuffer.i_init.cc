        #include "sim/init.hh"

        extern "C" {
            void init_param_MessageBuffer();
        }

        EmbeddedSwig embed_swig_param_MessageBuffer(init_param_MessageBuffer, "m5.internal._param_MessageBuffer");
        
