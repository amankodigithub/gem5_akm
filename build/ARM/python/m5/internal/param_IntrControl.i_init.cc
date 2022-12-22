        #include "sim/init.hh"

        extern "C" {
            void init_param_IntrControl();
        }

        EmbeddedSwig embed_swig_param_IntrControl(init_param_IntrControl, "m5.internal._param_IntrControl");
        
