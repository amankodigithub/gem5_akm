        #include "sim/init.hh"

        extern "C" {
            void init_param_ThermalNode();
        }

        EmbeddedSwig embed_swig_param_ThermalNode(init_param_ThermalNode, "m5.internal._param_ThermalNode");
        
