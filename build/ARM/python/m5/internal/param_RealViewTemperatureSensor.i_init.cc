        #include "sim/init.hh"

        extern "C" {
            void init_param_RealViewTemperatureSensor();
        }

        EmbeddedSwig embed_swig_param_RealViewTemperatureSensor(init_param_RealViewTemperatureSensor, "m5.internal._param_RealViewTemperatureSensor");
        
