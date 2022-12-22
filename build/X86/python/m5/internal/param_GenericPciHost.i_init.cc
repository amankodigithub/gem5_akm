        #include "sim/init.hh"

        extern "C" {
            void init_param_GenericPciHost();
        }

        EmbeddedSwig embed_swig_param_GenericPciHost(init_param_GenericPciHost, "m5.internal._param_GenericPciHost");
        
