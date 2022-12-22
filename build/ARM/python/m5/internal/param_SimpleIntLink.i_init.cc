        #include "sim/init.hh"

        extern "C" {
            void init_param_SimpleIntLink();
        }

        EmbeddedSwig embed_swig_param_SimpleIntLink(init_param_SimpleIntLink, "m5.internal._param_SimpleIntLink");
        
