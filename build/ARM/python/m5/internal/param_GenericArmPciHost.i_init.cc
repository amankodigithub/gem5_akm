        #include "sim/init.hh"

        extern "C" {
            void init_param_GenericArmPciHost();
        }

        EmbeddedSwig embed_swig_param_GenericArmPciHost(init_param_GenericArmPciHost, "m5.internal._param_GenericArmPciHost");
        
