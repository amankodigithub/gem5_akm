        #include "sim/init.hh"

        extern "C" {
            void init_param_IdeDisk();
        }

        EmbeddedSwig embed_swig_param_IdeDisk(init_param_IdeDisk, "m5.internal._param_IdeDisk");
        
