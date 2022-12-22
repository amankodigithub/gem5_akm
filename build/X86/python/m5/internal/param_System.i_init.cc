        #include "sim/init.hh"

        extern "C" {
            void init_param_System();
        }

        EmbeddedSwig embed_swig_param_System(init_param_System, "m5.internal._param_System");
        
