        #include "sim/init.hh"

        extern "C" {
            void init_param_DirectedGenerator();
        }

        EmbeddedSwig embed_swig_param_DirectedGenerator(init_param_DirectedGenerator, "m5.internal._param_DirectedGenerator");
        
