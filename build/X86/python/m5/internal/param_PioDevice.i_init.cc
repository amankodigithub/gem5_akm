        #include "sim/init.hh"

        extern "C" {
            void init_param_PioDevice();
        }

        EmbeddedSwig embed_swig_param_PioDevice(init_param_PioDevice, "m5.internal._param_PioDevice");
        
