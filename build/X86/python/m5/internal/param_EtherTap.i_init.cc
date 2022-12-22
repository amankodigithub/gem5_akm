        #include "sim/init.hh"

        extern "C" {
            void init_param_EtherTap();
        }

        EmbeddedSwig embed_swig_param_EtherTap(init_param_EtherTap, "m5.internal._param_EtherTap");
        
