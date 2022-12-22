        #include "sim/init.hh"

        extern "C" {
            void init_param_QueuedPrefetcher();
        }

        EmbeddedSwig embed_swig_param_QueuedPrefetcher(init_param_QueuedPrefetcher, "m5.internal._param_QueuedPrefetcher");
        
