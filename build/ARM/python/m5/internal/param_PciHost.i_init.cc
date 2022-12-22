        #include "sim/init.hh"

        extern "C" {
            void init_param_PciHost();
        }

        EmbeddedSwig embed_swig_param_PciHost(init_param_PciHost, "m5.internal._param_PciHost");
        
