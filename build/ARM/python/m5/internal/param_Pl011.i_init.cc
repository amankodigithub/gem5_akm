        #include "sim/init.hh"

        extern "C" {
            void init_param_Pl011();
        }

        EmbeddedSwig embed_swig_param_Pl011(init_param_Pl011, "m5.internal._param_Pl011");
        
