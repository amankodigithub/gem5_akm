        #include "sim/init.hh"

        extern "C" {
            void init_PowerModelState_vector();
        }

        EmbeddedSwig embed_swig_PowerModelState_vector(init_PowerModelState_vector, "m5.internal._PowerModelState_vector");
        
