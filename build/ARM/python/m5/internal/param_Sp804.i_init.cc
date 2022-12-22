        #include "sim/init.hh"

        extern "C" {
            void init_param_Sp804();
        }

        EmbeddedSwig embed_swig_param_Sp804(init_param_Sp804, "m5.internal._param_Sp804");
        
