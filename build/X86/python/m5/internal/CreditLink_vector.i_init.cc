        #include "sim/init.hh"

        extern "C" {
            void init_CreditLink_vector();
        }

        EmbeddedSwig embed_swig_CreditLink_vector(init_CreditLink_vector, "m5.internal._CreditLink_vector");
        
