        #include "sim/init.hh"

        extern "C" {
            void init_param_ArmSystem();
        }

        EmbeddedSwig embed_swig_param_ArmSystem(init_param_ArmSystem, "m5.internal._param_ArmSystem");
        
