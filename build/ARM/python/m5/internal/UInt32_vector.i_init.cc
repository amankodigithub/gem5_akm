        #include "sim/init.hh"

        extern "C" {
            void init_UInt32_vector();
        }

        EmbeddedSwig embed_swig_UInt32_vector(init_UInt32_vector, "m5.internal._UInt32_vector");
        
