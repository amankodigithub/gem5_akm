        #include "sim/init.hh"

        extern "C" {
            void init_param_StridePrefetcher();
        }

        EmbeddedSwig embed_swig_param_StridePrefetcher(init_param_StridePrefetcher, "m5.internal._param_StridePrefetcher");
        
