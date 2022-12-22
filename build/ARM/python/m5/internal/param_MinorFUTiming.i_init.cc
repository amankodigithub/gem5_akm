        #include "sim/init.hh"

        extern "C" {
            void init_param_MinorFUTiming();
        }

        EmbeddedSwig embed_swig_param_MinorFUTiming(init_param_MinorFUTiming, "m5.internal._param_MinorFUTiming");
        
