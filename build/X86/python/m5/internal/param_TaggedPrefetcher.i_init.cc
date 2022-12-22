        #include "sim/init.hh"

        extern "C" {
            void init_param_TaggedPrefetcher();
        }

        EmbeddedSwig embed_swig_param_TaggedPrefetcher(init_param_TaggedPrefetcher, "m5.internal._param_TaggedPrefetcher");
        
