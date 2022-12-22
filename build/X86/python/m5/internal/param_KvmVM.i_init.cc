        #include "sim/init.hh"

        extern "C" {
            void init_param_KvmVM();
        }

        EmbeddedSwig embed_swig_param_KvmVM(init_param_KvmVM, "m5.internal._param_KvmVM");
        
