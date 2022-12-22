        #include "sim/init.hh"

        extern "C" {
            void init_param_GenericArmSystem();
        }

        EmbeddedSwig embed_swig_param_GenericArmSystem(init_param_GenericArmSystem, "m5.internal._param_GenericArmSystem");
        
