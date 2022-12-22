        #include "sim/init.hh"

        extern "C" {
            void init_param_CoherentXBar();
        }

        EmbeddedSwig embed_swig_param_CoherentXBar(init_param_CoherentXBar, "m5.internal._param_CoherentXBar");
        
