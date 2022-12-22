        #include "sim/init.hh"

        extern "C" {
            void init_param_GarnetSyntheticTraffic();
        }

        EmbeddedSwig embed_swig_param_GarnetSyntheticTraffic(init_param_GarnetSyntheticTraffic, "m5.internal._param_GarnetSyntheticTraffic");
        
