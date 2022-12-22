        #include "sim/init.hh"

        extern "C" {
            void init_ExtCharacteristic_vector();
        }

        EmbeddedSwig embed_swig_ExtCharacteristic_vector(init_ExtCharacteristic_vector, "m5.internal._ExtCharacteristic_vector");
        
