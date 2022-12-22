        #include "sim/init.hh"

        extern "C" {
            void init_serialize();
        }

        EmbeddedSwig embed_swig_serialize(init_serialize, "m5.internal._serialize");
        
