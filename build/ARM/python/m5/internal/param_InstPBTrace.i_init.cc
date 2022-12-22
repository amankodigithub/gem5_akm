        #include "sim/init.hh"

        extern "C" {
            void init_param_InstPBTrace();
        }

        EmbeddedSwig embed_swig_param_InstPBTrace(init_param_InstPBTrace, "m5.internal._param_InstPBTrace");
        
