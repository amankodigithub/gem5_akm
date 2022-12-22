        #include "sim/init.hh"

        extern "C" {
            void init_param_BaseCache();
        }

        EmbeddedSwig embed_swig_param_BaseCache(init_param_BaseCache, "m5.internal._param_BaseCache");
        
