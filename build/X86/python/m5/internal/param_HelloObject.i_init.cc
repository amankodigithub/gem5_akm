        #include "sim/init.hh"

        extern "C" {
            void init_param_HelloObject();
        }

        EmbeddedSwig embed_swig_param_HelloObject(init_param_HelloObject, "m5.internal._param_HelloObject");
        
