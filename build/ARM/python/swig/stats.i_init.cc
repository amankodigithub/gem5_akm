        #include "sim/init.hh"

        extern "C" {
            void init_stats();
        }

        EmbeddedSwig embed_swig_stats(init_stats, "m5.internal._stats");
        
