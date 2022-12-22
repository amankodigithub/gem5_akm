        #include "sim/init.hh"

        extern "C" {
            void init_param_AbstractNVM();
        }

        EmbeddedSwig embed_swig_param_AbstractNVM(init_param_AbstractNVM, "m5.internal._param_AbstractNVM");
        
