        #include "sim/init.hh"

        extern "C" {
            void init_param_RealViewOsc();
        }

        EmbeddedSwig embed_swig_param_RealViewOsc(init_param_RealViewOsc, "m5.internal._param_RealViewOsc");
        
