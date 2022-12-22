        #include "sim/init.hh"

        extern "C" {
            void init_param_Pl390();
        }

        EmbeddedSwig embed_swig_param_Pl390(init_param_Pl390, "m5.internal._param_Pl390");
        
