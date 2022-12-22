        #include "sim/init.hh"

        extern "C" {
            void init_param_ElasticTrace();
        }

        EmbeddedSwig embed_swig_param_ElasticTrace(init_param_ElasticTrace, "m5.internal._param_ElasticTrace");
        
