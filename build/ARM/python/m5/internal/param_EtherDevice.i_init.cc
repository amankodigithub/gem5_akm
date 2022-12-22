        #include "sim/init.hh"

        extern "C" {
            void init_param_EtherDevice();
        }

        EmbeddedSwig embed_swig_param_EtherDevice(init_param_EtherDevice, "m5.internal._param_EtherDevice");
        
