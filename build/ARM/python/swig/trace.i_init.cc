        #include "sim/init.hh"

        extern "C" {
            void init_trace();
        }

        EmbeddedSwig embed_swig_trace(init_trace, "m5.internal._trace");
        
