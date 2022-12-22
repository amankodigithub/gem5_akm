        #include "sim/init.hh"

        extern "C" {
            void init_param_VirtIO9PBase();
        }

        EmbeddedSwig embed_swig_param_VirtIO9PBase(init_param_VirtIO9PBase, "m5.internal._param_VirtIO9PBase");
        
