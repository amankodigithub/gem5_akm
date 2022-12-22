        #include "sim/init.hh"

        extern "C" {
            void init_param_I8254();
        }

        EmbeddedSwig embed_swig_param_I8254(init_param_I8254, "m5.internal._param_I8254");
        
